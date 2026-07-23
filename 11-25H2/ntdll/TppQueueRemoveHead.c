/*
 * XREFs of TppQueueRemoveHead @ 0x18009ED70
 * Callers:
 *     TppWorkerFindTask @ 0x18007D4E0 (TppWorkerFindTask.c)
 *     TpReleasePool @ 0x1800A06E0 (TpReleasePool.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 */

volatile signed __int32 *__fastcall TppQueueRemoveHead(
        volatile signed __int32 *a1,
        unsigned __int64 i,
        __int64 a3,
        char *a4)
{
  volatile signed __int32 *v4; // rsi
  __int64 v5; // rbp
  char *SchedulerSharedDataSlot; // r8
  volatile signed __int32 **v8; // rcx
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rcx

  v4 = a1 + 4;
  v5 = 0LL;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v8 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * (unsigned int)i];
      if ( !*v8 )
      {
        if ( v8 )
          *v8 = v4;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64(v4, 0LL) )
    RtlpAcquireSRWLockExclusiveContended((unsigned __int64)v4, i, SchedulerSharedDataSlot, a4);
  v9 = *(volatile signed __int32 **)a1;
  if ( *(volatile signed __int32 **)(*(_QWORD *)a1 + 8LL) != a1
    || (v10 = *(_QWORD *)v9, *(volatile signed __int32 **)(*(_QWORD *)v9 + 8LL) != v9) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)a1 = v10;
  *(_QWORD *)(v10 + 8) = a1;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v4);
  if ( v9 != a1 )
    return v9;
  return (volatile signed __int32 *)v5;
}
