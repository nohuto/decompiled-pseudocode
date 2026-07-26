/*
 * XREFs of ?ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006A4C0
 * Callers:
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x14009E1FC (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14017AC30 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x14000CBF0 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140016530 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140035310 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400388D0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x14004C620 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     ?ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z @ 0x140066BF0 (-ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z.c)
 */

void __fastcall ndisMAbortRequests(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _LIST_ENTRY *p_OidRequestList; // rdi
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v4; // rcx
  _LIST_ENTRY **v5; // rcx
  int v6; // edx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int128 *v9; // rcx
  __int128 *v10; // rdi
  __int128 v11; // xmm0
  unsigned int v12; // r8d
  char *v13; // rdx
  __int128 v14; // xmm1
  __int128 *v15; // rdi
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  _NDIS_OID_REQUEST *PendingOidRequest; // rdi
  __int64 v20; // r8
  __int64 v21; // rdx
  struct _NDIS_REQUEST *PendingRequest; // rsi
  char *v23; // rdx
  __int128 v24; // xmm0
  struct _GUID *v25; // [rsp+20h] [rbp-29h]
  __int64 v26; // [rsp+30h] [rbp-19h]
  __int128 v27; // [rsp+40h] [rbp-9h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v28; // [rsp+50h] [rbp+7h] BYREF
  __int128 v29; // [rsp+58h] [rbp+Fh]
  __int64 v30; // [rsp+68h] [rbp+1Fh]
  __int128 *v31; // [rsp+70h] [rbp+27h]
  int v32; // [rsp+78h] [rbp+2Fh]
  int v33; // [rsp+7Ch] [rbp+33h]
  struct _NDIS_OID_REQUEST *v34; // [rsp+B0h] [rbp+67h] BYREF

  v27 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      65,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1);
  if ( a1->MajorNdisVersion < 6u )
  {
    a1->WSyncFlags &= ~2u;
    p_OidRequestList = &a1->OidRequestList;
    if ( a1->PendingOidRequest || p_OidRequestList->Flink != p_OidRequestList )
    {
      *((_QWORD *)&v27 + 1) = &v27;
      *(_QWORD *)&v27 = &v27;
      while ( p_OidRequestList->Flink != p_OidRequestList )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4,
            11,
            66,
            (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
            (char)a1);
        Flink = p_OidRequestList->Flink;
        if ( p_OidRequestList->Flink->Blink != p_OidRequestList
          || (v4 = Flink->Flink, Flink->Flink->Blink != Flink)
          || (p_OidRequestList->Flink = v4,
              v4->Blink = p_OidRequestList,
              v5 = (_LIST_ENTRY **)*((_QWORD *)&v27 + 1),
              **((__int128 ***)&v27 + 1) != &v27) )
        {
LABEL_26:
          __fastfail(3u);
        }
        Flink->Blink = (_LIST_ENTRY *)*((_QWORD *)&v27 + 1);
        Flink->Flink = (_LIST_ENTRY *)&v27;
        *v5 = Flink;
        *((_QWORD *)&v27 + 1) = Flink;
      }
      if ( (__int128 *)v27 != &v27 )
      {
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        while ( 1 )
        {
          v7 = v27;
          if ( (__int128 *)v27 == &v27 )
            break;
          if ( *(__int128 **)(v27 + 8) != &v27 )
            goto LABEL_26;
          v8 = *(_QWORD *)v27;
          if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) != (_QWORD)v27 )
            goto LABEL_26;
          *(_QWORD *)&v27 = *(_QWORD *)v27;
          v9 = &v27;
          *(_QWORD *)(v8 + 8) = &v27;
          v10 = (__int128 *)(v7 - 72);
          v30 = 0LL;
          v31 = v10;
          v33 = 1;
          v29 = 0LL;
          v32 = -1073676276;
          v28 = a1;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v6) = 4;
            WPP_RECORDER_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v6,
              11,
              67,
              (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
              (char)a1,
              (char)v10);
          }
          if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
          {
            LODWORD(v26) = *((_DWORD *)v10 + 8);
            LODWORD(v25) = a1->IfIndex;
            McTemplateK0jqxd_EtwWriteTransfer(
              (__int64)v9,
              (__int64)&AbortingRequestEx,
              (__int64)&a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              (__int64)v25,
              a1->NetLuid.Value,
              v26);
          }
          KeAcquireSpinLockAtDpcLevel(&ndisAbortedRequestsListLock);
          v11 = *v10;
          v13 = (char *)&ndisAbortedRequests + 248 * ndisAbortedRequestsIndex++;
          v12 = ndisAbortedRequestsIndex;
          *(_OWORD *)v13 = v11;
          *((_OWORD *)v13 + 1) = v10[1];
          *((_OWORD *)v13 + 2) = v10[2];
          *((_OWORD *)v13 + 3) = v10[3];
          *((_OWORD *)v13 + 4) = v10[4];
          *((_OWORD *)v13 + 5) = v10[5];
          *((_OWORD *)v13 + 6) = v10[6];
          v13 += 128;
          v14 = v10[7];
          v15 = v10 + 8;
          *((_OWORD *)v13 - 1) = v14;
          *(_OWORD *)v13 = *v15;
          *((_OWORD *)v13 + 1) = v15[1];
          *((_OWORD *)v13 + 2) = v15[2];
          *((_OWORD *)v13 + 3) = v15[3];
          *((_OWORD *)v13 + 4) = v15[4];
          *((_OWORD *)v13 + 5) = v15[5];
          *((_OWORD *)v13 + 6) = v15[6];
          *((_QWORD *)v13 + 14) = *((_QWORD *)v15 + 14);
          if ( v12 == 16 )
            ndisAbortedRequestsIndex = 0;
          KeReleaseSpinLockFromDpcLevel(&ndisAbortedRequestsListLock);
          ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v28, v16, v17, v18);
        }
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
      }
      PendingOidRequest = a1->PendingOidRequest;
      if ( PendingOidRequest )
      {
        v20 = ndisAbortedRequestsIndex;
        a1->PendingOidRequest = 0LL;
        v21 = 248 * v20;
        LODWORD(v20) = v20 + 1;
        PendingRequest = a1->PendingRequest;
        v23 = (char *)&ndisAbortedRequests + v21;
        a1->PendingRequest = 0LL;
        v24 = *(_OWORD *)&PendingOidRequest->Header.Type;
        v34 = 0LL;
        ndisAbortedRequestsIndex = v20;
        *(_OWORD *)v23 = v24;
        *((_OWORD *)v23 + 1) = *(_OWORD *)&PendingOidRequest->RequestId;
        *((_OWORD *)v23 + 2) = *(_OWORD *)&PendingOidRequest->DATA.QUERY_INFORMATION.Oid;
        *((_OWORD *)v23 + 3) = *(_OWORD *)&PendingOidRequest->DATA.METHOD_INFORMATION.InputBufferLength;
        *((_OWORD *)v23 + 4) = *(_OWORD *)&PendingOidRequest->DATA.METHOD_INFORMATION.BytesRead;
        *((_OWORD *)v23 + 5) = *(_OWORD *)&PendingOidRequest->NdisReserved[8];
        *((_OWORD *)v23 + 6) = *(_OWORD *)&PendingOidRequest->NdisReserved[24];
        v23 += 128;
        *((_OWORD *)v23 - 1) = *(_OWORD *)&PendingOidRequest->NdisReserved[40];
        *(_OWORD *)v23 = *(_OWORD *)&PendingOidRequest->NdisReserved[56];
        *((_OWORD *)v23 + 1) = *(_OWORD *)&PendingOidRequest->NdisReserved[72];
        *((_OWORD *)v23 + 2) = *(_OWORD *)&PendingOidRequest->NdisReserved[88];
        *((_OWORD *)v23 + 3) = *(_OWORD *)&PendingOidRequest->NdisReserved[104];
        *((_OWORD *)v23 + 4) = *(_OWORD *)&PendingOidRequest->NdisReserved[120];
        *((_OWORD *)v23 + 5) = *(_OWORD *)&PendingOidRequest->MiniportReserved[8];
        *((_OWORD *)v23 + 6) = *(_OWORD *)&PendingOidRequest->SourceReserved[8];
        *((_QWORD *)v23 + 14) = *(_QWORD *)&PendingOidRequest[1].Header.Type;
        if ( (_DWORD)v20 == 16 )
          ndisAbortedRequestsIndex = 0;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        if ( a1->MajorNdisVersion < 6u )
        {
          ndisCompleteLegacyRequest(a1, -1073676276, PendingRequest);
        }
        else if ( (*(_DWORD *)&PendingOidRequest->NdisReserved[16] & 0x8000000) == 0
               || (ndisOidFreeInternalCloneRequest(&a1->Header, PendingOidRequest, 0, &v34),
                   (PendingOidRequest = v34) != 0LL) )
        {
          ndisMOidRequestCompleteInternal(a1, PendingOidRequest, -1073676276, PendingOidRequest);
        }
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      68,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1);
}
