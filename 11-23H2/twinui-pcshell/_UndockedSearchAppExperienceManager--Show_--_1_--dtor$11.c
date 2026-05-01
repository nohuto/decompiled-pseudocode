/*
 * XREFs of _UndockedSearchAppExperienceManager::Show_::_1_::dtor$11 @ 0x1802BEEA7
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall UndockedSearchAppExperienceManager::Show_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 72) &= ~1u;
    winrt::hstring::~hstring((void **)(a2 + 200));
  }
}
