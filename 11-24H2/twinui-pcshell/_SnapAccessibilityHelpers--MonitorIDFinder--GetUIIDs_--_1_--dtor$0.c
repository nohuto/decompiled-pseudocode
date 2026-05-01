/*
 * XREFs of _SnapAccessibilityHelpers::MonitorIDFinder::GetUIIDs_::_1_::dtor$0 @ 0x1806F918D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@IV?$allocator@I@std@@@std@@QEAA@XZ @ 0x1802C62E4 (--1-$vector@IV-$allocator@I@std@@@std@@QEAA@XZ.c)
 */

void __fastcall SnapAccessibilityHelpers::MonitorIDFinder::GetUIIDs_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::vector<unsigned int>::~vector<unsigned int>(*(_QWORD *)(a2 + 56));
  }
}
