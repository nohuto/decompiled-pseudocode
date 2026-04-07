/*
 * XREFs of ?InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z @ 0x1800A12F0
 * Callers:
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800A11D0 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x180022998 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180023E20 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800250EC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18002EFAC (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x18002FAE8 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800721D0 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
              (const struct tagRECT *)((char *)this + 536),
              (__m128i *)this + 15,
              *((struct CBaseGeometryProxy **)this + 42));
  if ( updated < 0 )
  {
    v5 = 466LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  if ( (*((_BYTE *)this + 244) & 0xE0) == 0 )
    return 0LL;
  *((_BYTE *)a2 + 334) = 1;
  v9 = 0LL;
  updated = CRenderDataVisual::ClearInstructions(a2);
  if ( updated < 0 )
  {
    v5 = 473LL;
    goto LABEL_3;
  }
  CVisual::SetInsetFromParent((struct _MARGINS *)a2, &v9);
  *((_DWORD *)a2 + 61) = *((_DWORD *)this + 61);
  updated = CAccent::_EnsureBorderShadowAtlas(a2);
  if ( updated < 0 )
  {
    v5 = 476LL;
    goto LABEL_3;
  }
  updated = CAccent::_UpdateBorderShadowParts((struct CAtlasedImage **)a2);
  if ( updated < 0 )
  {
    v5 = 477LL;
    goto LABEL_3;
  }
  v7 = CAccent::_UpdateBorderShadowForAccent(a2);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1DE,
    (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
