/*
 * XREFs of MiConfirmCombinePageContents @ 0x1403F1C84
 * Callers:
 *     MiCombineWithExisting @ 0x140294840 (MiCombineWithExisting.c)
 *     MiCombineWithStandbyExisting @ 0x1403F1098 (MiCombineWithStandbyExisting.c)
 * Callees:
 *     MiIsPageOnBadList @ 0x14030E80C (MiIsPageOnBadList.c)
 *     MiComparePages @ 0x1403F1D20 (MiComparePages.c)
 *     MiStandbyPageContentsIntact @ 0x1403F1E24 (MiStandbyPageContentsIntact.c)
 */

__int64 __fastcall MiConfirmCombinePageContents(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9

  if ( (*(_DWORD *)(48 * a2 - 0x220000000000LL + 32) & 0x40000000) != 0
    || MiIsPageOnBadList(48 * a2 - 0x220000000000LL)
    || v3 != *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL))
    || !(unsigned int)MiStandbyPageContentsIntact(v4) )
  {
    return 0LL;
  }
  else
  {
    return (unsigned __int8)MiComparePages(*(_QWORD *)(a1 + 96) + 4096LL);
  }
}
