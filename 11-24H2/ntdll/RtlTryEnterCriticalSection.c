/*
 * XREFs of RtlTryEnterCriticalSection @ 0x1800A09E0
 * Callers:
 *     RtlpFreeHeap @ 0x18005A020 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeap @ 0x18005B780 (RtlpReAllocateHeap.c)
 *     RtlpFlushHeap @ 0x1800A05AC (RtlpFlushHeap.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800A07D8 (LdrpTryAcquireLoaderLock.c)
 *     RtlTryAcquirePebLock @ 0x1800F2550 (RtlTryAcquirePebLock.c)
 *     RtlpAllocateHeap @ 0x1801159A0 (RtlpAllocateHeap.c)
 *     RtlpLockHeapForClone @ 0x180140BD8 (RtlpLockHeapForClone.c)
 * Callees:
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
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
