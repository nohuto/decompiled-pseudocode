/*
 * XREFs of ?check_hresult_allow_bounds@impl@winrt@@YA?AUhresult@2@U32@AEBUslim_source_location@12@@Z @ 0x18033FC74
 * Callers:
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180056638 (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Wi.c)
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@IUhstring@5@@impl@winrt@@QEBA@AEBI@Z @ 0x180651574 (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@IUhstring@winrt@@@Collections@F.c)
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@Uhstring@5@URemoteSystem@Shell@Internal@45@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180651610 (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@Uhstring@winrt@@URemoteSystem@S.c)
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@_KUhstring@5@@impl@winrt@@QEBA@AEB_K@Z @ 0x180651694 (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@_KUhstring@winrt@@@Collections@.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 */

int *__fastcall winrt::impl::check_hresult_allow_bounds(int *a1, int a2, __int64 a3)
{
  int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 != -2147483637 && a2 != -2147467259 && a2 != -2147024894 )
    winrt::check_hresult(&v6, a2, a3);
  *a1 = a2;
  return a1;
}
