/*
 * XREFs of _Win32AppStateManager::GetDisplayName_::_1_::dtor$0 @ 0x1806CB2FC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Win32AppStateManager::GetDisplayName_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::wstring::_Tidy_deallocate((void **)(a2 + 40));
}
