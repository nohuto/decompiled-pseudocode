/*
 * XREFs of ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x14003AB60
 * Callers:
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x14000DABC (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     GreIntersectClipRect @ 0x14001DA50 (GreIntersectClipRect.c)
 *     ?InitXform@DC@@QEAAPEAUMATRIX@@K@Z @ 0x140039BC0 (-InitXform@DC@@QEAAPEAUMATRIX@@K@Z.c)
 *     ?QuickInitXform@DC@@QEAA?AVEXFORMOBJ@@K@Z @ 0x140039DF0 (-QuickInitXform@DC@@QEAA-AVEXFORMOBJ@@K@Z.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x14003A050 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bDpiScaleTransform(DC *this)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *((_DWORD *)this + 130);
  result = 1LL;
  if ( (v1 & 1) == 0 || (v1 & 2) != 0 )
    return 0LL;
  return result;
}
