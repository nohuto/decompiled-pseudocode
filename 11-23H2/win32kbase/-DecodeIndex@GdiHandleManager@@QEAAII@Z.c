/*
 * XREFs of ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00442B0
 * Callers:
 *     HmgNextOwned @ 0x1C0035880 (HmgNextOwned.c)
 *     HmgSafeNextObjt @ 0x1C0035C80 (HmgSafeNextObjt.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0035FD4 (-vCleanupDCs@@YAXK@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C00381D0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C003A440 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     GreSetBitmapOwner @ 0x1C003AA60 (GreSetBitmapOwner.c)
 *     HmgReplaceObject @ 0x1C003C700 (HmgReplaceObject.c)
 *     bDeleteRegion @ 0x1C003DA20 (bDeleteRegion.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C003FDC4 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C004005C (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C00402A0 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C00404E0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00408D0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     INC_SHARE_REF_CNT @ 0x1C00417D0 (INC_SHARE_REF_CNT.c)
 *     HmgShareLockEx @ 0x1C0041D30 (HmgShareLockEx.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0042440 (DEC_SHARE_REF_CNT.c)
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C00425D0 (HmgDecrementExclusiveReferenceCountEx.c)
 *     HmgLock @ 0x1C0042980 (HmgLock.c)
 *     HmgShareLockCheck @ 0x1C0042BA0 (HmgShareLockCheck.c)
 *     HmgPentryFromPobj @ 0x1C0042F00 (HmgPentryFromPobj.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x1C0043180 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C0043AB0 (-ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     HmgLockEx @ 0x1C0043B50 (HmgLockEx.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C00441D0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C0044560 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0044F10 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0045760 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0046370 (--1SURFMEM@@QEAA@XZ.c)
 *     GreDeleteObject @ 0x1C00472A0 (GreDeleteObject.c)
 *     HmgRemoveObject @ 0x1C0047F80 (HmgRemoveObject.c)
 *     HmgModifyHandleType @ 0x1C0060BA0 (HmgModifyHandleType.c)
 *     HmgShareLock @ 0x1C00622A0 (HmgShareLock.c)
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x1C0088250 (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 *     HmgSetLock @ 0x1C008A3C0 (HmgSetLock.c)
 *     GreGetObjectOwner @ 0x1C008A450 (GreGetObjectOwner.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C008B660 (HmgShareLockCheckIgnoreStockBit.c)
 *     EngUnlockSurface @ 0x1C0091EE0 (EngUnlockSurface.c)
 *     HmgMarkLazyDelete @ 0x1C0094880 (HmgMarkLazyDelete.c)
 *     HmgPrefetchAllObjt @ 0x1C00961F0 (HmgPrefetchAllObjt.c)
 *     HmgShareUnlockRemoveObject @ 0x1C0099840 (HmgShareUnlockRemoveObject.c)
 *     MultiUserCleanupDCs @ 0x1C00A08D4 (MultiUserCleanupDCs.c)
 *     HmgReferenceCheckLock @ 0x1C00AFD80 (HmgReferenceCheckLock.c)
 *     HmgValidHandle @ 0x1C00B8170 (HmgValidHandle.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXXZ @ 0x1C00BF264 (-vReleaseCurrentpMapProcForSurfaces@@YAXXZ.c)
 *     NtGdiGetEntry @ 0x1C0158B60 (NtGdiGetEntry.c)
 *     HmgNextGarbageCollectible @ 0x1C0159430 (HmgNextGarbageCollectible.c)
 *     HmgQueryAltLock @ 0x1C0159570 (HmgQueryAltLock.c)
 *     HmgSwapLockedHandleContents @ 0x1C0159640 (HmgSwapLockedHandleContents.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C0235F80 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0044030 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall GdiHandleManager::DecodeIndex(GdiHandleEntryDirectory **this, unsigned int a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  if ( a2 < 0x10000 )
    return a2;
  if ( *(_DWORD *)this <= 0x10000u )
    return (unsigned __int16)a2;
  if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(this[2], (unsigned __int16)a2, 1) + 13) == HIWORD(a2) )
    return (unsigned __int16)v2;
  return v2;
}
