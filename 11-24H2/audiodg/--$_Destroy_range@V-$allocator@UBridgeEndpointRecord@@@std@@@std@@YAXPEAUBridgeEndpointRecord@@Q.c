/*
 * XREFs of ??$_Destroy_range@V?$allocator@UBridgeEndpointRecord@@@std@@@std@@YAXPEAUBridgeEndpointRecord@@QEAU1@AEAV?$allocator@UBridgeEndpointRecord@@@0@@Z @ 0x140066E14
 * Callers:
 *     ??$_Emplace_reallocate@AEA_JAEAVWeakRef@WRL@Microsoft@@@?$vector@UBridgeEndpointRecord@@V?$allocator@UBridgeEndpointRecord@@@std@@@std@@AEAAPEAUBridgeEndpointRecord@@QEAU2@AEA_JAEAVWeakRef@WRL@Microsoft@@@Z @ 0x140066E88 (--$_Emplace_reallocate@AEA_JAEAVWeakRef@WRL@Microsoft@@@-$vector@UBridgeEndpointRecord@@V-$alloc.c)
 *     ??$_Uninitialized_move@PEAUBridgeEndpointRecord@@V?$allocator@UBridgeEndpointRecord@@@std@@@std@@YAPEAUBridgeEndpointRecord@@QEAU1@0PEAU1@AEAV?$allocator@UBridgeEndpointRecord@@@0@@Z @ 0x140067148 (--$_Uninitialized_move@PEAUBridgeEndpointRecord@@V-$allocator@UBridgeEndpointRecord@@@std@@@std@.c)
 *     _std::vector_BridgeEndpointRecord_std::allocator_BridgeEndpointRecord___::_Emplace_reallocate___int64_&_Microsoft::WRL::WeakRef_&__::_1_::catch$1 @ 0x140095C6A (_std--vector_BridgeEndpointRecord_std--allocator_BridgeEndpointRecord___--_Emplace_reallocate___.c)
 *     _dynamic_atexit_destructor_for__g_bridgeEndpointRegistry__ @ 0x140097070 (_dynamic_atexit_destructor_for__g_bridgeEndpointRegistry__.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012DD8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<BridgeEndpointRecord>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(v3 + 8));
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
