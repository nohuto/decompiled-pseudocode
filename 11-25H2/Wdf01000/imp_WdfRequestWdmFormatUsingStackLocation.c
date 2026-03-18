/*
 * XREFs of imp_WdfRequestWdmFormatUsingStackLocation @ 0x14005B760
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BF54 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfRequestWdmFormatUsingStackLocation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        _IO_STACK_LOCATION *Stack)
{
  __int64 v5; // rcx
  FxRequest *flags; // rbx
  FxIrp *p_m_Irp; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  FxRequest_vtbl *v10; // rax
  unsigned __int8 v11; // dl
  unsigned int v12; // r8d
  unsigned __int16 v13; // r9
  const _GUID *v14; // [rsp+20h] [rbp-58h]
  FxRequest **p_pRequest; // [rsp+50h] [rbp-28h] BYREF
  __int16 v16; // [rsp+58h] [rbp-20h]
  __int16 v17; // [rsp+5Ah] [rbp-1Eh]
  int v18; // [rsp+5Ch] [rbp-1Ch]
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxRequest *pRequest; // [rsp+88h] [rbp+10h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v5) = 0;
  flags = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
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
    v17 = v5;
    v18 = 0;
    v10 = flags->__vftable;
    v16 = 4104;
    if ( v10->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v11, v12, v13, v14, (const void *)Request, 0x1008u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    flags = pRequest;
  }
  if ( !Stack )
    FxVerifierNullBugCheck(flags->m_Globals, retaddr);
  p_m_Irp = &flags->m_Irp;
  if ( flags == (FxRequest *)-152LL )
    FxVerifierBugCheckWorker(MEMORY[0xFFFFFFFFFFFFFF78], WDF_REQUEST_FATAL_ERROR, 2uLL, Request);
  if ( p_m_Irp->m_Irp->CurrentLocation < 2 )
    FxVerifierBugCheckWorker(flags->m_Globals, WDF_REQUEST_FATAL_ERROR, 1uLL, (unsigned __int64)&flags->m_Irp);
  flags->m_NextStackLocationFormatted = 1;
  CurrentStackLocation = p_m_Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&Stack->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&Stack->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&Stack->Parameters.SetQuota + 6);
  CurrentStackLocation[-1].FileObject = Stack->FileObject;
  CurrentStackLocation[-1].Control = 0;
  m_Globals = pRequest->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    if ( m_Globals->FxVerifierIO )
      FxRequestBase::SetVerifierFlags(pRequest, 128);
  }
}
