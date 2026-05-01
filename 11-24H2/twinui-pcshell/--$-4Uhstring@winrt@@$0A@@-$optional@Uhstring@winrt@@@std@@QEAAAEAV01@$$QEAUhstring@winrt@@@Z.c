/*
 * XREFs of ??$?4Uhstring@winrt@@$0A@@?$optional@Uhstring@winrt@@@std@@QEAAAEAV01@$$QEAUhstring@winrt@@@Z @ 0x180644214
 * Callers:
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@IUhstring@5@@impl@winrt@@QEBA@AEBI@Z @ 0x180651574 (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@IUhstring@winrt@@@Collections@F.c)
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@_KUhstring@5@@impl@winrt@@QEBA@AEB_K@Z @ 0x180651694 (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@_KUhstring@winrt@@@Collections@.c)
 * Callees:
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x18005346C (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 */

__int64 __fastcall std::optional<winrt::hstring>::operator=<winrt::hstring,0>(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    if ( (__int64 *)a1 != a2 )
    {
      v4 = *a2;
      *a2 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::attach((_QWORD *)a1, v4);
    }
  }
  else
  {
    v5 = *a2;
    *a2 = 0LL;
    *(_QWORD *)a1 = v5;
    *(_BYTE *)(a1 + 8) = 1;
  }
  return a1;
}
