/*
 * XREFs of _CreativeFramework::CommonHelper::StringUtils::SplitString_::_1_::dtor$0 @ 0x1800BCA17
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAA@XZ @ 0x180083904 (--1-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator@V-$bas.c)
 */

void __fastcall CreativeFramework::CommonHelper::StringUtils::SplitString_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::vector<std::wstring>::~vector<std::wstring>(*(_QWORD **)(a2 + 40));
  }
}
