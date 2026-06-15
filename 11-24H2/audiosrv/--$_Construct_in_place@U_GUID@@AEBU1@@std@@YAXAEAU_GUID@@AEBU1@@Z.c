/*
 * XREFs of ??$_Construct_in_place@U_GUID@@AEBU1@@std@@YAXAEAU_GUID@@AEBU1@@Z @ 0x1800C7F84
 * Callers:
 *     ??$_Emplace_back_with_unused_capacity@AEBU_GUID@@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAAEAU_GUID@@AEBU2@@Z @ 0x1800C7F94 (--$_Emplace_back_with_unused_capacity@AEBU_GUID@@@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@s.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Construct_in_place<_GUID,_GUID const &>(_OWORD *a1, _OWORD *a2)
{
  *a1 = *a2;
}
