/*
 * XREFs of _std::vector_wil::com_ptr_t_IBridgeSourceEndpointConsumer_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IBridgeSourceEndpointConsumer_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IBridgeSourceEndpointConsumer_wil::err_returncode_policy____::_1_::catch$0 @ 0x140095CA5
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140018288 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x14005A0F0 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x140066E50 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_poli.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_IBridgeSourceEndpointConsumer_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IBridgeSourceEndpointConsumer_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IBridgeSourceEndpointConsumer_wil::err_returncode_policy____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IBridgeSourceEndpointConsumer,wil::err_returncode_policy>>>(
    *(__int64 **)(a2 + 112),
    *(__int64 **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 8LL * *(_QWORD *)(a2 + 120));
  throw;
}
