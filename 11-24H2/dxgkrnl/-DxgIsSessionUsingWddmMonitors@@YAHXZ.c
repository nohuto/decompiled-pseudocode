/*
 * XREFs of ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x14029AE08
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403478E4 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14034F110 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x140412B00 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 DxgIsSessionUsingWddmMonitors(void)
{
  unsigned int v0; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v2; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v4 = 0;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
    return 1LL;
  v2 = *((_QWORD *)Current + 11);
  if ( !v2 )
    return 1LL;
  if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, int *))(v2 + 240))(0LL, 0LL, &v4) || v4 )
    return 1;
  return v0;
}
