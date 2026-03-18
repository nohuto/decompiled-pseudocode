/*
 * XREFs of ?ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ @ 0x180171254
 * Callers:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x1801711D8 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x18020B92C (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 *     ?IsCloseColorF@@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x1802A1DA0 (-IsCloseColorF@@YA_NAEBU_D3DCOLORVALUE@@0@Z.c)
 */

void __fastcall CPrimitiveGroup::ProcessHeatMapChanges(CPrimitiveGroup *this)
{
  __int64 v1; // rax
  char v2; // r10
  CPrimitiveGroup *v3; // r9
  __int64 v4; // rcx
  char v5; // al
  bool v6; // zf
  __int64 TopByReference; // rax
  struct _D3DCOLORVALUE *v8; // r9
  struct _D3DCOLORVALUE *v9; // rcx
  const struct _D3DCOLORVALUE *v10; // rdx
  char v11; // r10

  v1 = *((_QWORD *)this + 3);
  v2 = 0;
  v3 = this;
  v4 = v1 + 6272;
  if ( !*(_DWORD *)(v1 + 6280)
    || (v6 = *(_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v4) == 1, v5 = 1, !v6) )
  {
    v5 = v2;
  }
  if ( v5 )
  {
    TopByReference = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v4);
    v9 = v8 + 35;
    v10 = (const struct _D3DCOLORVALUE *)(TopByReference + 4);
    if ( BYTE1(v8[34].r) == v11 || !IsCloseColorF(v9, v10) )
    {
      BYTE1(v8[34].r) = 1;
      *(struct _D3DCOLORVALUE *)&v9->r = *(const struct _D3DCOLORVALUE *)&v10->r;
      CPrimitiveGroup::BuildHeatMap((CPrimitiveGroup *)v8);
    }
  }
  else if ( *((_BYTE *)v3 + 545) != v2 )
  {
    *((_BYTE *)v3 + 545) = v2;
    CPrimitiveGroup::ReleaseHeatMap(v3);
  }
}
