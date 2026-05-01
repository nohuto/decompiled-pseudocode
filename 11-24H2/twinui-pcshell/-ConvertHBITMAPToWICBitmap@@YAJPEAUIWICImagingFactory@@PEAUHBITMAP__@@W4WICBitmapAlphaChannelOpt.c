/*
 * XREFs of ?ConvertHBITMAPToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@W4WICBitmapAlphaChannelOption@@PEAPEAUIWICBitmapSource@@@Z @ 0x1801356D0
 * Callers:
 *     ?_ScaleBitmap@@YAJPEAUHBITMAP__@@IPEAPEAU1@@Z @ 0x180134C3C (-_ScaleBitmap@@YAJPEAUHBITMAP__@@IPEAPEAU1@@Z.c)
 *     ?CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z @ 0x180134FE4 (-CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A9BC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ConvertHBITMAPToWICBitmap(
        struct IWICImagingFactory *a1,
        HBITMAP a2,
        __int64 a3,
        struct IWICBitmapSource **a4)
{
  struct IWICImagingFactory *v6; // rbx
  HRESULT (__stdcall *CreateBitmapFromHBITMAP)(IWICImagingFactory *, HBITMAP, HPALETTE, WICBitmapAlphaChannelOption, IWICBitmap **); // rdi
  HRESULT v8; // ebx
  __int64 v9; // rcx
  LPVOID v10; // rcx
  LPVOID ppv; // [rsp+50h] [rbp+20h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, GUID *, struct IWICBitmapSource **); // [rsp+68h] [rbp+38h] BYREF

  v6 = a1;
  *a4 = 0LL;
  ppv = a1;
  if ( a1 )
  {
    ((void (__fastcall *)(struct IWICImagingFactory *, HBITMAP, __int64))a1->lpVtbl->AddRef)(a1, a2, a3);
    v6 = (struct IWICImagingFactory *)ppv;
  }
  if ( !v6 )
  {
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
    v8 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &ppv);
    if ( v8 < 0 )
      goto LABEL_8;
    v6 = (struct IWICImagingFactory *)ppv;
  }
  v13 = 0LL;
  CreateBitmapFromHBITMAP = v6->lpVtbl->CreateBitmapFromHBITMAP;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v13);
  v8 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, HBITMAP, _QWORD, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, struct IWICBitmapSource **)))CreateBitmapFromHBITMAP)(
         v6,
         a2,
         0LL,
         0LL,
         &v13);
  if ( v8 >= 0 )
    v8 = (**v13)(v13, &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94, a4);
  v9 = (__int64)v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
LABEL_8:
  v10 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)v8;
}
