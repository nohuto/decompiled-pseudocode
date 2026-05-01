/*
 * XREFs of ?ConvertWICBitmapPixelFormat@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@U_GUID@@W4WICBitmapDitherType@@PEAPEAU2@@Z @ 0x180135BC8
 * Callers:
 *     ?ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@UtagSIZE@@_NPEAPEAU2@@Z @ 0x180134E00 (-ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@UtagSIZE@@_NPEAPEAU2@@Z.c)
 *     ?AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_GUID@@W4EncodingOptions@@@Z @ 0x1803F02FC (-AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_.c)
 *     JointResize::TagViewWithLogoAsync$_ResumeCoro$1 @ 0x18053B840 (JointResize--TagViewWithLogoAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A9BC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ConvertWICBitmapPixelFormat(
        struct IWICImagingFactory *a1,
        struct IWICBitmapSource *a2,
        struct _GUID *a3,
        enum WICBitmapDitherType a4,
        struct IWICBitmapSource **a5)
{
  HRESULT (__stdcall *CreateFormatConverter)(IWICImagingFactory *, IWICFormatConverter **); // rbx
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v12[7]; // [rsp+40h] [rbp-38h] BYREF

  *a5 = 0LL;
  v12[0] = 0LL;
  CreateFormatConverter = a1->lpVtbl->CreateFormatConverter;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v12);
  v9 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, __int64 *))CreateFormatConverter)(a1, v12);
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource *, struct _GUID *, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v12[0] + 64LL))(
           v12[0],
           a2,
           a3,
           0LL,
           0LL,
           0LL,
           0);
    if ( v9 >= 0 )
      v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IWICBitmapSource **))v12[0])(
             v12[0],
             &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94,
             a5);
  }
  v10 = v12[0];
  if ( v12[0] )
  {
    v12[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)v9;
}
