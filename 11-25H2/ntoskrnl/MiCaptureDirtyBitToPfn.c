/*
 * XREFs of MiCaptureDirtyBitToPfn @ 0x14022F970
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x140225A10 (MiOutSwapWorkingSetPte.c)
 *     MiWsleFree @ 0x14022FD60 (MiWsleFree.c)
 *     MiResolveTransitionFault @ 0x140233060 (MiResolveTransitionFault.c)
 *     MiLockPageTablePage @ 0x1402AC2E0 (MiLockPageTablePage.c)
 *     MmSetAddressRangeModifiedEx @ 0x1402C18C0 (MmSetAddressRangeModifiedEx.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033D068 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDecommitSharedPageTail @ 0x140340E30 (MiDecommitSharedPageTail.c)
 *     MiResolveProtoCombine @ 0x14038AD20 (MiResolveProtoCombine.c)
 *     MmProtectPool @ 0x14039FEDC (MmProtectPool.c)
 *     MiCompleteSecureProcessFault @ 0x1403F3164 (MiCompleteSecureProcessFault.c)
 *     MiSetSystemCodeProtection @ 0x1403F3480 (MiSetSystemCodeProtection.c)
 *     MiMakeFaultPfnActive @ 0x1403FD984 (MiMakeFaultPfnActive.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403FDF58 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 *     MiMakeOutswappedPageResident @ 0x14040F088 (MiMakeOutswappedPageResident.c)
 *     MiLockPagedAddress @ 0x140478BA0 (MiLockPagedAddress.c)
 *     MmUpdateUserShadowStackValue @ 0x14048789C (MmUpdateUserShadowStackValue.c)
 *     MiTrimSystemImagePages @ 0x1404A70E0 (MiTrimSystemImagePages.c)
 *     MiDecommitPrivatePageTail @ 0x1404EE270 (MiDecommitPrivatePageTail.c)
 *     MiLockDriverPageRange @ 0x14065F370 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x1406605EC (MiReplaceImportEntry.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140674508 (MmDbgMarkPfnModifiedWorker.c)
 *     MiScanPagefileSpace @ 0x1407DF910 (MiScanPagefileSpace.c)
 * Callees:
 *     MiClearPageFileReservation @ 0x1402CC084 (MiClearPageFileReservation.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140388D44 (MiCanPfnOriginalPteBeLost.c)
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
