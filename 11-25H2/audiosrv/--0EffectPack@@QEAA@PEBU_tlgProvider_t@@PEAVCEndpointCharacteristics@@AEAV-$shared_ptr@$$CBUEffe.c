/*
 * XREFs of ??0EffectPack@@QEAA@PEBU_tlgProvider_t@@PEAVCEndpointCharacteristics@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x1800604C8
 * Callers:
 *     ??$_Construct_in_place@VEffectPack@@AEAPEBU_tlgProvider_t@@AEAPEAVCEndpointCharacteristics@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@std@@YAXAEAVEffectPack@@AEAPEBU_tlgProvider_t@@AEAPEAVCEndpointCharacteristics@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@0@@Z @ 0x1800A612C (--$_Construct_in_place@VEffectPack@@AEAPEBU_tlgProvider_t@@AEAPEAVCEndpointCharacteristics@@AEAV.c)
 * Callees:
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180060820 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ??0SystemEffectDescriptor@@QEAA@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180060850 (--0SystemEffectDescriptor@@QEAA@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800A7FEC (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall EffectPack::EffectPack(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx

  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)a1, eHostProcessConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 96), eOffloadConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 192), eLoopbackConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 288), eKeywordDetectorConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 384), eConnectorCount);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 480), eHostProcessConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 576), eOffloadConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 672), eLoopbackConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 768), eKeywordDetectorConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 864), eConnectorCount);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 960), eHostProcessConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 1056), eOffloadConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 1152), eLoopbackConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 1248), eKeywordDetectorConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 1344), eConnectorCount);
  *(_QWORD *)(a1 + 1440) = 5LL;
  *(_QWORD *)(a1 + 1448) = a1;
  if ( !a1
    || (*(_QWORD *)(a1 + 1456) = 5LL, *(_QWORD *)(a1 + 1464) = a1 + 480, a1 == -480)
    || (*(_QWORD *)(a1 + 1472) = 5LL, *(_QWORD *)(a1 + 1480) = a1 + 960, a1 == -960) )
  {
LABEL_15:
    _o_terminate(v9, v8);
    __debugbreak();
    JUMPOUT(0x180060817LL);
  }
  *(_OWORD *)(a1 + 1488) = 0LL;
  *(_DWORD *)(a1 + 1504) = 0;
  *(_DWORD *)(a1 + 1508) = 0;
  `eh vector constructor iterator'(
    (void *)(a1 + 1512),
    8uLL,
    5uLL,
    (void (*)(void *))std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>,
    std::forward_list<std::pair<_GUID,bool>>::~forward_list<std::pair<_GUID,bool>>);
  *(_QWORD *)(a1 + 1552) = 5LL;
  *(_QWORD *)(a1 + 1560) = a1 + 1512;
  if ( a1 == -1512 )
  {
    _o_terminate(v11, v10);
    __debugbreak();
  }
  std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(a1 + 1568, a4, v12);
  *(_QWORD *)(a1 + 1584) = a3;
  *(_QWORD *)(a1 + 1616) = 5LL;
  *(_QWORD *)(a1 + 1624) = a1 + 1592;
  if ( a1 == -1592 )
  {
    _o_terminate(v14, v13);
    __debugbreak();
  }
  `eh vector constructor iterator'(
    (void *)(a1 + 1632),
    0x10uLL,
    5uLL,
    (void (*)(void *))CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll);
  *(_QWORD *)(a1 + 1712) = 5LL;
  *(_QWORD *)(a1 + 1720) = a1 + 1632;
  if ( a1 == -1632 || (*(_QWORD *)(a1 + 1752) = 5LL, *(_QWORD *)(a1 + 1760) = a1 + 1728, a1 == -1728) )
  {
LABEL_14:
    _o_terminate(v16, v15);
    goto LABEL_15;
  }
  `eh vector constructor iterator'(
    (void *)(a1 + 1768),
    0x18uLL,
    5uLL,
    (void (*)(void *))CAudioSignalProcessingModeMap::CAudioSignalProcessingModeMap,
    (void (*)(void *))CAudioSignalProcessingModeMap::~CAudioSignalProcessingModeMap);
  *(_QWORD *)(a1 + 1888) = 5LL;
  *(_QWORD *)(a1 + 1896) = a1 + 1768;
  if ( a1 == -1768
    || (`eh vector constructor iterator'(
          (void *)(a1 + 1904),
          0x10uLL,
          5uLL,
          (void (*)(void *))CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
          (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll),
        *(_QWORD *)(a1 + 1984) = 5LL,
        *(_QWORD *)(a1 + 1992) = a1 + 1904,
        a1 == -1904) )
  {
    _o_terminate(v18, v17);
    goto LABEL_14;
  }
  *(_QWORD *)(a1 + 2000) = 0LL;
  *(_DWORD *)(a1 + 2008) = 0;
  *(_DWORD *)(a1 + 2012) = 0;
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 2016), eHostProcessConnector);
  *(_DWORD *)(a1 + 2112) = 100;
  *(_QWORD *)(a1 + 2120) = a2;
  *(_WORD *)(a1 + 2128) = 0;
  return a1;
}
