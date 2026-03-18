/*
 * XREFs of VidSchiNeedToForcePreemptNode @ 0x140021EB4
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1400B5C20 (VidSchiCheckHwProgress.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x140015D90 (VidSchiProfilePerformanceTick.c)
 *     VidSchiIncrementContextReference @ 0x140023740 (VidSchiIncrementContextReference.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x140023930 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 */

char __fastcall VidSchiNeedToForcePreemptNode(__int64 a1)
{
  __int64 v1; // rbp
  char v3; // si
  __int64 v4; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1984), &LockHandle);
  if ( *(_DWORD *)(a1 + 3016) && !*(_DWORD *)(a1 + 3024) )
  {
    v6 = *(_QWORD *)(a1 + 96);
    if ( v6 == *(_QWORD *)(a1 + 136) )
    {
      v8 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1576) + 1584);
      *(_QWORD *)(a1 + 232) = v8;
      VidSchiIncrementContextReference(v8);
      v3 = 1;
      VidSchiProfilePerformanceTick(1, v1, a1, 0LL, v8, 0LL, 0LL, -18LL);
    }
    else if ( v6 == *(_QWORD *)(a1 + 144) )
    {
      v7 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1576) + 1584);
      if ( v7 )
      {
        LOBYTE(v4) = 1;
        VidSchiUpdateLastCompletedPresentTimestamp(v7, 0LL, v4);
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v3;
}
