/*
 * XREFs of ?at@?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@std@@QEBAAEBUguid@winrt@@AEB_K@Z @ 0x1800C14C0
 * Callers:
 *     ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x1800C2584 (-RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV-.c)
 * Callees:
 *     ??$?R_K@?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@QEBA_KAEB_K@Z @ 0x1800C0B70 (--$-R_K@-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@QEBA_KAEB_K@Z.c)
 */

__int64 __fastcall std::unordered_map<unsigned __int64,winrt::guid>::at(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // rdx
  _QWORD *v4; // r10
  __int64 v5; // rcx
  __int64 v6; // r11
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx

  v2 = std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>::operator()<unsigned __int64>(
         a1,
         a2);
  v5 = v4[3];
  v6 = 2 * (v4[6] & v2);
  v7 = *(_QWORD *)(v5 + 16 * (v4[6] & v2) + 8);
  if ( v7 == v4[1] )
    goto LABEL_8;
  v8 = *(_QWORD *)(v5 + 8 * v6);
  v9 = *v3;
  while ( v9 != *(_QWORD *)(v7 + 16) )
  {
    if ( v7 == v8 )
      goto LABEL_8;
    v7 = *(_QWORD *)(v7 + 8);
  }
  if ( !v7 )
  {
LABEL_8:
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
    JUMPOUT(0x1800C1520LL);
  }
  return v7 + 24;
}
