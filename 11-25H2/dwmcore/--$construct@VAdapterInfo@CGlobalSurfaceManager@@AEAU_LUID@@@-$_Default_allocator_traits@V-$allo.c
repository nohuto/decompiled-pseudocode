/*
 * XREFs of ??$construct@VAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@?$_Default_allocator_traits@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@SAXAEAV?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@1@QEAVAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@Z @ 0x1800FFC48
 * Callers:
 *     ??$_Emplace_reallocate@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@AEAAPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV23@AEAU_LUID@@@Z @ 0x1800FEBF0 (--$_Emplace_reallocate@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAd.c)
 *     ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800FFA34 (-EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800DA640 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800FFDB8 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800FFE90 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?OpenRenderFence@CD3DDevice@@QEBAPEAXXZ @ 0x1800FFF04 (-OpenRenderFence@CD3DDevice@@QEBAPEAXXZ.c)
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<CGlobalSurfaceManager::AdapterInfo>>::construct<CGlobalSurfaceManager::AdapterInfo,_LUID &>(
        CDeviceManager *a1,
        struct _LUID *a2,
        struct _LUID *a3)
{
  struct _LUID v4; // rdx
  struct _LUID *v5; // rdi
  __int64 result; // rax
  void *v7; // rax
  CD3DDevice *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v4 = *a3;
  v5 = a2 + 1;
  a2[1] = 0LL;
  a2[2] = 0LL;
  *a2 = v4;
  result = CDeviceManager::GetExistingDevice(a1, v4, &v8);
  if ( (int)result >= 0 )
  {
    v7 = CD3DDevice::OpenRenderFence(v8);
    result = wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
               v5,
               v7);
  }
  if ( v8 )
    return CD3DDevice::Release(v8);
  return result;
}
