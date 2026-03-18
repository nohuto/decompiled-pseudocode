/*
 * XREFs of ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330
 * Callers:
 *     HmgUnlock @ 0x1C000B4A8 (HmgUnlock.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C00381D0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C003A440 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     GreSetBitmapOwner @ 0x1C003AA60 (GreSetBitmapOwner.c)
 *     HmgReplaceObject @ 0x1C003C700 (HmgReplaceObject.c)
 *     bDeleteRegion @ 0x1C003DA20 (bDeleteRegion.c)
 *     HmgSetOwner @ 0x1C003E5F0 (HmgSetOwner.c)
 *     HmgIncrementShareReferenceCount @ 0x1C003FFA0 (HmgIncrementShareReferenceCount.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C004005C (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C00404E0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00408D0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     HmgShareLockEx @ 0x1C0041D30 (HmgShareLockEx.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00421F0 (HmgDecrementShareReferenceCountEx.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0042440 (DEC_SHARE_REF_CNT.c)
 *     HmgLock @ 0x1C0042980 (HmgLock.c)
 *     HmgShareLockCheck @ 0x1C0042BA0 (HmgShareLockCheck.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0043570 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     HmgLockEx @ 0x1C0043B50 (HmgLockEx.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C00443E0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C0044560 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0044F10 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0045680 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0046370 (--1SURFMEM@@QEAA@XZ.c)
 *     GreDeleteObject @ 0x1C00472A0 (GreDeleteObject.c)
 *     HmgRemoveObject @ 0x1C0047F80 (HmgRemoveObject.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00483E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreSetDCOwnerEx @ 0x1C004BDD0 (GreSetDCOwnerEx.c)
 *     HmgLockIgnoreOwner @ 0x1C005C9F0 (HmgLockIgnoreOwner.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0060078 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushOwner @ 0x1C00601D0 (GreSetBrushOwner.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00605C0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     HmgMarkUndeletable @ 0x1C0060900 (HmgMarkUndeletable.c)
 *     HmgLockAndModifyHandleType @ 0x1C0060B30 (HmgLockAndModifyHandleType.c)
 *     HmgShareLock @ 0x1C00622A0 (HmgShareLock.c)
 *     HmgFree @ 0x1C0088BA0 (HmgFree.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C008AFB0 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C008B090 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C008B660 (HmgShareLockCheckIgnoreStockBit.c)
 *     HmgMarkLazyDelete @ 0x1C0094880 (HmgMarkLazyDelete.c)
 *     HmgShareUnlockRemoveObject @ 0x1C0099840 (HmgShareUnlockRemoveObject.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C009D9C0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgMarkDeletable @ 0x1C009DCF0 (HmgMarkDeletable.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C00AC70C (HmgShareLockIgnoreStockBit.c)
 *     bDeleteBrush @ 0x1C00C64F0 (bDeleteBrush.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D2E48 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D2F40 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D3054 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D3170 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 *     GreSetSolidBrushLight @ 0x1C0150E70 (GreSetSolidBrushLight.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C0158E1C (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     HmgMarkUnXferable @ 0x1C01592D0 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x1C0159390 (HmgMarkXferable.c)
 *     HmgSwapLockedHandleContents @ 0x1C0159640 (HmgSwapLockedHandleContents.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C016C130 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z @ 0x1C0043510 (-ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00442B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall HANDLELOCK::vUnlock(HANDLELOCK *this)
{
  GdiHandleManager *v2; // rsi
  __int64 v3; // rcx
  GdiHandleManager *v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // r8d
  unsigned int v8; // r9d
  __int64 v9; // r10
  _DWORD *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned int v14; // r9d
  GdiHandleEntryTable *v15; // rcx

  v2 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 8008LL);
  v4 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v3) + 24) + 8008LL);
  v5 = GdiHandleManager::DecodeIndex(v4, **(_DWORD **)this & 0xFFFFFF);
  v6 = *((_QWORD *)v4 + 2);
  v7 = v5;
  v8 = *(_DWORD *)(v6 + 2056);
  if ( v5 >= v8 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16)
    || (v5 >= v8
      ? (v9 = *(_QWORD *)(v6 + 8LL * (((v5 - v8) >> 16) + 1) + 8), v7 = -65536 * ((v5 - v8) >> 16) - v8 + v5)
      : (v9 = *(_QWORD *)(v6 + 8)),
        v7 >= *(_DWORD *)(v9 + 20)) )
  {
    v10 = 0LL;
  }
  else
  {
    v10 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * ((unsigned __int64)v7 >> 8))
                     + 16LL * (unsigned __int8)v7
                     + 8);
  }
  v11 = GdiHandleManager::DecodeIndex(v2, (unsigned __int16)*v10 | (*v10 >> 8) & 0xFF0000);
  v12 = *((_QWORD *)v2 + 2);
  v13 = v11;
  v14 = *(_DWORD *)(v12 + 2056);
  if ( v11 < v14 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16) )
  {
    if ( v11 >= v14 )
    {
      v15 = *(GdiHandleEntryTable **)(v12 + 8LL * (((v11 - v14) >> 16) + 1) + 8);
      v13 = -65536 * ((v11 - v14) >> 16) - v14 + v11;
    }
    else
    {
      v15 = *(GdiHandleEntryTable **)(v12 + 8);
    }
    GdiHandleEntryTable::ReleaseEntryLock(v15, v13);
  }
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = 0LL;
  KeLeaveCriticalRegion();
}
