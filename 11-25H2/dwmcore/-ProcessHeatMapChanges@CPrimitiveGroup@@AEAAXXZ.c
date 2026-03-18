/*
 * XREFs of ?ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ @ 0x180044BE4
 * Callers:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x180044B68 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x180217A3C (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 *     ?IsCloseColorF@@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x1802AB8C0 (-IsCloseColorF@@YA_NAEBU_D3DCOLORVALUE@@0@Z.c)
 */

void __fastcall CPrimitiveGroup::ProcessHeatMapChanges(CPrimitiveGroup *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  char v4; // r10
  CPrimitiveGroup *v5; // r9
  __int64 v6; // rcx
  char v7; // al
  bool v8; // zf
  __int64 TopByReference; // rax
  struct _D3DCOLORVALUE *v10; // r9
  struct _D3DCOLORVALUE *v11; // rcx
  const struct _D3DCOLORVALUE *v12; // rdx
  char v13; // r10

  v3 = *((_QWORD *)this + 3);
  v4 = 0;
  v5 = this;
  v6 = v3 + 6296;
  if ( !*(_DWORD *)(v3 + 6304)
    || (v8 = *(_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v6, a2, a3, v5) == 1,
        v7 = 1,
        !v8) )
  {
    v7 = v4;
  }
  if ( v7 )
  {
    TopByReference = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v6, a2, a3, v5);
    v11 = v10 + 35;
    v12 = (const struct _D3DCOLORVALUE *)(TopByReference + 4);
    if ( BYTE1(v10[34].r) == v13 || !IsCloseColorF(v11, v12) )
    {
      BYTE1(v10[34].r) = 1;
      *(struct _D3DCOLORVALUE *)&v11->r = *(const struct _D3DCOLORVALUE *)&v12->r;
      CPrimitiveGroup::BuildHeatMap((CPrimitiveGroup *)v10);
    }
  }
  else if ( *((_BYTE *)v5 + 545) != v4 )
  {
    *((_BYTE *)v5 + 545) = v4;
    CPrimitiveGroup::ReleaseHeatMap(v5);
  }
}
