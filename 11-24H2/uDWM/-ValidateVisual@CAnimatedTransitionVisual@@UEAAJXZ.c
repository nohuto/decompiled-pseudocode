/*
 * XREFs of ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800175E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180017380 (-_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800176CC (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180017878 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x1800280B0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180098B44 (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::ValidateVisual(CAnimatedTransitionVisual *this)
{
  CAnimatedTransitionVisual *v1; // rdi
  int v3; // eax
  unsigned int v4; // esi
  int v5; // edi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (CAnimatedTransitionVisual *)((char *)this - 8);
  v3 = CAnimatedTransitionVisual::EnsureResources((CAnimatedTransitionVisual *)((char *)this - 8));
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3AF,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v3,
      v10);
    return v4;
  }
  if ( *((_BYTE *)this + 928) )
  {
    v5 = CAnimatedTransitionVisual::Validate3DVisual(v1);
    if ( v5 < 0 )
    {
      v9 = 947LL;
      goto LABEL_13;
    }
  }
  else
  {
    if ( !*((_BYTE *)this + 920) )
    {
      v5 = CAnimatedTransitionVisual::Validate2DVisual(v1);
      if ( v5 >= 0 )
        goto LABEL_5;
      v9 = 955LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
        (const char *)(unsigned int)v5,
        v10);
      return (unsigned int)v5;
    }
    v5 = CAnimatedTransitionVisual::_ValidateDCompVisual(v1);
    if ( v5 < 0 )
    {
      v9 = 951LL;
      goto LABEL_13;
    }
  }
LABEL_5:
  v6 = CRenderDataVisual::ValidateVisual(this);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3BE,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
    (const char *)(unsigned int)v6,
    v10);
  return v7;
}
