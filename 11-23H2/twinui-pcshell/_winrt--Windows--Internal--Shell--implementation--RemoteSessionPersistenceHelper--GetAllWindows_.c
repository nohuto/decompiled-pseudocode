/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::GetAllWindows_::_1_::dtor$0 @ 0x1802B5BCB
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unordered_map@Uhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@U?$hash@Uhstring@winrt@@@4@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@4@@std@@QEAA@XZ @ 0x18070EB68 (--1-$unordered_map@Uhstring@winrt@@V-$vector@UWindowId@UI@Windows@winrt@@V-$allocator@UWindowId@.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::GetAllWindows_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::unordered_map<winrt::hstring,std::vector<winrt::Windows::UI::WindowId>>::~unordered_map<winrt::hstring,std::vector<winrt::Windows::UI::WindowId>>(*(_QWORD *)(a2 + 312));
  }
  return result;
}
