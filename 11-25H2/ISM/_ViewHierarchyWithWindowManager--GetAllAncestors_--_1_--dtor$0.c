/*
 * XREFs of _ViewHierarchyWithWindowManager::GetAllAncestors_::_1_::dtor$0 @ 0x1801C986A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x18007F780 (--1-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall ViewHierarchyWithWindowManager::GetAllAncestors_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 192) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 192) &= ~1u;
    std::vector<Windows::UI::Color>::~vector<Windows::UI::Color>(*(_QWORD *)(a2 + 184));
  }
}
