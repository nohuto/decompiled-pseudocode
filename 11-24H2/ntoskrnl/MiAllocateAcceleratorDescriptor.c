/*
 * XREFs of MiAllocateAcceleratorDescriptor @ 0x1406919E4
 * Callers:
 *     MiZeroLargePage @ 0x140312ABC (MiZeroLargePage.c)
 *     MiGetZeroingDescriptors @ 0x140686B54 (MiGetZeroingDescriptors.c)
 *     MiSoloZeroHugeRange @ 0x140686F44 (MiSoloZeroHugeRange.c)
 *     MiAbsorbPossibleEngineChanges @ 0x140690174 (MiAbsorbPossibleEngineChanges.c)
 *     MiZeroPageCalibrate @ 0x140694F5C (MiZeroPageCalibrate.c)
 * Callees:
 *     MiDeleteAcceleratorDescriptor @ 0x140271A18 (MiDeleteAcceleratorDescriptor.c)
 *     ExAllocatePoolMm @ 0x1402775A0 (ExAllocatePoolMm.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     AccelInitializeDescriptor @ 0x1406643A0 (AccelInitializeDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateAcceleratorDescriptor(__int64 a1, int a2, int a3, _QWORD *a4)
{
  _QWORD *v4; // rdi
  int v5; // r15d
  int v8; // r12d
  int v9; // r13d
  __int64 i; // rsi
  _QWORD *v11; // r15
  _QWORD *j; // r14
  bool v13; // zf
  ULONG_PTR v14; // r9
  __int64 PoolMm; // rax
  _QWORD *v16; // r14
  __int64 result; // rax
  _QWORD *v18; // rcx
  KIRQL v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+28h] [rbp-40h]

  *a4 = 0LL;
  v4 = 0LL;
  v5 = a3;
  v8 = 0;
  v9 = 1;
  if ( KeGetCurrentIrql() == 2 )
  {
    v19 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E375A8);
  }
  else
  {
    v19 = ExAcquireSpinLockExclusive(&dword_140E375A8);
  }
  for ( i = qword_140E37580; (__int64 *)i != &qword_140E37580; i = v20 )
  {
    v20 = *(_QWORD *)i;
    if ( *(_DWORD *)(i + 24) == a2 && (*(_DWORD *)(i + 52) & 1) == 0 && !byte_140E37594 )
    {
      if ( !a1 )
        goto LABEL_15;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 208) + 15280LL));
      v11 = (_QWORD *)(a1 + 120);
      for ( j = *(_QWORD **)(a1 + 120); j != v11 && j[3] != i; j = (_QWORD *)*j )
        ;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 208) + 15280LL));
      v13 = j == v11;
      v5 = a3;
      if ( v13 )
      {
LABEL_15:
        v14 = *(unsigned int *)(i + 24);
        LODWORD(v14) = v14 | 0x80000000;
        PoolMm = ExAllocatePoolMm(0x40uLL, *(_QWORD *)(i + 32) + 32LL, 1817143629, v14);
        v16 = (_QWORD *)PoolMm;
        if ( !PoolMm )
          goto LABEL_21;
        if ( (int)AccelInitializeDescriptor(*(_QWORD *)(i + 16), *(_DWORD *)(i + 32), PoolMm + 32) < 0 )
        {
          ExFreePoolWithTag(v16, 0);
LABEL_21:
          v9 = 0;
          break;
        }
        ++*(_DWORD *)(i + 48);
        ++v8;
        *v16 = v4;
        v4 = v16;
        v16[3] = i;
        if ( v5 && v8 == v5 )
          break;
      }
    }
  }
  MiReleaseSpinLockExclusive(&dword_140E375A8, v19);
  if ( (v8 || a1) && v9 )
  {
    result = 1LL;
    *a4 = v4;
  }
  else
  {
    while ( v4 )
    {
      v18 = v4;
      v4 = (_QWORD *)*v4;
      MiDeleteAcceleratorDescriptor((__int64)(v18 + 4));
    }
    return 0LL;
  }
  return result;
}
