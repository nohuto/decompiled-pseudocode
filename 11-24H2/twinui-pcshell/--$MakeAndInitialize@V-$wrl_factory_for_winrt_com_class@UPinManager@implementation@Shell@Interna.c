/*
 * XREFs of ??$MakeAndInitialize@V?$wrl_factory_for_winrt_com_class@UPinManager@implementation@Shell@Internal@Windows@winrt@@@wil@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$wrl_factory_for_winrt_com_class@UPinManager@implementation@Shell@Internal@Windows@winrt@@@wil@@@Z @ 0x1805E0338
 * Callers:
 *     ??$CreateClassFactory@V?$wrl_factory_for_winrt_com_class@UPinManager@implementation@Shell@Internal@Windows@winrt@@@wil@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1805DED70 (--$CreateClassFactory@V-$wrl_factory_for_winrt_com_class@UPinManager@implementation@Shell@Intern.c)
 * Callees:
 *     ??1?$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1802277E4 (--1-$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$wrl_factory_for_winrt_com_class@UPinManager@implementation@Shell@Internal@Windows@winrt@@@wil@@QEAA@XZ @ 0x1805E30EC (--0-$wrl_factory_for_winrt_com_class@UPinManager@implementation@Shell@Internal@Windows@winrt@@@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::PinManager>,wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::PinManager>,>(
        __int64 *a1)
{
  unsigned int v2; // ebx
  void *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdi
  void *v7; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v3;
  if ( v3 )
  {
    v4 = wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::PinManager>::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::PinManager>(v3);
    v5 = v4;
    v7 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    v2 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<NonAgileDispatcher>::~MakeAllocator<NonAgileDispatcher>(&v7);
  return v2;
}
