/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800EEC70
 * Callers:
 *     ?make_weak_ref@?$root_implements@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800EE494 (-make_weak_ref@-$root_implements@U-$key_value_pair@U-$IKeyValuePair@Uhstring@winrt@@N@Collection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<winrt::impl::weak_ref<1,1>>::unconditional_release_ref(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  return winrt::impl::weak_ref<1,1>::Release(v2);
}
