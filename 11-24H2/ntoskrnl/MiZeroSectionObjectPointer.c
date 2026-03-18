/*
 * XREFs of MiZeroSectionObjectPointer @ 0x1404A00BC
 * Callers:
 *     MiCreateImageOrDataSection @ 0x140941B00 (MiCreateImageOrDataSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
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
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2CC00);
  *v4 = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2CC00);
  *(_DWORD *)(a2 + 56) |= 0xC0000u;
  MiReleaseSpinLockExclusive((_DWORD *)(a2 + 72), v7);
  return v6;
}
