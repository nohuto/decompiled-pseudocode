/*
 * XREFs of ?GetBounds@CCompositionGlyphRun@@QEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180295888
 * Callers:
 *     ?GetBounds@CTextVisualContent@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802AD270 (-GetBounds@CTextVisualContent@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ?HitTest@CTextVisualContent@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1802AD470 (-HitTest@CTextVisualContent@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionGlyphRun::GetBounds(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 184LL))(v3);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6E,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionglyphrun.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
  }
  else
  {
    a3[3] = 0;
    a3[2] = 0;
    a3[1] = 0;
    *a3 = 0;
  }
  return 0LL;
}
