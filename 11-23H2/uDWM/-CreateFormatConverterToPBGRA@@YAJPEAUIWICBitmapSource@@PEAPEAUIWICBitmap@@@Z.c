/*
 * XREFs of ?CreateFormatConverterToPBGRA@@YAJPEAUIWICBitmapSource@@PEAPEAUIWICBitmap@@@Z @ 0x1800521B4
 * Callers:
 *     ?Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z @ 0x180051FBC (-Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreateFormatConverterToPBGRA(struct IWICBitmapSource *a1, struct IWICBitmap **a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = 0LL;
  v4 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31);
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 80LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  v6 = v5(v4, &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 17LL;
LABEL_10:
    v10 = (unsigned int)v6;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
      (const char *)v10,
      v11);
    goto LABEL_6;
  }
  v11 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource *, GUID *, _QWORD))(*(_QWORD *)v13 + 64LL))(
         v13,
         a1,
         &GUID_WICPixelFormat32bppPBGRA,
         0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 26LL;
    goto LABEL_10;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                    + 31)
                                                                                 + 144LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31),
         v13,
         2LL,
         a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 28LL;
    goto LABEL_10;
  }
  if ( !*a2 )
  {
    v7 = -2147024882;
    v10 = 2147942414LL;
    v9 = 29LL;
    goto LABEL_12;
  }
  v7 = 0;
LABEL_6:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  return v7;
}
