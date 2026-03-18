/*
 * XREFs of ?ProduceRealization@CShapeBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x180224350
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18016F69C (-RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV-$TMilRect_@MUD2D.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShapeBitmapProducer::ProduceRealization(
        CShapeBitmapProducer *this,
        struct CDrawingContext *a2,
        struct CCachedImageProducer::CCachedRealization **a3)
{
  __int64 v3; // rbx
  __m128 *v5; // rsi
  int v8; // eax
  unsigned int v9; // ebx
  struct CCachedImageProducer::CCachedRealization *v11; // rax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  float v15; // [rsp+88h] [rbp+20h] BYREF
  float v16; // [rsp+8Ch] [rbp+24h]

  v3 = *((_QWORD *)this + 3);
  v5 = (__m128 *)*((_QWORD *)this + 9);
  v14 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((CGlobalDrawingContext **)&v14);
  v15 = (float)(int)v3;
  v16 = (float)SHIDWORD(v3);
  v8 = CShapeTree::RenderIntermediate(
         v5,
         a2,
         (struct D2D_SIZE_F *)this + 10,
         (unsigned int *)&v15,
         (__int64)this + 88,
         (__int64)this + 104,
         4,
         (CMILRefCountImpl **)&v14);
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
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
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
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    return v9;
  }
}
