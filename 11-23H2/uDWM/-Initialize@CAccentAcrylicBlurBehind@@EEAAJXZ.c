/*
 * XREFs of ?Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ @ 0x1800A05C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180035BC0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x1800A0624 (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::Initialize(CAccentAcrylicBlurBehind *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // edi
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CVisual::Initialize(this);
  v3 = 0;
  v4 = v2;
  if ( v2 >= 0 )
  {
    v6 = CAccentAcrylicBlurBehind::InitializeDComp(this);
    if ( v6 < 0 )
      return (unsigned int)v6;
    return v3;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C5,
      (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v2);
    return v4;
  }
}
