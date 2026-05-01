/*
 * XREFs of ?Empty@GuidHelper@Foundation@Windows@winrt@@SA@XZ @ 0x1802A8760
 * Callers:
 *     ?OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelActiveTabChangedEventArgs@38456@@Z @ 0x18026D0C0 (-OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTa.c)
 * Callees:
 *     ?Id@?$consume_Windows_Internal_Tiles_ITileNotification@UITileNotification@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180051DB0 (-Id@-$consume_Windows_Internal_Tiles_ITileNotification@UITileNotification@Tiles@Internal@Windows.c)
 *     ??$call@P6A?AUguid@winrt@@AEBUIGuidHelperStatics@Foundation@Windows@2@@Z@?$factory_cache_entry@UGuidHelper@Foundation@Windows@winrt@@UIGuidHelperStatics@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUguid@2@AEBUIGuidHelperStatics@Foundation@Windows@2@@Z@Z @ 0x180344D64 (--$call@P6A-AUguid@winrt@@AEBUIGuidHelperStatics@Foundation@Windows@2@@Z@-$factory_cache_entry@U.c)
 */

_OWORD *__fastcall winrt::Windows::Foundation::GuidHelper::Empty(_OWORD *a1)
{
  __int64 (__fastcall *v3)(const struct winrt::Windows::Foundation::IGuidHelperStatics *); // [rsp+30h] [rbp+8h] BYREF
  __int64 *v4; // [rsp+38h] [rbp+10h]

  v4 = &qword_1808C8DC8;
  _InterlockedIncrement64(&qword_1808C8DC8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::GuidHelper,winrt::Windows::Foundation::IGuidHelperStatics> )
  {
    winrt::impl::consume_Windows_Internal_Tiles_ITileNotification<winrt::Windows::Internal::Tiles::ITileNotification>::Id(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::GuidHelper,winrt::Windows::Foundation::IGuidHelperStatics>,
      a1);
    _InterlockedDecrement64(&qword_1808C8DC8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808C8DC8);
    v3 = _lambda_c3d528fab69363bea486f57b2866680a_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::GuidHelper,winrt::Windows::Foundation::IGuidHelperStatics>::call<winrt::guid (*)(winrt::Windows::Foundation::IGuidHelperStatics const &)>(
      a1,
      a1,
      &v3);
  }
  return a1;
}
