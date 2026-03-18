/*
 * XREFs of ?SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z @ 0x180265BC8
 * Callers:
 *     ?SetHeatMapForCurrentNode@CDrawingContext@@AEAAXXZ @ 0x18024D9C4 (-SetHeatMapForCurrentNode@CDrawingContext@@AEAAXXZ.c)
 *     ?ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETHEATMAPMODE@@@Z @ 0x18028BD04 (-ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETHEATMAPMODE@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18000CBEC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetHeatMapProperties(__int64 a1, _QWORD *a2)
{
  struct CSparseStorage::AllocatedStorage **v2; // r10
  __int64 v3; // rcx

  v2 = (struct CSparseStorage::AllocatedStorage **)(a1 + 224);
  v3 = *a2 - `CVisual::SetHeatMapProperties'::`2'::sc_defaultValue;
  if ( *a2 == `CVisual::SetHeatMapProperties'::`2'::sc_defaultValue )
  {
    v3 = a2[1];
    if ( !v3 )
      v3 = *((unsigned int *)a2 + 4);
  }
  if ( v3 )
    CSparseStorage::SetData(v2, 2, 0x14u, a2);
  else
    *((_DWORD *)*v2 + 1) &= ~0x40000000u;
}
