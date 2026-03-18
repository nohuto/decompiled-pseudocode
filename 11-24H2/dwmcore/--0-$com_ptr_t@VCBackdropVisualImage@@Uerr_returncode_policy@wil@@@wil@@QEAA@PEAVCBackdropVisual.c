/*
 * XREFs of ??0?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCBackdropVisualImage@@@Z @ 0x1801EA660
 * Callers:
 *     ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000A138 (-CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

_QWORD *__fastcall wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a1 = a2;
  if ( a2 && _InterlockedAdd((volatile signed __int32 *)(a2 + 8), 1u) <= 0 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v4);
  return a1;
}
