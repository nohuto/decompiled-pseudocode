/*
 * XREFs of ?EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x1801E1590
 * Callers:
 *     ?CopyPixels@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180260D20 (-CopyPixels@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?Lock@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180260E10 (-Lock@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x1801DC7EC (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ @ 0x1801E1818 (-EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompressedSourceBitmap::EnsureUncompressedBitmap(CCompressedSourceBitmap *this)
{
  __int64 *v1; // rsi
  int v3; // eax
  unsigned int v4; // edi
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  void (*v9)(void); // rax
  int v10; // eax
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // ebx
  int BitmapFromWICBitmapSource; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v18; // [rsp+60h] [rbp+20h] BYREF
  struct IWICBitmapSource *v19; // [rsp+68h] [rbp+28h] BYREF

  v1 = (__int64 *)((char *)this + 144);
  if ( *((_QWORD *)this + 18) )
    return 0LL;
  v3 = CCompressedSourceBitmap::EnsureWICBitmapFrame(this);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x93,
      (int)"onecoreuap\\windows\\dwm\\common\\bitmaps\\compressedsourcebitmap.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  v6 = (__int64 *)*((_QWORD *)this + 16);
  v7 = *v6;
  v18 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v7 + 80))(v6, &v18);
  v4 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96,
      (int)"onecoreuap\\windows\\dwm\\common\\bitmaps\\compressedsourcebitmap.cpp",
      (const char *)(unsigned int)v8);
    if ( !v18 )
      return v4;
    v9 = *(void (**)(void))(*(_QWORD *)v18 + 16LL);
LABEL_8:
    v9();
    return v4;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v18 + 64LL))(
          v18,
          *((_QWORD *)this + 17),
          &GUID_WICPixelFormat32bppPBGRA,
          0LL,
          0LL,
          0LL,
          0);
  v4 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9D,
      (int)"onecoreuap\\windows\\dwm\\common\\bitmaps\\compressedsourcebitmap.cpp",
      (const char *)(unsigned int)v10);
LABEL_24:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
    return v4;
  }
  v11 = (__int64 *)*((_QWORD *)this + 16);
  v12 = *v11;
  v19 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, struct IWICBitmapSource **))(v12 + 144))(
          v11,
          v18,
          2LL,
          &v19);
  v4 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA2,
      (int)"onecoreuap\\windows\\dwm\\common\\bitmaps\\compressedsourcebitmap.cpp",
      (const char *)(unsigned int)v13);
    if ( v19 )
      ((void (__fastcall *)(struct IWICBitmapSource *))v19->lpVtbl->Release)(v19);
    if ( !v18 )
      return v4;
    v9 = *(void (**)(void))(*(_QWORD *)v18 + 16LL);
    goto LABEL_8;
  }
  v14 = ((__int64 (*)(void))v19->lpVtbl[1].Release)();
  v15 = v14;
  if ( v14 >= 0 )
  {
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
    BitmapFromWICBitmapSource = HrCreateBitmapFromWICBitmapSource(v19, (struct IBitmapSource **)v1);
    v4 = BitmapFromWICBitmapSource;
    if ( BitmapFromWICBitmapSource < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA9,
        (int)"onecoreuap\\windows\\dwm\\common\\bitmaps\\compressedsourcebitmap.cpp",
        (const char *)(unsigned int)BitmapFromWICBitmapSource);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
      goto LABEL_24;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA5,
    (int)"onecoreuap\\windows\\dwm\\common\\bitmaps\\compressedsourcebitmap.cpp",
    (const char *)(unsigned int)v14);
  if ( v19 )
    ((void (__fastcall *)(struct IWICBitmapSource *))v19->lpVtbl->Release)(v19);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return v15;
}
