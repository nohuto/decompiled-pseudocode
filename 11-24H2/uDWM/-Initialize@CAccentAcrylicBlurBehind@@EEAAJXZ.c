/*
 * XREFs of ?Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ @ 0x18004E630
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x18002E5D0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18004EF14 (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::Initialize(struct CContainerVisualProxy **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // edi
  int v5; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CContainerVisual::Initialize(this);
  v3 = 0;
  v4 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x495,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v2,
      v7);
    return v4;
  }
  else
  {
    v5 = CAccentAcrylicBlurBehind::InitializeDComp((CAccentAcrylicBlurBehind *)this);
    if ( v5 < 0 )
      return (unsigned int)v5;
    return v3;
  }
}
