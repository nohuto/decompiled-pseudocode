/*
 * XREFs of MiUnlockVadRange @ 0x1408E8A30
 * Callers:
 *     NtUnlockVirtualMemory @ 0x1402333D0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1403FD910 (NtLockVirtualMemory.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408DC33C (MiCoalescePlaceholderAllocations.c)
 *     MmAssignProcessToJob @ 0x1408E8398 (MmAssignProcessToJob.c)
 *     MiCloneProcessAddressSpace @ 0x140ABD72C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     MiGetNextVad @ 0x1402614BC (MiGetNextVad.c)
 *     MiUnlockVad @ 0x140264968 (MiUnlockVad.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     MiGetFirstVad @ 0x1404043B8 (MiGetFirstVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1404044B8 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140405E18 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 */

_QWORD *__fastcall MiUnlockVadRange(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  struct _LIST_ENTRY *FirstVad; // rax
  unsigned __int64 v9; // r10
  __int64 v10; // r10
  unsigned __int64 NextVad; // r14
  ULONG_PTR v13; // r15

  CurrentThread = KeGetCurrentThread();
  if ( a2 == -1LL )
    FirstVad = (struct _LIST_ENTRY *)MiGetFirstVad(a1);
  else
    FirstVad = MiLocateAddress(a2);
  v9 = (unsigned __int64)FirstVad;
  while ( a3 )
  {
    NextVad = MiGetNextVad(v9);
    if ( a3 == 1 )
    {
      MiUnlockVad((__int64)CurrentThread, v10);
      break;
    }
    v13 = v10 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v10 + 40));
    KeAbPostRelease(v13);
    v9 = NextVad;
    --a3;
  }
  if ( a4 )
    return UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
  else
    return UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
}
