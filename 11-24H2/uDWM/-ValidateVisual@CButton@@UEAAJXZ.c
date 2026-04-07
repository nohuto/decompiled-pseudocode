/*
 * XREFs of ?ValidateVisual@CButton@@UEAAJXZ @ 0x18001E130
 * Callers:
 *     <none>
 * Callees:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001E1D0 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x18001EA40 (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180028E60 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CButton::ValidateVisual(CButton *this)
{
  int v1; // eax
  int v3; // eax
  unsigned int v4; // edi
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 8);
  if ( (v1 & 0x10000) != 0 )
  {
    if ( (v1 & 0x8000) == 0 )
      CButton::UpdateCrossfade(this);
    *((_DWORD *)this + 8) &= ~0x10000u;
    v1 = *((_DWORD *)this + 8);
  }
  if ( (v1 & 0x8000) != 0 )
  {
    v3 = CButton::RedrawVisual(this);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBF,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
        (const char *)(unsigned int)v3,
        v8);
      return v4;
    }
    *((_DWORD *)this + 8) &= ~0x8000u;
  }
  v5 = CVisual::ValidateVisual(this);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC3,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
    (const char *)(unsigned int)v5,
    v8);
  return v6;
}
