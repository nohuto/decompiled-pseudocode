/*
 * XREFs of ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x14000D300 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?HmgpThreadUnrestrictHandle@@YAXI@Z @ 0x14000EB7C (-HmgpThreadUnrestrictHandle@@YAXI@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x140010220 (--1DCOBJA@@QEAA@XZ.c)
 *     bDeleteBrush @ 0x140014820 (bDeleteBrush.c)
 *     HmgLockAndModifyHandleType @ 0x140016090 (HmgLockAndModifyHandleType.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x140021A94 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x140022A58 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgSetOwner @ 0x14002DC20 (HmgSetOwner.c)
 *     bPEBCacheHandle @ 0x14002DDC0 (bPEBCacheHandle.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x14002E270 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x14002E480 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x14002EB90 (-HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x1400307E0 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     ?HmgShareLockCheck2@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@E@Z @ 0x140031290 (-HmgShareLockCheck2@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@E@Z.c)
 *     HmgShareLock @ 0x140031760 (HmgShareLock.c)
 *     HmgRemoveObject @ 0x140031C10 (HmgRemoveObject.c)
 *     ?HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z @ 0x140035CEC (-HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z.c)
 *     bDeleteSurface @ 0x1400365C0 (bDeleteSurface.c)
 *     EngLockSurface @ 0x140036810 (EngLockSurface.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1400855A4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushOwner @ 0x1400857A0 (GreSetBrushOwner.c)
 *     GreSetSolidBrushLight @ 0x140086050 (GreSetSolidBrushLight.c)
 *     HmgSwapLockedHandleContents @ 0x1400B6AD0 (HmgSwapLockedHandleContents.c)
 *     HmgMarkLazyDelete @ 0x1400B6D00 (HmgMarkLazyDelete.c)
 *     HmgReplaceObject @ 0x1400BB8D0 (HmgReplaceObject.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C6030 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1400C6A40 (HmgShareLockCheckIgnoreStockBit.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1400D0C38 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     HmgShareUnlockRemoveObject @ 0x1400F6340 (HmgShareUnlockRemoveObject.c)
 *     HmgShareLockIgnoreStockBit @ 0x1401047F0 (HmgShareLockIgnoreStockBit.c)
 *     HmgMarkDeletable @ 0x1401077F0 (HmgMarkDeletable.c)
 *     HmgMarkUndeletable @ 0x14010BC90 (HmgMarkUndeletable.c)
 *     HmgUnlock @ 0x140131968 (HmgUnlock.c)
 *     HmgMarkUnXferable @ 0x14013F370 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x140143340 (HmgMarkXferable.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x14019C180 (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z @ 0x1401C1A94 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z.c)
 *     ?HmgDecrementExclusiveReferenceCountExFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@W4HandleLockOptions@@PEAH@Z @ 0x1401C1B50 (-HmgDecrementExclusiveReferenceCountExFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@.c)
 *     ?HmgDecrementShareReferenceCountExFastOpt@@YAKAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@PEAH@Z @ 0x1401C1BDC (-HmgDecrementShareReferenceCountExFastOpt@@YAKAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@PEA.c)
 *     ?HmgIncrementShareReferenceCountFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@@Z @ 0x1401C1CA4 (-HmgIncrementShareReferenceCountFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@@Z.c)
 *     ?Protect@ThreadRestrictNewHandlesRegion@@SA_NPEAU_GRETHREAD@@PEAX@Z @ 0x1401C1DD0 (-Protect@ThreadRestrictNewHandlesRegion@@SA_NPEAU_GRETHREAD@@PEAX@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z @ 0x1401C4C40 (-DEC_SHARE_REF_CNT_LAZY0_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z.c)
 *     HANDLELOCK_vUnlock @ 0x1401C4E10 (HANDLELOCK_vUnlock.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C5800 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CDF18 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CDFF8 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CE0E8 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CE1E0 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CE2C0 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HANDLELOCK::vUnlock(HANDLELOCK *this)
{
  __int64 v2; // r9
  unsigned __int64 v3; // rdx
  unsigned int v4; // r8d
  __int64 v5; // r10
  unsigned int v6; // r11d
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // r10
  unsigned int v10; // r8d
  __int64 v11; // r11
  _DWORD *v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // r8
  unsigned int v15; // r11d
  __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // r9
  unsigned int v19; // r8d
  __int64 v20; // r10

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 5672LL);
  v3 = **(unsigned int **)this;
  if ( (unsigned int)v3 >= 0x10000 )
  {
    v4 = (unsigned __int16)v3;
    if ( *(_DWORD *)v2 <= 0x10000u )
    {
      v3 = (unsigned __int16)v3;
    }
    else
    {
      v5 = *(_QWORD *)(v2 + 16);
      v6 = *(_DWORD *)(v5 + 2056);
      if ( (unsigned __int16)v3 >= v6 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
      {
        v8 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v3 >= v6 )
        {
          v7 = *(_QWORD *)(v5 + 8LL * ((((unsigned __int16)v3 - v6) >> 16) + 1) + 8);
          v4 = -65536 * (((unsigned __int16)v3 - v6) >> 16) - v6 + (unsigned __int16)v3;
        }
        else
        {
          v7 = *(_QWORD *)(v5 + 8);
        }
        v8 = 0LL;
        if ( v4 < *(_DWORD *)(v7 + 20) )
          v8 = *(_QWORD *)v7 + 24LL * v4;
      }
      if ( *(unsigned __int8 *)(v8 + 13) == WORD1(v3) )
        v3 = (unsigned __int16)v3;
    }
  }
  v9 = *(_QWORD *)(v2 + 16);
  v10 = *(_DWORD *)(v9 + 2056);
  if ( (unsigned int)v3 >= v10 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16)
    || ((unsigned int)v3 >= v10
      ? (v11 = *(_QWORD *)(v9 + 8LL * ((((unsigned int)v3 - v10) >> 16) + 1) + 8),
         v3 = -65536 * (((unsigned int)v3 - v10) >> 16) - v10 + (unsigned int)v3)
      : (v11 = *(_QWORD *)(v9 + 8)),
        (unsigned int)v3 >= *(_DWORD *)(v11 + 20)) )
  {
    v12 = 0LL;
  }
  else
  {
    v12 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * (v3 >> 8)) + 16LL * (unsigned __int8)v3 + 8);
  }
  v13 = (unsigned __int16)*v12 | (*v12 >> 8) & 0xFF0000;
  if ( v13 >= 0x10000 )
  {
    v14 = (unsigned __int16)*v12;
    if ( *(_DWORD *)v2 <= 0x10000u )
    {
      v13 = (unsigned __int16)*v12;
    }
    else
    {
      v15 = *(_DWORD *)(v9 + 2056);
      if ( (unsigned __int16)*v12 >= v15 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
      {
        v17 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)*v12 >= v15 )
        {
          v16 = *(_QWORD *)(v9 + 8LL * ((((unsigned __int16)*v12 - v15) >> 16) + 1) + 8);
          v14 = -65536 * (((unsigned __int16)v13 - v15) >> 16) - v15 + (unsigned __int16)v13;
        }
        else
        {
          v16 = *(_QWORD *)(v9 + 8);
        }
        v17 = 0LL;
        if ( (unsigned int)v14 < *(_DWORD *)(v16 + 20) )
          v17 = *(_QWORD *)v16 + 24 * v14;
      }
      if ( *(unsigned __int8 *)(v17 + 13) == HIWORD(v13) )
        v13 = (unsigned __int16)v13;
    }
  }
  v18 = *(_QWORD *)(v2 + 16);
  v19 = *(_DWORD *)(v18 + 2056);
  if ( v13 < v19 + ((*(unsigned __int16 *)(v18 + 2) + 0xFFFF) << 16) )
  {
    if ( v13 >= v19 )
    {
      v20 = *(_QWORD *)(v18 + 8LL * (((v13 - v19) >> 16) + 1) + 8);
      v13 += -65536 * ((v13 - v19) >> 16) - v19;
    }
    else
    {
      v20 = *(_QWORD *)(v18 + 8);
    }
    *(_BYTE *)(*(_QWORD *)v20 + 24LL * v13 + 6) = 0;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * ((unsigned __int64)v13 >> 8)) + 16LL * (unsigned __int8)v13,
      0LL);
    KeLeaveCriticalRegion();
  }
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = 0LL;
  KeLeaveCriticalRegion();
}
