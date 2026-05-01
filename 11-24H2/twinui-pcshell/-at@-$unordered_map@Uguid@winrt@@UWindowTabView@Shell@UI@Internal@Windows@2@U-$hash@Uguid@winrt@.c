/*
 * XREFs of ?at@?$unordered_map@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@9@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@@std@@QEAAAEAUWindowTabView@Shell@UI@Internal@Windows@winrt@@AEBUguid@8@@Z @ 0x180148028
 * Callers:
 *     ?GetActiveTabId@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA?AUguid@6@XZ @ 0x1800C45A0 (-GetActiveTabId@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA-AUguid@6@XZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::unordered_map<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView>::at(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v3; // r8
  unsigned __int64 i; // r9
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // r9
  __int64 v11; // rcx

  v3 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 0x10; ++i )
  {
    v5 = *((unsigned __int8 *)a2 + i);
    v3 = 0x100000001B3LL * (v5 ^ v3);
  }
  v6 = v3 & a1[6];
  v7 = a1[3];
  v8 = 2 * v6;
  v9 = *(_QWORD **)(v7 + 8 * v8 + 8);
  if ( v9 != (_QWORD *)a1[1] )
  {
    v10 = *(_QWORD **)(v7 + 8 * v8);
    while ( 1 )
    {
      v11 = *a2 - v9[2];
      if ( *a2 == v9[2] )
        v11 = a2[1] - v9[3];
      if ( !v11 )
        goto LABEL_10;
      if ( v9 == v10 )
        break;
      v9 = (_QWORD *)v9[1];
    }
  }
  do
  {
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
LABEL_10:
    ;
  }
  while ( !v9 );
  return v9 + 4;
}
