/*
 * XREFs of ?make@?$reference_traits@_N@impl@winrt@@SA@_N@Z @ 0x1804AD800
 * Callers:
 *     ??$box_value@_N$0A@@winrt@@YA?AUIInspectable@Foundation@Windows@0@AEB_N@Z @ 0x1804AD2DC (--$box_value@_N$0A@@winrt@@YA-AUIInspectable@Foundation@Windows@0@AEB_N@Z.c)
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x1805EFF00 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$call@AEAV_lambda_30c050dc9be2b5b829416e08712c22ad_@@@?$factory_cache_entry@UPropertyValue@Foundation@Windows@winrt@@UIPropertyValueStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_30c050dc9be2b5b829416e08712c22ad_@@@Z @ 0x1804AD2FC (--$call@AEAV_lambda_30c050dc9be2b5b829416e08712c22ad_@@@-$factory_cache_entry@UPropertyValue@Fou.c)
 *     ??R_lambda_30c050dc9be2b5b829416e08712c22ad_@@QEBA@AEBUIPropertyValueStatics@Foundation@Windows@winrt@@@Z @ 0x1804AD6F8 (--R_lambda_30c050dc9be2b5b829416e08712c22ad_@@QEBA@AEBUIPropertyValueStatics@Foundation@Windows@.c)
 */

// Hidden C++ exception states: #wind=1
void (__fastcall ***__fastcall winrt::impl::reference_traits<bool>::make(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        char a2))(_QWORD, __int64 *, __int64 *)
{
  char *v4; // [rsp+40h] [rbp+8h] BYREF
  char v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 *v6; // [rsp+50h] [rbp+18h]

  v5 = a2;
  v4 = &v5;
  v6 = &qword_1808C8E08;
  _InterlockedIncrement64(&qword_1808C8E08);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics> )
  {
    _lambda_30c050dc9be2b5b829416e08712c22ad_::operator()(
      &v4,
      (__int64)a1,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>);
    _InterlockedDecrement64(&qword_1808C8E08);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808C8E08);
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>::call<_lambda_30c050dc9be2b5b829416e08712c22ad_ &>(
      a1,
      (__int64)a1,
      (__int64)&v4);
  }
  return a1;
}
