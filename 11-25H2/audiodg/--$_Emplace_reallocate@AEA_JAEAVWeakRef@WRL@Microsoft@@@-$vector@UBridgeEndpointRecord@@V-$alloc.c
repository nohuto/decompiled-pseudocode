/*
 * XREFs of ??$_Emplace_reallocate@AEA_JAEAVWeakRef@WRL@Microsoft@@@?$vector@UBridgeEndpointRecord@@V?$allocator@UBridgeEndpointRecord@@@std@@@std@@AEAAPEAUBridgeEndpointRecord@@QEAU2@AEA_JAEAVWeakRef@WRL@Microsoft@@@Z @ 0x140066EF8
 * Callers:
 *     ?RuntimeClassInitialize@CBridgeSourceEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMediaType@@I@Z @ 0x140067970 (-RuntimeClassInitialize@CBridgeSourceEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMed.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140018588 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1400193B8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x140041D70 (-InternalAddRef@-$ComPtr@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Medi.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x140048BB8 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UBridgeEndpointRecord@@@std@@@std@@YAXPEAUBridgeEndpointRecord@@QEAU1@AEAV?$allocator@UBridgeEndpointRecord@@@0@@Z @ 0x140066E84 (--$_Destroy_range@V-$allocator@UBridgeEndpointRecord@@@std@@@std@@YAXPEAUBridgeEndpointRecord@@Q.c)
 *     ??$_Uninitialized_move@PEAUBridgeEndpointRecord@@V?$allocator@UBridgeEndpointRecord@@@std@@@std@@YAPEAUBridgeEndpointRecord@@QEAU1@0PEAU1@AEAV?$allocator@UBridgeEndpointRecord@@@0@@Z @ 0x1400671B8 (--$_Uninitialized_move@PEAUBridgeEndpointRecord@@V-$allocator@UBridgeEndpointRecord@@@std@@@std@.c)
 */

char *__fastcall std::vector<BridgeEndpointRecord>::_Emplace_reallocate<__int64 &,Microsoft::WRL::WeakRef &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v6; // r14
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // rax
  __int64 v14; // rsi
  char *v15; // r14
  __int64 v16; // rdx
  _QWORD *v17; // r8
  __int64 v18; // rcx
  char *result; // rax
  void *v20; // [rsp+28h] [rbp-40h]
  __int64 v21; // [rsp+70h] [rbp+8h]

  v6 = a2 - g_bridgeEndpointRegistry;
  v7 = ((__int64)xmmword_1400C4758 - g_bridgeEndpointRegistry) >> 4;
  v8 = 0xFFFFFFFFFFFFFFFLL;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (*((_QWORD *)&xmmword_1400C4758 + 1) - g_bridgeEndpointRegistry) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v9;
  }
  size_of = std::_Get_size_of_n<16>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (__int64)v13;
  v20 = v13;
  v15 = &v13[v6 & 0xFFFFFFFFFFFFFFF0uLL];
  try
  {
    *(_QWORD *)v15 = *a3;
    *((_QWORD *)v15 + 1) = *a4;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>>::InternalAddRef((__int64 *)v15 + 1);
    v21 = (__int64)v15;
    v16 = xmmword_1400C4758;
    v17 = (_QWORD *)v14;
    v18 = g_bridgeEndpointRegistry;
    if ( a2 != (_QWORD)xmmword_1400C4758 )
    {
      std::_Uninitialized_move<BridgeEndpointRecord *>(g_bridgeEndpointRegistry, a2, v14);
      v21 = v14;
      v17 = v15 + 16;
      v16 = xmmword_1400C4758;
      v18 = a2;
    }
    std::_Uninitialized_move<BridgeEndpointRecord *>(v18, v16, v17);
    if ( g_bridgeEndpointRegistry )
    {
      std::_Destroy_range<std::allocator<BridgeEndpointRecord>>(g_bridgeEndpointRegistry, xmmword_1400C4758);
      std::_Deallocate<16,0>(
        (void *)g_bridgeEndpointRegistry,
        (*((_QWORD *)&xmmword_1400C4758 + 1) - g_bridgeEndpointRegistry) & 0xFFFFFFFFFFFFFFF0uLL);
    }
    g_bridgeEndpointRegistry = v14;
    *(_QWORD *)&xmmword_1400C4758 = v14 + 16 * v9;
    *((_QWORD *)&xmmword_1400C4758 + 1) = v14 + 16 * v8;
    result = v15;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<BridgeEndpointRecord>>(v21, (__int64)(v15 + 16));
    std::_Deallocate<16,0>(v20, 16 * v8);
    throw;
  }
  return result;
}
