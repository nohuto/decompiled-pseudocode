/*
 * XREFs of VidSchiFreeQueuePacket @ 0x140032960
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x14001B090 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x14002FA0C (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiCreateContextInternal @ 0x140032228 (VidSchiCreateContextInternal.c)
 *     VidSchSubmitCommand @ 0x1400D6BF0 (VidSchSubmitCommand.c)
 *     VidSchEnqueueCpuEvent @ 0x1400E4D10 (VidSchEnqueueCpuEvent.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiFreeQueuePacket(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v5; // r14
  __int64 v6; // rcx
  _QWORD *v7; // rax
  int v8; // eax
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rdx
  KSPIN_LOCK *v10; // rcx
  _DWORD *v11; // rbp
  __int64 v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // zf
  _QWORD *v17; // rax
  __int64 *v18; // rbx
  __int64 *v19; // rax
  __int64 v20; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( *(_BYTE *)(v5 + 7059) && *(_DWORD *)(a2 + 48) == 4 )
    goto LABEL_14;
  while ( !*(_DWORD *)(a2 + 48) )
  {
    v14 = *(_QWORD *)(a2 + 1096);
    if ( !v14 && !*(_QWORD *)(a2 + 288) )
      break;
    v15 = *(_QWORD *)(a2 + 288);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 2560LL, a2, v14, v15);
    WdLogGlobalForLineNumber = 906;
LABEL_14:
    *(LARGE_INTEGER *)(56LL * *(unsigned int *)(a2 + 744) + a2 + 296) = KeQueryPerformanceCounter(0LL);
    *(_DWORD *)(56LL * *(unsigned int *)(a2 + 744) + a2 + 304) = *(_DWORD *)(a2 + 48);
    RtlCaptureStackBackTrace(1u, 5u, (PVOID *)(a2 + 56LL * *(unsigned int *)(a2 + 744) + 312), 0LL);
    v16 = *(_QWORD *)(a2 + 768) == 0LL;
    *(_DWORD *)(a2 + 744) = ((unsigned __int8)*(_DWORD *)(a2 + 744) + 1) & 7;
    if ( !v16 || *(_QWORD *)(a2 + 776) || *(_QWORD *)(a2 + 176) || *(_QWORD *)(a2 + 184) )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 61440LL, v5, a2, 0LL);
      WdLogGlobalForLineNumber = 906;
      goto LABEL_19;
    }
  }
  WdLogSingleEntry2(4LL, a2, a1);
  WdLogGlobalForLineNumber = 19409;
  *(_QWORD *)(a2 + 56) = MEMORY[0xFFFFF78000000320];
  v2 = (_QWORD *)(a2 + 8);
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  *(_DWORD *)(a2 + 52) = 0;
  LockHandle.LockQueue = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1992), &LockHandle);
  v6 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD **)(*v2 + 8LL) != v2 )
    goto LABEL_10;
  v7 = *(_QWORD **)(a2 + 16);
  if ( (_QWORD *)*v7 != v2 )
    goto LABEL_10;
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  if ( a1 != -776 )
    --*(_DWORD *)(a1 + 776);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v8 = *(_DWORD *)(a2 + 64);
  p_LockHandle = &LockHandle;
  v10 = (KSPIN_LOCK *)(v5 + 1992);
  LockHandle.LockQueue = 0LL;
  if ( (v8 & 0x40) != 0 )
  {
LABEL_19:
    *(_QWORD *)&LockHandle.OldIrql = 0LL;
    KeAcquireInStackQueuedSpinLock(v10, p_LockHandle);
    v17 = *(_QWORD **)(a1 + 744);
    if ( *v17 == a1 + 736 )
    {
      *v2 = a1 + 736;
      v2[1] = v17;
      *v17 = v2;
      *(_QWORD *)(a1 + 744) = v2;
      if ( a1 != -752 )
        ++*(_DWORD *)(a1 + 752);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v11 = (_DWORD *)(a1 + 728);
      v12 = a1 + 712;
      goto LABEL_26;
    }
LABEL_10:
    __fastfail(3u);
  }
  v11 = (_DWORD *)(a1 + 728);
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v12 = a1 + 712;
  KeAcquireInStackQueuedSpinLock(v10, &LockHandle);
  v13 = *(_QWORD **)(v12 + 8);
  if ( *v13 != v12 )
    goto LABEL_10;
  *v2 = v12;
  *(_QWORD *)(a2 + 16) = v13;
  *v13 = v2;
  *(_QWORD *)(v12 + 8) = v2;
  if ( v11 )
    ++*v11;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_26:
  if ( (*(_DWORD *)(a2 + 64) & 0x40) == 0 )
  {
    while ( 1 )
    {
      memset(&LockHandle, 0, sizeof(LockHandle));
      v18 = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1992), &LockHandle);
      v19 = *(__int64 **)v12;
      if ( *(_QWORD *)v12 == v12 )
        break;
      if ( *v11 > 0x10u )
      {
        v18 = *(__int64 **)v12;
        if ( v19[1] != v12 )
          goto LABEL_10;
        v20 = *v19;
        if ( *(__int64 **)(v20 + 8) != v18 )
          goto LABEL_10;
        *(_QWORD *)v12 = v20;
        *(_QWORD *)(v20 + 8) = v12;
        --*v11;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( !v18 )
        return;
      ExFreePoolWithTag(v18 - 1, 0);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
