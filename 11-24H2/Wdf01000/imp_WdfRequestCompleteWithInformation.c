/*
 * XREFs of imp_WdfRequestCompleteWithInformation @ 0x140056820
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qiid @ 0x1400028A4 (WPP_IFR_SF_qiid.c)
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1400258C0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     Vf_VerifyRequestComplete @ 0x1400DCAF4 (Vf_VerifyRequestComplete.c)
 */

void __fastcall imp_WdfRequestCompleteWithInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned int RequestStatus,
        unsigned __int64 Information)
{
  char m_Globals_high; // di
  __int64 v8; // rcx
  unsigned __int64 flags; // rbx
  _FX_DRIVER_GLOBALS *v10; // rcx
  FxDeviceBase *v11; // rsi
  _FX_DRIVER_GLOBALS *v12; // rcx
  FxRequest_vtbl *v13; // rax
  unsigned __int8 v14; // dl
  unsigned __int16 v15; // r9
  const void *v16; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  FxRequest **p_pRequest; // [rsp+50h] [rbp-28h] BYREF
  __int16 v19; // [rsp+58h] [rbp-20h]
  __int16 v20; // [rsp+5Ah] [rbp-1Eh]
  int v21; // [rsp+5Ch] [rbp-1Ch]
  FxRequest *pRequest; // [rsp+88h] [rbp+10h] BYREF

  m_Globals_high = 0;
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v8) = 0;
  flags = ~Request & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (Request & 1) != 0 )
  {
    v8 = *(unsigned __int16 *)flags;
    flags -= v8;
  }
  if ( *(_WORD *)(flags + 8) == 4104 )
  {
    pRequest = (FxRequest *)flags;
  }
  else
  {
    pRequest = 0LL;
    p_pRequest = &pRequest;
    v20 = v8;
    v21 = 0;
    v13 = *(FxRequest_vtbl **)flags;
    v19 = 4104;
    if ( v13->QueryInterface((FxObject *)flags, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *(_FX_DRIVER_GLOBALS **)(flags + 16),
        v14,
        RequestStatus,
        v15,
        traceGuid,
        (const void *)Request,
        0x1008u,
        (const void *)flags,
        *(unsigned __int16 *)(flags + 8));
      FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(flags + 16), WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    flags = (unsigned __int64)pRequest;
  }
  v10 = *(_FX_DRIVER_GLOBALS **)(flags + 16);
  if ( v10->FxVerifierOn )
  {
    if ( Vf_VerifyRequestComplete(v10, (FxRequest *)flags) < 0 )
      return;
    flags = (unsigned __int64)pRequest;
  }
  *(_QWORD *)(*(_QWORD *)(flags + 152) + 56LL) = Information;
  v11 = *(FxDeviceBase **)(flags + 96);
  v12 = *(_FX_DRIVER_GLOBALS **)(flags + 16);
  if ( v12->FxVerboseOn )
  {
    v16 = (const void *)(flags ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(flags + 10) )
      v16 = 0LL;
    WPP_IFR_SF_qiid(
      v12,
      5u,
      0x10u,
      0xBu,
      WPP_FxRequest_hpp_Traceguids,
      v16,
      *(const void **)(flags + 152),
      *(_QWORD *)(*(_QWORD *)(flags + 152) + 56LL),
      RequestStatus);
  }
  if ( v11 )
    m_Globals_high = HIBYTE(v11[1].m_Globals);
  *(_BYTE *)(flags + 236) = m_Globals_high;
  FxRequest::CompleteInternal((FxRequest *)flags, RequestStatus, RequestStatus);
}
