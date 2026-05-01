/*
 * XREFs of ?OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavigationController@Input@Gaming@45@@Z @ 0x180355FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180055D84 (--4hstring@winrt@@QEAAAEAU01@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??B?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@1@XZ @ 0x1801BA298 (--B-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string_view@GU-$c.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180298340 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@H@Z.c)
 *     ?SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z @ 0x18029884C (-SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$as@UIGameController@Input@Gaming@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIGameController@Input@Gaming@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18034495C (--$as@UIGameController@Input@Gaming@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winr.c)
 *     ?FromGameController@RawGameController@Input@Gaming@Windows@winrt@@SA@AEBUIGameController@2345@@Z @ 0x18034D3DC (-FromGameController@RawGameController@Input@Gaming@Windows@winrt@@SA@AEBUIGameController@2345@@Z.c)
 *     ?HardwareProductId@?$consume_Windows_Gaming_Input_IRawGameController@UIRawGameController@Input@Gaming@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180351AC8 (-HardwareProductId@-$consume_Windows_Gaming_Input_IRawGameController@UIRawGameController@Input@G.c)
 *     ?HardwareVendorId@?$consume_Windows_Gaming_Input_IRawGameController@UIRawGameController@Input@Gaming@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180351B34 (-HardwareVendorId@-$consume_Windows_Gaming_Input_IRawGameController@UIRawGameController@Input@Ga.c)
 *     ?IsWireless@?$consume_Windows_Gaming_Input_IGameController@UIUINavigationController@Input@Gaming@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1803525BC (-IsWireless@-$consume_Windows_Gaming_Input_IGameController@UIUINavigationController@Input@Gaming.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall GamingOverlayExperienceManager::OnUINavigationControllerAdded(
        GamingOverlayExperienceManager *this,
        struct IInspectable a2,
        const struct winrt::Windows::Gaming::Input::UINavigationController *a3)
{
  double v6; // xmm0_8
  unsigned __int16 v7; // ax
  char **v8; // rax
  unsigned __int16 v9; // ax
  char **v10; // rax
  __int64 *v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // [rsp+28h] [rbp-39h] BYREF
  _QWORD v15[4]; // [rsp+30h] [rbp-31h] BYREF
  void *v16[4]; // [rsp+50h] [rbp-11h] BYREF
  __int64 v17; // [rsp+70h] [rbp+Fh] BYREF
  __time64_t Time; // [rsp+78h] [rbp+17h] BYREF
  volatile signed __int32 *v19; // [rsp+80h] [rbp+1Fh] BYREF
  volatile signed __int32 *v20; // [rsp+88h] [rbp+27h] BYREF

  v15[2] = a2.lpVtbl;
  Time = 0LL;
  _time64(&Time);
  v6 = _o__difftime64(Time, *((_QWORD *)this + 208));
  *((_QWORD *)this + 208) = Time;
  if ( v6 > (double)(winrt::impl::consume_Windows_Gaming_Input_IGameController<winrt::Windows::Gaming::Input::IUINavigationController>::IsWireless((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a3) != 0
                   ? 6
                   : 3) )
  {
    v20 = 0LL;
    v19 = 0LL;
    winrt::impl::as<winrt::Windows::Gaming::Input::IGameController,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v17,
      *(__int64 (__fastcall ****)(_QWORD, void *, _QWORD **))a3);
    if ( v17 )
    {
      winrt::Windows::Gaming::Input::RawGameController::FromGameController(
        (const struct winrt::Windows::Gaming::Input::IGameController *)&v14,
        (__int64)&v17);
      if ( v14 )
      {
        v7 = winrt::impl::consume_Windows_Gaming_Input_IRawGameController<winrt::Windows::Gaming::Input::IRawGameController>::HardwareProductId(&v14);
        v8 = std::to_wstring((char **)v16, v7);
        std::wstring::operator std::basic_string_view<unsigned short>(v8, v15);
        winrt::hstring::operator=(&v20, (__int64)v15);
        std::wstring::_Tidy_deallocate(v16);
        v9 = winrt::impl::consume_Windows_Gaming_Input_IRawGameController<winrt::Windows::Gaming::Input::IRawGameController>::HardwareVendorId(&v14);
        v10 = std::to_wstring((char **)v16, v9);
        std::wstring::operator std::basic_string_view<unsigned short>(v10, v15);
        winrt::hstring::operator=(&v19, (__int64)v15);
        std::wstring::_Tidy_deallocate(v16);
      }
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
    v15[3] = &v17;
    v11 = (__int64 *)winrt::hstring::hstring((winrt::hstring *)&v17, (const struct winrt::hstring *)&v20);
    v12 = (__int64 *)winrt::hstring::hstring((winrt::hstring *)&v14, (const struct winrt::hstring *)&v19);
    GamingOverlayExperienceManager::SignalGamepadConnect(v13, v12, v11);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v19);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v20);
  }
  if ( a2.lpVtbl->QueryInterface )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a2.lpVtbl);
}
