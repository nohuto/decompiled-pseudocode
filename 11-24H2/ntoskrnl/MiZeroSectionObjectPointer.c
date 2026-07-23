/*
 * XREFs of MiZeroSectionObjectPointer @ 0x14049A734
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14098BD70 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall MiZeroSectionObjectPointer(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v4; // rsi
  KIRQL v5; // al
  __int64 v6; // rdi
  unsigned __int8 v7; // bl

  v4 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL);
  if ( (a3 & 0x1000000) == 0 )
    v4 = *(_QWORD **)(a1 + 40);
  KeAbPostRelease((ULONG_PTR)v4);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  v6 = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 80) = 0LL;
  v7 = v5;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2CD40);
  *v4 = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2CD40);
  *(_DWORD *)(a2 + 56) |= 0xC0000u;
  MiReleaseSpinLockExclusive((_DWORD *)(a2 + 72), v7);
  return v6;
}
