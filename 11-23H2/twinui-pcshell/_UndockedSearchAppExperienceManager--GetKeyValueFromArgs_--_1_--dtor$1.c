/*
 * XREFs of _UndockedSearchAppExperienceManager::GetKeyValueFromArgs_::_1_::dtor$1 @ 0x180467E08
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall UndockedSearchAppExperienceManager::GetKeyValueFromArgs_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    winrt::hstring::~hstring((void **)(a2 + 40));
  }
}
