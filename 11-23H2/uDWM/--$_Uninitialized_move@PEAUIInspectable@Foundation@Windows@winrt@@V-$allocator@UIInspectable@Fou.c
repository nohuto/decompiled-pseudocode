/*
 * XREFs of ??$_Uninitialized_move@PEAUIInspectable@Foundation@Windows@winrt@@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAPEAUIInspectable@Foundation@Windows@winrt@@QEAU1234@0PEAU1234@AEAV?$allocator@UIInspectable@Foundation@Windows@winrt@@@0@@Z @ 0x1801004E8
 * Callers:
 *     ??$_Emplace_reallocate@AEBUIInspectable@Foundation@Windows@winrt@@@?$vector@UIInspectable@Foundation@Windows@winrt@@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@QEAAPEAUIInspectable@Foundation@Windows@winrt@@QEAU2345@AEBU2345@@Z @ 0x18010008C (--$_Emplace_reallocate@AEBUIInspectable@Foundation@Windows@winrt@@@-$vector@UIInspectable@Founda.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspectable@Foundation@Windows@winrt@@QEAU1234@AEAV?$allocator@UIInspectable@Foundation@Windows@winrt@@@0@@Z @ 0x1800FFFD4 (--$_Destroy_range@V-$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspe.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall std::_Uninitialized_move<winrt::Windows::Foundation::IInspectable *>(
        __int64 *a1,
        __int64 *a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  __int64 v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *(_QWORD *)a3 = v4;
    a3 = (winrt::Windows::Foundation::IUnknown *)((char *)a3 + 8);
    ++a1;
  }
  std::_Destroy_range<std::allocator<winrt::Windows::Foundation::IInspectable>>(a3, a3);
  return a3;
}
