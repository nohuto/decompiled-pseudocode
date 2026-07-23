/*
 * XREFs of MiUpdateLastSubsectionSize @ 0x14026B000
 * Callers:
 *     MmExtendSection @ 0x14098A134 (MmExtendSection.c)
 * Callees:
 *     MiGetSubsectionCharges @ 0x1402699F8 (MiGetSubsectionCharges.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x14026B278 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiUpdateLastSubsectionSize(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _WORD *v3; // r15
  __int64 v5; // rsi
  int v7; // ebx
  volatile LONG *v8; // rbp
  KIRQL v9; // r8
  __int64 SubsectionHoldingCrossPartitionReferences; // rax
  __int64 v11; // rax
  int v12; // r9d
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r10
  __int16 v16; // r9
  __int64 v17; // rax
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
    v11 = MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences);
    v13 = 0x3FFFFFFFLL;
    if ( (*(_DWORD *)(v11 + 48) & 0x3FFFFFFF) == 0 )
    {
      if ( v7 == 1 )
        v7 = v12;
LABEL_6:
      *(_DWORD *)(a1 + 52) ^= (*(_DWORD *)(a1 + 52) ^ (*(_DWORD *)(a1 + 52) - v5)) & 0x3FFFFFFF;
      break;
    }
    if ( v7 )
      goto LABEL_6;
    LOBYTE(v13) = v9;
    MiReleaseSpinLockExclusive(v8, v13);
    result = MiGetSubsectionCharges(a1, v5);
    if ( (int)result < 0 )
      return result;
    v7 = 1;
  }
  *(_DWORD *)(a1 + 40) = (*a2 >> 12) - *(_DWORD *)(a1 + 36);
  v14 = *(_DWORD *)(a1 + 32) & 0xFFFFFu | (*(_DWORD *)a2 << 20);
  *(_DWORD *)(a1 + 32) = v14;
  LOBYTE(v14) = v9;
  MiReleaseSpinLockExclusive(v8, v14);
  if ( (_DWORD)v5 )
  {
    v15 = *(_QWORD *)v3;
    _InterlockedExchange64(
      (volatile __int64 *)(*(_QWORD *)v3 + 24LL),
      _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v3 + 24LL), -1LL, -1LL) + (v5 << 12));
    v16 = *(_WORD *)(v15 + 12);
    v17 = *(unsigned int *)(v15 + 8);
    *(_DWORD *)(v15 + 8) = v5 + v17;
    *(_WORD *)(v15 + 12) = v16 ^ (v16 ^ ((v5 + (v17 | ((unsigned __int64)(v16 & 0x3FF) << 32))) >> 32)) & 0x3FF;
    if ( v7 == 2 )
      MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E300C8 + (v3[30] & 0x3FF)), 1LL, v5);
  }
  return 0LL;
}
