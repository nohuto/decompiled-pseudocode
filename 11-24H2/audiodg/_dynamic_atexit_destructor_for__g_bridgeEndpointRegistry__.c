/*
 * XREFs of _dynamic_atexit_destructor_for__g_bridgeEndpointRegistry__ @ 0x140097070
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140018288 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UBridgeEndpointRecord@@@std@@@std@@YAXPEAUBridgeEndpointRecord@@QEAU1@AEAV?$allocator@UBridgeEndpointRecord@@@0@@Z @ 0x140066E14 (--$_Destroy_range@V-$allocator@UBridgeEndpointRecord@@@std@@@std@@YAXPEAUBridgeEndpointRecord@@Q.c)
 */

void dynamic_atexit_destructor_for__g_bridgeEndpointRegistry__()
{
  if ( g_bridgeEndpointRegistry )
  {
    std::_Destroy_range<std::allocator<BridgeEndpointRecord>>(g_bridgeEndpointRegistry, xmmword_1400C46D8);
    std::_Deallocate<16,0>(
      (void *)g_bridgeEndpointRegistry,
      (*((_QWORD *)&xmmword_1400C46D8 + 1) - g_bridgeEndpointRegistry) & 0xFFFFFFFFFFFFFFF0uLL);
    g_bridgeEndpointRegistry = 0LL;
    xmmword_1400C46D8 = 0LL;
  }
}
