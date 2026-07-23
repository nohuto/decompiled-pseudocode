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

int __fastcall RtlAbPostRelease(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // rbx
  struct _TEB *v3; // rax
  _QWORD *SchedulerSharedDataSlot; // r8
  unsigned int v5; // edx
  __int64 v6; // rcx
  _QWORD ThreadInformation[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  if ( a2 )
    goto LABEL_2;
  v3 = NtCurrentTeb();
  v2 = 0LL;
  SchedulerSharedDataSlot = v3->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    v5 = 0;
    v6 = a1 & 0x7FFFFFFFFFFFFFFCLL;
    while ( v5 < 8 )
    {
      v3 = (struct _TEB *)(SchedulerSharedDataSlot[v5] & 0x7FFFFFFFFFFFFFFCLL);
      if ( v3 == (struct _TEB *)v6 )
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
      ThreadInformation[1] = 0LL;
      ThreadInformation[0] = (v2 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
      LODWORD(v3) = NtSetInformationThread(
                      (HANDLE)0xFFFFFFFFFFFFFFFELL,
                      ThreadUpdateLockOwnership,
                      ThreadInformation,
                      0x10u);
    }
    *(_QWORD *)v2 = 0LL;
  }
  return (int)v3;
}
