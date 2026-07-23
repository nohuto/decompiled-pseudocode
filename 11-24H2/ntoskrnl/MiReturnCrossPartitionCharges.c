/*
 * XREFs of MiReturnCrossPartitionCharges @ 0x140338944
 * Callers:
 *     MiReturnCloneCharges @ 0x140206FD0 (MiReturnCloneCharges.c)
 *     MiFreeLargePages @ 0x1402666C0 (MiFreeLargePages.c)
 *     MiGetSubsectionCharges @ 0x1402699F8 (MiGetSubsectionCharges.c)
 *     MiCreateLargePfnList @ 0x14026A8C0 (MiCreateLargePfnList.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 *     MiReferenceActiveSubsection @ 0x1403374A0 (MiReferenceActiveSubsection.c)
 *     MiUnmapViewSubsections @ 0x140337FB0 (MiUnmapViewSubsections.c)
 *     MiCheckControlArea @ 0x140338330 (MiCheckControlArea.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiFreeContiguousLargePageRun @ 0x1406833D4 (MiFreeContiguousLargePageRun.c)
 *     MiDeleteAweInfoPages @ 0x1407F9E50 (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x1407FA340 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReturnCrossPartitionCharge @ 0x1404C8470 (MiReturnCrossPartitionCharge.c)
 */

LONG __fastcall MiReturnCrossPartitionCharges(__int64 a1, unsigned int a2, char a3)
{
  struct _KEVENT *v6; // rbx
  _DWORD *v7; // rdi
  volatile LONG *v8; // rcx
  KIRQL v9; // bp
  int v10; // eax
  LONG result; // eax

  v6 = 0LL;
  v7 = (_DWORD *)(a1 + 1728);
  v8 = (volatile LONG *)(a1 + 1728);
  if ( KeGetCurrentIrql() == 2 )
  {
    v9 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v8);
  }
  else
  {
    v9 = ExAcquireSpinLockExclusive(v8);
  }
  v10 = MiReturnCrossPartitionCharge(a1, a2);
  if ( (a3 & 1) != 0 )
    v10 = MiReturnCrossPartitionCharge(a1, a2 + 1);
  if ( v10 )
    v6 = *(struct _KEVENT **)(a1 + 2760);
  result = MiReleaseSpinLockExclusive(v7, v9);
  if ( v6 )
    return KeSetEvent(v6, 1, 0);
  return result;
}
