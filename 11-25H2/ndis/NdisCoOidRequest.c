/*
 * XREFs of NdisCoOidRequest @ 0x140052810
 * Callers:
 *     NdisCoRequest @ 0x1400D99E0 (NdisCoRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x140052CC0 (-ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qqq @ 0x140053160 (WPP_RECORDER_SF_qqq.c)
 *     NdisCoOidRequestComplete @ 0x1400535C0 (NdisCoOidRequestComplete.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x140053640 (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005AF00 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisMCoOidRequestComplete @ 0x14005B1F0 (NdisMCoOidRequestComplete.c)
 *     ndisCoOidRequestToRequest @ 0x140090A70 (ndisCoOidRequestToRequest.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisCoOidRequest(
        NDIS_HANDLE NdisBindingHandle,
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE NdisVcHandle,
        NDIS_HANDLE NdisPartyHandle,
        PNDIS_OID_REQUEST OidRequest)
{
  struct _NDIS_CO_AF_BLOCK *v6; // rsi
  PNDIS_OID_REQUEST v9; // rbx
  int (__fastcall *CmOidRequestHandler)(void *, void *, void *, _NDIS_OID_REQUEST *); // r14
  int (__fastcall *CmRequestHandler)(void *, void *, void *, _NDIS_REQUEST *); // r12
  char v12; // di
  void *CallMgrContext; // rbp
  bool v14; // zf
  NDIS_STATUS Status; // eax
  NDIS_STATUS v16; // edi
  struct _NDIS_OID_REQUEST *v18; // rax
  __int64 v19; // rsi
  KIRQL v20; // al
  KIRQL v21; // r12
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 v24; // rax
  char v25[8]; // [rsp+30h] [rbp-48h]
  void *v26; // [rsp+80h] [rbp+8h]
  int (__fastcall *v27)(void *, void *, void *, _NDIS_REQUEST *); // [rsp+90h] [rbp+18h] BYREF

  v6 = (struct _NDIS_CO_AF_BLOCK *)NdisAfHandle;
  v9 = OidRequest;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(NdisAfHandle) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)NdisAfHandle,
      11,
      12,
      (struct _GUID *)&WPP_f2e723125d8f3d1097c3ab5c6e889825_Traceguids,
      (char)NdisBindingHandle,
      (char)v6,
      (char)OidRequest);
  }
  *(_QWORD *)&v9->NdisReserved[32] = NdisBindingHandle;
  if ( v9->Header.Type != 0x96 || v9->Header.Size < 0xECu )
  {
    v16 = -1073741823;
    goto LABEL_24;
  }
  if ( !v9->Header.Revision )
  {
    v16 = -1071448020;
    goto LABEL_24;
  }
  if ( v6 )
  {
    CmOidRequestHandler = 0LL;
    CmRequestHandler = 0LL;
    v27 = 0LL;
    if ( !ndisReferenceAf(v6) )
    {
      v16 = -1073741823;
      goto LABEL_24;
    }
    *(_DWORD *)&v9->NdisReserved[16] |= 8u;
    v26 = 0LL;
    OidRequest = 0LL;
    KeInitializeEvent((PRKEVENT)&v9->NdisReserved[40], NotificationEvent, 0);
    if ( v6->ClientOpen == NdisBindingHandle )
    {
      if ( v6->CmMajorNdisVersion < 6 )
      {
        v12 = 1;
        CmRequestHandler = v6->CallMgrEntries->CmRequestHandler;
        v27 = CmRequestHandler;
      }
      else
      {
        v12 = 0;
        CmOidRequestHandler = v6->CallMgrChars->CmOidRequestHandler;
      }
      CallMgrContext = v6->CallMgrContext;
      *(_QWORD *)&v9->NdisReserved[64] = v6->ClientContext;
      if ( NdisVcHandle )
      {
        *(_QWORD *)&v9->NdisReserved[56] = *((_QWORD *)NdisVcHandle + 3);
        v26 = (void *)*((_QWORD *)NdisVcHandle + 18);
      }
      if ( !NdisPartyHandle )
        goto LABEL_14;
      *(_QWORD *)&v9->NdisReserved[40] = *((_QWORD *)NdisPartyHandle + 2);
      v18 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)NdisPartyHandle + 1);
    }
    else
    {
      if ( v6->ClMajorNdisVersion < 6 )
      {
        CmRequestHandler = v6->ClientEntries.ClRequestHandler;
        v12 = 1;
        v27 = CmRequestHandler;
      }
      else
      {
        CmOidRequestHandler = v6->ClientChars.ClOidRequestHandler;
        v12 = 0;
      }
      CallMgrContext = v6->ClientContext;
      *(_QWORD *)&v9->NdisReserved[64] = v6->CallMgrContext;
      if ( NdisVcHandle )
      {
        *(_QWORD *)&v9->NdisReserved[56] = *((_QWORD *)NdisVcHandle + 18);
        v26 = (void *)*((_QWORD *)NdisVcHandle + 3);
      }
      if ( !NdisPartyHandle )
      {
LABEL_14:
        if ( v12 )
          v14 = CmRequestHandler == 0LL;
        else
          v14 = CmOidRequestHandler == 0LL;
        if ( v14 )
        {
          v16 = -1073741637;
          ndisDereferenceAf(v6);
        }
        else
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xBu,
              0xDu,
              (struct _GUID *)&WPP_f2e723125d8f3d1097c3ab5c6e889825_Traceguids,
              (char)CmRequestHandler,
              v9);
          if ( v12 )
            Status = ndisCoOidRequestToRequest(
                       (unsigned int)&v27,
                       (_DWORD)CallMgrContext,
                       (_DWORD)v26,
                       (_DWORD)OidRequest,
                       (__int64)v9);
          else
            Status = CmOidRequestHandler(CallMgrContext, v26, OidRequest, v9);
          v16 = Status;
          if ( Status != 259 )
          {
            NdisCoOidRequestComplete(v6, NdisVcHandle, NdisPartyHandle, v9, Status);
LABEL_23:
            v16 = 259;
            goto LABEL_24;
          }
        }
        goto LABEL_24;
      }
      *(_QWORD *)&v9->NdisReserved[40] = *((_QWORD *)NdisPartyHandle + 1);
      v18 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)NdisPartyHandle + 2);
    }
    OidRequest = v18;
    goto LABEL_14;
  }
  v19 = *((_QWORD *)NdisBindingHandle + 2);
  v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v19 + 96));
  v21 = v20;
  *(_QWORD *)(v19 + 520) = KeGetCurrentThread();
  v22 = *((unsigned int *)NdisBindingHandle + 56);
  if ( (v22 & 0x8000) != 0 )
  {
    v16 = -1073676286;
LABEL_40:
    *(_QWORD *)(v19 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v19 + 96), v20);
    goto LABEL_24;
  }
  if ( (*(_DWORD *)(v19 + 120) & 0x300000) != 0 )
  {
    v16 = -1073676275;
    goto LABEL_40;
  }
  LOBYTE(v22) = 6;
  ndisMReferenceOpen(NdisBindingHandle, v22);
  v23 = 0LL;
  *(_QWORD *)(v19 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v19 + 96), v21);
  *(_DWORD *)&v9->NdisReserved[16] |= 0x20u;
  *(_QWORD *)&v9->NdisReserved[32] = NdisBindingHandle;
  *(_QWORD *)&v9->NdisReserved[56] = 0LL;
  if ( NdisVcHandle )
  {
    if ( *((NDIS_HANDLE *)NdisVcHandle + 10) == NdisBindingHandle )
      v24 = *((_QWORD *)NdisVcHandle + 3);
    else
      v24 = *((_QWORD *)NdisVcHandle + 18);
    *(_QWORD *)&v9->NdisReserved[56] = v24;
  }
  if ( (*(_DWORD *)(*((_QWORD *)NdisBindingHandle + 2) + 124LL) & 0x100) != 0 )
  {
    if ( v9->RequestType != NdisRequestSetInformation )
      LODWORD(v23) = -1073741823;
    v16 = v23;
  }
  else
  {
    if ( NdisVcHandle )
      v23 = *((_QWORD *)NdisVcHandle + 25);
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, PNDIS_OID_REQUEST))(*(_QWORD *)(v19 + 3760) + 552LL))(
            *(_QWORD *)(v19 + 2232),
            v23,
            v9);
  }
  if ( v16 != 259 )
  {
    NdisMCoOidRequestComplete(*((NDIS_HANDLE *)NdisBindingHandle + 2), NdisVcHandle, v9, v16);
    goto LABEL_23;
  }
LABEL_24:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v25 = v16;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xEu,
      (struct _GUID *)&WPP_f2e723125d8f3d1097c3ab5c6e889825_Traceguids,
      (char)v9,
      *(_QWORD *)v25);
  }
  return v16;
}
