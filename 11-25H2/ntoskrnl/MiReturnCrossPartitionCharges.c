/*
 * XREFs of MiReturnCrossPartitionCharges @ 0x14022F804
 * Callers:
 *     MiReferenceActiveSubsection @ 0x1402140B0 (MiReferenceActiveSubsection.c)
 *     MiCheckControlArea @ 0x14022F1E0 (MiCheckControlArea.c)
 *     MiReturnCloneCharges @ 0x14033FDD4 (MiReturnCloneCharges.c)
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 *     MiCreateLargePfnList @ 0x140405A3C (MiCreateLargePfnList.c)
 *     MiGetSubsectionCharges @ 0x1404873D0 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B9590 (MiReturnCrossPartitionSectionCharges.c)
 *     MiFreeLargePages @ 0x1404BB340 (MiFreeLargePages.c)
 *     MiFreeContiguousLargePageRun @ 0x1406769C4 (MiFreeContiguousLargePageRun.c)
 *     MiDeleteAweInfoPages @ 0x1407E9850 (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x1407E9D40 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiReturnCrossPartitionCharge @ 0x1404D2A3C (MiReturnCrossPartitionCharge.c)
 */

LONG __fastcall MiReturnCrossPartitionCharges(__int64 a1, unsigned int a2, char a3)
{
  struct _KEVENT *v6; // rbx
  __int64 v7; // rdi
  volatile LONG *v8; // rcx
  KIRQL v9; // bp
  int v10; // eax
  __int64 v11; // rdx
  LONG result; // eax

  v6 = 0LL;
  v7 = a1 + 1728;
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
  LOBYTE(v11) = v9;
  result = MiReleaseSpinLockExclusive(v7, v11);
  if ( v6 )
    return KeSetEvent(v6, 1, 0);
  return result;
}
