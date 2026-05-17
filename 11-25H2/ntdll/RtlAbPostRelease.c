/*
 * XREFs of RtlAbPostRelease @ 0x1800A0360
 * Callers:
 *     RtlTryAcquireSRWLockShared @ 0x180044A70 (RtlTryAcquireSRWLockShared.c)
 *     RtlpQueueWaitBlockToSRWLock @ 0x18009E900 (RtlpQueueWaitBlockToSRWLock.c)
 *     RtlDeleteCriticalSection @ 0x1800B9240 (RtlDeleteCriticalSection.c)
 *     RtlTryConvertSRWLockSharedToExclusiveOrRelease @ 0x18013C220 (RtlTryConvertSRWLockSharedToExclusiveOrRelease.c)
 * Callees:
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 */

struct _TEB *__fastcall RtlAbPostRelease(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // rbx
  struct _TEB *result; // rax
  _QWORD *SchedulerSharedDataSlot; // r8
  unsigned int v5; // edx
  __int64 v6; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  if ( a2 )
    goto LABEL_2;
  result = NtCurrentTeb();
  v2 = 0LL;
  SchedulerSharedDataSlot = result->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    v5 = 0;
    v6 = a1 & 0x7FFFFFFFFFFFFFFCLL;
    while ( v5 < 8 )
    {
      result = (struct _TEB *)(SchedulerSharedDataSlot[v5] & 0x7FFFFFFFFFFFFFFCLL);
      if ( result == (struct _TEB *)v6 )
      {
        v2 = &SchedulerSharedDataSlot[v5];
        break;
      }
      ++v5;
    }
  }
  if ( v2 )
  {
LABEL_2:
    *v2 |= 2u;
    if ( (char)v2[7] < 0 )
    {
      v7[1] = 0LL;
      v7[0] = (v2 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
      result = (struct _TEB *)NtSetInformationThread(-2LL, 56LL, v7);
    }
    *(_QWORD *)v2 = 0LL;
  }
  return result;
}
