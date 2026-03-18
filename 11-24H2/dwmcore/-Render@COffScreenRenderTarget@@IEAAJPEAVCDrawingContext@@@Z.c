/*
 * XREFs of ?Render@COffScreenRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801591D0
 * Callers:
 *     ?RenderAndPresent@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x180159170 (-RenderAndPresent@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateTransformAndTreeBounds@COffScreenRenderTarget@@MEAAXXZ @ 0x1801592B0 (-UpdateTransformAndTreeBounds@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?ReadyForRender@CCaptureRenderTarget@@MEAA_NXZ @ 0x1801593D0 (-ReadyForRender@CCaptureRenderTarget@@MEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COffScreenRenderTarget::Render(COffScreenRenderTarget *this, struct CDrawingContext *a2)
{
  void (*v4)(void); // rax
  bool (__fastcall *v5)(CCaptureRenderTarget *__hidden); // rax
  bool v6; // al
  __int64 v7; // rdx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v13; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(void (**)(void))(*(_QWORD *)this + 232LL);
  if ( (char *)v4 == (char *)COffScreenRenderTarget::UpdateTransformAndTreeBounds )
    COffScreenRenderTarget::UpdateTransformAndTreeBounds(this);
  else
    v4();
  v5 = *(bool (__fastcall **)(CCaptureRenderTarget *__hidden))(*(_QWORD *)this + 256LL);
  if ( v5 == CCaptureRenderTarget::ReadyForRender )
    v6 = CCaptureRenderTarget::ReadyForRender(this);
  else
    v6 = v5(this);
  if ( !v6 )
  {
    v7 = *((_QWORD *)this + 14);
    if ( v7 )
      (*(void (__fastcall **)(COffScreenRenderTarget *, __int64, _QWORD))(*(_QWORD *)this + 280LL))(this, v7 + 112, 0LL);
    return 0LL;
  }
  v9 = *(_QWORD *)this;
  v13 = 0;
  v10 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *, struct CDrawingContext *, char *))(v9 + 288))(
          this,
          a2,
          &v13);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x60,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\offscreenrendertarget.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
