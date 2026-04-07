/*
 * XREFs of ?ValidateVisual@CSolidRectangleVisual@@UEAAJXZ @ 0x1800D0E30
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x1800280B0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_UpdateInstructions@CSolidRectangleVisual@@IEAAJXZ @ 0x1800D0EB4 (-_UpdateInstructions@CSolidRectangleVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CSolidRectangleVisual::ValidateVisual(CSolidRectangleVisual *this)
{
  int updated; // eax
  unsigned int v3; // edi
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*((_DWORD *)this + 8) & 0x4000) != 0 )
  {
    updated = CSolidRectangleVisual::_UpdateInstructions(this);
    v3 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C,
        (__int64)"clientcore\\windows\\dwm\\udwm\\solidrectanglevisual.cpp",
        (const char *)(unsigned int)updated);
      return v3;
    }
    *((_DWORD *)this + 8) &= ~0x4000u;
  }
  v5 = CRenderDataVisual::ValidateVisual(this);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x20,
    (__int64)"clientcore\\windows\\dwm\\udwm\\solidrectanglevisual.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
