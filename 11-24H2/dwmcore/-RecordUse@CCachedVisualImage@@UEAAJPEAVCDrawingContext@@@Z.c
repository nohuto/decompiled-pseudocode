/*
 * XREFs of ?RecordUse@CCachedVisualImage@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801B1CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18010B4B0 (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 *     ?RecordUse@CRenderTargetBitmap@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801B1DF0 (-RecordUse@CRenderTargetBitmap@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::RecordUse(struct D2D_SIZE_U *this, struct CDrawingContext *a2)
{
  const struct RenderTargetInfo *v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  struct IRenderTargetBitmap *v7; // rbx
  CRenderTargetBitmap *v8; // rcx
  __int64 (__fastcall *v9)(CRenderTargetBitmap *__hidden, struct CDrawingContext *); // rax
  int v10; // eax
  unsigned int v11; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IRenderTargetBitmap *v14; // [rsp+30h] [rbp+8h] BYREF

  v4 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 16LL))((char *)a2 + 24);
  v14 = 0LL;
  v5 = CCachedVisualImage::EnsureRenderTargetBitmap(this - 10, v4, &v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x182,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\cachedvisualimage.cpp",
      (const char *)(unsigned int)v5);
    if ( v14 )
      (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v14 + 16LL))(v14);
    return v6;
  }
  else
  {
    v7 = v14;
    v8 = (struct IRenderTargetBitmap *)((char *)v14 + 8);
    v9 = *(__int64 (__fastcall **)(CRenderTargetBitmap *__hidden, struct CDrawingContext *))(*((_QWORD *)v14 + 1) + 88LL);
    if ( v9 == CRenderTargetBitmap::RecordUse )
      v10 = CRenderTargetBitmap::RecordUse(v8, a2);
    else
      v10 = v9(v8, a2);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x184,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\cachedvisualimage.cpp",
        (const char *)(unsigned int)v10);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
      return v11;
    }
    else
    {
      if ( v7 )
        (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v7 + 16LL))(v7);
      return 0LL;
    }
  }
}
