/*
 * XREFs of ??$construct@U_GUID@@AEBU1@@?$_Default_allocator_traits@V?$allocator@U_GUID@@@std@@@std@@SAXAEAV?$allocator@U_GUID@@@1@QEAU_GUID@@AEBU3@@Z @ 0x1800C848C
 * Callers:
 *     ??$_Emplace_reallocate@AEBU_GUID@@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAPEAU_GUID@@QEAU2@AEBU2@@Z @ 0x1800C7FE4 (--$_Emplace_reallocate@AEBU_GUID@@@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAPEAU_GU.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Default_allocator_traits<std::allocator<_GUID>>::construct<_GUID,_GUID const &>(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3)
{
  *a2 = *a3;
}
