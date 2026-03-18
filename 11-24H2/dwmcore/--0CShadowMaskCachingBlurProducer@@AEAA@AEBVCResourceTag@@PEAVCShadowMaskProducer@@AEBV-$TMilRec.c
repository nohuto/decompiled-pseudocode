/*
 * XREFs of ??0CShadowMaskCachingBlurProducer@@AEAA@AEBVCResourceTag@@PEAVCShadowMaskProducer@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1802DB2F8
 * Callers:
 *     ?Create@CShadowMaskCachingBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVCShadowMaskProducer@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIBitmapResource@@PEAV5@@Z @ 0x1802DB42C (-Create@CShadowMaskCachingBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVCShadowMas.c)
 * Callees:
 *     ??0CCachedImageProducer@@IEAA@XZ @ 0x1800FDAD4 (--0CCachedImageProducer@@IEAA@XZ.c)
 *     ??0?$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCShadowMaskProducer@@@Z @ 0x18021CD6C (--0-$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCShadowMaskProdu.c)
 */

__int64 __fastcall CShadowMaskCachingBlurProducer::CShadowMaskCachingBlurProducer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        int a5)
{
  _OWORD *v7; // rdx
  __int64 v8; // r8
  __int64 result; // rax

  CCachedImageProducer::CCachedImageProducer((CCachedImageProducer *)a1);
  *(_QWORD *)(a1 + 16) = &CWindowBackgroundBitmapProducer::`vftable'{for `IBitmapRealization'};
  *(_QWORD *)a1 = &CShadowMaskCachingBlurProducer::`vftable'{for `CMILCOMBaseT<IBitmapResource,IBitmapResource,CMilObjectDeleter>'};
  *(_OWORD *)(a1 + 72) = *v7;
  wil::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>(
    (_QWORD *)(a1 + 88),
    v8);
  result = a1;
  *(_OWORD *)(a1 + 96) = *a4;
  *(_DWORD *)(a1 + 112) = a5;
  return result;
}
