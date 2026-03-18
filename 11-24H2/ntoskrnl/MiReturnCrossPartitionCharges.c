/*
 * XREFs of MiReturnCrossPartitionCharges @ 0x14020F5E4
 * Callers:
 *     MiReferenceActiveSubsection @ 0x14020E140 (MiReferenceActiveSubsection.c)
 *     MiUnmapViewSubsections @ 0x14020EC50 (MiUnmapViewSubsections.c)
 *     MiCheckControlArea @ 0x14020EFD0 (MiCheckControlArea.c)
 *     MiCommitExistingVad @ 0x140213020 (MiCommitExistingVad.c)
 *     MiReturnCloneCharges @ 0x14023EE80 (MiReturnCloneCharges.c)
 *     MiGetSubsectionCharges @ 0x14036DF10 (MiGetSubsectionCharges.c)
 *     MiCreateLargePfnList @ 0x14036E934 (MiCreateLargePfnList.c)
 *     MiFreeLargePages @ 0x1403CC4F0 (MiFreeLargePages.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B8B54 (MiReturnCrossPartitionSectionCharges.c)
 *     MiFreeContiguousLargePageRun @ 0x1406821E4 (MiFreeContiguousLargePageRun.c)
 *     MiDeleteAweInfoPages @ 0x1407F96E0 (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x1407F9BD0 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCrossPartitionCharge @ 0x1404CF2A4 (MiReturnCrossPartitionCharge.c)
 */

LONG __fastcall MiReturnCrossPartitionCharges(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  struct _KEVENT *v8; // rbx
  __int64 v9; // rdi
  volatile LONG *v10; // rcx
  KIRQL v11; // bp
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  LONG result; // eax

  v8 = 0LL;
  v9 = a1 + 1728;
  v10 = (volatile LONG *)(a1 + 1728);
  if ( KeGetCurrentIrql() == 2 )
  {
    v11 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v10);
  }
  else
  {
    v11 = ExAcquireSpinLockExclusive(v10);
  }
  v12 = MiReturnCrossPartitionCharge(a1, a2, a4);
  if ( (a3 & 1) != 0 )
    v12 = MiReturnCrossPartitionCharge(a1, a2 + 1, v14);
  if ( v12 )
    v8 = *(struct _KEVENT **)(a1 + 2760);
  LOBYTE(v13) = v11;
  result = MiReleaseSpinLockExclusive(v9, v13);
  if ( v8 )
    return KeSetEvent(v8, 1, 0);
  return result;
}
