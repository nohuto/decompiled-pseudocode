/*
 * XREFs of ??0?$pair@$$CBUhstring@winrt@@V?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@QEAA@AEBU01@@Z @ 0x1802A7DA8
 * Callers:
 *     ?GetAllWindows@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA?AV?$unordered_map@Uhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@U?$hash@Uhstring@winrt@@@4@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@4@@std@@XZ @ 0x1802A7C4C (-GetAllWindows@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA-.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??$?0V?$allocator@U?$_List_node@_KPEAX@std@@@std@@@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA@AEBV01@AEBV?$allocator@U?$_List_node@_KPEAX@std@@@1@@Z @ 0x1802A7DE8 (--$-0V-$allocator@U-$_List_node@_KPEAX@std@@@std@@@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_.c)
 */

// Hidden C++ exception states: #wind=1
winrt::hstring *__fastcall std::pair<winrt::hstring const,std::unordered_set<unsigned __int64>>::pair<winrt::hstring const,std::unordered_set<unsigned __int64>>(
        winrt::hstring *a1,
        const struct winrt::hstring *a2)
{
  winrt::hstring::hstring(a1, a2);
  std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>(
    (char *)a1 + 8,
    (char *)a2 + 8);
  return a1;
}
