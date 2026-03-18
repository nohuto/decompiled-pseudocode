/*
 * XREFs of imp_WdfRequestFormatRequestUsingCurrentType @ 0x140058DA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BBF4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfRequestFormatRequestUsingCurrentType(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request)
{
  __int64 v3; // rcx
  FxRequest *flags; // rbx
  unsigned __int64 m_Irp; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  __int64 v7; // rcx
  _FX_DRIVER_GLOBALS *v8; // rax
  FxRequest_vtbl *v9; // rax
  unsigned __int8 v10; // dl
  unsigned int v11; // r8d
  unsigned __int16 v12; // r9
  const _GUID *v13; // [rsp+20h] [rbp-48h]
  FxRequest **p_pRequest; // [rsp+50h] [rbp-18h] BYREF
  __int16 v15; // [rsp+58h] [rbp-10h]
  __int16 v16; // [rsp+5Ah] [rbp-Eh]
  int v17; // [rsp+5Ch] [rbp-Ch]
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
    v16 = v3;
    v17 = 0;
    v9 = flags->__vftable;
    v15 = 4104;
    if ( v9->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v10, v11, v12, v13, (const void *)Request, 0x1008u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    flags = pRequest;
  }
  m_Irp = (unsigned __int64)flags->m_Irp.m_Irp;
  m_Globals = flags->m_Globals;
  if ( !m_Irp )
    FxVerifierBugCheckWorker(m_Globals, WDF_REQUEST_FATAL_ERROR, 2uLL, Request);
  if ( *(char *)(m_Irp + 67) < 2 )
    FxVerifierBugCheckWorker(m_Globals, WDF_REQUEST_FATAL_ERROR, 1uLL, m_Irp);
  flags->m_NextStackLocationFormatted = 1;
  v7 = *(_QWORD *)(m_Irp + 184);
  *(_OWORD *)(v7 - 72) = *(_OWORD *)v7;
  *(_OWORD *)(v7 - 56) = *(_OWORD *)(v7 + 16);
  *(_OWORD *)(v7 - 40) = *(_OWORD *)(v7 + 32);
  *(_QWORD *)(v7 - 24) = *(_QWORD *)(v7 + 48);
  *(_BYTE *)(v7 - 69) = 0;
  v8 = pRequest->m_Globals;
  if ( v8->FxVerifierOn )
  {
    if ( v8->FxVerifierIO )
      FxRequestBase::SetVerifierFlags(pRequest, 128);
  }
}
