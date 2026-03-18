/*
 * XREFs of MiCaptureDirtyBitToPfn @ 0x14023ED00
 * Callers:
 *     MiResolveTransitionFault @ 0x14021A2F0 (MiResolveTransitionFault.c)
 *     MiWsleFree @ 0x14021BFD0 (MiWsleFree.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MiDecommitSharedPageTail @ 0x14023E140 (MiDecommitSharedPageTail.c)
 *     MmSetAddressRangeModifiedEx @ 0x140240600 (MmSetAddressRangeModifiedEx.c)
 *     MiLockPageTablePage @ 0x140284A20 (MiLockPageTablePage.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402C86D0 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiOutSwapWorkingSetPte @ 0x140302690 (MiOutSwapWorkingSetPte.c)
 *     MmProtectPool @ 0x1403889FC (MmProtectPool.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403E4774 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiCompleteSecureProcessFault @ 0x140435C20 (MiCompleteSecureProcessFault.c)
 *     MiSetSystemCodeProtection @ 0x140435F3C (MiSetSystemCodeProtection.c)
 *     MiMakeFaultPfnActive @ 0x140462FB4 (MiMakeFaultPfnActive.c)
 *     MiLockPagedAddress @ 0x14047910C (MiLockPagedAddress.c)
 *     MiResolveProtoCombine @ 0x140481604 (MiResolveProtoCombine.c)
 *     MmUpdateUserShadowStackValue @ 0x1404873D8 (MmUpdateUserShadowStackValue.c)
 *     MiTrimSystemImagePages @ 0x1404A7A78 (MiTrimSystemImagePages.c)
 *     MiMakeOutswappedPageResident @ 0x1404A8280 (MiMakeOutswappedPageResident.c)
 *     MiDecommitPrivatePageTail @ 0x1404F2240 (MiDecommitPrivatePageTail.c)
 *     MiLockDriverPageRange @ 0x14066AEB0 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x14066C12C (MiReplaceImportEntry.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x14067FD28 (MmDbgMarkPfnModifiedWorker.c)
 *     MiScanPagefileSpace @ 0x1407EF7B0 (MiScanPagefileSpace.c)
 * Callees:
 *     MiClearPageFileReservation @ 0x140213DEC (MiClearPageFileReservation.c)
 *     MiCanPfnOriginalPteBeLost @ 0x14039E1D0 (MiCanPfnOriginalPteBeLost.c)
 */

__int64 __fastcall MiCaptureDirtyBitToPfn(__int64 a1)
{
  __int64 v2; // r11
  char v3; // cl
  int v5; // [rsp+30h] [rbp+8h]
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = *(_BYTE *)(a1 + 34);
  if ( (v3 & 0x10) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 && (v3 & 8) == 0 )
    {
      v6 = *(_QWORD *)(a1 + 16);
      if ( (v6 & 4) != 0 )
      {
        *(_QWORD *)(a1 + 16) &= ~4uLL;
        MiClearPageFileReservation(&v6);
        v2 = v6;
      }
      else
      {
        v6 = 0LL;
      }
    }
    v5 = *(_DWORD *)(a1 + 32);
    if ( (v5 & 0x80000) != 0
      && (unsigned int)MiCanPfnOriginalPteBeLost(a1)
      && (*(_BYTE *)(a1 + 34) & 0x10) == 0
      && (*(_DWORD *)(a1 + 16) & 4) != 0 )
    {
      *(_QWORD *)(a1 + 16) &= ~4uLL;
    }
    BYTE2(v5) |= 0x10u;
    *(_DWORD *)(a1 + 32) = v5;
  }
  return v2;
}
