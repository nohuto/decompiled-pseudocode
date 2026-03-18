/*
 * XREFs of ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x140035F20
 * Callers:
 *     bDeleteBrush @ 0x140014820 (bDeleteBrush.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x140014D00 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400150B4 (-vCleanupDCs@@YAXK@Z.c)
 *     HmgModifyHandleType @ 0x140016130 (HmgModifyHandleType.c)
 *     HmgSetOwner @ 0x14002DC20 (HmgSetOwner.c)
 *     bPEBCacheHandle @ 0x14002DDC0 (bPEBCacheHandle.c)
 *     EngUnlockSurface @ 0x140035B00 (EngUnlockSurface.c)
 *     HmgQueryAltLock @ 0x140084650 (HmgQueryAltLock.c)
 *     GreSetBrushOwner @ 0x1400857A0 (GreSetBrushOwner.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXXZ @ 0x1400897A0 (-vReleaseCurrentpMapProcForSurfaces@@YAXXZ.c)
 *     HmgNextGarbageCollectible @ 0x1400899DC (HmgNextGarbageCollectible.c)
 *     HmgSwapLockedHandleContents @ 0x1400B6AD0 (HmgSwapLockedHandleContents.c)
 *     HmgReferenceCheckLock @ 0x1400D7AB0 (HmgReferenceCheckLock.c)
 *     HmgShareUnlockRemoveObject @ 0x1400F6340 (HmgShareUnlockRemoveObject.c)
 *     HmgShareLockIgnoreStockBit @ 0x1401047F0 (HmgShareLockIgnoreStockBit.c)
 *     HmgSetLock @ 0x1401268B8 (HmgSetLock.c)
 *     HmgUnlock @ 0x140131968 (HmgUnlock.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z @ 0x1401C1A94 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z.c)
 *     ?Protect@ThreadRestrictNewHandlesRegion@@SA_NPEAU_GRETHREAD@@PEAX@Z @ 0x1401C1DD0 (-Protect@ThreadRestrictNewHandlesRegion@@SA_NPEAU_GRETHREAD@@PEAX@Z.c)
 *     HmgFreeFast @ 0x1401C2310 (HmgFreeFast.c)
 *     HmgQueryLock @ 0x1401C23E0 (HmgQueryLock.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z @ 0x1401C4C40 (-DEC_SHARE_REF_CNT_LAZY0_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C5800 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 * Callees:
 *     <none>
 */

struct OBJECT *__fastcall GdiHandleManager::GetEntryObject(GdiHandleManager *this, unsigned int a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r10
  unsigned int v9; // r8d
  __int64 v10; // rax

  v2 = 0LL;
  if ( a2 >= 0x10000 )
  {
    v3 = (unsigned __int16)a2;
    if ( *(_DWORD *)this <= 0x10000u )
    {
      a2 = (unsigned __int16)a2;
    }
    else
    {
      v4 = *((_QWORD *)this + 2);
      v5 = *(_DWORD *)(v4 + 2056);
      if ( (unsigned __int16)a2 >= v5 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
      {
        v7 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)a2 >= v5 )
        {
          v6 = *(_QWORD *)(v4 + 8LL * ((((unsigned __int16)a2 - v5) >> 16) + 1) + 8);
          v3 = -65536 * (((unsigned __int16)a2 - v5) >> 16) - v5 + (unsigned __int16)a2;
        }
        else
        {
          v6 = *(_QWORD *)(v4 + 8);
        }
        v7 = 0LL;
        if ( (unsigned int)v3 < *(_DWORD *)(v6 + 20) )
          v7 = *(_QWORD *)v6 + 24 * v3;
        LODWORD(v3) = (unsigned __int16)a2;
      }
      if ( *(unsigned __int8 *)(v7 + 13) == HIWORD(a2) )
        a2 = v3;
    }
  }
  v8 = *((_QWORD *)this + 2);
  v9 = *(_DWORD *)(v8 + 2056);
  if ( a2 < v9 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
  {
    if ( a2 >= v9 )
    {
      v10 = *(_QWORD *)(v8 + 8LL * (((a2 - v9) >> 16) + 1) + 8);
      a2 += -65536 * ((a2 - v9) >> 16) - v9;
    }
    else
    {
      v10 = *(_QWORD *)(v8 + 8);
    }
    if ( a2 < *(_DWORD *)(v10 + 20) )
      return *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * ((unsigned __int64)a2 >> 8))
                               + 16LL * (unsigned __int8)a2
                               + 8);
  }
  return (struct OBJECT *)v2;
}
