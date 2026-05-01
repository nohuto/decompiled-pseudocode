/*
 * XREFs of s_DrawThemeTextPPIAware @ 0x18074C5CC
 * Callers:
 *     s_OnDrawItemHelper @ 0x18028640C (s_OnDrawItemHelper.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180069938 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z @ 0x1802EC2A4 (--0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18039E804 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18074BE14 (--1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalClose@?$HandleT@UHBITMAPTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x18074C120 (-InternalClose@-$HandleT@UHBITMAPTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Micro.c)
 *     ?DrawThemeTextExPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAUtagRECT@@PEAU_DTTOPTS@@@Z @ 0x18074E3B8 (-DrawThemeTextExPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEA.c)
 *     ?GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAU_DTTOPTS@@PEAUtagRECT@@7@Z @ 0x18074E4F0 (-GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHK.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall s_DrawThemeTextPPIAware(HTHEME hTheme, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, __m128i *a6)
{
  HDC v8; // rcx
  signed int Error; // edi
  int v10; // r12d
  int v11; // edi
  HBITMAP v12; // rax
  __m128i v13; // xmm0
  int v14; // eax
  HFONT v15; // rbx
  __int16 *v16; // r12
  __int64 v17; // rdi
  __int16 *v18; // rcx
  unsigned int v19; // r15d
  __int16 i; // ax
  HDC v21; // r13
  _QWORD *v22; // rdx
  unsigned int *v23; // r14
  signed int LastError; // eax
  _BYTE v26[8]; // [rsp+78h] [rbp-88h] BYREF
  HDC hdc; // [rsp+80h] [rbp-80h]
  __int32 v28; // [rsp+88h] [rbp-78h]
  int yoriginDest; // [rsp+8Ch] [rbp-74h]
  int wDest; // [rsp+90h] [rbp-70h]
  int xoriginDest; // [rsp+94h] [rbp-6Ch]
  HTHEME v32; // [rsp+98h] [rbp-68h]
  __int64 v33; // [rsp+A0h] [rbp-60h]
  _QWORD *v34; // [rsp+A8h] [rbp-58h]
  __int128 v35; // [rsp+B0h] [rbp-50h]
  void **v36; // [rsp+C0h] [rbp-40h] BYREF
  HBITMAP v37; // [rsp+C8h] [rbp-38h]
  __int64 v38; // [rsp+D0h] [rbp-30h]
  HGDIOBJ h; // [rsp+D8h] [rbp-28h]
  HDC v40; // [rsp+E0h] [rbp-20h]
  HDC v41; // [rsp+E8h] [rbp-18h]
  HGDIOBJ v42; // [rsp+F0h] [rbp-10h]
  void *ppvBits; // [rsp+F8h] [rbp-8h] BYREF
  int v44; // [rsp+100h] [rbp+0h]
  int v45[19]; // [rsp+104h] [rbp+4h] BYREF
  int v46; // [rsp+150h] [rbp+50h]
  int v47; // [rsp+154h] [rbp+54h]
  int v48; // [rsp+158h] [rbp+58h]
  int v49; // [rsp+15Ch] [rbp+5Ch]
  BITMAPINFO pbmi; // [rsp+160h] [rbp+60h] BYREF
  LOGFONTW pFont; // [rsp+190h] [rbp+90h] BYREF
  int pvParam; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v53[220]; // [rsp+1F4h] [rbp+F4h] BYREF
  LOGFONTW v54; // [rsp+2D0h] [rbp+1D0h]

  v38 = a4;
  v33 = a3;
  v32 = hTheme;
  Microsoft::WRL::Wrappers::CompatibleDC::CompatibleDC((Microsoft::WRL::Wrappers::CompatibleDC *)v26, *(HDC *)(a4 + 32));
  v8 = hdc;
  if ( !hdc )
  {
    Error = ResultFromKnownLastError();
    if ( Error < 0 )
      goto LABEL_38;
    v8 = hdc;
  }
  memset(&pbmi.bmiHeader.biSizeImage, 0, 24);
  pbmi.bmiHeader.biSize = 44;
  v10 = a6->m128i_i32[0];
  xoriginDest = v10;
  wDest = a6->m128i_i32[2] - v10;
  pbmi.bmiHeader.biWidth = wDest;
  v11 = a6->m128i_i32[1];
  yoriginDest = v11;
  v28 = a6->m128i_i32[3];
  pbmi.bmiHeader.biHeight = v11 - v28;
  *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
  v12 = CreateDIBSection(v8, &pbmi, 0, &ppvBits, 0LL, 0);
  v36 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HBITMAPTraits>::`vftable';
  v37 = v12;
  if ( !v12 )
  {
    Error = -2147024882;
    goto LABEL_33;
  }
  v40 = hdc;
  v41 = hdc;
  v42 = SelectObject(hdc, v12);
  v13 = *a6;
  v46 = _mm_cvtsi128_si32(*a6) - v10;
  v48 = v13.m128i_i32[2] - v10;
  v49 = v13.m128i_i32[3] - v11;
  v47 = v13.m128i_i32[1] - v11;
  memset_0(v53, 0, 0x1F4uLL);
  pvParam = 504;
  if ( SystemParametersInfoW(0x29u, 0x1F8u, &pvParam, 0) || (Error = ResultFromKnownLastError(), Error >= 0) )
  {
    v44 = 72;
    memset_0(v45, 0, 0x44uLL);
    if ( GetThemeFont(hTheme, hdc, 27, 0, 210, &pFont) < 0 )
    {
      pFont = v54;
      v14 = v45[0];
    }
    else
    {
      v14 = v45[0] | 0x40;
      v45[0] |= 0x40u;
      if ( v54.lfHeight <= 0 )
      {
        if ( v54.lfHeight >= pFont.lfHeight )
          goto LABEL_14;
      }
      else if ( v54.lfHeight <= pFont.lfHeight )
      {
        goto LABEL_14;
      }
      pFont.lfHeight = v54.lfHeight;
    }
LABEL_14:
    if ( (*(_BYTE *)(a4 + 16) & 0x20) != 0 )
    {
      pFont.lfWeight = 700;
      v45[0] = v14 | 0x40;
    }
    v15 = CreateFontIndirectW(&pFont);
    if ( !v15 )
    {
      Error = -2147467259;
      goto LABEL_31;
    }
    v16 = (__int16 *)*a5;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(a5);
    v17 = a5[1];
    *(_QWORD *)&v35 = v17;
    v18 = v16;
    v19 = 0;
    for ( i = *v16; i && i != 9; i = *v18 )
    {
      ++v18;
      ++v19;
    }
    v21 = hdc;
    h = SelectObject(hdc, v15);
    v22 = a5 + 8;
    v34 = a5 + 8;
    v23 = (unsigned int *)a5 + 15;
    if ( v19 )
    {
      Error = DPIToPPIHelpers::DrawThemeTextExPPI(v33, *v23, v22, v32, hdc);
      if ( Error < 0 )
      {
LABEL_29:
        SelectObject(v21, h);
        DeleteObject(v15);
        goto LABEL_31;
      }
      v17 = v35;
      v22 = v34;
    }
    if ( v19 >= (unsigned __int64)(v17 - 1)
      || (v35 = 0LL, Error = DPIToPPIHelpers::GetThemeTextExtentPPI(v33, *v23, v22, v32, hdc), Error >= 0)
      && (v46 = v48 + v35 - DWORD2(v35),
          Error = DPIToPPIHelpers::DrawThemeTextExPPI(v33, *v23, v34, v32, hdc),
          Error >= 0) )
    {
      Error = 0;
      if ( !GdiAlphaBlend(
              *(HDC *)(v38 + 32),
              xoriginDest,
              yoriginDest,
              wDest,
              v28 - yoriginDest,
              hdc,
              0,
              0,
              wDest,
              v28 - yoriginDest,
              (BLENDFUNCTION)33488896) )
        Error = ResultFromKnownLastError();
    }
    goto LABEL_29;
  }
LABEL_31:
  SelectObject(v40, v42);
  v12 = v37;
LABEL_33:
  v36 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HBITMAPTraits>::`vftable';
  if ( v12
    && !Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HBITMAPTraits>::InternalClose((__int64)&v36) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)LastError);
  }
LABEL_38:
  Microsoft::WRL::Wrappers::CompatibleDC::~CompatibleDC((Microsoft::WRL::Wrappers::CompatibleDC *)v26);
  return (unsigned int)Error;
}
