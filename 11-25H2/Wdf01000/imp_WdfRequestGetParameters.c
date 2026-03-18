/*
 * XREFs of imp_WdfRequestGetParameters @ 0x1400247B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_dd @ 0x140005770 (WPP_IFR_SF_dd.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x140022C80 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140059E28 (-VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400ACC80 (memmove.c)
 *     ?Vf_VerifyRequestIsCurrentStackValid@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DC180 (-Vf_VerifyRequestIsCurrentStackValid@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfRequestGetParameters(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        _WDF_REQUEST_PARAMETERS *Parameters)
{
  FxRequest *flags; // rbx
  __int64 v6; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  int Size; // eax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  FxRequest_vtbl *v10; // rax
  unsigned __int8 v11; // dl
  unsigned __int16 v12; // r9
  int IsNotCompleted; // ebp
  unsigned __int8 v14; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  FxRequest **p_pRequest; // [rsp+50h] [rbp-28h] BYREF
  __int16 v17; // [rsp+58h] [rbp-20h]
  __int16 v18; // [rsp+5Ah] [rbp-1Eh]
  int v19; // [rsp+5Ch] [rbp-1Ch]
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 PreviousIrql; // [rsp+88h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+98h] [rbp+20h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  flags = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v6) = 0;
  if ( (Request & 1) != 0 )
  {
    v6 = LOWORD(flags->__vftable);
    flags = (FxRequest *)((char *)flags - v6);
  }
  if ( flags->m_Type == 4104 )
  {
    pRequest = flags;
  }
  else
  {
    pRequest = 0LL;
    p_pRequest = &pRequest;
    v18 = v6;
    v19 = 0;
    v10 = flags->__vftable;
    v17 = 4104;
    if ( v10->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags->m_Globals,
        v11,
        (unsigned int)Parameters,
        v12,
        traceGuid,
        (const void *)Request,
        0x1008u,
        flags,
        flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    flags = pRequest;
  }
  m_Globals = flags->m_Globals;
  if ( !Parameters )
    FxVerifierNullBugCheck(flags->m_Globals, retaddr);
  Size = Parameters->Size;
  if ( Size == 40 )
  {
    if ( !m_Globals->FxVerifierIO )
      goto LABEL_9;
    PreviousIrql = 0;
    FxNonPagedObject::Lock(flags, &PreviousIrql, (unsigned __int8)Parameters);
    if ( !m_Globals->FxVerifierOn
      || (IsNotCompleted = FxRequest::Vf_VerifyRequestIsCurrentStackValid(flags, m_Globals), IsNotCompleted >= 0) )
    {
      IsNotCompleted = FxRequest::VerifyRequestIsNotCompleted(flags, m_Globals);
    }
    FxNonPagedObject::Unlock(flags, PreviousIrql, v14);
    if ( IsNotCompleted >= 0 )
    {
LABEL_9:
      Parameters->Size = 40;
      Parameters->Type = flags->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
      Parameters->MinorFunction = flags->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
      memmove(&Parameters->Parameters, &flags->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters, 0x20uLL);
      if ( m_Globals->FxVerifierIO )
      {
        CurrentStackLocation = flags->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
        if ( CurrentStackLocation->MajorFunction == 14
          && (CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart & 3) == 3 )
        {
          Parameters->Parameters.DeviceIoControl.Type3InputBuffer = 0LL;
        }
      }
    }
  }
  else
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x10u, 0x39u, WPP_FxRequestApi_cpp_Traceguids, Size, 40);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
