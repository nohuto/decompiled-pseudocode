/*
 * XREFs of ?SetHeatMapForCurrentNode@CDrawingContext@@AEAAXXZ @ 0x18024D9C4
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18001BF90 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z @ 0x180265BC8 (-SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z.c)
 */

void __fastcall CDrawingContext::SetHeatMapForCurrentNode(CDrawingContext *this)
{
  struct CVisual *CurrentVisual; // rax
  int v2; // edx
  CGlobalComposition *v3; // r8
  struct CVisual *v4; // rbx
  char v5; // cl
  char v6; // al
  int v7; // eax
  char v8; // al
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]

  CurrentVisual = CDrawingContext::GetCurrentVisual(this);
  v2 = g_HeatMaps_Type;
  v3 = g_pComposition;
  v4 = CurrentVisual;
  v5 = *((_BYTE *)CurrentVisual + 105);
  if ( (v5 & 8) != 0 && g_HeatMaps_Type != 1 )
  {
    --*((_DWORD *)g_pComposition + 1596);
    *((_BYTE *)CurrentVisual + 105) &= ~8u;
    v5 = *((_BYTE *)CurrentVisual + 105);
  }
  v6 = v5;
  if ( (v5 & 4) != 0 && v2 != 2 )
  {
    v6 = v5 & 0xFB;
    g_HeatMaps_OverdrawContentKinds = 0;
    *((_BYTE *)v4 + 105) = v5 & 0xFB;
  }
  if ( (v6 & 1) != 0 && v2 != 3 )
  {
    *((_BYTE *)v4 + 105) = v6 & 0xFC;
    --*((_DWORD *)v3 + 1594);
  }
  if ( v2 == 1 )
  {
    if ( (*((_BYTE *)v4 + 105) & 8) != 0 )
      return;
    ++*((_DWORD *)v3 + 1596);
    *((_BYTE *)v4 + 105) |= 8u;
    v10 = 0;
    v9 = _xmm;
    CVisual::SetHeatMapProperties(v4, &v9);
    v2 = g_HeatMaps_Type;
    v3 = g_pComposition;
  }
  if ( v2 == 2 )
  {
    v7 = g_HeatMaps_OverdrawContentKinds;
    *((_BYTE *)v4 + 105) |= 4u;
    v9 = _xmm;
    v10 = v7;
    CVisual::SetHeatMapProperties(v4, &v9);
    v2 = g_HeatMaps_Type;
    v3 = g_pComposition;
  }
  if ( v2 == 3 )
  {
    v8 = *((_BYTE *)v4 + 105);
    if ( (v8 & 2) == 0 )
    {
      *((_BYTE *)v4 + 105) = v8 | 3;
      ++*((_DWORD *)v3 + 1594);
    }
  }
}
