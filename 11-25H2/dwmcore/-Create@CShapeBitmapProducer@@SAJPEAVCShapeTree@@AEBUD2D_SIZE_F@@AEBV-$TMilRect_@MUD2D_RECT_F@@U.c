/*
 * XREFs of ?Create@CShapeBitmapProducer@@SAJPEAVCShapeTree@@AEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2$$QEAV?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@PEAPEAV1@@Z @ 0x1801DB2B8
 * Callers:
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18016E0C0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CCachedImageProducer@@IEAAX$$QEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@Z @ 0x1800DD940 (-Initialize@CCachedImageProducer@@IEAAX$$QEAV-$unique_ptr@VCCachedRealization@CCachedImageProduc.c)
 *     ??0CCachedImageProducer@@IEAA@XZ @ 0x1800DD9D4 (--0CCachedImageProducer@@IEAA@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??R?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@QEBAXPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1801DB9E0 (--R-$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@QEBAXPEAVCCachedRealization@.c)
 */

__int64 __fastcall CShapeBitmapProducer::Create(
        __int64 a1,
        _QWORD *a2,
        _OWORD *a3,
        _OWORD *a4,
        __int64 *a5,
        __int64 *a6)
{
  CCachedImageProducer *v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v15; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v10 = (CCachedImageProducer *)MIDL_user_allocate(0x78uLL);
  v11 = (__int64)v10;
  if ( v10 )
  {
    CCachedImageProducer::CCachedImageProducer(v10);
    *(_QWORD *)(v11 + 72) = a1;
    *(_QWORD *)(v11 + 16) = &CWindowBackgroundBitmapProducer::`vftable'{for `IBitmapRealization'};
    *(_QWORD *)v11 = &CShapeBitmapProducer::`vftable'{for `CMILCOMBaseT<IBitmapResource,IBitmapResource,CMilObjectDeleter>'};
    *(_QWORD *)(v11 + 80) = *a2;
    *(_OWORD *)(v11 + 88) = *a3;
    *(_OWORD *)(v11 + 104) = *a4;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v11 + 8));
    v12 = operator new(8uLL);
    if ( v12 )
    {
      v13 = *a5;
      *a5 = 0LL;
      *v12 = v13;
    }
    v15 = v12;
    CCachedImageProducer::Initialize(v11, &v15);
    if ( v15 )
      std::default_delete<CCachedImageProducer::CCachedRealization>::operator()();
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
