/*
 * XREFs of MiStandbyPageStillCombineCandidate @ 0x140314020
 * Callers:
 *     MiCombineWithStandbyExisting @ 0x140313D4C (MiCombineWithStandbyExisting.c)
 *     MiCombineInitialInstance @ 0x14036C3E0 (MiCombineInitialInstance.c)
 * Callees:
 *     MiStandbyPageContentsIntact @ 0x140314AD4 (MiStandbyPageContentsIntact.c)
 */

_BOOL8 __fastcall MiStandbyPageStillCombineCandidate(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  return !(unsigned __int16)*(_DWORD *)(a1 + 32)
      && (unsigned __int8)((*(_BYTE *)(a1 + 34) & 7) - 2) <= 1u
      && (unsigned int)MiStandbyPageContentsIntact()
      && (*(_DWORD *)(a1 + 32) & 0x40000000) == 0
      && a2 == *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL))
      && a3 == (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL)
      && ((*(_DWORD *)(a1 + 16) >> 5) & 0x1F) == a4;
}
