/*
 * XREFs of ??R_lambda_30c050dc9be2b5b829416e08712c22ad_@@QEBA@AEBUIPropertyValueStatics@Foundation@Windows@winrt@@@Z @ 0x1804AD6F8
 * Callers:
 *     ??$call@AEAV_lambda_30c050dc9be2b5b829416e08712c22ad_@@@?$factory_cache_entry@UPropertyValue@Foundation@Windows@winrt@@UIPropertyValueStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_30c050dc9be2b5b829416e08712c22ad_@@@Z @ 0x1804AD2FC (--$call@AEAV_lambda_30c050dc9be2b5b829416e08712c22ad_@@@-$factory_cache_entry@UPropertyValue@Fou.c)
 *     ?make@?$reference_traits@_N@impl@winrt@@SA@_N@Z @ 0x1804AD800 (-make@-$reference_traits@_N@impl@winrt@@SA@_N@Z.c)
 * Callees:
 *     ?CreateBoolean@?$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundation@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x1804AD724 (-CreateBoolean@-$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundat.c)
 */

__int64 __fastcall _lambda_30c050dc9be2b5b829416e08712c22ad_::operator()(_BYTE **a1, __int64 a2, __int64 a3)
{
  _BYTE *v5; // r8

  v5 = *a1;
  LOBYTE(v5) = **a1;
  winrt::impl::consume_Windows_Foundation_IPropertyValueStatics<winrt::Windows::Foundation::IPropertyValueStatics>::CreateBoolean(
    a3,
    a2,
    v5);
  return a2;
}
