/*
 * XREFs of FsRtlUninitializeOplock @ 0x1404E0790
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpOplockDequeueRH @ 0x14045A5B0 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x140465220 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047F2B8 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404E51D4 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057C46C (Feature_5466_1379__private_IsEnabledDeviceUsageNoInline.c)
 *     FsRtlpFreeRHOpContext @ 0x14057D960 (FsRtlpFreeRHOpContext.c)
 *     FsRtlpSyncWithAckTimeout @ 0x14057DFDC (FsRtlpSyncWithAckTimeout.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     FsRtlpOplockPerfSendData @ 0x1406FFED4 (FsRtlpOplockPerfSendData.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlUninitializeOplock(POPLOCK Oplock)
{
  char *v1; // rbx
  __int64 v2; // rdx
  _QWORD *v3; // rax
  char *v4; // rdi
  _QWORD *v5; // rcx
  char *v6; // rax
  char *v7; // rdi
  PVOID *v8; // rdi
  PFAST_MUTEX v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  _QWORD *v14; // r9
  __int64 v15; // rcx
  _QWORD *v16; // rax
  char *v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rsi

  v1 = (char *)*Oplock;
  if ( *Oplock )
  {
    *Oplock = 0LL;
    ExAcquireFastMutexUnsafe(*((PFAST_MUTEX *)v1 + 19));
    while ( 1 )
    {
      v3 = v1 + 88;
      v4 = (char *)*((_QWORD *)v1 + 11);
      if ( v4 == v1 + 88 )
        break;
      v21 = *(_QWORD *)v4;
      if ( *((_QWORD **)v4 + 1) != v3 || *(char **)(v21 + 8) != v4 )
        __fastfail(3u);
      *v3 = v21;
      *(_QWORD *)(v21 + 8) = v3;
      v22 = *((_QWORD *)v4 + 2);
      if ( v22 )
      {
        *(_BYTE *)(v22 + 69) = KeAcquireQueuedSpinLock(7uLL);
        _InterlockedExchange64((volatile __int64 *)(v22 + 104), 0LL);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v22 + 69));
        *(_QWORD *)(v22 + 56) = 0LL;
      }
      guard_dispatch_icall_no_overrides(*((_QWORD *)v4 + 4), *((_QWORD *)v4 + 2));
      ExFreePoolWithTag(v4, 0);
    }
    while ( 1 )
    {
      v5 = v1 + 40;
      v6 = (char *)*((_QWORD *)v1 + 5);
      if ( v6 == v1 + 40 )
        break;
      v17 = v6 - 168;
      v18 = *((_QWORD *)v6 + 2);
      v19 = *(_QWORD *)v6;
      if ( *((_QWORD **)v6 + 1) != v5 || *(char **)(v19 + 8) != v6 )
        __fastfail(3u);
      *v5 = v19;
      *(_QWORD *)(v19 + 8) = v5;
      v17[69] = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)v17 + 13, 0LL);
      KeReleaseQueuedSpinLock(7uLL, v17[69]);
      ObfDereferenceObjectWithTag(*(PVOID *)(v18 + 48), 0x746C6644u);
      if ( *(_DWORD *)(v18 + 24) == 590400 )
      {
        v20 = *((_QWORD *)v17 + 3);
        *(_OWORD *)v20 = 0LL;
        *(_QWORD *)(v20 + 16) = 0LL;
        *(_DWORD *)v20 = 1572865;
        *(_DWORD *)(v20 + 4) = (*((_DWORD *)v1 + 36) >> 12) & 7;
        *((_QWORD *)v17 + 7) = 24LL;
      }
      else
      {
        *((_QWORD *)v17 + 7) = 8LL;
      }
      *((_DWORD *)v17 + 12) = 0;
      IofCompleteRequest((PIRP)v17, 1);
    }
    while ( 1 )
    {
      v7 = (char *)*((_QWORD *)v1 + 7);
      if ( v7 == v1 + 56 )
        break;
      if ( (*((_DWORD *)v1 + 36) & 0x10000) != 0 && *((_QWORD *)v7 + 7) )
      {
        FsRtlpOplockDequeueRH(*((_QWORD *)v1 + 7), v2);
        v15 = *v14;
        v16 = (_QWORD *)v14[1];
        if ( *(_QWORD **)(*v14 + 8LL) != v14 || (_QWORD *)*v16 != v14 )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        if ( *((char **)v1 + 15) == v1 + 120 )
          *((_DWORD *)v1 + 36) &= 0xFFFCFFFF;
        if ( *((_QWORD *)v7 + 5) )
          FsRtlpClearOwner((__int64)v1, (__int64)v7);
        if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline() )
          FsRtlpFreeRHOpContext(v7);
        else
          ExFreePoolWithTag(v7, 0);
      }
      else
      {
        FsRtlpRemoveAndCompleteRHIrp(v7, 0, 0, 0, 0);
      }
    }
    while ( 1 )
    {
      v8 = (PVOID *)*((_QWORD *)v1 + 9);
      if ( v8 == (PVOID *)(v1 + 72) )
        break;
      FsRtlpOplockDequeueRH(*((_QWORD *)v1 + 9), v2);
      FsRtlpModifyThreadPriorities((__int64)v1, (__int64)v8, 0);
      ObfDereferenceObjectWithTag(v8[3], 0x746C6644u);
      FsRtlpClearOwner((__int64)v1, (__int64)v8);
      if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline() )
      {
        FsRtlpOplockPerfSendData(v8 + 9);
        FsRtlpFreeRHOpContext(v8);
      }
      else
      {
        ExFreePoolWithTag(v8, 0);
      }
    }
    v9 = *(PFAST_MUTEX *)v1;
    if ( *(_QWORD *)v1 )
    {
      v10 = *(_QWORD *)&v9[3].Contention;
      BYTE5(v9[1].Owner) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)&v9[1].OldIrql, 0LL);
      KeReleaseQueuedSpinLock(7uLL, BYTE5(v9[1].Owner));
      if ( *(_DWORD *)(v10 + 24) == 590400 )
      {
        v11 = *(_QWORD *)&v9->Event.Header.Lock;
        *(_OWORD *)v11 = 0LL;
        *(_QWORD *)(v11 + 16) = 0LL;
        *(_DWORD *)v11 = 1572865;
        *(_DWORD *)(v11 + 4) = (*((_DWORD *)v1 + 36) >> 12) & 7;
        *(_QWORD *)&v9[1].Count = 24LL;
      }
      else
      {
        *(_QWORD *)&v9[1].Count = 8LL;
      }
      v9->OldIrql = 0;
      IofCompleteRequest((PIRP)v9, 1);
      *(_QWORD *)v1 = 0LL;
      v12 = (void *)*((_QWORD *)v1 + 1);
      if ( v12 )
        ObfDereferenceObjectWithTag(v12, 0x746C6644u);
      FsRtlpModifyThreadPriorities((__int64)v1, 0LL, 0);
      FsRtlpClearOwner((__int64)v1, 0LL);
    }
    else if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline() )
    {
      FsRtlpOplockPerfSendData(v1 + 160);
    }
    if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline() )
      FsRtlpSyncWithAckTimeout(v1 + 176);
    ExReleaseFastMutexUnsafe(*((PFAST_MUTEX *)v1 + 19));
    v13 = (void *)*((_QWORD *)v1 + 17);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    ExFreePoolWithTag(*((PVOID *)v1 + 19), 0);
    ExFreePoolWithTag(v1, 0);
  }
}
