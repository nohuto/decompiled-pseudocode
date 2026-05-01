/*
 * XREFs of ?IsCortanaPackageInstalled@CortanaAvailability@@YAJPEAE@Z @ 0x18005635C
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1800F2D78 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800547B8 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPackageStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800564AC (--$GetActivationFactory@V-$ComPtr@UIPackageStatics@StateRepository@Internal@Windows@@@WRL@Micros.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B7C4C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CortanaAvailability::IsCortanaPackageInstalled(CortanaAvailability *this, unsigned __int8 *a2)
{
  HRESULT v3; // eax
  int v4; // edx
  unsigned int v5; // r8d
  int v6; // eax
  struct winrt::impl::hstring_header *hstring_on_heap; // rax
  int v8; // eax
  const char *v9; // r9
  __int64 v10; // rcx
  __int64 result; // rax
  int v12; // [rsp+20h] [rbp-58h]
  _BYTE v13[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+38h] [rbp-40h] BYREF
  struct winrt::impl::hstring_header *v15; // [rsp+40h] [rbp-38h] BYREF
  HSTRING_HEADER v16; // [rsp+48h] [rbp-30h] BYREF
  HSTRING v17; // [rsp+60h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v14 = 0LL;
  v17 = 0LL;
  v3 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Package", 0x28u, &v16, &v17);
  if ( v3 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3, v4, v5);
    return (unsigned int)v14;
  }
  else
  {
    v6 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackageStatics>>(
           v17,
           &v14);
    try
    {
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x5B,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
          (const char *)(unsigned int)v6,
          v12);
      hstring_on_heap = winrt::impl::create_hstring_on_heap(
                          (winrt::impl *)L"Microsoft.549981C3F5F10_8wekyb3d8bbwe",
                          (winrt::impl *)0x25);
      v15 = hstring_on_heap;
      if ( hstring_on_heap )
      {
        v13[0] = 0;
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct winrt::impl::hstring_header *, _BYTE *))(*(_QWORD *)v14 + 336LL))(
               v14,
               0LL,
               hstring_on_heap,
               v13);
        if ( v8 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x64,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
            (const char *)(unsigned int)v8,
            v12);
        *(_BYTE *)this = v13[0];
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v15);
        v10 = v14;
        if ( v14 )
        {
          v14 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        result = 0LL;
      }
      else
      {
        *(_BYTE *)this = 0;
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v15);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
        result = 0LL;
      }
    }
    catch ( ... )
    {
      LODWORD(v14) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0x67,
                       (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
                       v9);
      return (unsigned int)v14;
    }
  }
  return result;
}
