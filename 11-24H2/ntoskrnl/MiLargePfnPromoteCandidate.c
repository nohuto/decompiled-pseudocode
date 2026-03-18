/*
 * XREFs of MiLargePfnPromoteCandidate @ 0x1403087D0
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x140308844 (MiCoalesceFreeLargePages.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1404A2E44 (MiChangePageAttributeLargeFreeZeroPage.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x1403070C0 (MiGetPfnPageSizeIndex.c)
 */

_BOOL8 __fastcall MiLargePfnPromoteCandidate(__int64 a1, __int64 a2, int a3)
{
  return (HIWORD(*(_DWORD *)(a2 + 32)) & 7u) <= 1
      && (*(_QWORD *)(a2 + 40) & 0x10000000000LL) != 0
      && *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL)) == a1
      && (*(_DWORD *)(a2 + 32) & 0x40000000) == 0
      && (*(_QWORD *)(a2 + 40) & 0x20000000000LL) == 0
      && (unsigned int)MiGetPfnPageSizeIndex(a2) == a3;
}
