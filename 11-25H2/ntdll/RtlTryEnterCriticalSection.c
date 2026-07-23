/*
 * XREFs of RtlTryEnterCriticalSection @ 0x180057970
 * Callers:
 *     RtlpFlushHeap @ 0x18000123C (RtlpFlushHeap.c)
 *     RtlpAllocateHeap @ 0x180026310 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x18002A860 (RtlpReAllocateHeap.c)
 *     RtlpFreeHeap @ 0x1800560F0 (RtlpFreeHeap.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800F5458 (LdrpTryAcquireLoaderLock.c)
 *     RtlTryAcquirePebLock @ 0x1800F9640 (RtlTryAcquirePebLock.c)
 *     RtlpLockHeapForClone @ 0x180144118 (RtlpLockHeapForClone.c)
 * Callees:
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 */

LOGICAL __cdecl RtlTryEnterCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  struct _TEB *v1; // r10
  LOGICAL v2; // edi
  char *v3; // rbx
  char *SchedulerSharedDataSlot; // r9
  __int64 i; // rdx
  PRTL_CRITICAL_SECTION *v6; // r8
  signed __int8 v7; // cf
  void *UniqueThread; // rax
  _QWORD ThreadInformation[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = NtCurrentTeb();
  v2 = 0;
  v3 = 0LL;
  SchedulerSharedDataSlot = (char *)v1->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v6 = (PRTL_CRITICAL_SECTION *)&SchedulerSharedDataSlot[8 * i];
      if ( !*v6 )
      {
        v3 = &SchedulerSharedDataSlot[8 * i];
        if ( v6 )
          *v6 = CriticalSection;
        break;
      }
    }
  }
  v7 = _interlockedbittestandreset(&CriticalSection->LockCount, 0);
  UniqueThread = v1->ClientId.UniqueThread;
  if ( v7 )
  {
    v2 = 1;
    CriticalSection->OwningThread = UniqueThread;
    CriticalSection->RecursionCount = 1;
  }
  else
  {
    if ( CriticalSection->OwningThread == UniqueThread )
    {
      ++CriticalSection->RecursionCount;
      v2 = 1;
    }
    if ( v3 )
    {
      *v3 |= 2u;
      if ( v3[7] < 0 )
      {
        ThreadInformation[1] = 0LL;
        ThreadInformation[0] = (v3 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
        NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUpdateLockOwnership, ThreadInformation, 0x10u);
      }
      *(_QWORD *)v3 = 0LL;
    }
  }
  return v2;
}
