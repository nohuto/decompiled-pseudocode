/*
 * XREFs of ?IsValidUseAsSwapChain@CBitmapRealization@@MEBA_NXZ @ 0x1802E0020
 * Callers:
 *     ?IsValidUseAsSwapChain@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x1802E1280 (-IsValidUseAsSwapChain@CDxHandleBitmapRealization@@UEBA_NXZ.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

char __fastcall CBitmapRealization::IsValidUseAsSwapChain(CBitmapRealization *this)
{
  char v2; // cl
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Log_Hr(
    retaddr,
    (void *)0x79,
    (int)"onecoreuap\\windows\\DWM\\dwmcore\\bitmaps/BitmapRealization.h",
    (const char *)0x8007029CLL);
  if ( *((int *)this + 62) < 2 )
    return 0;
  v2 = 1;
  if ( (unsigned int)(*((_DWORD *)this + 75) - 2) > 1 )
    return 0;
  return v2;
}
