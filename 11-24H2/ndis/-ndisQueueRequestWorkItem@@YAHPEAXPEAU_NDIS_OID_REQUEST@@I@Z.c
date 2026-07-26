/*
 * XREFs of ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x140009FA0
 * Callers:
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140008A10 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x140016090 (-ndisFOidRequestCompleteInternal@@YAXPEAX@Z.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x14004C620 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 * Callees:
 *     ?ShouldEnableOidTracing@@YA_NPEBU_NDIS_OID_REQUEST@@@Z @ 0x14000B880 (-ShouldEnableOidTracing@@YA_NPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     NdisReferenceWithTag @ 0x140010F90 (NdisReferenceWithTag.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400132F0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qDq @ 0x140015E00 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14004A050 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008DBD0 (--$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_B.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008DD00 (--$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOC.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008DE30 (--$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008DF60 (--$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK.c)
 */

__int64 __fastcall ndisQueueRequestWorkItem(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  struct _NDIS_MINIPORT_BLOCK *v6; // r13
  unsigned int v7; // esi
  __int64 Pool2; // rax
  int v9; // edx
  int v10; // r8d
  struct _WORK_QUEUE_ITEM *v11; // rbx
  struct _NDIS_MINIPORT_BLOCK *v12; // r14
  KIRQL v13; // al
  __int64 v14; // rdx
  int v15; // edi
  unsigned __int16 SystemArgument1; // cx
  __int64 v17; // rdx
  bool v18; // di
  UCHAR *NdisReserved; // rbp
  __int64 v20; // rdi
  KIRQL v21; // al
  unsigned int *p_RequestBuffer; // rdi
  UCHAR *j; // rax
  unsigned int **Reserved26; // rax
  __int64 v26; // rcx
  KIRQL v27; // dl
  KSPIN_LOCK *p_Lock; // rcx
  int v29; // edx
  __int64 v30; // rdx
  KIRQL v31; // r14
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  unsigned int ReferenceCount; // ecx
  KIRQL v34; // r10
  _LIST_ENTRY *p_OidRequestList; // rdi
  _LIST_ENTRY *i; // rax
  _LIST_ENTRY **p_Flink; // rax
  void *SystemArgument2; // rcx
  KIRQL v39; // di
  char v40; // cl
  unsigned int v41; // eax
  int v42; // eax
  unsigned __int64 k; // rax
  int v44; // ecx
  KIRQL v45; // [rsp+88h] [rbp+20h]
  KIRQL v46; // [rsp+88h] [rbp+20h]
  KIRQL v47; // [rsp+88h] [rbp+20h]

  v6 = 0LL;
  v7 = -1073741823;
  Pool2 = ExAllocatePool2(64LL, 80LL, 1769423950LL);
  v11 = (struct _WORK_QUEUE_ITEM *)Pool2;
  if ( Pool2 )
  {
    if ( a3 != 17 )
    {
      if ( a3 != 5 )
        goto LABEL_19;
      *(_QWORD *)(Pool2 + 56) = a1;
      v12 = a1;
      if ( !a1 )
        goto LABEL_19;
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a1->WakeUpDpcTimer.Dpc.DeferredContext);
      if ( !a2 )
      {
        SystemArgument2 = a1->WakeUpDpcTimer.Dpc.SystemArgument2;
        LOBYTE(v14) = 12;
        ++LOWORD(a1->WakeUpDpcTimer.Dpc.SystemArgument1);
        v39 = v13;
        NdisReferenceWithTag(SystemArgument2, v14);
        KeReleaseSpinLock((PKSPIN_LOCK)&a1->WakeUpDpcTimer.Dpc.DeferredContext, v39);
        goto LABEL_24;
      }
      v15 = 1;
      v45 = v13;
      if ( !BYTE2(a1->WakeUpDpcTimer.Dpc.SystemArgument1) )
      {
        SystemArgument1 = (unsigned __int16)a1->WakeUpDpcTimer.Dpc.SystemArgument1;
        v17 = 65515LL;
        if ( SystemArgument1 >= 0xFFEBu )
        {
          ndisRefCountReferenceCountOverflow = 1;
          v15 = 2;
        }
        else
        {
          LOBYTE(v17) = 12;
          LOWORD(a1->WakeUpDpcTimer.Dpc.SystemArgument1) = SystemArgument1 + 1;
          NdisReferenceWithTag(a1->WakeUpDpcTimer.Dpc.SystemArgument2, v17);
          v13 = v45;
          v15 = 0;
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)&a1->WakeUpDpcTimer.Dpc.DeferredContext, v13);
      v18 = v15 == 0;
      goto LABEL_10;
    }
    *(_QWORD *)(Pool2 + 56) = a1;
    v6 = a1;
    if ( !a1 )
      goto LABEL_19;
    if ( !a2 )
    {
      ndisReferenceMiniportNoCheck(a1, MPREF_OID_QUEUED);
      goto LABEL_24;
    }
    v18 = 1;
    v31 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
    if ( !a1->Ref.Closing )
    {
      RefCountTracker = a1->RefCountTracker;
      if ( RefCountTracker )
      {
        LOBYTE(v30) = 71;
        NdisReferenceWithTag(RefCountTracker, v30);
      }
      ReferenceCount = a1->Ref.ReferenceCount;
      a1->Ref.ReferenceCount = ReferenceCount + 1;
      if ( ReferenceCount != -1 )
        goto LABEL_39;
      a1->Ref.ReferenceCount = -1;
    }
    v18 = 0;
LABEL_39:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v30) = 4;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v30,
        20,
        12,
        (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
        (char)a1,
        a1->Ref.ReferenceCount);
    }
    KeReleaseSpinLock(&a1->Ref.SpinLock, v31);
    v12 = 0LL;
LABEL_10:
    if ( v18 )
    {
      NdisReserved = a2->NdisReserved;
      if ( v6 )
      {
        v34 = KeAcquireSpinLockRaiseToDpc(&v6->Lock);
        v6->MiniportThread = KeGetCurrentThread();
        *(_QWORD *)NdisReserved = 0LL;
        *(_QWORD *)&a2->NdisReserved[8] = 0LL;
        v47 = v34;
        if ( (v6->PnPFlags & 0x100) == 0 )
        {
          p_OidRequestList = &v6->OidRequestList;
          for ( i = v6->OidRequestList.Flink; i != p_OidRequestList; i = i->Flink )
          {
            if ( i == (_LIST_ENTRY *)NdisReserved )
              goto LABEL_51;
          }
          if ( ShouldEnableOidTracing(a2) )
          {
            if ( *(_QWORD *)&a2->NdisReserved[24] )
              TraceLoggingWriteOidRequestQueuedActivity<0,_NDIS_MINIPORT_BLOCK>(v6, a2);
            else
              TraceLoggingWriteOidRequestQueuedActivity<1,_NDIS_MINIPORT_BLOCK>(v6, a2);
            v34 = v47;
          }
          p_Flink = &v6->OidRequestList.Blink->Flink;
          v7 = 0;
          if ( *p_Flink != p_OidRequestList )
LABEL_17:
            __fastfail(3u);
          *(_QWORD *)NdisReserved = p_OidRequestList;
          *(_QWORD *)&a2->NdisReserved[8] = p_Flink;
          *p_Flink = (_LIST_ENTRY *)NdisReserved;
          v6->OidRequestList.Blink = (_LIST_ENTRY *)NdisReserved;
        }
LABEL_51:
        v6->MiniportThread = 0LL;
        p_Lock = &v6->Lock;
        v27 = v34;
LABEL_23:
        KeReleaseSpinLock(p_Lock, v27);
        if ( !v7 )
        {
LABEL_24:
          RtlGetCallersAddress((PVOID *)&v11[1].List.Flink, (PVOID *)&v11[1].List.Blink);
          v11->Parameter = v11;
          v11->WorkerRoutine = ndisDoOidRequests;
          v11->List.Flink = 0LL;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v29) = 4;
            WPP_RECORDER_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v29,
              11,
              17,
              (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
              (char)a2,
              (char)a1);
          }
          ExQueueWorkItem(v11, (WORK_QUEUE_TYPE)40);
          return 259;
        }
        goto LABEL_76;
      }
      v20 = *(_QWORD *)&v12->Reserved4.Length;
      v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 96));
      *(_QWORD *)(v20 + 520) = KeGetCurrentThread();
      v46 = v21;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)&v12->FirstPendingPacket);
      v12->ReturnPacketsQueue = (_NDIS_PACKET *)KeGetCurrentThread();
      *(_QWORD *)NdisReserved = 0LL;
      *(_QWORD *)&a2->NdisReserved[8] = 0LL;
      if ( (*(_DWORD *)(*(_QWORD *)&v12->Reserved4.Length + 124LL) & 0x100) != 0 )
      {
LABEL_22:
        v12->ReturnPacketsQueue = 0LL;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&v12->FirstPendingPacket);
        v26 = *(_QWORD *)&v12->Reserved4.Length;
        v27 = v46;
        *(_QWORD *)(v26 + 520) = 0LL;
        p_Lock = (KSPIN_LOCK *)(v26 + 96);
        goto LABEL_23;
      }
      p_RequestBuffer = &v12->RequestBuffer;
      for ( j = *(UCHAR **)&v12->RequestBuffer; j != (UCHAR *)p_RequestBuffer; j = *(UCHAR **)j )
      {
        if ( j == NdisReserved )
          goto LABEL_22;
      }
      if ( (unsigned int)dword_14011A7B0 > 4
        && (qword_14011A7C0 & 0x400) != 0
        && (qword_14011A7C8 & 0x400) == qword_14011A7C8 )
      {
        v42 = *(_DWORD *)&a2->NdisReserved[16] & 0x30000000;
        if ( v42 != 0x10000000 )
        {
          if ( !v42 )
          {
            if ( (ndisAzOidTelemetryFilter & 1) != 0 && Ndis::BindEngine::s_NumBindOperationsInProgress )
            {
LABEL_61:
              v40 = 1;
              v41 = *(_DWORD *)&a2->NdisReserved[16] & 0xCFFFFFFF | 0x20000000;
            }
            else
            {
              if ( (ndisAzOidTelemetryFilter & 2) != 0 )
              {
                for ( k = 0LL; k < 0x40; k += 4LL )
                {
                  v44 = *(_DWORD *)((char *)&ndisAzOidTelemetryList + k);
                  if ( !v44 )
                    break;
                  if ( v44 == a2->DATA.QUERY_INFORMATION.Oid )
                    goto LABEL_61;
                }
              }
              v40 = 0;
              v41 = *(_DWORD *)&a2->NdisReserved[16] & 0xCFFFFFFF | 0x10000000;
            }
            *(_DWORD *)&a2->NdisReserved[16] = v41;
            if ( !v40 )
              goto LABEL_16;
            goto LABEL_63;
          }
          if ( v42 == 0x20000000 )
          {
LABEL_63:
            if ( *(_QWORD *)&a2->NdisReserved[24] )
              TraceLoggingWriteOidRequestQueuedActivity<0,_NDIS_FILTER_BLOCK>(v12, a2);
            else
              TraceLoggingWriteOidRequestQueuedActivity<1,_NDIS_FILTER_BLOCK>(v12, a2);
          }
        }
      }
LABEL_16:
      Reserved26 = (unsigned int **)v12->Reserved26;
      v7 = 0;
      if ( *Reserved26 != p_RequestBuffer )
        goto LABEL_17;
      *(_QWORD *)NdisReserved = p_RequestBuffer;
      *(_QWORD *)&a2->NdisReserved[8] = Reserved26;
      *Reserved26 = (unsigned int *)NdisReserved;
      v12->Reserved26 = NdisReserved;
      goto LABEL_22;
    }
    if ( v18 )
    {
LABEL_76:
      if ( v6 )
        ndisDereferenceMiniport(v6, MPREF_OID_QUEUED);
      else
        ndisDereferenceRef((PKSPIN_LOCK)&v12->WakeUpDpcTimer.Dpc.DeferredContext, 0xCu);
    }
LABEL_19:
    ExFreePoolWithTag(v11, 0);
    return v7;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      v10,
      16,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      a3,
      (char)a2);
  }
  return (unsigned int)-1073741670;
}
