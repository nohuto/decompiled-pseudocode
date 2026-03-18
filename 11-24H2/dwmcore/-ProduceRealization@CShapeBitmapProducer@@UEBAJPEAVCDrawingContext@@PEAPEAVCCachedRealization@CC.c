/*
 * XREFs of ?ProduceRealization@CShapeBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x180218610
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18006DDA4 (-RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV-$TMilRect_@MUD2D.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShapeBitmapProducer::ProduceRealization(
        CShapeBitmapProducer *this,
        struct CDrawingContext *a2,
        struct CCachedImageProducer::CCachedRealization **a3)
{
  __int64 v3; // rbx
  CShapeTree *v5; // rsi
  int v8; // eax
  unsigned int v9; // ebx
  struct CCachedImageProducer::CCachedRealization *v11; // rax
  CGlobalDrawingContext *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  CGlobalDrawingContext *v14; // [rsp+70h] [rbp+8h] BYREF
  float v15; // [rsp+88h] [rbp+20h] BYREF
  float v16; // [rsp+8Ch] [rbp+24h]

  v3 = *((_QWORD *)this + 3);
  v5 = (CShapeTree *)*((_QWORD *)this + 9);
  v14 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v14, (__int64)a2, (__int64)a3);
  v15 = (float)(int)v3;
  v16 = (float)SHIDWORD(v3);
  v8 = CShapeTree::RenderIntermediate(
         v5,
         a2,
         (struct D2D_SIZE_F *)this + 10,
         (__int64)&v15,
         (__int64)this + 88,
         (__int64)this + 104,
         4,
         &v14);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = (struct CCachedImageProducer::CCachedRealization *)operator new(8uLL);
    if ( v11 )
    {
      v12 = 0LL;
      *(_QWORD *)v11 = v14;
    }
    else
    {
      v12 = v14;
    }
    *a3 = v11;
    if ( v12 )
      (*(void (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v12 + 16LL))(v12);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\shapetree.cpp",
      (const char *)(unsigned int)v8);
    if ( v14 )
      (*(void (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v14 + 16LL))(v14);
    return v9;
  }
}
