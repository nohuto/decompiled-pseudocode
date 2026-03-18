/*
 * XREFs of imp_WdfRequestSetInformation @ 0x14005B940
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x140022C80 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140059E28 (-VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfRequestSetInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int64 Information)
{
  __int64 v5; // rcx
  FxRequest *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxRequest_vtbl *v8; // rax
  unsigned __int8 v9; // dl
  unsigned __int16 v10; // r9
  unsigned __int8 v11; // r8
  const _GUID *v12; // [rsp+20h] [rbp-40h]
  FxRequest **p_pRequest; // [rsp+50h] [rbp-10h] BYREF
  __int16 v14; // [rsp+58h] [rbp-8h]
  __int16 v15; // [rsp+5Ah] [rbp-6h]
  int v16; // [rsp+5Ch] [rbp-4h]
  unsigned __int8 PreviousIrql; // [rsp+98h] [rbp+38h] BYREF
  FxRequest *pRequest; // [rsp+A8h] [rbp+48h] BYREF

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
    v15 = v5;
    v16 = 0;
    v8 = flags->__vftable;
    v14 = 4104;
    if ( v8->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v9, Information, v10, v12, (const void *)Request, 0x1008u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    flags = pRequest;
  }
  m_Globals = flags->m_Globals;
  if ( m_Globals->FxVerifierIO )
  {
    PreviousIrql = 0;
    FxNonPagedObject::Lock(flags, &PreviousIrql, Information);
    if ( FxRequest::VerifyRequestIsNotCompleted(flags, m_Globals) >= 0 )
      flags->m_Irp.m_Irp->IoStatus.Information = Information;
    FxNonPagedObject::Unlock(flags, PreviousIrql, v11);
  }
  else
  {
    flags->m_Irp.m_Irp->IoStatus.Information = Information;
  }
}
