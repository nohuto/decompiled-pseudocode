/*
 * XREFs of ?Initialize@CSubDrawingContext@@AEAAJXZ @ 0x1800814C4
 * Callers:
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800815F4 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_R.c)
 * Callees:
 *     ?Create@CDrawingContext@@SAXPEAPEAV1@@Z @ 0x18000D28C (-Create@CDrawingContext@@SAXPEAPEAV1@@Z.c)
 *     ?HasGpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x1800815D0 (-HasGpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?Top@CD2DTargetStack@@QEBAPEAVCD2DTarget@@XZ @ 0x180082590 (-Top@CD2DTargetStack@@QEBAPEAVCD2DTarget@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSubDrawingContext::Initialize(CSubDrawingContext *this)
{
  struct CDrawingContext *v2; // rdi
  struct CD2DTarget *v3; // rax
  __int64 v4; // r8
  __int64 v6; // rcx
  int v7; // [rsp+20h] [rbp-8h]
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CDrawingContext *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( !CScopedClipStack::HasGpuClipsInScope((CScopedClipStack *)(*(_QWORD *)this + 744LL)) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\subdrawingcontext.cpp",
      (const char *)0x88982F04LL,
      v7);
    return 2291674884LL;
  }
  v10 = 0LL;
  CDrawingContext::Create(&v10);
  v2 = v10;
  v3 = CD2DTargetStack::Top((CD2DTargetStack *)(*(_QWORD *)(*(_QWORD *)this + 40LL) + 344LL));
  if ( !v3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x245,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d2dcontext.cpp",
      (const char *)0x88982F04LL,
      v7);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\subdrawingcontext.cpp",
      (const char *)0x88982F04LL,
      v8);
    if ( v2 )
      (*(void (__fastcall **)(struct CDrawingContext *))(*(_QWORD *)v2 + 16LL))(v2);
    return 2291674884LL;
  }
  *(_QWORD *)v3 = v4;
  *((_QWORD *)v2 + 26) = *(_QWORD *)this;
  v6 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = v2;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return 0LL;
}
