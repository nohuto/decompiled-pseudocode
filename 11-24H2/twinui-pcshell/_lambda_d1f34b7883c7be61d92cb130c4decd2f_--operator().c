/*
 * XREFs of _lambda_d1f34b7883c7be61d92cb130c4decd2f_::operator() @ 0x18055D308
 * Callers:
 *     EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_d1f34b7883c7be61d92cb130c4decd2f___ @ 0x18055BA90 (EnumWindowsHelpers--LambdaEnumWindowsProc__lambda_d1f34b7883c7be61d92cb130c4decd2f___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800C9E90 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_d1f34b7883c7be61d92cb130c4decd2f_::operator()(__int64 *a1, HWND a2)
{
  __int64 v4; // r14
  __m128i v5; // xmm0
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, HWND, _QWORD, _QWORD, _DWORD *, GUID *, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rax
  int v10; // r10d
  int v11; // r9d
  int v12; // r8d
  int v13; // edx
  int v14; // eax
  __int64 v15; // r8
  int v16; // eax
  _QWORD *v17; // rdi
  __int64 v18; // rbx
  void *v19; // r8
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 *v23; // r8
  __int64 *v25; // [rsp+50h] [rbp-39h] BYREF
  int v26; // [rsp+58h] [rbp-31h] BYREF
  __int64 *v27; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v28[3]; // [rsp+68h] [rbp-21h] BYREF
  _DWORD v29[4]; // [rsp+80h] [rbp-9h] BYREF
  _DWORD v30[4]; // [rsp+90h] [rbp+7h] BYREF
  struct tagRECT Rect; // [rsp+A0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v26 = 0;
  v28[0] = 18LL;
  v28[1] = &v26;
  v28[2] = 4LL;
  if ( GetPropW(a2, L"DesktopWindow")
    && IsWindowVisible(a2)
    && (unsigned int)GetWindowCompositionAttribute(a2, v28)
    && !v26 )
  {
    Rect = 0LL;
    GetWindowRect(a2, &Rect);
    v4 = *a1;
    v5 = *(__m128i *)(*a1 + 184);
    v29[0] = _mm_cvtsi128_si32(v5) - Rect.left;
    v29[2] = v5.m128i_i32[2] - Rect.left;
    v29[3] = v5.m128i_i32[3] - Rect.top;
    v29[1] = v5.m128i_i32[1] - Rect.top;
    v25 = 0LL;
    v6 = *(_QWORD *)(v4 + 56);
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, HWND, _QWORD, _QWORD, _DWORD *, GUID *, __int64 *))(*(_QWORD *)v6 + 64LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
    v8 = v7(v6, *(_QWORD *)a1[1], a2, 0LL, 0LL, v29, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (__int64 *)&v25);
    if ( v8 >= 0 )
    {
      v9 = *v25;
      v10 = *(_DWORD *)(v4 + 196);
      v11 = *(_DWORD *)(v4 + 188);
      v12 = *(_DWORD *)(v4 + 192);
      v13 = *(_DWORD *)(v4 + 184);
      v30[0] = 0;
      v30[1] = 0;
      v30[2] = v12 - v13;
      v30[3] = v10 - v11;
      v14 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, _QWORD, _QWORD))(v9 + 24))(v25, v30, 0LL, 0LL);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x327,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v14);
      LOBYTE(v15) = 1;
      v16 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(*v25 + 152))(v25, 0LL, v15);
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x328,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v16);
      v17 = (_QWORD *)a1[2];
      v18 = (__int64)v25;
      v27 = v25;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
      v20 = 0;
      v21 = v17[1];
      if ( v21 != v17[3]
        || (v20 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                    (__int64)v17,
                    v21 + 1,
                    v19),
            v20 >= 0) )
      {
        v22 = v17[1];
        v17[1] = v22 + 1;
        v23 = (__int64 *)(*v17 + 8 * v22);
        if ( v23 )
        {
          *v23 = 0LL;
          if ( v23 != (__int64 *)&v27 )
          {
            *v23 = v18;
            v27 = 0LL;
          }
        }
      }
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x329,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v20);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x325,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
  }
  return 1LL;
}
