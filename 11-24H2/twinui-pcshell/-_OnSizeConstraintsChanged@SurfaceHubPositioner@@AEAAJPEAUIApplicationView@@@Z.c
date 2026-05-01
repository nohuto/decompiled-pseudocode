/*
 * XREFs of ?_OnSizeConstraintsChanged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804EFC14
 * Callers:
 *     ?OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18017C520 (-OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?ResizeView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1804EF720 (-ResizeView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     ?_IsViewManaged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1804EFB58 (-_IsViewManaged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SurfaceHubPositioner::_OnSizeConstraintsChanged(
        SurfaceHubPositioner *this,
        struct IApplicationView *a2)
{
  int IsViewManaged; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall *v7)(struct IApplicationView *, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(struct IApplicationView *, GUID *, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // edx
  LONG v14; // eax
  LONG v15; // r8d
  bool v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+38h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-40h] BYREF
  __int64 v19; // [rsp+48h] [rbp-38h] BYREF
  struct tagSIZE v20; // [rsp+50h] [rbp-30h]
  __int64 v21; // [rsp+58h] [rbp-28h] BYREF
  __int128 v22; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v16 = 0;
  IsViewManaged = SurfaceHubPositioner::_IsViewManaged(this, a2, &v16);
  v5 = IsViewManaged;
  if ( IsViewManaged >= 0 )
  {
    if ( !v16 )
      return 0LL;
    v19 = 0LL;
    v7 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 80LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    v8 = v7(a2, &v19);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v18 = 0LL;
      v21 = 0LL;
      v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64, __int64 *, __int64 *))(*(_QWORD *)a2 + 280LL))(
             a2,
             v19,
             &v18,
             &v21);
      v5 = v8;
      if ( v8 >= 0 )
      {
        v17 = 0LL;
        v10 = *(__int64 (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
        v11 = v10(a2, &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6, &v17);
        v5 = v11;
        if ( v11 >= 0 )
        {
          v22 = 0LL;
          v11 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v17 + 24LL))(v17, &v22);
          v5 = v11;
          if ( v11 >= 0 )
          {
            v13 = HIDWORD(v22) - DWORD1(v22);
            v14 = DWORD2(v22) - v22;
            if ( (int)v18 > DWORD2(v22) - (int)v22 )
              v14 = v18;
            v20.cx = v14;
            v15 = HIDWORD(v22) - DWORD1(v22);
            if ( SHIDWORD(v18) > v13 )
              v15 = HIDWORD(v18);
            v20.cy = v15;
            if ( v14 == DWORD2(v22) - (_DWORD)v22 && v15 == v13
              || (v11 = SurfaceHubPositioner::ResizeView((SurfaceHubPositioner *)((char *)this + 104), a2, v20, v20),
                  v5 = v11,
                  v11 >= 0) )
            {
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
              v5 = 0;
              goto LABEL_24;
            }
            v12 = 615LL;
          }
          else
          {
            v12 = 607LL;
          }
        }
        else
        {
          v12 = 604LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)(unsigned int)v11);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
LABEL_24:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
        return v5;
      }
      v9 = 601LL;
    }
    else
    {
      v9 = 597LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x251,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)(unsigned int)IsViewManaged);
  return v5;
}
