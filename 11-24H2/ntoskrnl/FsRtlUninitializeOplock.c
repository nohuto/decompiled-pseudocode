/*
 * XREFs of FsRtlUninitializeOplock @ 0x1404E0250
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpClearOwner @ 0x1402601A4 (FsRtlpClearOwner.c)
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     FsRtlpOplockDequeueRH @ 0x140459914 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047FCA8 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404E42B0 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057F78C (Feature_5466_1379__private_IsEnabledDeviceUsageNoInline.c)
 *     FsRtlpFreeRHOpContext @ 0x140580D80 (FsRtlpFreeRHOpContext.c)
 *     FsRtlpSyncWithAckTimeout @ 0x14058178C (FsRtlpSyncWithAckTimeout.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     FsRtlpOplockPerfSendData @ 0x14070BDB4 (FsRtlpOplockPerfSendData.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlUninitializeOplock(POPLOCK Oplock)
{
  char *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD *v5; // rax
  char *v6; // rdi
  _QWORD *v7; // rcx
  char *v8; // rax
  char *v9; // rdi
  PVOID *v10; // rdi
  PFAST_MUTEX v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  _QWORD *v16; // r9
  __int64 v17; // rcx
  _QWORD *v18; // rax
  char *v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rsi

  v1 = (char *)*Oplock;
  if ( *Oplock )
  {
    *Oplock = 0LL;
    ExAcquireFastMutexUnsafe(*((PFAST_MUTEX *)v1 + 19));
    while ( 1 )
    {
      v5 = v1 + 88;
      v6 = (char *)*((_QWORD *)v1 + 11);
      if ( v6 == v1 + 88 )
        break;
      v23 = *(_QWORD *)v6;
      if ( *((_QWORD **)v6 + 1) != v5 || *(char **)(v23 + 8) != v6 )
        __fastfail(3u);
      *v5 = v23;
      *(_QWORD *)(v23 + 8) = v5;
      v24 = *((_QWORD *)v6 + 2);
      if ( v24 )
      {
        *(_BYTE *)(v24 + 69) = KeAcquireQueuedSpinLock(7uLL);
        _InterlockedExchange64((volatile __int64 *)(v24 + 104), 0LL);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v24 + 69));
        *(_QWORD *)(v24 + 56) = 0LL;
      }
      guard_dispatch_icall_no_overrides(*((_QWORD *)v6 + 4), *((_QWORD *)v6 + 2), v3, v4);
      ExFreePoolWithTag(v6, 0);
    }
    while ( 1 )
    {
      v7 = v1 + 40;
      v8 = (char *)*((_QWORD *)v1 + 5);
      if ( v8 == v1 + 40 )
        break;
      v19 = v8 - 168;
      v20 = *((_QWORD *)v8 + 2);
      v21 = *(_QWORD *)v8;
      if ( *((_QWORD **)v8 + 1) != v7 || *(char **)(v21 + 8) != v8 )
        __fastfail(3u);
      *v7 = v21;
      *(_QWORD *)(v21 + 8) = v7;
      v19[69] = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)v19 + 13, 0LL);
      KeReleaseQueuedSpinLock(7uLL, v19[69]);
      ObfDereferenceObjectWithTag(*(PVOID *)(v20 + 48), 0x746C6644u);
      if ( *(_DWORD *)(v20 + 24) == 590400 )
      {
        v22 = *((_QWORD *)v19 + 3);
        *(_OWORD *)v22 = 0LL;
        *(_QWORD *)(v22 + 16) = 0LL;
        *(_DWORD *)v22 = 1572865;
        *(_DWORD *)(v22 + 4) = (*((_DWORD *)v1 + 36) >> 12) & 7;
        *((_QWORD *)v19 + 7) = 24LL;
      }
      else
      {
        *((_QWORD *)v19 + 7) = 8LL;
      }
      *((_DWORD *)v19 + 12) = 0;
      IofCompleteRequest((PIRP)v19, 1);
    }
    while ( 1 )
    {
      v9 = (char *)*((_QWORD *)v1 + 7);
      if ( v9 == v1 + 56 )
        break;
      if ( (*((_DWORD *)v1 + 36) & 0x10000) != 0 && *((_QWORD *)v9 + 7) )
      {
        FsRtlpOplockDequeueRH(*((_QWORD *)v1 + 7), v2);
        v17 = *v16;
        v18 = (_QWORD *)v16[1];
        if ( *(_QWORD **)(*v16 + 8LL) != v16 || (_QWORD *)*v18 != v16 )
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        if ( *((char **)v1 + 15) == v1 + 120 )
          *((_DWORD *)v1 + 36) &= 0xFFFCFFFF;
        if ( *((_QWORD *)v9 + 5) )
          FsRtlpClearOwner((__int64)v1, (__int64)v9);
        if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline() )
          FsRtlpFreeRHOpContext(v9);
        else
          ExFreePoolWithTag(v9, 0);
      }
      else
      {
        FsRtlpRemoveAndCompleteRHIrp(v9, 0, 0, 0, 0);
      }
    }
    while ( 1 )
    {
      v10 = (PVOID *)*((_QWORD *)v1 + 9);
      if ( v10 == (PVOID *)(v1 + 72) )
        break;
      FsRtlpOplockDequeueRH(*((_QWORD *)v1 + 9), v2);
      FsRtlpModifyThreadPriorities((__int64)v1, (__int64)v10, 0LL);
      ObfDereferenceObjectWithTag(v10[3], 0x746C6644u);
      FsRtlpClearOwner((__int64)v1, (__int64)v10);
      if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline() )
      {
        FsRtlpOplockPerfSendData(v10 + 9);
        FsRtlpFreeRHOpContext(v10);
      }
      else
      {
        ExFreePoolWithTag(v10, 0);
      }
    }
    v11 = *(PFAST_MUTEX *)v1;
    if ( *(_QWORD *)v1 )
    {
      v12 = *(_QWORD *)&v11[3].Contention;
      BYTE5(v11[1].Owner) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)&v11[1].OldIrql, 0LL);
      KeReleaseQueuedSpinLock(7uLL, BYTE5(v11[1].Owner));
      if ( *(_DWORD *)(v12 + 24) == 590400 )
      {
        v13 = *(_QWORD *)&v11->Event.Header.Lock;
        *(_OWORD *)v13 = 0LL;
        *(_QWORD *)(v13 + 16) = 0LL;
        *(_DWORD *)v13 = 1572865;
        *(_DWORD *)(v13 + 4) = (*((_DWORD *)v1 + 36) >> 12) & 7;
        *(_QWORD *)&v11[1].Count = 24LL;
      }
      else
      {
        *(_QWORD *)&v11[1].Count = 8LL;
      }
      v11->OldIrql = 0;
      IofCompleteRequest((PIRP)v11, 1);
      *(_QWORD *)v1 = 0LL;
      v14 = (void *)*((_QWORD *)v1 + 1);
      if ( v14 )
        ObfDereferenceObjectWithTag(v14, 0x746C6644u);
      FsRtlpModifyThreadPriorities((__int64)v1, 0LL, 0LL);
      FsRtlpClearOwner((__int64)v1, 0LL);
    }
    else if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline() )
    {
      FsRtlpOplockPerfSendData(v1 + 160);
    }
    if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline() )
      FsRtlpSyncWithAckTimeout(v1 + 176);
    ExReleaseFastMutexUnsafe(*((PFAST_MUTEX *)v1 + 19));
    v15 = (void *)*((_QWORD *)v1 + 17);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    ExFreePoolWithTag(*((PVOID *)v1 + 19), 0);
    ExFreePoolWithTag(v1, 0);
  }
}
