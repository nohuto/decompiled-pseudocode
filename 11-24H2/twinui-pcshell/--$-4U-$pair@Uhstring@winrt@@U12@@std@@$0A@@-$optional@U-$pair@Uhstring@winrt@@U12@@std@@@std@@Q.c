/*
 * XREFs of ??$?4U?$pair@Uhstring@winrt@@U12@@std@@$0A@@?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@QEAAAEAV01@$$QEAU?$pair@Uhstring@winrt@@U12@@1@@Z @ 0x1802B7DB8
 * Callers:
 *     ?GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@PEAUHKEY__@@PEBG@Z @ 0x180053D00 (-GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x18005346C (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 */

__int64 __fastcall std::optional<std::pair<winrt::hstring,winrt::hstring>>::operator=<std::pair<winrt::hstring,winrt::hstring>,0>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rdx
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    if ( (__int64 *)a1 != a2 )
    {
      v4 = *a2;
      *a2 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::attach((_QWORD *)a1, v4);
    }
    v5 = a2 + 1;
    if ( (__int64 *)(a1 + 8) != v5 )
    {
      v6 = *v5;
      *v5 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::attach((_QWORD *)(a1 + 8), v6);
    }
  }
  else
  {
    v7 = *a2;
    *a2 = 0LL;
    *(_QWORD *)a1 = v7;
    v8 = a2[1];
    a2[1] = 0LL;
    *(_QWORD *)(a1 + 8) = v8;
    *(_BYTE *)(a1 + 16) = 1;
  }
  return a1;
}
