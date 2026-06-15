/*
 * XREFs of _std::vector_BridgeEndpointRecord_std::allocator_BridgeEndpointRecord___::_Emplace_reallocate___int64_&_Microsoft::WRL::WeakRef_&__::_1_::catch$1 @ 0x1400961E6
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140018588 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x14005A1E0 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@UBridgeEndpointRecord@@@std@@@std@@YAXPEAUBridgeEndpointRecord@@QEAU1@AEAV?$allocator@UBridgeEndpointRecord@@@0@@Z @ 0x140066E84 (--$_Destroy_range@V-$allocator@UBridgeEndpointRecord@@@std@@@std@@YAXPEAUBridgeEndpointRecord@@Q.c)
 */

void __fastcall __noreturn std::vector_BridgeEndpointRecord_std::allocator_BridgeEndpointRecord___::_Emplace_reallocate___int64___Microsoft::WRL::WeakRef____::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<BridgeEndpointRecord>>(*(_QWORD *)(a2 + 112), *(_QWORD *)(a2 + 32));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), 16LL * *(_QWORD *)(a2 + 120));
  throw;
}
