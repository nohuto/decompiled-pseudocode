/*
 * XREFs of ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x180654E58
 * Callers:
 *     ?CreateFileMappingName@FileMappingHelpers@Util@@QEAA?AUhstring@winrt@@QEAUHWND__@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEBU34@@Z @ 0x18064AE78 (-CreateFileMappingName@FileMappingHelpers@Util@@QEAA-AUhstring@winrt@@QEAUHWND__@@AEBV-$basic_st.c)
 *     ?DeleteIdFromStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAAXAEB_KAEBUhstring@6@AEB_N@Z @ 0x18066308C (-DeleteIdFromStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?SaveIdToStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEB_KAEBUhstring@6@AEB_N@Z @ 0x180663E2C (-SaveIdToStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEA.c)
 * Callees:
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x18018C024 (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

char **__fastcall std::to_wstring(char **a1, unsigned __int64 a2)
{
  _BYTE *v4; // r9
  _BYTE v6[6]; // [rsp+5Ah] [rbp-1Eh] BYREF

  v4 = v6;
  do
  {
    v4 -= 2;
    *(_WORD *)v4 = a2 % 0xA + 48;
    a2 /= 0xAuLL;
  }
  while ( a2 );
  std::wstring::wstring(a1, v4, v6);
  return a1;
}
