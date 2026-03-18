/*
 * XREFs of ?Create@CShapeBitmapProducer@@SAJPEAVCShapeTree@@AEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2$$QEAV?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@PEAPEAV1@@Z @ 0x18006D6B4
 * Callers:
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006DF60 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ??R?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@QEBAXPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x18006D684 (--R-$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@QEBAXPEAVCCachedRealization@.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Initialize@CCachedImageProducer@@IEAAX$$QEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@Z @ 0x1800FDA40 (-Initialize@CCachedImageProducer@@IEAAX$$QEAV-$unique_ptr@VCCachedRealization@CCachedImageProduc.c)
 *     ??0CCachedImageProducer@@IEAA@XZ @ 0x1800FDAD4 (--0CCachedImageProducer@@IEAA@XZ.c)
 */

__int64 __fastcall CShapeBitmapProducer::Create(
        __int64 a1,
        _QWORD *a2,
        _OWORD *a3,
        _OWORD *a4,
        __int64 *a5,
        CCachedImageProducer **a6)
{
  CCachedImageProducer *v10; // rax
  CCachedImageProducer *v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *v16; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v10 = (CCachedImageProducer *)MIDL_user_allocate(0x78uLL);
  v11 = v10;
  if ( v10 )
  {
    CCachedImageProducer::CCachedImageProducer(v10);
    *((_QWORD *)v11 + 9) = a1;
    *((_QWORD *)v11 + 2) = &CWindowBackgroundBitmapProducer::`vftable'{for `IBitmapRealization'};
    *(_QWORD *)v11 = &CShapeBitmapProducer::`vftable'{for `CMILCOMBaseT<IBitmapResource,IBitmapResource,CMilObjectDeleter>'};
    *((_QWORD *)v11 + 10) = *a2;
    *(_OWORD *)((char *)v11 + 88) = *a3;
    *(_OWORD *)((char *)v11 + 104) = *a4;
    CMILRefCountImpl::AddReference((CCachedImageProducer *)((char *)v11 + 8));
    v12 = (__int64 *)operator new(8uLL);
    if ( v12 )
    {
      v13 = *a5;
      *a5 = 0LL;
      *v12 = v13;
    }
    v16 = v12;
    CCachedImageProducer::Initialize(v11, &v16);
    if ( v16 )
      std::default_delete<CCachedImageProducer::CCachedRealization>::operator()(v14, v16);
    *a6 = v11;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x191,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\shapetree.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
