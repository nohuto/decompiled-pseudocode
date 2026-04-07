/*
 * XREFs of ?CreateFormatConverterToPBGRA@@YAJPEAUIWICBitmapSource@@PEAPEAUIWICBitmap@@@Z @ 0x18000B11C
 * Callers:
 *     ?Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z @ 0x18000B034 (-Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreateFormatConverterToPBGRA(struct IWICBitmapSource *a1, struct IWICBitmap **a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // [rsp+20h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v17; // [rsp+70h] [rbp+30h] BYREF

  v17 = 0LL;
  v4 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 80LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  v6 = v5(v4, &v17);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
      (const char *)(unsigned int)v6,
      v15);
    v14 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    return v7;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource *, GUID *, _QWORD))(*(_QWORD *)v17 + 64LL))(
         v17,
         a1,
         &GUID_WICPixelFormat32bppPBGRA,
         0LL);
  v7 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
      (const char *)(unsigned int)v8,
      0);
    v13 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    return v7;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                    + 30)
                                                                                 + 144LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30),
         v17,
         2LL,
         a2);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
      (const char *)(unsigned int)v9,
      0);
    v12 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    return v7;
  }
  if ( !*a2 )
  {
    v7 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
      (const char *)0x8007000ELL,
      0);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
    return v7;
  }
  v10 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
