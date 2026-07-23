/*
 * XREFs of MiGetCrossPartitionCharges @ 0x140269C84
 * Callers:
 *     MiGetSubsectionCharges @ 0x1402699F8 (MiGetSubsectionCharges.c)
 *     MiGetCloneCharges @ 0x140269B50 (MiGetCloneCharges.c)
 *     MiCreateLargePfnList @ 0x14026A8C0 (MiCreateLargePfnList.c)
 *     MiReferenceActiveSubsection @ 0x1403374A0 (MiReferenceActiveSubsection.c)
 *     MiAllocateUserPhysicalPages @ 0x1407F8C38 (MiAllocateUserPhysicalPages.c)
 * Callees:
 *     MiApplyCrossPartitionCharges @ 0x14026B298 (MiApplyCrossPartitionCharges.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReturnCrossPartitionCharge @ 0x1404C8470 (MiReturnCrossPartitionCharge.c)
 */

__int64 __fastcall MiGetCrossPartitionCharges(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  __int64 v7; // rbp
  __int64 v9; // r14
  volatile LONG *v10; // rcx
  KIRQL v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // edi
  __int64 v15; // r8

  v7 = 32LL * (int)a2;
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
  if ( (*(_DWORD *)(a1 + 4) & 1) != 0 && a2 )
  {
    v13 = *(_QWORD *)(a1 + v7 + 2480);
    v14 = -1073740640;
    if ( v13 != -1 )
      *(_QWORD *)(a1 + v7 + 2480) = v13 + 1;
  }
  else
  {
    v14 = MiApplyCrossPartitionCharges(a1, a2, a4);
    if ( v14 >= 0 && (a3 & 1) != 0 )
    {
      v14 = MiApplyCrossPartitionCharges(a1, a2 + 1, v15);
      if ( v14 < 0 )
        MiReturnCrossPartitionCharge(a1, a2);
    }
  }
  LOBYTE(v12) = v11;
  MiReleaseSpinLockExclusive(v9, v12);
  return (unsigned int)v14;
}
