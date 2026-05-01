/*
 * XREFs of ?_ScaleBitmap@@YAJPEAUHBITMAP__@@IPEAPEAU1@@Z @ 0x180134C3C
 * Callers:
 *     ?CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z @ 0x1801F4D30 (-CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A9BC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConvertIWICBitmapSourceTo32bppHBITMAP@@YAJPEAUIWICBitmapSource@@PEAUIWICImagingFactory@@PEAPEAUHBITMAP__@@@Z @ 0x180134BA4 (-ConvertIWICBitmapSourceTo32bppHBITMAP@@YAJPEAUIWICBitmapSource@@PEAUIWICImagingFactory@@PEAPEAU.c)
 *     ?ConvertHBITMAPToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@W4WICBitmapAlphaChannelOption@@PEAPEAUIWICBitmapSource@@@Z @ 0x1801356D0 (-ConvertHBITMAPToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@W4WICBitmapAlphaChannelOpt.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapScaler@@@WRL@Microsoft@@IEAAKXZ @ 0x180135C98 (-InternalRelease@-$ComPtr@UIWICBitmapScaler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall _ScaleBitmap(HBITMAP a1, unsigned int a2, HBITMAP *a3)
{
  HRESULT Instance; // ebx
  enum WICBitmapAlphaChannelOption v7; // r8d
  struct IWICImagingFactory *v8; // rbx
  HRESULT (__stdcall *CreateBitmapScaler)(IWICImagingFactory *, IWICBitmapScaler **); // rdi
  __int64 v10; // rcx
  struct IWICBitmapSource *v11; // rcx
  struct IWICImagingFactory *v12; // rcx
  struct IWICBitmapSource *v14; // [rsp+30h] [rbp-10h] BYREF
  struct IWICBitmapSource *v15; // [rsp+38h] [rbp-8h] BYREF
  struct IWICImagingFactory *ppv; // [rsp+70h] [rbp+30h] BYREF
  __int64 v17; // [rsp+78h] [rbp+38h] BYREF

  *a3 = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  Instance = CoCreateInstance(
               &CLSID_WICImagingFactory2,
               0LL,
               1u,
               &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70,
               (LPVOID *)&ppv);
  if ( Instance >= 0 )
  {
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v14);
    Instance = ConvertHBITMAPToWICBitmap(ppv, a1, v7, &v14);
    if ( Instance >= 0 )
    {
      v17 = 0LL;
      v8 = ppv;
      CreateBitmapScaler = ppv->lpVtbl->CreateBitmapScaler;
      Microsoft::WRL::ComPtr<IWICBitmapScaler>::InternalRelease(&v17);
      Instance = ((__int64 (__fastcall *)(struct IWICImagingFactory *, __int64 *))CreateBitmapScaler)(v8, &v17);
      if ( Instance >= 0 )
      {
        Instance = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource *, _QWORD, _QWORD, int))(*(_QWORD *)v17 + 64LL))(
                     v17,
                     v14,
                     a2,
                     a2,
                     3);
        if ( Instance >= 0 )
        {
          v15 = 0LL;
          Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v15);
          Instance = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IWICBitmapSource **))v17)(
                       v17,
                       &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94,
                       &v15);
          if ( Instance >= 0 )
            Instance = ConvertIWICBitmapSourceTo32bppHBITMAP(v15, ppv, a3);
          Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v15);
        }
      }
      v10 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
    v11 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      ((void (__fastcall *)(struct IWICBitmapSource *))v11->lpVtbl->Release)(v11);
    }
  }
  v12 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    ((void (__fastcall *)(struct IWICImagingFactory *))v12->lpVtbl->Release)(v12);
  }
  return (unsigned int)Instance;
}
