/*
 * XREFs of FsRtlUninitializeOplock @ 0x1404D98A0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpClearOwner @ 0x1402907B4 (FsRtlpClearOwner.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpOplockDequeueRH @ 0x14044E644 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047A8E8 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404DAB70 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpFreeRHOpContext @ 0x14057E1A0 (FsRtlpFreeRHOpContext.c)
 *     FsRtlpSyncWithAckTimeout @ 0x14057EB0C (FsRtlpSyncWithAckTimeout.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     FsRtlpOplockPerfSendData @ 0x140709948 (FsRtlpOplockPerfSendData.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlUninitializeOplock(POPLOCK Oplock)
{
  char *v1; // rbx
  _QWORD *v2; // rax
  char *v3; // rdi
  _QWORD *v4; // rcx
  char *v5; // rax
  char *v6; // rdi
  PVOID *v7; // rdi
  PFAST_MUTEX v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  _QWORD *v13; // r9
  __int64 v14; // rcx
  _QWORD *v15; // rax
  char *v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rsi

  v1 = (char *)*Oplock;
  if ( *Oplock )
  {
    *Oplock = 0LL;
    ExAcquireFastMutexUnsafe(*((PFAST_MUTEX *)v1 + 19));
    while ( 1 )
    {
      v2 = v1 + 88;
      v3 = (char *)*((_QWORD *)v1 + 11);
      if ( v3 == v1 + 88 )
        break;
      v20 = *(_QWORD *)v3;
      if ( *((_QWORD **)v3 + 1) != v2 || *(char **)(v20 + 8) != v3 )
        __fastfail(3u);
      *v2 = v20;
      *(_QWORD *)(v20 + 8) = v2;
      v21 = *((_QWORD *)v3 + 2);
      if ( v21 )
      {
        *(_BYTE *)(v21 + 69) = KeAcquireQueuedSpinLock(7uLL);
        _InterlockedExchange64((volatile __int64 *)(v21 + 104), 0LL);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v21 + 69));
        *(_QWORD *)(v21 + 56) = 0LL;
      }
      guard_dispatch_icall_no_overrides(*((_QWORD *)v3 + 4), *((_QWORD *)v3 + 2));
      ExFreePoolWithTag(v3, 0);
    }
    while ( 1 )
    {
      v4 = v1 + 40;
      v5 = (char *)*((_QWORD *)v1 + 5);
      if ( v5 == v1 + 40 )
        break;
      v16 = v5 - 168;
      v17 = *((_QWORD *)v5 + 2);
      v18 = *(_QWORD *)v5;
      if ( *((_QWORD **)v5 + 1) != v4 || *(char **)(v18 + 8) != v5 )
        __fastfail(3u);
      *v4 = v18;
      *(_QWORD *)(v18 + 8) = v4;
      v16[69] = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)v16 + 13, 0LL);
      KeReleaseQueuedSpinLock(7uLL, v16[69]);
      ObfDereferenceObjectWithTag(*(PVOID *)(v17 + 48), 0x746C6644u);
      if ( *(_DWORD *)(v17 + 24) == 590400 )
      {
        v19 = *((_QWORD *)v16 + 3);
        *(_OWORD *)v19 = 0LL;
        *(_QWORD *)(v19 + 16) = 0LL;
        *(_DWORD *)v19 = 1572865;
        *(_DWORD *)(v19 + 4) = (*((_DWORD *)v1 + 36) >> 12) & 7;
        *((_QWORD *)v16 + 7) = 24LL;
      }
      else
      {
        *((_QWORD *)v16 + 7) = 8LL;
      }
      *((_DWORD *)v16 + 12) = 0;
      IofCompleteRequest((PIRP)v16, 1);
    }
    while ( 1 )
    {
      v6 = (char *)*((_QWORD *)v1 + 7);
      if ( v6 == v1 + 56 )
        break;
      if ( (*((_DWORD *)v1 + 36) & 0x10000) != 0 && *((_QWORD *)v6 + 7) )
      {
        FsRtlpOplockDequeueRH(*((_QWORD *)v1 + 7));
        v14 = *v13;
        v15 = (_QWORD *)v13[1];
        if ( *(_QWORD **)(*v13 + 8LL) != v13 || (_QWORD *)*v15 != v13 )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        if ( *((char **)v1 + 15) == v1 + 120 )
          *((_DWORD *)v1 + 36) &= 0xFFFCFFFF;
        if ( *((_QWORD *)v6 + 5) )
          FsRtlpClearOwner((__int64)v1, (__int64)v6);
        FsRtlpFreeRHOpContext(v6);
      }
      else
      {
        FsRtlpRemoveAndCompleteRHIrp(v6, 0, 0, 0, 0);
      }
    }
    while ( 1 )
    {
      v7 = (PVOID *)*((_QWORD *)v1 + 9);
      if ( v7 == (PVOID *)(v1 + 72) )
        break;
      FsRtlpOplockDequeueRH(*((_QWORD *)v1 + 9));
      FsRtlpModifyThreadPriorities((__int64)v1, (__int64)v7, 0);
      ObfDereferenceObjectWithTag(v7[3], 0x746C6644u);
      FsRtlpClearOwner((__int64)v1, (__int64)v7);
      FsRtlpOplockPerfSendData(v7 + 9);
      FsRtlpFreeRHOpContext(v7);
    }
    v8 = *(PFAST_MUTEX *)v1;
    if ( *(_QWORD *)v1 )
    {
      v9 = *(_QWORD *)&v8[3].Contention;
      BYTE5(v8[1].Owner) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)&v8[1].OldIrql, 0LL);
      KeReleaseQueuedSpinLock(7uLL, BYTE5(v8[1].Owner));
      if ( *(_DWORD *)(v9 + 24) == 590400 )
      {
        v10 = *(_QWORD *)&v8->Event.Header.Lock;
        *(_OWORD *)v10 = 0LL;
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_DWORD *)v10 = 1572865;
        *(_DWORD *)(v10 + 4) = (*((_DWORD *)v1 + 36) >> 12) & 7;
        *(_QWORD *)&v8[1].Count = 24LL;
      }
      else
      {
        *(_QWORD *)&v8[1].Count = 8LL;
      }
      v8->OldIrql = 0;
      IofCompleteRequest((PIRP)v8, 1);
      *(_QWORD *)v1 = 0LL;
      v11 = (void *)*((_QWORD *)v1 + 1);
      if ( v11 )
        ObfDereferenceObjectWithTag(v11, 0x746C6644u);
      FsRtlpModifyThreadPriorities((__int64)v1, 0LL, 0);
      FsRtlpClearOwner((__int64)v1, 0LL);
    }
    else
    {
      FsRtlpOplockPerfSendData(v1 + 160);
    }
    FsRtlpSyncWithAckTimeout(v1 + 176);
    ExReleaseFastMutexUnsafe(*((PFAST_MUTEX *)v1 + 19));
    v12 = (void *)*((_QWORD *)v1 + 17);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    ExFreePoolWithTag(*((PVOID *)v1 + 19), 0);
    ExFreePoolWithTag(v1, 0);
  }
}
