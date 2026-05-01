/*
 * XREFs of ?_UpdateViewport@CScrollViewer@@AEAAXXZ @ 0x1804DB410
 * Callers:
 *     ?UpdateViewport@CScrollViewer@@UEAAXXZ @ 0x1804DAE90 (-UpdateViewport@CScrollViewer@@UEAAXXZ.c)
 *     ?v_LayoutChildren@CScrollViewer@@MEAAXXZ @ 0x1804DB690 (-v_LayoutChildren@CScrollViewer@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$SendUiaPropertyEvent@N@ElementHelpers@@YAJPEAUIMultitaskingViewElement@@HNN@Z @ 0x1804D9FC8 (--$SendUiaPropertyEvent@N@ElementHelpers@@YAJPEAUIMultitaskingViewElement@@HNN@Z.c)
 *     ?_ApplyScroll@CScrollViewer@@AEAAXH_N@Z @ 0x1804DAFBC (-_ApplyScroll@CScrollViewer@@AEAAXH_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CScrollViewer::_UpdateViewport(CScrollViewer *this)
{
  char *v2; // rsi
  DOUBLE v3; // xmm6_8
  _QWORD *v4; // rax
  int v5; // eax
  char v6; // di
  _QWORD *v7; // rax
  int v8; // eax
  char v9; // di
  DOUBLE v10; // xmm0_8
  int v11; // [rsp+30h] [rbp-50h] BYREF
  int v12; // [rsp+34h] [rbp-4Ch]
  __int64 v13; // [rsp+38h] [rbp-48h] BYREF
  __m128i v14; // [rsp+40h] [rbp-40h] BYREF
  __m128i v15; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v12 = 0;
  v2 = (char *)this + 208;
  v3 = (*(double (__fastcall **)(char *))(*((_QWORD *)this + 26) + 56LL))((char *)this + 208);
  (*(void (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 31) + 32LL))(*((_QWORD *)this + 31), &v15);
  LOBYTE(v11) = 1;
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(CScrollViewer *, __int64 *))(*(_QWORD *)this + 384LL))(this, &v13);
  v12 = 1;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, CScrollViewer *, __m128i *, int *))(*(_QWORD *)*v4 + 64LL))(
         *v4,
         2LL,
         this,
         &v15,
         &v11);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x16E,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerelement.cpp",
      (const char *)(unsigned int)v5);
LABEL_3:
    v6 = 1;
    goto LABEL_4;
  }
  if ( (_BYTE)v11 )
    goto LABEL_3;
  v6 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD, __m128i *, _QWORD, _QWORD))(**((_QWORD **)this + 29) + 40LL))(
      *((_QWORD *)this + 29),
      &v15,
      0LL,
      0LL);
  if ( *((_QWORD *)this + 30) )
  {
    v14 = v15;
    v14.m128i_i32[0] = _mm_cvtsi128_si32(v15) - *((_DWORD *)this + 68);
    v14.m128i_i32[1] = v15.m128i_i32[1] - *((_DWORD *)this + 70);
    v14.m128i_i32[2] = *((_DWORD *)this + 69) + v15.m128i_i32[2];
    v14.m128i_i32[3] = *((_DWORD *)this + 71) + v15.m128i_i32[3];
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(CScrollViewer *, __int64 *))(*(_QWORD *)this + 384LL))(this, &v13);
    v12 = 2;
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, CScrollViewer *, __m128i *, int *))(*(_QWORD *)*v7 + 56LL))(
           *v7,
           4LL,
           this,
           &v14,
           &v11);
    if ( v8 >= 0 )
    {
      if ( !(_BYTE)v11 )
      {
        v9 = 0;
LABEL_10:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
        if ( v9 )
          (*(void (__fastcall **)(_QWORD, __m128i *, _QWORD, _QWORD))(**((_QWORD **)this + 30) + 24LL))(
            *((_QWORD *)this + 30),
            &v14,
            0LL,
            0LL);
        goto LABEL_12;
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x17D,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerelement.cpp",
        (const char *)(unsigned int)v8);
    }
    v9 = 1;
    goto LABEL_10;
  }
LABEL_12:
  v10 = (*(double (__fastcall **)(char *))(*(_QWORD *)v2 + 56LL))(v2);
  ElementHelpers::SendUiaPropertyEvent<double>((__int64)this, 30056, v3, v10);
  CScrollViewer::_ApplyScroll(this, *((_DWORD *)this + 64), 1);
}
