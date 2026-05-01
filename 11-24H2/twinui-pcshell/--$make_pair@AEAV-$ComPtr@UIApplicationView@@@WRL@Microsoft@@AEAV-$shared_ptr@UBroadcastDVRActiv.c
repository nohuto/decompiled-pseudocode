/*
 * XREFs of ??$make_pair@AEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@AEAV?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@YA?AU?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@0@AEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@AEAV?$shared_ptr@UBroadcastDVRActiveAppInfo@@@0@@Z @ 0x1801CDC0C
 * Callers:
 *     ?ApplicationChangedTask@BroadcastDVRComponent@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@@Z @ 0x180192B18 (-ApplicationChangedTask@BroadcastDVRComponent@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED.c)
 *     ?OnAddRemoveGameTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@EW4ShellNotificationType@Internal@Capture@Media@Windows@@E@Z @ 0x180317BB0 (-OnAddRemoveGameTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@EW4ShellNotificationType@Internal@C.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall std::make_pair<Microsoft::WRL::ComPtr<IApplicationView> &,std::shared_ptr<BroadcastDVRActiveAppInfo> &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v5; // rax

  *a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  a1[1] = 0LL;
  a1[2] = 0LL;
  v5 = a3[1];
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  a1[1] = *a3;
  a1[2] = a3[1];
  return a1;
}
