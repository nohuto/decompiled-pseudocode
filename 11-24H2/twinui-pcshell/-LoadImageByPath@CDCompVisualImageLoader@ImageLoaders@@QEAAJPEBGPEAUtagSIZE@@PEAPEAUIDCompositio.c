/*
 * XREFs of ?LoadImageByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUIDCompositionVisual@@@Z @ 0x18067AB88
 * Callers:
 *     _lambda_c876813055a0f8eb90a291ca9ab0fec3_::operator() @ 0x18055D178 (_lambda_c876813055a0f8eb90a291ca9ab0fec3_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateVisualFromBitmap@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEAUID2D1Bitmap1@@AEBUtagSIZE@@PEAPEAUIDCompositionVisual@@@Z @ 0x18067A4D0 (-CreateVisualFromBitmap@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEAUID2D1Bitmap1@@AEBUtagSIZE.c)
 *     ?LoadBitmapByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18067A8C0 (-LoadBitmapByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUID2D1Bitmap.c)
 */

__int64 __fastcall ImageLoaders::CDCompVisualImageLoader::LoadImageByPath(
        ImageLoaders::CDCompVisualImageLoader *this,
        const unsigned __int16 *a2,
        struct tagSIZE *a3,
        struct IDCompositionVisual **a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  struct IDCompositionVisual *v11; // rax
  struct tagSIZE v13; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IDCompositionVisual *v15; // [rsp+60h] [rbp+30h] BYREF
  struct ID2D1Bitmap1 *v16; // [rsp+68h] [rbp+38h] BYREF

  *a4 = 0LL;
  *a3 = 0LL;
  v13 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v16);
  v8 = ImageLoaders::CDCompVisualImageLoader::LoadBitmapByPath(this, a2, &v13, &v16);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v15 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    v10 = ImageLoaders::CDCompVisualImageLoader::CreateVisualFromBitmap(this, v16, &v13, &v15);
    v9 = v10;
    if ( v10 >= 0 )
    {
      v11 = v15;
      v15 = 0LL;
      *a4 = v11;
      *a3 = v13;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24,
        (int)"onecoreuap\\shell\\onecore\\libs\\imageloaders\\dcompvisualimageloader.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21,
      (int)"onecoreuap\\shell\\onecore\\libs\\imageloaders\\dcompvisualimageloader.cpp",
      (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v16);
  return v9;
}
