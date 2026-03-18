/*
 * XREFs of ?HitTest@CTextVisualContent@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1802B7060
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z @ 0x1801FA2CC (-Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetBounds@CCompositionGlyphRun@@QEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802A1238 (-GetBounds@CCompositionGlyphRun@@QEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 */

__int64 __fastcall CTextVisualContent::HitTest(
        CTextVisualContent *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  __int64 v5; // rax
  __int64 *v8; // rbx
  __int64 *v9; // rbp
  __int64 v10; // rcx
  int Bounds; // eax
  unsigned int v12; // edi
  bool v13; // al
  struct D2D_RECT_F v15; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a4 = 0;
  v5 = *((_QWORD *)this + 9);
  v8 = *(__int64 **)(v5 + 672);
  v9 = *(__int64 **)(v5 + 680);
  while ( v8 != v9 )
  {
    v10 = *v8;
    *a4 = 0;
    v15 = 0LL;
    Bounds = CCompositionGlyphRun::GetBounds(v10, (__int64)a2, &v15);
    v12 = Bounds;
    if ( Bounds < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x81,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionglyphrun.cpp",
        (const char *)(unsigned int)Bounds);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8A,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisualcontent.cpp",
        (const char *)v12);
      return v12;
    }
    v13 = Contains(&v15, a3);
    *a4 = v13;
    if ( v13 )
      break;
    ++v8;
  }
  return 0LL;
}
