/*
 * XREFs of ?DeleteUnusedDevices@CDeviceManager@@AEAAXXZ @ 0x180031AC0
 * Callers:
 *     ?ProcessDeviceLost@CDeviceManager@@IEAAXXZ @ 0x1800319C0 (-ProcessDeviceLost@CDeviceManager@@IEAAXXZ.c)
 * Callees:
 *     ?erase@?$vector@VDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VDeviceInfo@CDeviceManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VDeviceInfo@CDeviceManager@@@std@@@std@@@2@@Z @ 0x180030158 (-erase@-$vector@VDeviceInfo@CDeviceManager@@V-$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18010A060 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?ResetTokenThread@CComposition@@QEAAJXZ @ 0x180229CBC (-ResetTokenThread@CComposition@@QEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync@@@details@wil@@QEAA_NXZ @ 0x18024B1A0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync.c)
 */

void __fastcall CDeviceManager::DeleteUnusedDevices(CDeviceManager *this)
{
  __int64 v1; // r8
  char v2; // bl
  __int64 v3; // rcx
  CComposition *v4; // rcx
  unsigned __int64 CurrentFrameId; // rax
  __int64 v6; // rcx
  CDeviceManager *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = this;
  EnterCriticalSection(&CriticalSection);
  v1 = qword_180406B38;
  v2 = 0;
  while ( v1 != (_QWORD)xmmword_180406B40 )
  {
    v3 = *(_QWORD *)v1;
    if ( !*(_DWORD *)(*(_QWORD *)v1 + 1112LL)
      && (*(_DWORD *)(v3 + 8) != 1
       || *(_DWORD *)(*(_QWORD *)(v3 + 184) + 16LL)
       || *(_DWORD *)(v3 + 1192)
       || (CurrentFrameId = GetCurrentFrameId(), CurrentFrameId < *(_QWORD *)(v6 + 1488))) )
    {
      v1 += 16LL;
    }
    else
    {
      v2 = 1;
      v1 = *std::vector<CDeviceManager::DeviceInfo>::erase((__int64)&qword_180406B38, &v7, v1);
    }
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::GetImpl'::`2'::impl)
    && v2 )
  {
    CComposition::ResetTokenThread(v4);
  }
  LeaveCriticalSection(&CriticalSection);
}
