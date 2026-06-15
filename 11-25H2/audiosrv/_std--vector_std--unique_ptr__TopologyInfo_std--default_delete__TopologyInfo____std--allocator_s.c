/*
 * XREFs of _std::vector_std::unique_ptr__TopologyInfo_std::default_delete__TopologyInfo____std::allocator_std::unique_ptr__TopologyInfo_std::default_delete__TopologyInfo_______::_Emplace_reallocate_std::unique_ptr__TopologyInfo_std::default_delete__TopologyInfo______::_1_::catch$0 @ 0x1801660B5
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@0@@Z @ 0x1800E5C2C (--$_Destroy_range@V-$allocator@V-$unique_ptr@U_TopologyInfo@@U-$default_delete@U_TopologyInfo@@@.c)
 *     ?deallocate@?$allocator@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@@std@@QEAAXQEAV?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@2@_K@Z @ 0x1800EACF8 (-deallocate@-$allocator@V-$unique_ptr@U_ConnectorInfo@@U-$default_delete@U_ConnectorInfo@@@std@@.c)
 *     _CxxThrowException_0 @ 0x18015E870 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::unique_ptr__TopologyInfo_std::default_delete__TopologyInfo____std::allocator_std::unique_ptr__TopologyInfo_std::default_delete__TopologyInfo_______::_Emplace_reallocate_std::unique_ptr__TopologyInfo_std::default_delete__TopologyInfo______::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::_Destroy_range<std::allocator<std::unique_ptr<_TopologyInfo>>>(*(_QWORD *)(a2 + 112), *(_QWORD *)(a2 + 136));
  std::allocator<std::unique_ptr<_ConnectorInfo>>::deallocate(v3, *(char **)(a2 + 32), *(_QWORD *)(a2 + 120));
  throw;
}
