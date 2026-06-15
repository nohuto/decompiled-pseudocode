/*
 * XREFs of ??$_Uninitialized_move@PEAUBridgeEndpointRecord@@V?$allocator@UBridgeEndpointRecord@@@std@@@std@@YAPEAUBridgeEndpointRecord@@QEAU1@0PEAU1@AEAV?$allocator@UBridgeEndpointRecord@@@0@@Z @ 0x1400671B8
 * Callers:
 *     ??$_Emplace_reallocate@AEA_JAEAVWeakRef@WRL@Microsoft@@@?$vector@UBridgeEndpointRecord@@V?$allocator@UBridgeEndpointRecord@@@std@@@std@@AEAAPEAUBridgeEndpointRecord@@QEAU2@AEA_JAEAVWeakRef@WRL@Microsoft@@@Z @ 0x140066EF8 (--$_Emplace_reallocate@AEA_JAEAVWeakRef@WRL@Microsoft@@@-$vector@UBridgeEndpointRecord@@V-$alloc.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UBridgeEndpointRecord@@@std@@@std@@YAXPEAUBridgeEndpointRecord@@QEAU1@AEAV?$allocator@UBridgeEndpointRecord@@@0@@Z @ 0x140066E84 (--$_Destroy_range@V-$allocator@UBridgeEndpointRecord@@@std@@@std@@YAXPEAUBridgeEndpointRecord@@Q.c)
 */

char *__fastcall std::_Uninitialized_move<BridgeEndpointRecord *>(char *a1, char *a2, _QWORD *a3)
{
  char *v3; // rbx
  _QWORD *v4; // r8
  signed __int64 v5; // r9
  _QWORD *v6; // rcx

  v3 = (char *)a3;
  if ( a1 != a2 )
  {
    v4 = a3 + 1;
    v5 = a1 - v3;
    do
    {
      v6 = (_QWORD *)((char *)v4 + v5);
      *(_QWORD *)v3 = *(_QWORD *)((char *)v4 + v5 - 8);
      *v4 = 0LL;
      if ( v4 != (_QWORD *)((char *)v4 + v5) )
      {
        *v4 = *v6;
        *v6 = 0LL;
      }
      v4 += 2;
      v3 += 16;
    }
    while ( (char *)v4 + v5 - 8 != a2 );
  }
  std::_Destroy_range<std::allocator<BridgeEndpointRecord>>((__int64)v3, (__int64)v3);
  return v3;
}
