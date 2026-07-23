/*
 * XREFs of MiCaptureDirtyBitToPfn @ 0x140206E50
 * Callers:
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     MiLockPageTablePage @ 0x140205E40 (MiLockPageTablePage.c)
 *     MiDecommitSharedPageTail @ 0x140206290 (MiDecommitSharedPageTail.c)
 *     MmSetAddressRangeModifiedEx @ 0x140208750 (MmSetAddressRangeModifiedEx.c)
 *     MiResolveTransitionFault @ 0x140247040 (MiResolveTransitionFault.c)
 *     MiWsleFree @ 0x140248D20 (MiWsleFree.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiMakeFaultPfnActive @ 0x14025A13C (MiMakeFaultPfnActive.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiMakeOutswappedPageResident @ 0x1402EF6F4 (MiMakeOutswappedPageResident.c)
 *     MiOutSwapWorkingSetPte @ 0x140346260 (MiOutSwapWorkingSetPte.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MmProtectPool @ 0x14038233C (MmProtectPool.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403D2314 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiCompleteSecureProcessFault @ 0x1404286A0 (MiCompleteSecureProcessFault.c)
 *     MiSetSystemCodeProtection @ 0x1404289BC (MiSetSystemCodeProtection.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14043A2FC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiLockPagedAddress @ 0x14047499C (MiLockPagedAddress.c)
 *     MiResolveProtoCombine @ 0x14047C8C4 (MiResolveProtoCombine.c)
 *     MmUpdateUserShadowStackValue @ 0x140482448 (MmUpdateUserShadowStackValue.c)
 *     MiTrimSystemImagePages @ 0x1404A24CC (MiTrimSystemImagePages.c)
 *     MiDecommitPrivatePageTail @ 0x1404EFCE0 (MiDecommitPrivatePageTail.c)
 *     MiLockDriverPageRange @ 0x14066C080 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x14066D2FC (MiReplaceImportEntry.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140680F28 (MmDbgMarkPfnModifiedWorker.c)
 *     MiScanPagefileSpace @ 0x1407EFD80 (MiScanPagefileSpace.c)
 * Callees:
 *     MiCanPfnOriginalPteBeLost @ 0x1402EE318 (MiCanPfnOriginalPteBeLost.c)
 *     MiClearPageFileReservation @ 0x14030714C (MiClearPageFileReservation.c)
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
