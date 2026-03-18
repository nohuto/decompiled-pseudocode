/*
 * XREFs of MiStandbyPageContentsIntact @ 0x140314AD4
 * Callers:
 *     MiStandbyPageStillCombineCandidate @ 0x140314020 (MiStandbyPageStillCombineCandidate.c)
 *     MiCopyDataPageToImagePage @ 0x1403142D8 (MiCopyDataPageToImagePage.c)
 *     MiConfirmCombinePageContents @ 0x140314938 (MiConfirmCombinePageContents.c)
 *     MiTranslatePageForCopy @ 0x1403961F0 (MiTranslatePageForCopy.c)
 *     MiCopyHeaderIfResident @ 0x1404765F4 (MiCopyHeaderIfResident.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiCheckWriteInProgressFault @ 0x140482B40 (MiCheckWriteInProgressFault.c)
 */

__int64 __fastcall MiStandbyPageContentsIntact(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  unsigned __int64 v5; // r8
  unsigned int PfnPriority; // eax
  __int64 v7; // r10
  unsigned int v8; // r11d

  LOBYTE(a2) = *(_BYTE *)(a1 + 34);
  v4 = a1;
  if ( (a2 & 8) != 0 && (((a2 & 7) - 3) & 0xFB) == 0 && (int)MiCheckWriteInProgressFault(a1, a2, a1, a4) < 0 )
    return 0LL;
  if ( (a2 & 7) != 2 )
    return 1LL;
  if ( (a2 & 0x20) == 0 && (*(_BYTE *)(v4 + 35) & 0x10) == 0 )
  {
    if ( !(unsigned __int16)*(_DWORD *)(v4 + 32)
      && ((unsigned int)MiGetPfnSlabType(v4) == 9 || (*(_DWORD *)(v5 + 32) & 0x8000000) == 0) )
    {
      PfnPriority = MiGetPfnPriority(v5);
      LOBYTE(v8) = PfnPriority >= *(unsigned __int8 *)(v7 + 16100);
      return v8;
    }
    return 1LL;
  }
  return 0LL;
}
