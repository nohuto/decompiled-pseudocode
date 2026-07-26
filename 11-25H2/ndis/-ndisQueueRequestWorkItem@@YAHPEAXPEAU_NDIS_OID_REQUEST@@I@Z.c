/*
 * XREFs of ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x140015040
 * Callers:
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140013AB0 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x140022730 (-ndisFOidRequestCompleteInternal@@YAXPEAX@Z.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x140024E00 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400105A0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?ShouldEnableOidTracing@@YA_NPEBU_NDIS_OID_REQUEST@@@Z @ 0x140015980 (-ShouldEnableOidTracing@@YA_NPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140016490 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qDq @ 0x140024890 (WPP_RECORDER_SF_qDq.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x140099430 (--$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_B.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x140099560 (--$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOC.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x140099690 (--$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1400997C0 (--$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK.c)
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
  int v14; // edi
  unsigned __int16 SystemArgument1; // cx
  bool v16; // di
  UCHAR *NdisReserved; // rbp
  __int64 v18; // rdi
  KIRQL v19; // al
  unsigned int *p_RequestBuffer; // rdi
  UCHAR *j; // rax
  unsigned int **Reserved26; // rax
  __int64 v24; // rcx
  KIRQL v25; // dl
  KSPIN_LOCK *p_Lock; // rcx
  KIRQL v27; // r14
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  unsigned int ReferenceCount; // ecx
  KIRQL v30; // r10
  _LIST_ENTRY *p_OidRequestList; // rdi
  _LIST_ENTRY *i; // rax
  _LIST_ENTRY **p_Flink; // rax
  struct _NDIS_REFCOUNT_BLOCK *SystemArgument2; // rcx
  KIRQL v35; // di
  char v36; // cl
  unsigned int v37; // eax
  int v38; // eax
  unsigned __int64 k; // rax
  int v40; // ecx
  KIRQL v41; // [rsp+88h] [rbp+20h]
  KIRQL v42; // [rsp+88h] [rbp+20h]
  KIRQL v43; // [rsp+88h] [rbp+20h]

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
        SystemArgument2 = (struct _NDIS_REFCOUNT_BLOCK *)a1->WakeUpDpcTimer.Dpc.SystemArgument2;
        ++LOWORD(a1->WakeUpDpcTimer.Dpc.SystemArgument1);
        v35 = v13;
        NdisReferenceWithTag(SystemArgument2, 0xCu);
        KeReleaseSpinLock((PKSPIN_LOCK)&a1->WakeUpDpcTimer.Dpc.DeferredContext, v35);
        goto LABEL_24;
      }
      v14 = 1;
      v41 = v13;
      if ( !BYTE2(a1->WakeUpDpcTimer.Dpc.SystemArgument1) )
      {
        SystemArgument1 = (unsigned __int16)a1->WakeUpDpcTimer.Dpc.SystemArgument1;
        if ( SystemArgument1 >= 0xFFEBu )
        {
          ndisRefCountReferenceCountOverflow = 1;
          v14 = 2;
        }
        else
        {
          LOWORD(a1->WakeUpDpcTimer.Dpc.SystemArgument1) = SystemArgument1 + 1;
          NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)a1->WakeUpDpcTimer.Dpc.SystemArgument2, 0xCu);
          v13 = v41;
          v14 = 0;
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)&a1->WakeUpDpcTimer.Dpc.DeferredContext, v13);
      v16 = v14 == 0;
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
    v16 = 1;
    v27 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
    if ( !a1->Ref.Closing )
    {
      RefCountTracker = a1->RefCountTracker;
      if ( RefCountTracker )
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker, 0x47u);
      ReferenceCount = a1->Ref.ReferenceCount;
      a1->Ref.ReferenceCount = ReferenceCount + 1;
      if ( ReferenceCount != -1 )
        goto LABEL_39;
      a1->Ref.ReferenceCount = -1;
    }
    v16 = 0;
LABEL_39:
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x14u,
        0xCu,
        (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
        (char)a1,
        a1->Ref.ReferenceCount);
    KeReleaseSpinLock(&a1->Ref.SpinLock, v27);
    v12 = 0LL;
LABEL_10:
    if ( v16 )
    {
      NdisReserved = a2->NdisReserved;
      if ( v6 )
      {
        v30 = KeAcquireSpinLockRaiseToDpc(&v6->Lock);
        v6->MiniportThread = KeGetCurrentThread();
        *(_QWORD *)NdisReserved = 0LL;
        *(_QWORD *)&a2->NdisReserved[8] = 0LL;
        v43 = v30;
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
            v30 = v43;
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
        v25 = v30;
LABEL_23:
        KeReleaseSpinLock(p_Lock, v25);
        if ( !v7 )
        {
LABEL_24:
          RtlGetCallersAddress((PVOID *)&v11[1].List.Flink, (PVOID *)&v11[1].List.Blink);
          v11->Parameter = v11;
          v11->WorkerRoutine = ndisDoOidRequests;
          v11->List.Flink = 0LL;
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xBu,
              0x11u,
              (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
              (char)a2,
              a1);
          ExQueueWorkItem(v11, (WORK_QUEUE_TYPE)40);
          return 259;
        }
        goto LABEL_76;
      }
      v18 = *(_QWORD *)&v12->Reserved4.Length;
      v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v18 + 96));
      *(_QWORD *)(v18 + 520) = KeGetCurrentThread();
      v42 = v19;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)&v12->FirstPendingPacket);
      v12->ReturnPacketsQueue = (_NDIS_PACKET *)KeGetCurrentThread();
      *(_QWORD *)NdisReserved = 0LL;
      *(_QWORD *)&a2->NdisReserved[8] = 0LL;
      if ( (*(_DWORD *)(*(_QWORD *)&v12->Reserved4.Length + 124LL) & 0x100) != 0 )
      {
LABEL_22:
        v12->ReturnPacketsQueue = 0LL;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&v12->FirstPendingPacket);
        v24 = *(_QWORD *)&v12->Reserved4.Length;
        v25 = v42;
        *(_QWORD *)(v24 + 520) = 0LL;
        p_Lock = (KSPIN_LOCK *)(v24 + 96);
        goto LABEL_23;
      }
      p_RequestBuffer = &v12->RequestBuffer;
      for ( j = *(UCHAR **)&v12->RequestBuffer; j != (UCHAR *)p_RequestBuffer; j = *(UCHAR **)j )
      {
        if ( j == NdisReserved )
          goto LABEL_22;
      }
      if ( (unsigned int)dword_1401247B0 > 4
        && (qword_1401247C0 & 0x400) != 0
        && (qword_1401247C8 & 0x400) == qword_1401247C8 )
      {
        v38 = *(_DWORD *)&a2->NdisReserved[16] & 0x30000000;
        if ( v38 != 0x10000000 )
        {
          if ( !v38 )
          {
            if ( (ndisAzOidTelemetryFilter & 1) != 0 && Ndis::BindEngine::s_NumBindOperationsInProgress )
            {
LABEL_61:
              v36 = 1;
              v37 = *(_DWORD *)&a2->NdisReserved[16] & 0xCFFFFFFF | 0x20000000;
            }
            else
            {
              if ( (ndisAzOidTelemetryFilter & 2) != 0 )
              {
                for ( k = 0LL; k < 0x40; k += 4LL )
                {
                  v40 = *(_DWORD *)((char *)&ndisAzOidTelemetryList + k);
                  if ( !v40 )
                    break;
                  if ( v40 == a2->DATA.QUERY_INFORMATION.Oid )
                    goto LABEL_61;
                }
              }
              v36 = 0;
              v37 = *(_DWORD *)&a2->NdisReserved[16] & 0xCFFFFFFF | 0x10000000;
            }
            *(_DWORD *)&a2->NdisReserved[16] = v37;
            if ( !v36 )
              goto LABEL_16;
            goto LABEL_63;
          }
          if ( v38 == 0x20000000 )
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
    if ( v16 )
    {
LABEL_76:
      if ( v6 )
        ndisDereferenceMiniport(v6, 0x47u);
      else
        ndisDereferenceRef((PKSPIN_LOCK)&v12->WakeUpDpcTimer.Dpc.DeferredContext, 0xCu);
    }
LABEL_19:
    ExFreePoolWithTag(v11, 0);
    return v7;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      v10,
      16,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)a1,
      a3,
      (char)a2);
  }
  return (unsigned int)-1073741670;
}
