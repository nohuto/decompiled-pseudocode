/*
 * XREFs of MiStandbyPageContentsIntact @ 0x140225484
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14020754C (MiCopyDataPageToImagePage.c)
 *     MiStandbyPageStillCombineCandidate @ 0x140224D58 (MiStandbyPageStillCombineCandidate.c)
 *     MiConfirmCombinePageContents @ 0x1402252E0 (MiConfirmCombinePageContents.c)
 *     MiTranslatePageForCopy @ 0x1403783E0 (MiTranslatePageForCopy.c)
 *     MiCopyHeaderIfResident @ 0x140476ABC (MiCopyHeaderIfResident.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiGetPfnPriority @ 0x140230FB0 (MiGetPfnPriority.c)
 *     MiCheckWriteInProgressFault @ 0x140481D54 (MiCheckWriteInProgressFault.c)
 */

__int64 __fastcall MiStandbyPageContentsIntact(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r8
  unsigned int PfnPriority; // eax
  __int64 v5; // r10
  unsigned int v6; // r11d

  LOBYTE(a2) = *(_BYTE *)(a1 + 34);
  v2 = a1;
  if ( (a2 & 8) != 0 && (((a2 & 7) - 3) & 0xFB) == 0 && (int)MiCheckWriteInProgressFault(a1, a2, a1) < 0 )
    return 0LL;
  if ( (a2 & 7) != 2 )
    return 1LL;
  if ( (a2 & 0x20) == 0 && (*(_BYTE *)(v2 + 35) & 0x10) == 0 )
  {
    if ( !(unsigned __int16)*(_DWORD *)(v2 + 32)
      && ((unsigned int)MiGetPfnSlabType(v2) == 9 || (*(_DWORD *)(v3 + 32) & 0x8000000) == 0) )
    {
      PfnPriority = MiGetPfnPriority(v3);
      LOBYTE(v6) = PfnPriority >= *(unsigned __int8 *)(v5 + 16100);
      return v6;
    }
    return 1LL;
  }
  return 0LL;
}
