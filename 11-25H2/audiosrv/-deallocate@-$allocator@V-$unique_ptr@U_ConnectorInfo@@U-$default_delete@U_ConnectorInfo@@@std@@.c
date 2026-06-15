/*
 * XREFs of ?deallocate@?$allocator@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@@std@@QEAAXQEAV?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@2@_K@Z @ 0x1800EACF8
 * Callers:
 *     _std::vector_std::unique_ptr__ConnectorInfo_std::default_delete__ConnectorInfo____std::allocator_std::unique_ptr__ConnectorInfo_std::default_delete__ConnectorInfo_______::_Emplace_reallocate_std::unique_ptr__ConnectorInfo_std::default_delete__ConnectorInfo______::_1_::catch$0 @ 0x18016607B (_std--vector_std--unique_ptr__ConnectorInfo_std--default_delete__ConnectorInfo____std--allocator.c)
 *     _std::vector_std::unique_ptr__TopologyInfo_std::default_delete__TopologyInfo____std::allocator_std::unique_ptr__TopologyInfo_std::default_delete__TopologyInfo_______::_Emplace_reallocate_std::unique_ptr__TopologyInfo_std::default_delete__TopologyInfo______::_1_::catch$0 @ 0x1801660B5 (_std--vector_std--unique_ptr__TopologyInfo_std--default_delete__TopologyInfo____std--allocator_s.c)
 *     _std::vector_wistd::unique_ptr__MulticastSessionConfiguration_[0]_wil::function_deleter_void_(__cdecl_)(void__)_&MIDL_user_free____std::allocator_wistd::unique_ptr__MulticastSessionConfiguration_[0]_wil::function_deleter_void_(__cdecl_)(void__)_&MIDL_user_free_______::_Emplace_reallocate_wistd::unique_ptr__MulticastSessionConfiguration_[0]_wil::function_deleter_void_(__cdecl_)(void__)_&MIDL_user_free______::_1_::catch$0 @ 0x180166F9D (_std--vector_wistd--unique_ptr__MulticastSessionConfiguration_[0]_wil--function_deleter_void_(__.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::unique_ptr<_ConnectorInfo>>::deallocate(__int64 a1, char *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)(8 * a3));
}
