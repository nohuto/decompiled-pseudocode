/*
 * XREFs of _std::vector_std::unique_ptr_CConnectorFormatCharacteristics_std::default_delete_CConnectorFormatCharacteristics____std::allocator_std::unique_ptr_CConnectorFormatCharacteristics_std::default_delete_CConnectorFormatCharacteristics_______::_Emplace_reallocate_std::unique_ptr_CConnectorFormatCharacteristics_std::default_delete_CConnectorFormatCharacteristics______::_1_::catch$0 @ 0x18015FFD3
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@0@@Z @ 0x1800255E0 (--$_Destroy_range@V-$allocator@V-$unique_ptr@UCConnectorFormatCharacteristics@@U-$default_delete.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18015E870 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::unique_ptr_CConnectorFormatCharacteristics_std::default_delete_CConnectorFormatCharacteristics____std::allocator_std::unique_ptr_CConnectorFormatCharacteristics_std::default_delete_CConnectorFormatCharacteristics_______::_Emplace_reallocate_std::unique_ptr_CConnectorFormatCharacteristics_std::default_delete_CConnectorFormatCharacteristics______::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::unique_ptr<CConnectorFormatCharacteristics>>>(
    *(_QWORD *)(a2 + 128),
    *(_QWORD *)(a2 + 152));
  std::_Deallocate<16,0>(*(char **)(a2 + 32), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 136)));
  throw;
}
