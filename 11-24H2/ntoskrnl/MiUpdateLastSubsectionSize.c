/*
 * XREFs of MiUpdateLastSubsectionSize @ 0x14036F080
 * Callers:
 *     MmExtendSection @ 0x140946018 (MmExtendSection.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiGetSubsectionCharges @ 0x14036DF10 (MiGetSubsectionCharges.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x14036F2F8 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B8B54 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiUpdateLastSubsectionSize(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _WORD *v3; // r15
  unsigned __int64 v5; // rsi
  int v7; // ebx
  volatile LONG *v8; // rbp
  KIRQL v9; // r8
  __int64 SubsectionHoldingCrossPartitionReferences; // rax
  int v11; // r9d
  __int64 v12; // r10
  __int16 v13; // r9
  __int64 v14; // rax
  __int64 result; // rax

  v3 = *(_WORD **)a1;
  v5 = a3;
  v7 = 0;
  v8 = (volatile LONG *)(*(_QWORD *)a1 + 72LL);
  while ( 1 )
  {
    v9 = ExAcquireSpinLockExclusive(v8);
    if ( !(_DWORD)v5 )
      break;
    SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(a1);
    if ( (*(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences) + 48) & 0x3FFFFFFF) == 0 )
    {
      if ( v7 == 1 )
        v7 = v11;
LABEL_6:
      *(_DWORD *)(a1 + 52) ^= (*(_DWORD *)(a1 + 52) ^ (*(_DWORD *)(a1 + 52) - v5)) & 0x3FFFFFFF;
      break;
    }
    if ( v7 )
      goto LABEL_6;
    MiReleaseSpinLockExclusive(v8, v9);
    result = MiGetSubsectionCharges(a1, v5);
    if ( (int)result < 0 )
      return result;
    v7 = 1;
  }
  *(_DWORD *)(a1 + 40) = (*a2 >> 12) - *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFFFF | (*(_DWORD *)a2 << 20);
  MiReleaseSpinLockExclusive(v8, v9);
  if ( (_DWORD)v5 )
  {
    v12 = *(_QWORD *)v3;
    _InterlockedExchange64(
      (volatile __int64 *)(*(_QWORD *)v3 + 24LL),
      _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v3 + 24LL), -1LL, -1LL) + (v5 << 12));
    v13 = *(_WORD *)(v12 + 12);
    v14 = *(unsigned int *)(v12 + 8);
    *(_DWORD *)(v12 + 8) = v5 + v14;
    *(_WORD *)(v12 + 12) = v13 ^ (v13 ^ ((v5 + (v14 | ((unsigned __int64)(v13 & 0x3FF) << 32))) >> 32)) & 0x3FF;
    if ( v7 == 2 )
      MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E2FF88 + (v3[30] & 0x3FF)), 1LL, v5);
  }
  return 0LL;
}
