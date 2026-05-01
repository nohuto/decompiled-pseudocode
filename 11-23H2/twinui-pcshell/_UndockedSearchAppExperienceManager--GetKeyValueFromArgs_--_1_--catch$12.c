/*
 * XREFs of _UndockedSearchAppExperienceManager::GetKeyValueFromArgs_::_1_::catch$12 @ 0x180467E2F
 * Callers:
 *     <none>
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::GetKeyValueFromArgs_::_1_::catch_12(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  **(_QWORD **)(a2 + 104) = winrt::impl::duplicate_hstring(
                              **(winrt::impl ***)(a2 + 128),
                              (struct winrt::impl::hstring_header *)a2,
                              a3);
  return 0LL;
}
