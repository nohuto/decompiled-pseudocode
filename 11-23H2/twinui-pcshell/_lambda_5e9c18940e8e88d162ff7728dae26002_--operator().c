/*
 * XREFs of _lambda_5e9c18940e8e88d162ff7728dae26002_::operator() @ 0x18057C390
 * Callers:
 *     LambdaCustomPaintProc__lambda_5e9c18940e8e88d162ff7728dae26002__ID2D1DeviceContext___ @ 0x18057BF20 (LambdaCustomPaintProc__lambda_5e9c18940e8e88d162ff7728dae26002__ID2D1DeviceContext___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ConvertColor@D2DUtil@@YA?AU_D3DCOLORVALUE@@KM@Z @ 0x180572D14 (-ConvertColor@D2DUtil@@YA-AU_D3DCOLORVALUE@@KM@Z.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180572FEC (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x18057C364 (--B-$HighContrastAwareOpacity@M@@QEBAMXZ.c)
 */

__int64 __fastcall lambda_5e9c18940e8e88d162ff7728dae26002_::operator()(__int64 *a1, __int64 *a2, __int64 a3, float a4)
{
  __int64 v4; // r15
  int v5; // ebx
  unsigned int Color; // esi
  float v8; // xmm6_4
  float v9; // xmm7_4
  __int128 v10; // xmm1
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  float v14; // xmm7_4
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v21; // [rsp+48h] [rbp-79h] BYREF
  int v22[2]; // [rsp+50h] [rbp-71h] BYREF
  __int64 v23; // [rsp+58h] [rbp-69h] BYREF
  __int64 v24; // [rsp+60h] [rbp-61h]
  struct _D3DCOLORVALUE v25; // [rsp+68h] [rbp-59h] BYREF
  _DWORD v26[4]; // [rsp+78h] [rbp-49h] BYREF
  __int128 v27; // [rsp+88h] [rbp-39h] BYREF
  __int128 v28; // [rsp+98h] [rbp-29h] BYREF
  int v29; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v30; // [rsp+ACh] [rbp-15h]
  int v31; // [rsp+BCh] [rbp-5h]
  __int128 v32; // [rsp+C0h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v4 = *a1;
  v5 = a3;
  v24 = a3;
  Color = CImmersiveColor::GetColor(0xABu);
  v27 = *(_OWORD *)&D2DUtil::ConvertColor(&v25, (struct _D3DCOLORVALUE *)Color, 0.0, a4)->r;
  v8 = 1.0 - HighContrastAwareOpacity<float>::operator float((float *)(v4 + 360));
  v9 = 1.0 - (float)(v8 / (float)(1.0 - HighContrastAwareOpacity<float>::operator float((float *)(v4 + 348))));
  v10 = *(_OWORD *)&D2DUtil::ConvertColor(&v25, (struct _D3DCOLORVALUE *)Color, v9, a4)->r;
  v29 = 0;
  v30 = v27;
  v31 = 1065353216;
  v28 = v10;
  v23 = 0LL;
  v32 = v10;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
  v11 = (*(__int64 (__fastcall **)(__int64 *, int *, __int64, _QWORD, _DWORD, __int64 *))(*a2 + 72))(
          a2,
          &v29,
          2LL,
          0LL,
          0,
          &v23);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = HIDWORD(v24) - *(_DWORD *)(v4 + 368);
    v26[0] = 0;
    v26[1] = 0;
    v26[2] = 0;
    v14 = (float)v13;
    *(_QWORD *)v22 = 0LL;
    *(float *)&v26[3] = (float)v13;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v22);
    v15 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, _QWORD, __int64, int *))(*a2 + 80))(a2, v26, 0LL, v23, v22);
    v12 = v15;
    if ( v15 >= 0 )
    {
      v21 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
      v16 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, __int64 *))(*a2 + 64))(a2, &v27, 0LL, &v21);
      v12 = v16;
      if ( v16 >= 0 )
      {
        *(_QWORD *)&v25.r = 0LL;
        v17 = *a2;
        *(_QWORD *)&v25.b = COERCE_UNSIGNED_INT((float)v5);
        (*(void (__fastcall **)(__int64 *, struct _D3DCOLORVALUE *, __int64))(v17 + 136))(a2, &v25, v21);
        *(_QWORD *)&v25.r = 0LL;
        v18 = *a2;
        v25.b = (float)v5;
        v25.a = v14;
        (*(void (__fastcall **)(__int64 *, struct _D3DCOLORVALUE *, _QWORD))(v18 + 136))(a2, &v25, *(_QWORD *)v22);
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v21 + 64LL))(v21, &v28);
        v25.r = 0.0;
        v19 = *a2;
        v25.g = v14;
        v25.b = (float)v5;
        v25.a = (float)SHIDWORD(v24);
        (*(void (__fastcall **)(__int64 *, struct _D3DCOLORVALUE *, __int64))(v19 + 136))(a2, &v25, v21);
        v12 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3BD,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
          (const char *)(unsigned int)v16);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3BA,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
        (const char *)(unsigned int)v15);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v22);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B2,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
      (const char *)(unsigned int)v11);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
  return v12;
}
