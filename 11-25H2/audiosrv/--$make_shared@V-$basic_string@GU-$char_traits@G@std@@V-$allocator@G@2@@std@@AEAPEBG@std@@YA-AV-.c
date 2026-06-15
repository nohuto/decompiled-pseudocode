/*
 * XREFs of ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x1800B6EE0
 * Callers:
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x18006723C (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ?OnMfxDiscoveryEffectsChanged@CAudioResourceManager@@UEAAJPEBGU_GUID@@@Z @ 0x1800BF3B0 (-OnMfxDiscoveryEffectsChanged@CAudioResourceManager@@UEAAJPEBGU_GUID@@@Z.c)
 *     ?OnEndpointPropertyChanged@BluetoothBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z @ 0x1800E1AA0 (-OnEndpointPropertyChanged@BluetoothBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z.c)
 *     ?OnEndpointStateChanged@BluetoothBroadcastProvider@@UEAAXPEBG_N@Z @ 0x1800E1BD0 (-OnEndpointStateChanged@BluetoothBroadcastProvider@@UEAAXPEBG_N@Z.c)
 *     ?DeleteAuxiliaryInputForStreamGroupInternal@CSharedStreamGroupProxy@@IEAAXPEBG@Z @ 0x1800F0658 (-DeleteAuxiliaryInputForStreamGroupInternal@CSharedStreamGroupProxy@@IEAAXPEBG@Z.c)
 *     ?OnEndpointPropertyChanged@DummyBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z @ 0x1800F7790 (-OnEndpointPropertyChanged@DummyBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z.c)
 *     ?OnEndpointStateChanged@DummyBroadcastProvider@@UEAAXPEBG_N@Z @ 0x1800F78C0 (-OnEndpointStateChanged@DummyBroadcastProvider@@UEAAXPEBG_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C1A0 (--2@YAPEAX_K@Z.c)
 *     ??$_Construct_in_place@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$CComHeapPtr@G@ATL@@@std@@YAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEAV?$CComHeapPtr@G@ATL@@@Z @ 0x1800B67BC (--$_Construct_in_place@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV-$CComH.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<std::wstring,unsigned short const * &>(_QWORD *a1, __int64 *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  v4 = operator new(0x30uLL);
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<std::wstring>::`vftable';
    std::_Construct_in_place<std::wstring,ATL::CComHeapPtr<unsigned short> &>((__int64)(v4 + 4), a2);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = v5 + 4;
  a1[1] = v5;
  return a1;
}
