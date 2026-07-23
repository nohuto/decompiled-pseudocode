/*
 * XREFs of MiLargePfnPromoteCandidate @ 0x1403126B0
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x140312724 (MiCoalesceFreeLargePages.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x14049DD64 (MiChangePageAttributeLargeFreeZeroPage.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 */

_BOOL8 __fastcall MiLargePfnPromoteCandidate(__int64 a1, __int64 a2, int a3)
{
  return (HIWORD(*(_DWORD *)(a2 + 32)) & 7u) <= 1
      && (*(_QWORD *)(a2 + 40) & 0x10000000000LL) != 0
      && *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL)) == a1
      && (*(_DWORD *)(a2 + 32) & 0x40000000) == 0
      && (*(_QWORD *)(a2 + 40) & 0x20000000000LL) == 0
      && (unsigned int)MiGetPfnPageSizeIndex(a2) == a3;
}
