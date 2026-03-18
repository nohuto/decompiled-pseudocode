/*
 * XREFs of imp_WdfRequestGetInformation @ 0x140060CD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14002BD60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140056F48 (-VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall imp_WdfRequestGetInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned int a3)
{
  unsigned __int64 Information; // rdi
  __int64 v5; // rcx
  FxRequest *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxRequest_vtbl *v9; // rax
  unsigned __int8 v10; // dl
  unsigned __int16 v11; // r9
  unsigned __int8 v12; // r8
  const _GUID *v13; // [rsp+20h] [rbp-40h]
  FxRequest **p_pRequest; // [rsp+50h] [rbp-10h] BYREF
  __int16 v15; // [rsp+58h] [rbp-8h]
  __int16 v16; // [rsp+5Ah] [rbp-6h]
  int v17; // [rsp+5Ch] [rbp-4h]
  unsigned __int8 PreviousIrql; // [rsp+88h] [rbp+28h] BYREF
  FxRequest *pRequest; // [rsp+90h] [rbp+30h] BYREF

  Information = 0LL;
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
    v16 = v5;
    v17 = 0;
    v9 = flags->__vftable;
    v15 = 4104;
    if ( v9->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v10, a3, v11, v13, (const void *)Request, 0x1008u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    flags = pRequest;
  }
  m_Globals = flags->m_Globals;
  if ( !m_Globals->FxVerifierIO )
    return flags->m_Irp.m_Irp->IoStatus.Information;
  PreviousIrql = 0;
  FxNonPagedObject::Lock(flags, &PreviousIrql, a3);
  if ( FxRequest::VerifyRequestIsNotCompleted(flags, m_Globals) >= 0 )
    Information = flags->m_Irp.m_Irp->IoStatus.Information;
  FxNonPagedObject::Unlock(flags, PreviousIrql, v12);
  return Information;
}
