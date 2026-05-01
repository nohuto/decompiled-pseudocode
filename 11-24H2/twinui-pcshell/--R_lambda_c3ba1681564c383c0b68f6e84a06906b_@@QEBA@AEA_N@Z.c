/*
 * XREFs of ??R_lambda_c3ba1681564c383c0b68f6e84a06906b_@@QEBA@AEA_N@Z @ 0x18045D1FC
 * Callers:
 *     ?IsStartScreenFilterEnabled@@YA_NXZ @ 0x1801045B4 (-IsStartScreenFilterEnabled@@YA_NXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801C4B00 (--$ActivateInstance@V-$ComPtr@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@WRL@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall _lambda_c3ba1681564c383c0b68f6e84a06906b_::operator()(__int64 a1, bool *a2)
{
  int v3; // ebx
  int v4; // eax
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64 *); // rdi
  int v7; // eax
  __int64 v8; // rdx
  char v10; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v11[7]; // [rsp+21h] [rbp-3Fh] BYREF
  __int64 v12; // [rsp+28h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  *a2 = 0;
  v13 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Shell.ShellLauncher.ShellLauncherManager",
    0x3Au,
    0x39u);
  v3 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ShellLauncher::IShellLauncherManager>>(
         v15,
         &v13);
  if ( v3 >= 0 )
  {
    v10 = 0;
    v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 56LL))(v13, &v10);
    v3 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D,
        (int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\devicelockdownhelpers.h",
        (const char *)(unsigned int)v4);
      goto LABEL_14;
    }
    if ( v10 )
    {
      v12 = 0LL;
      v5 = v13;
      v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 48LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
      v7 = v6(v5, 0LL, &v12);
      v3 = v7;
      if ( v7 < 0 )
      {
        v8 = 67LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\devicelockdownhelpers.h",
          (const char *)(unsigned int)v7);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
        goto LABEL_14;
      }
      if ( !v12 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
        v3 = -2147024882;
        goto LABEL_14;
      }
      v11[0] = 0;
      v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 160LL))(v12, v11);
      v3 = v7;
      if ( v7 < 0 )
      {
        v8 = 70LL;
        goto LABEL_7;
      }
      *a2 = v11[0] != 0;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    }
    v3 = 0;
  }
LABEL_14:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  return (unsigned int)v3;
}
