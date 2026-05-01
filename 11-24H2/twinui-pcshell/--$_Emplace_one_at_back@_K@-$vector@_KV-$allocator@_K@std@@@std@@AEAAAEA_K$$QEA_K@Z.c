/*
 * XREFs of ??$_Emplace_one_at_back@_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAAEA_K$$QEA_K@Z @ 0x1804AD270
 * Callers:
 *     ?v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ @ 0x180222CE0 (-v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ.c)
 *     ?GetAllWindows@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA?AV?$unordered_map@Uhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@U?$hash@Uhstring@winrt@@@4@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@4@@std@@XZ @ 0x1802A7C4C (-GetAllWindows@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA-.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<unsigned __int64>::_Emplace_one_at_back<unsigned __int64>(__int64 a1, _QWORD *a2)
{
  _BYTE *v3; // rdx
  char *result; // rax

  v3 = *(_BYTE **)(a1 + 8);
  if ( v3 == *(_BYTE **)(a1 + 16) )
    return std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64>((const void **)a1, v3, a2);
  *(_QWORD *)v3 = *a2;
  result = *(char **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 8;
  return result;
}
