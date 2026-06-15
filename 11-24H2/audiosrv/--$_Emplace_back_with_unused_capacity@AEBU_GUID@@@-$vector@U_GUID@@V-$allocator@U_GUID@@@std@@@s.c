/*
 * XREFs of ??$_Emplace_back_with_unused_capacity@AEBU_GUID@@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAAEAU_GUID@@AEBU2@@Z @ 0x1800C7F94
 * Callers:
 *     ?GetDiscoveredEffects@CAudioStream@@AEAAJAEAV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@@Z @ 0x1800734E0 (-GetDiscoveredEffects@CAudioStream@@AEAAJAEAV-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@@.c)
 * Callees:
 *     ??$_Construct_in_place@U_GUID@@AEBU1@@std@@YAXAEAU_GUID@@AEBU1@@Z @ 0x1800C7F84 (--$_Construct_in_place@U_GUID@@AEBU1@@std@@YAXAEAU_GUID@@AEBU1@@Z.c)
 */

__int64 __fastcall std::vector<_GUID>::_Emplace_back_with_unused_capacity<_GUID const &>(__int64 a1, _OWORD *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  std::_Construct_in_place<_GUID,_GUID const &>(*(_OWORD **)(a1 + 8), a2);
  result = *(_QWORD *)(v2 + 8);
  *(_QWORD *)(v2 + 8) = result + 16;
  return result;
}
