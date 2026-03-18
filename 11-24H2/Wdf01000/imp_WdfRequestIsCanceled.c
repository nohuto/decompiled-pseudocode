/*
 * XREFs of imp_WdfRequestIsCanceled @ 0x140016560
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     Vf_VerifyWdfRequestIsCanceled @ 0x1400DCB9C (Vf_VerifyWdfRequestIsCanceled.c)
 */

bool __fastcall imp_WdfRequestIsCanceled(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Request)
{
  __int64 v3; // rcx
  FxRequest *flags; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxRequest_vtbl *v7; // rax
  unsigned __int8 v8; // dl
  unsigned int v9; // r8d
  unsigned __int16 v10; // r9
  const _GUID *v11; // [rsp+20h] [rbp-48h]
  FxRequest **p_pRequest; // [rsp+50h] [rbp-18h] BYREF
  __int16 v13; // [rsp+58h] [rbp-10h]
  __int16 v14; // [rsp+5Ah] [rbp-Eh]
  int v15; // [rsp+5Ch] [rbp-Ch]
  FxRequest *pRequest; // [rsp+78h] [rbp+10h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v3) = 0;
  flags = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v3 = LOWORD(flags->__vftable);
    flags = (FxRequest *)((char *)flags - v3);
  }
  if ( flags->m_Type == 4104 )
  {
    pRequest = flags;
  }
  else
  {
    pRequest = 0LL;
    p_pRequest = &pRequest;
    v14 = v3;
    v15 = 0;
    v7 = flags->__vftable;
    v13 = 4104;
    if ( v7->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v8, v9, v10, v11, (const void *)Request, 0x1008u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    flags = pRequest;
  }
  m_Globals = flags->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    if ( Vf_VerifyWdfRequestIsCanceled(m_Globals, flags) < 0 )
      return 0;
    flags = pRequest;
  }
  return flags->m_Irp.m_Irp->Cancel || flags->m_Canceled;
}
