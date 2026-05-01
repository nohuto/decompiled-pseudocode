/*
 * XREFs of ?ShutdownQueue@?$consume_Microsoft_UI_Dispatching_IDispatcherQueueController2@UDispatcherQueueController@Dispatching@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x1804573D4
 * Callers:
 *     ?ThreadProc@WindowsXamlManagerThread@@SAKPEAX@Z @ 0x1804576E0 (-ThreadProc@WindowsXamlManagerThread@@SAKPEAX@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::impl::consume_Microsoft_UI_Dispatching_IDispatcherQueueController2<winrt::Microsoft::UI::Dispatching::DispatcherQueueController>::ShutdownQueue(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *))
{
  __int64 (__fastcall ***v1)(_QWORD, void *, __int64 *); // rcx
  int v2; // eax
  __int64 v3; // rbx
  int v4; // eax
  int v5; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h] BYREF
  int v7; // [rsp+30h] [rbp-30h] BYREF
  __int128 v8; // [rsp+38h] [rbp-28h]
  __int64 v9; // [rsp+48h] [rbp-18h] BYREF

  v1 = *a1;
  if ( v1 )
  {
    v9 = 0LL;
    v2 = (**v1)(v1, &winrt::impl::guid_v<winrt::Microsoft::UI::Dispatching::IDispatcherQueueController2>, &v9);
    v3 = v9;
    v6 = v9;
  }
  else
  {
    v2 = 0;
    v6 = 0LL;
    v3 = 0LL;
  }
  v7 = 0;
  v8 = 0LL;
  winrt::check_hresult(&v5, v2, (__int64)&v7);
  v7 = 0;
  v8 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
  winrt::check_hresult(&v5, v4, (__int64)&v7);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
}
