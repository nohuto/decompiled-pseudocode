/*
 * XREFs of ??1?$vector@GV?$allocator@G@std@@@std@@QEAA@XZ @ 0x1802D0C70
 * Callers:
 *     __anonymous_namespace_::GetRegistrySettingString_::_1_::dtor$0 @ 0x1806D7EA8 (__anonymous_namespace_--GetRegistrySettingString_--_1_--dtor$0.c)
 *     _CustomShellManager::IsCurrentProcessCustomShellHost_::_1_::dtor$1 @ 0x1806D7EBA (_CustomShellManager--IsCurrentProcessCustomShellHost_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<unsigned short>::~vector<unsigned short>(__int64 a1)
{
  std::vector<unsigned short>::_Tidy(a1);
}
