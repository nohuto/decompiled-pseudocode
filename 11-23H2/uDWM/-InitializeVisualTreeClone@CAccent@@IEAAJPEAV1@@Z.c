/*
 * XREFs of ?InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z @ 0x1800A0AF0
 * Callers:
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18009E9B0 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180019294 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180019608 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180037010 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x18006B514 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800A126C (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x1800A1630 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 */

__int64 __fastcall CAccent::InitializeVisualTreeClone(CAccent *this, struct CAccent *a2)
{
  int updated; // edi
  __int64 v5; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  struct _MARGINS v9; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  updated = CAccent::UpdateAccentPolicy(
              a2,
              (const struct tagRECT *)((char *)this + 584),
              (__m128i *)this + 18,
              *((struct CBaseGeometryProxy **)this + 48));
  if ( updated < 0 )
  {
    v5 = 473LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  if ( (*((_BYTE *)this + 292) & 0xE0) == 0 )
    return 0LL;
  *((_BYTE *)a2 + 382) = 1;
  v9 = 0LL;
  updated = CRenderDataVisual::ClearInstructions(a2);
  if ( updated < 0 )
  {
    v5 = 480LL;
    goto LABEL_3;
  }
  CVisual::SetInsetFromParent(a2, &v9);
  *((_DWORD *)a2 + 73) = *((_DWORD *)this + 73);
  updated = CAccent::_EnsureBorderShadowAtlas(a2);
  if ( updated < 0 )
  {
    v5 = 483LL;
    goto LABEL_3;
  }
  updated = CAccent::_UpdateBorderShadowParts((CAtlasedRectsVisual **)a2);
  if ( updated < 0 )
  {
    v5 = 484LL;
    goto LABEL_3;
  }
  v7 = CAccent::_UpdateBorderShadowForAccent(a2);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E5,
    (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
