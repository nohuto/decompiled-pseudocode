/*
 * XREFs of ?Convert32bppIWICBitmapSourceToHBITMAP@@YAJPEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@Z @ 0x180135DD4
 * Callers:
 *     ?ConvertIWICBitmapSourceTo32bppHBITMAP@@YAJPEAUIWICBitmapSource@@PEAUIWICImagingFactory@@PEAPEAUHBITMAP__@@@Z @ 0x180134BA4 (-ConvertIWICBitmapSourceTo32bppHBITMAP@@YAJPEAUIWICBitmapSource@@PEAUIWICImagingFactory@@PEAPEAU.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Convert32bppIWICBitmapSourceToHBITMAP(struct IWICBitmapSource *a1, HBITMAP *a2)
{
  struct IWICBitmapSourceVtbl *lpVtbl; // rax
  int v5; // ebx
  HBITMAP v6; // rdi
  struct IWICBitmapSourceVtbl *v7; // rdx
  HRESULT (__stdcall *CopyPixels)(IWICBitmapSource *, const WICRect *, UINT, UINT, BYTE *); // rax
  LONG v10; // [rsp+30h] [rbp-19h] BYREF
  int v11; // [rsp+34h] [rbp-15h] BYREF
  void *ppvBits; // [rsp+38h] [rbp-11h] BYREF
  _DWORD v13[4]; // [rsp+40h] [rbp-9h] BYREF
  BITMAPINFO pbmi; // [rsp+50h] [rbp+7h] BYREF

  *a2 = 0LL;
  lpVtbl = a1->lpVtbl;
  v10 = 0;
  v11 = 0;
  v5 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, LONG *, int *))lpVtbl->GetSize)(a1, &v10, &v11);
  if ( v5 >= 0 )
  {
    ppvBits = 0LL;
    memset(&pbmi.bmiHeader.biCompression, 0, 28);
    pbmi.bmiHeader.biWidth = v10;
    pbmi.bmiHeader.biSize = 40;
    pbmi.bmiHeader.biHeight = -v11;
    *(_DWORD *)&pbmi.bmiHeader.biPlanes = 2097153;
    v6 = CreateDIBSection(0LL, &pbmi, 0, &ppvBits, 0LL, 0);
    if ( v6 )
    {
      v7 = a1->lpVtbl;
      v13[0] = 0;
      v13[1] = 0;
      CopyPixels = v7->CopyPixels;
      v13[3] = v11;
      v13[2] = v10;
      v5 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, _DWORD *, _QWORD, _QWORD, void *))CopyPixels)(
             a1,
             v13,
             (unsigned int)(4 * v10),
             (unsigned int)(4 * v10 * v11),
             ppvBits);
      if ( v5 < 0 )
        DeleteObject(v6);
      else
        *a2 = v6;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  return (unsigned int)v5;
}
