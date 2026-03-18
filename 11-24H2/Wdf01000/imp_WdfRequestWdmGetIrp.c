/*
 * XREFs of imp_WdfRequestWdmGetIrp @ 0x140016F60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14002BD60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140056F48 (-VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

_IRP *__fastcall imp_WdfRequestWdmGetIrp(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Request)
{
  _IRP *m_Irp; // rdi
  FxRequest *flags; // rbx
  __int64 v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxRequest_vtbl *v8; // rax
  unsigned __int8 v9; // dl
  unsigned int v10; // r8d
  unsigned __int16 v11; // r9
  int IsNotCompleted; // r14d
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  FxRequest **p_pRequest; // [rsp+50h] [rbp-28h] BYREF
  __int16 v15; // [rsp+58h] [rbp-20h]
  __int16 v16; // [rsp+5Ah] [rbp-1Eh]
  int v17; // [rsp+5Ch] [rbp-1Ch]
  unsigned __int8 PreviousIrql; // [rsp+88h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+90h] [rbp+18h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  m_Irp = 0LL;
  flags = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v5) = 0;
  if ( (Request & 1) != 0 )
  {
    v5 = LOWORD(flags->__vftable);
    flags = (FxRequest *)((char *)flags - v5);
  }
  if ( flags->m_Type == 4104 )
  {
    pRequest = flags;
  }
  else
  {
    pRequest = 0LL;
    p_pRequest = &pRequest;
    v16 = v5;
    v17 = 0;
    v8 = flags->__vftable;
    v15 = 4104;
    if ( v8->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v9, v10, v11, traceGuid, (const void *)Request, 0x1008u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    flags = pRequest;
  }
  m_Globals = flags->m_Globals;
  if ( !m_Globals->FxVerifierIO )
    return flags->m_Irp.m_Irp;
  PreviousIrql = 0;
  FxNonPagedObject::Lock(flags, &PreviousIrql);
  IsNotCompleted = FxRequest::VerifyRequestIsNotCompleted(flags, flags->m_Globals);
  if ( IsNotCompleted >= 0 )
    m_Irp = flags->m_Irp.m_Irp;
  else
    IsNotCompleted = -1073741808;
  FxNonPagedObject::Unlock(flags, PreviousIrql);
  if ( IsNotCompleted < 0 )
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0x3Du, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request, IsNotCompleted);
    FxVerifierDbgBreakPoint(m_Globals);
    return 0LL;
  }
  return m_Irp;
}
