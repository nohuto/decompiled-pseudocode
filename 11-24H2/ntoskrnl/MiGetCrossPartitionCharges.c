/*
 * XREFs of MiGetCrossPartitionCharges @ 0x14036E19C
 * Callers:
 *     MiReferenceActiveSubsection @ 0x14020E140 (MiReferenceActiveSubsection.c)
 *     MiGetSubsectionCharges @ 0x14036DF10 (MiGetSubsectionCharges.c)
 *     MiGetCloneCharges @ 0x14036E068 (MiGetCloneCharges.c)
 *     MiCreateLargePfnList @ 0x14036E934 (MiCreateLargePfnList.c)
 *     MiAllocateUserPhysicalPages @ 0x1407F84C8 (MiAllocateUserPhysicalPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiApplyCrossPartitionCharges @ 0x14036F318 (MiApplyCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharge @ 0x1404CF2A4 (MiReturnCrossPartitionCharge.c)
 */

__int64 __fastcall MiGetCrossPartitionCharges(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  __int64 v7; // rbp
  _DWORD *v9; // r14
  volatile LONG *v10; // rcx
  KIRQL v11; // r15
  __int64 v12; // rax
  int v13; // edi
  __int64 v14; // r8
  __int64 v15; // r8

  v7 = 32LL * (int)a2;
  v9 = (_DWORD *)(a1 + 1728);
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
    v12 = *(_QWORD *)(a1 + v7 + 2480);
    v13 = -1073740640;
    if ( v12 != -1 )
      *(_QWORD *)(a1 + v7 + 2480) = v12 + 1;
  }
  else
  {
    v13 = MiApplyCrossPartitionCharges(a1, a2, a4);
    if ( v13 >= 0 && (a3 & 1) != 0 )
    {
      v13 = MiApplyCrossPartitionCharges(a1, a2 + 1, v14);
      if ( v13 < 0 )
        MiReturnCrossPartitionCharge(a1, a2, v15);
    }
  }
  MiReleaseSpinLockExclusive(v9, v11);
  return (unsigned int)v13;
}
