/*
 * XREFs of MiZeroSectionObjectPointer @ 0x1404A09B4
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14093D200 (MiCreateImageOrDataSection.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
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
  ExAcquireSpinLockExclusiveAtDpcLevel(&SpinLock);
  *v4 = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
  *(_DWORD *)(a2 + 56) |= 0xC0000u;
  MiReleaseSpinLockExclusive((_DWORD *)(a2 + 72), v7);
  return v6;
}
