/*
 * XREFs of ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0044030
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0035FD4 (-vCleanupDCs@@YAXK@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C00381D0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     GrepDeleteDC @ 0x1C003B5E0 (GrepDeleteDC.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003CBC0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C003D250 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C003FDC4 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00408D0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C0041980 (NtGdiDeleteObjectApp.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C0041FC0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00421F0 (HmgDecrementShareReferenceCountEx.c)
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C00425D0 (HmgDecrementExclusiveReferenceCountEx.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0043040 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x1C0043180 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0043570 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C00440F0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00442B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0044F10 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0045760 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0045AA0 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0046370 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00483E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     HmgModifyHandleType @ 0x1C0060BA0 (HmgModifyHandleType.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0080460 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x1C0088250 (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 *     HmgSetLock @ 0x1C008A3C0 (HmgSetLock.c)
 *     GreGetObjectOwner @ 0x1C008A450 (GreGetObjectOwner.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C008B090 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     EngUnlockSurface @ 0x1C0091EE0 (EngUnlockSurface.c)
 *     MultiUserCleanupDCs @ 0x1C00A08D4 (MultiUserCleanupDCs.c)
 *     HmgReferenceCheckLock @ 0x1C00AFD80 (HmgReferenceCheckLock.c)
 *     HmgValidHandle @ 0x1C00B8170 (HmgValidHandle.c)
 *     NtGdiGetEntry @ 0x1C0158B60 (NtGdiGetEntry.c)
 * Callees:
 *     <none>
 */

struct _ENTRY *__fastcall GdiHandleEntryDirectory::GetEntry(GdiHandleEntryDirectory *this, unsigned int a2, char a3)
{
  unsigned int v4; // r10d
  unsigned int v5; // r9d
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // r10
  __int64 v11; // rdx

  v4 = *((_DWORD *)this + 514);
  v5 = a2;
  if ( a2 < v4 + ((*((unsigned __int16 *)this + 1) + 0xFFFF) << 16) )
  {
    if ( a2 >= v4 )
    {
      v11 = ((a2 - v4) >> 16) + 1;
      v7 = *((_QWORD *)this + v11 + 1);
      v5 += ((1 - (_DWORD)v11) << 16) - v4;
      v6 = v7;
    }
    else
    {
      v6 = *((_QWORD *)this + 1);
      v7 = v6;
    }
    v8 = 0LL;
    if ( a3 )
    {
      if ( v5 >= *(_DWORD *)(v7 + 20) )
        return (struct _ENTRY *)v8;
      v9 = v5;
    }
    else
    {
      if ( v5 >= *(_DWORD *)(v6 + 20) )
        return (struct _ENTRY *)v8;
      v9 = v5;
      if ( !*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v7 + 24) + 8 * ((unsigned __int64)v5 >> 8))
                      + 16LL * (unsigned __int8)v5
                      + 8) )
        return (struct _ENTRY *)v8;
    }
    return (struct _ENTRY *)(*(_QWORD *)v7 + 24 * v9);
  }
  return 0LL;
}
