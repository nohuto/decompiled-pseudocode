/*
 * XREFs of ?Initialize@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEAUID2D1DeviceContext@@PEAUIDCompositionDevice@@@Z @ 0x18067A7F8
 * Callers:
 *     _lambda_c876813055a0f8eb90a291ca9ab0fec3_::operator() @ 0x18055D178 (_lambda_c876813055a0f8eb90a291ca9ab0fec3_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A9BC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ImageLoaders::CDCompVisualImageLoader::Initialize(
        ImageLoaders::CDCompVisualImageLoader *this,
        struct ID2D1DeviceContext *a2,
        struct IDCompositionDevice *a3)
{
  HRESULT Instance; // eax
  unsigned int v7; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)this);
  Instance = CoCreateInstance(
               &CLSID_WICImagingFactory2,
               0LL,
               1u,
               &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70,
               (LPVOID *)this);
  v7 = Instance;
  if ( Instance >= 0 )
  {
    if ( *((struct ID2D1DeviceContext **)this + 1) != a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(struct ID2D1DeviceContext *))(*(_QWORD *)a2 + 8LL))(a2);
      v10 = *((_QWORD *)this + 1);
      *((_QWORD *)this + 1) = a2;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
    }
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 2, (__int64)a3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14,
      (int)"onecoreuap\\shell\\onecore\\libs\\imageloaders\\dcompvisualimageloader.cpp",
      (const char *)(unsigned int)Instance);
    return v7;
  }
}
