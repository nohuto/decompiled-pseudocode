/*
 * XREFs of _lambda_5e9c18940e8e88d162ff7728dae26002_::operator() @ 0x1804CB3E4
 * Callers:
 *     LambdaCustomPaintProc__lambda_5e9c18940e8e88d162ff7728dae26002__ID2D1DeviceContext___ @ 0x1804CB000 (LambdaCustomPaintProc__lambda_5e9c18940e8e88d162ff7728dae26002__ID2D1DeviceContext___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1801524EC (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?CreateSolidColorBrush@ID2D1RenderTarget@@QEAAJAEBU_D3DCOLORVALUE@@PEAPEAUID2D1SolidColorBrush@@@Z @ 0x1804C1A48 (-CreateSolidColorBrush@ID2D1RenderTarget@@QEAAJAEBU_D3DCOLORVALUE@@PEAPEAUID2D1SolidColorBrush@@.c)
 *     ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x1804CB3B8 (--B-$HighContrastAwareOpacity@M@@QEBAMXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_5e9c18940e8e88d162ff7728dae26002_::operator()(__int64 *a1, ID2D1RenderTarget *a2, __int64 a3)
{
  __int64 v3; // r14
  int v4; // ebx
  __int64 Color; // rax
  float v7; // xmm6_4
  float v8; // xmm1_4
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  float v12; // xmm7_4
  int v13; // eax
  int v14; // eax
  void (__fastcall *v15)(ID2D1RenderTarget *, struct _D3DCOLORVALUE *, struct ID2D1SolidColorBrush *); // rax
  __int64 v16; // rax
  __int64 v17; // rax
  void (__fastcall *v18)(ID2D1RenderTarget *, struct _D3DCOLORVALUE *, struct ID2D1SolidColorBrush *); // rax
  struct ID2D1SolidColorBrush *v20; // [rsp+48h] [rbp-79h] BYREF
  int v21[2]; // [rsp+50h] [rbp-71h] BYREF
  __int64 v22; // [rsp+58h] [rbp-69h] BYREF
  __int64 v23; // [rsp+60h] [rbp-61h]
  struct _D3DCOLORVALUE v24; // [rsp+68h] [rbp-59h] BYREF
  _DWORD v25[4]; // [rsp+78h] [rbp-49h] BYREF
  struct _D3DCOLORVALUE v26; // [rsp+88h] [rbp-39h] BYREF
  __int128 v27; // [rsp+98h] [rbp-29h] BYREF
  int v28; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v29; // [rsp+ACh] [rbp-15h]
  int v30; // [rsp+BCh] [rbp-5h]
  __int128 v31; // [rsp+C0h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v3 = *a1;
  v4 = a3;
  v23 = a3;
  Color = CImmersiveColor::GetColor(0xABu);
  v24.a = 0.0;
  v24.g = (float)BYTE1(Color) / 255.0;
  v24.r = (float)(unsigned __int8)Color / 255.0;
  v24.b = (float)BYTE2(Color) / 255.0;
  *(struct _D3DCOLORVALUE *)&v26.r = *(struct _D3DCOLORVALUE *)&v24.r;
  v7 = 1.0 - HighContrastAwareOpacity<float>::operator float((float *)(v3 + 360));
  v28 = 0;
  v22 = 0LL;
  v8 = 1.0 - HighContrastAwareOpacity<float>::operator float((float *)(v3 + 348));
  v30 = 1065353216;
  v29 = *(__int128 *)&v24.r;
  v24.a = 1.0 - (float)(v7 / v8);
  v27 = *(__int128 *)&v24.r;
  v31 = *(__int128 *)&v24.r;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  v9 = (*(__int64 (__fastcall **)(ID2D1RenderTarget *, int *, __int64))(*(_QWORD *)a2 + 72LL))(a2, &v28, 2LL);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = HIDWORD(v23) - *(_DWORD *)(v3 + 368);
    v25[0] = 0;
    v25[1] = 0;
    v25[2] = 0;
    *(_QWORD *)v21 = 0LL;
    v12 = (float)v11;
    *(float *)&v25[3] = (float)v11;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v21);
    v13 = (*(__int64 (__fastcall **)(ID2D1RenderTarget *, _DWORD *, _QWORD, __int64, int *))(*(_QWORD *)a2 + 80LL))(
            a2,
            v25,
            0LL,
            v22,
            v21);
    v10 = v13;
    if ( v13 >= 0 )
    {
      v20 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
      v14 = ID2D1RenderTarget::CreateSolidColorBrush(a2, &v26, &v20);
      v10 = v14;
      if ( v14 >= 0 )
      {
        *(_QWORD *)&v24.r = 0LL;
        v15 = *(void (__fastcall **)(ID2D1RenderTarget *, struct _D3DCOLORVALUE *, struct ID2D1SolidColorBrush *))(*(_QWORD *)a2 + 136LL);
        *(_QWORD *)&v24.b = COERCE_UNSIGNED_INT((float)v4);
        v15(a2, &v24, v20);
        *(_QWORD *)&v24.r = 0LL;
        v16 = *(_QWORD *)a2;
        v24.b = (float)v4;
        v24.a = v12;
        (*(void (__fastcall **)(ID2D1RenderTarget *, struct _D3DCOLORVALUE *, _QWORD))(v16 + 136))(
          a2,
          &v24,
          *(_QWORD *)v21);
        (*(void (__fastcall **)(struct ID2D1SolidColorBrush *, __int128 *))(*(_QWORD *)v20 + 64LL))(v20, &v27);
        v24.r = 0.0;
        v17 = *(_QWORD *)a2;
        v24.g = v12;
        v24.b = (float)v4;
        v18 = *(void (__fastcall **)(ID2D1RenderTarget *, struct _D3DCOLORVALUE *, struct ID2D1SolidColorBrush *))(v17 + 136);
        v24.a = (float)SHIDWORD(v23);
        v18(a2, &v24, v20);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v21);
        v10 = 0;
        goto LABEL_9;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3BD,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
        (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3BA,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
        (const char *)(unsigned int)v13);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v21);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B2,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
      (const char *)(unsigned int)v9);
  }
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  return v10;
}
