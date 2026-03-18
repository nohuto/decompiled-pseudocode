/*
 * XREFs of ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x14000DABC
 * Callers:
 *     ?vClearDpiScaling@DC@@QEAAXXZ @ 0x14000D9B0 (-vClearDpiScaling@DC@@QEAAXXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x14000D9F4 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x14000DA6C (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     GreIntersectClipRect @ 0x14001DA50 (GreIntersectClipRect.c)
 *     ?InitXform@DC@@QEAAPEAUMATRIX@@K@Z @ 0x140039BC0 (-InitXform@DC@@QEAAPEAUMATRIX@@K@Z.c)
 *     ?QuickInitXform@DC@@QEAA?AVEXFORMOBJ@@K@Z @ 0x140039DF0 (-QuickInitXform@DC@@QEAA-AVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x14000D8C0 (-SetCachedDpiScaleValue@DC@@QEAAXJ@Z.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x14003AB60 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 */

void __fastcall DC::vUpdateCachedDPIScaleValue(DC *this)
{
  __int64 v1; // rcx
  int v2; // r8d
  DC *v3; // r9
  int v4; // r10d
  unsigned int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  if ( (unsigned int)DC::bDpiScaleTransform(this) )
  {
    v4 = *(_DWORD *)(v1 + 524);
    v5 = (unsigned __int8)(v4 >> 23);
    if ( v5 <= 0x9E )
    {
      v6 = v4 & 0x7FFFFF | 0x800000LL;
      if ( v5 < 0x76 )
        v7 = v6 >> (118 - (unsigned __int8)v5);
      else
        v7 = v6 << ((unsigned __int8)v5 - 118);
      v8 = (v7 + 0x80000000LL) >> 32;
      v2 = -(int)v8;
      if ( v4 >= 0 )
        v2 = v8;
    }
  }
  DC::SetCachedDpiScaleValue(v3, v2);
}
