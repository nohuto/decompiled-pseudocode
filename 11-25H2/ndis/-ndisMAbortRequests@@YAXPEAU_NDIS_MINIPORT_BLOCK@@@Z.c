/*
 * XREFs of ?ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140086120
 * Callers:
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x1400A6CA4 (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140185AE0 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400235C0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400246C0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x140024E00 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140025750 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x140027350 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     ?ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z @ 0x14007A8C0 (-ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z.c)
 */

void __fastcall ndisMAbortRequests(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _LIST_ENTRY *p_OidRequestList; // rdi
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v4; // rcx
  _LIST_ENTRY **v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int128 *v8; // rcx
  __int128 *v9; // rdi
  __int128 v10; // xmm0
  unsigned int v11; // r8d
  char *v12; // rdx
  __int128 v13; // xmm1
  __int128 *v14; // rdi
  int v15; // edx
  __int64 v16; // r8
  int v17; // r9d
  _NDIS_OID_REQUEST *PendingOidRequest; // rdi
  __int64 v19; // r8
  __int64 v20; // rdx
  struct _NDIS_REQUEST *PendingRequest; // rsi
  char *v22; // rdx
  __int128 v23; // xmm0
  struct _GUID *v24; // [rsp+20h] [rbp-29h]
  __int64 v25; // [rsp+30h] [rbp-19h]
  __int128 v26; // [rsp+40h] [rbp-9h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v27; // [rsp+50h] [rbp+7h] BYREF
  __int128 v28; // [rsp+58h] [rbp+Fh]
  __int64 v29; // [rsp+68h] [rbp+1Fh]
  __int128 *v30; // [rsp+70h] [rbp+27h]
  int v31; // [rsp+78h] [rbp+2Fh]
  int v32; // [rsp+7Ch] [rbp+33h]
  struct _NDIS_OID_REQUEST *v33; // [rsp+B0h] [rbp+67h] BYREF

  v26 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      65,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1);
  if ( a1->MajorNdisVersion < 6u )
  {
    a1->WSyncFlags &= ~2u;
    p_OidRequestList = &a1->OidRequestList;
    if ( a1->PendingOidRequest || p_OidRequestList->Flink != p_OidRequestList )
    {
      *((_QWORD *)&v26 + 1) = &v26;
      *(_QWORD *)&v26 = &v26;
      while ( p_OidRequestList->Flink != p_OidRequestList )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4,
            11,
            66,
            (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
            (char)a1);
        Flink = p_OidRequestList->Flink;
        if ( p_OidRequestList->Flink->Blink != p_OidRequestList
          || (v4 = Flink->Flink, Flink->Flink->Blink != Flink)
          || (p_OidRequestList->Flink = v4,
              v4->Blink = p_OidRequestList,
              v5 = (_LIST_ENTRY **)*((_QWORD *)&v26 + 1),
              **((__int128 ***)&v26 + 1) != &v26) )
        {
LABEL_26:
          __fastfail(3u);
        }
        Flink->Blink = (_LIST_ENTRY *)*((_QWORD *)&v26 + 1);
        Flink->Flink = (_LIST_ENTRY *)&v26;
        *v5 = Flink;
        *((_QWORD *)&v26 + 1) = Flink;
      }
      if ( (__int128 *)v26 != &v26 )
      {
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        while ( 1 )
        {
          v6 = v26;
          if ( (__int128 *)v26 == &v26 )
            break;
          if ( *(__int128 **)(v26 + 8) != &v26 )
            goto LABEL_26;
          v7 = *(_QWORD *)v26;
          if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) != (_QWORD)v26 )
            goto LABEL_26;
          *(_QWORD *)&v26 = *(_QWORD *)v26;
          v8 = &v26;
          *(_QWORD *)(v7 + 8) = &v26;
          v9 = (__int128 *)(v6 - 72);
          v29 = 0LL;
          v30 = v9;
          v32 = 1;
          v28 = 0LL;
          v31 = -1073676276;
          v27 = a1;
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xBu,
              0x43u,
              (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
              (char)a1,
              v9);
          if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
          {
            LODWORD(v25) = *((_DWORD *)v9 + 8);
            LODWORD(v24) = a1->IfIndex;
            McTemplateK0jqxd_EtwWriteTransfer(
              (__int64)v8,
              &AbortingRequestEx,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              (__int64)v24,
              a1->NetLuid.Value,
              v25);
          }
          KeAcquireSpinLockAtDpcLevel(&ndisAbortedRequestsListLock);
          v10 = *v9;
          v12 = (char *)&ndisAbortedRequests + 248 * ndisAbortedRequestsIndex++;
          v11 = ndisAbortedRequestsIndex;
          *(_OWORD *)v12 = v10;
          *((_OWORD *)v12 + 1) = v9[1];
          *((_OWORD *)v12 + 2) = v9[2];
          *((_OWORD *)v12 + 3) = v9[3];
          *((_OWORD *)v12 + 4) = v9[4];
          *((_OWORD *)v12 + 5) = v9[5];
          *((_OWORD *)v12 + 6) = v9[6];
          v12 += 128;
          v13 = v9[7];
          v14 = v9 + 8;
          *((_OWORD *)v12 - 1) = v13;
          *(_OWORD *)v12 = *v14;
          *((_OWORD *)v12 + 1) = v14[1];
          *((_OWORD *)v12 + 2) = v14[2];
          *((_OWORD *)v12 + 3) = v14[3];
          *((_OWORD *)v12 + 4) = v14[4];
          *((_OWORD *)v12 + 5) = v14[5];
          *((_OWORD *)v12 + 6) = v14[6];
          *((_QWORD *)v12 + 14) = *((_QWORD *)v14 + 14);
          if ( v11 == 16 )
            ndisAbortedRequestsIndex = 0;
          KeReleaseSpinLockFromDpcLevel(&ndisAbortedRequestsListLock);
          ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v27, v15, v16, v17);
        }
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
      }
      PendingOidRequest = a1->PendingOidRequest;
      if ( PendingOidRequest )
      {
        v19 = ndisAbortedRequestsIndex;
        a1->PendingOidRequest = 0LL;
        v20 = 248 * v19;
        LODWORD(v19) = v19 + 1;
        PendingRequest = a1->PendingRequest;
        v22 = (char *)&ndisAbortedRequests + v20;
        a1->PendingRequest = 0LL;
        v23 = *(_OWORD *)&PendingOidRequest->Header.Type;
        v33 = 0LL;
        ndisAbortedRequestsIndex = v19;
        *(_OWORD *)v22 = v23;
        *((_OWORD *)v22 + 1) = *(_OWORD *)&PendingOidRequest->RequestId;
        *((_OWORD *)v22 + 2) = *(_OWORD *)&PendingOidRequest->DATA.QUERY_INFORMATION.Oid;
        *((_OWORD *)v22 + 3) = *(_OWORD *)&PendingOidRequest->DATA.METHOD_INFORMATION.InputBufferLength;
        *((_OWORD *)v22 + 4) = *(_OWORD *)&PendingOidRequest->DATA.METHOD_INFORMATION.BytesRead;
        *((_OWORD *)v22 + 5) = *(_OWORD *)&PendingOidRequest->NdisReserved[8];
        *((_OWORD *)v22 + 6) = *(_OWORD *)&PendingOidRequest->NdisReserved[24];
        v22 += 128;
        *((_OWORD *)v22 - 1) = *(_OWORD *)&PendingOidRequest->NdisReserved[40];
        *(_OWORD *)v22 = *(_OWORD *)&PendingOidRequest->NdisReserved[56];
        *((_OWORD *)v22 + 1) = *(_OWORD *)&PendingOidRequest->NdisReserved[72];
        *((_OWORD *)v22 + 2) = *(_OWORD *)&PendingOidRequest->NdisReserved[88];
        *((_OWORD *)v22 + 3) = *(_OWORD *)&PendingOidRequest->NdisReserved[104];
        *((_OWORD *)v22 + 4) = *(_OWORD *)&PendingOidRequest->NdisReserved[120];
        *((_OWORD *)v22 + 5) = *(_OWORD *)&PendingOidRequest->MiniportReserved[8];
        *((_OWORD *)v22 + 6) = *(_OWORD *)&PendingOidRequest->SourceReserved[8];
        *((_QWORD *)v22 + 14) = *(_QWORD *)&PendingOidRequest[1].Header.Type;
        if ( (_DWORD)v19 == 16 )
          ndisAbortedRequestsIndex = 0;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        if ( a1->MajorNdisVersion < 6u )
        {
          ndisCompleteLegacyRequest(a1, -1073676276, PendingRequest);
        }
        else if ( (*(_DWORD *)&PendingOidRequest->NdisReserved[16] & 0x8000000) == 0
               || (ndisOidFreeInternalCloneRequest(&a1->Header, PendingOidRequest, 0, &v33),
                   (PendingOidRequest = v33) != 0LL) )
        {
          ndisMOidRequestCompleteInternal(a1, PendingOidRequest, -1073676276, PendingOidRequest);
        }
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
      }
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      68,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1);
}
