/*
 * XREFs of ?vStamp@REGION@@QEAAXXZ @ 0x1C00403FC
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003A080 (-bCompute@DC@@QEAAHXZ.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004B888 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00E0050 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     GreIntersectVisRect @ 0x1C016AF30 (GreIntersectVisRect.c)
 * Callees:
 *     <none>
 */

void __fastcall REGION::vStamp(REGION *this)
{
  *((_DWORD *)this + 18) = _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(SGDGetSessionState(this) + 24)
                                                                           + 6384LL));
}
