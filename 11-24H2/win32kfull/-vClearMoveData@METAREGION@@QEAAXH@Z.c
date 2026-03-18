/*
 * XREFs of ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1401BD468
 * Callers:
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x140024C24 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     ?vIntersectDirtyRectWithMoveData@METAREGION@@AEAAXPEAUtagRECT@@@Z @ 0x1400CDCE8 (-vIntersectDirtyRectWithMoveData@METAREGION@@AEAAXPEAUtagRECT@@@Z.c)
 *     ?vCalculateNoMoveDirty@METAREGION@@AEAAXXZ @ 0x1400CDE98 (-vCalculateNoMoveDirty@METAREGION@@AEAAXXZ.c)
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1401DB914 (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 *     ?bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x14033DFA4 (-bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x14033E1FC (-bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z.c)
 *     ?vAddRectToMoveRegionHelper@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x14033E3BC (-vAddRectToMoveRegionHelper@METAREGION@@AEAAHPEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall METAREGION::vClearMoveData(METAREGION *this, int a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 2) && a2 )
  {
    v4 = *((_QWORD *)this + 2);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v4);
  }
  if ( *((_QWORD *)this + 1) )
  {
    v4 = *((_QWORD *)this + 1);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v4);
    *((_QWORD *)this + 1) = 0LL;
  }
  if ( *((_QWORD *)this + 4) && a2 )
  {
    v4 = *((_QWORD *)this + 4);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v4);
  }
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 10) = 0;
}
