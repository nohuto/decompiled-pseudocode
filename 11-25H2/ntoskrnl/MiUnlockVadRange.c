/*
 * XREFs of MiUnlockVadRange @ 0x1408D97C0
 * Callers:
 *     NtUnlockVirtualMemory @ 0x1403875B0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x140388E00 (NtLockVirtualMemory.c)
 *     MmAssignProcessToJob @ 0x1408D9124 (MmAssignProcessToJob.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408F71CC (MiCoalescePlaceholderAllocations.c)
 *     MiCloneProcessAddressSpace @ 0x140AB962C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1402A3CEC (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiUnlockVad @ 0x1402A6928 (MiUnlockVad.c)
 *     MiGetNextVad @ 0x1402A96D8 (MiGetNextVad.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403D88FC (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiGetFirstVad @ 0x14047FEF0 (MiGetFirstVad.c)
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
