/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_398c59650b4848a9090526bc8733f68c___::Run @ 0x18006BE90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ @ 0x180206AA0 (--1-$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ.c)
 *     ?SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUHWND__@@K_NPEA_NPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803DBBC4 (-SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_398c59650b4848a9090526bc8733f68c___::Run(
        __int64 a1)
{
  __int64 v2; // rbx
  HWND DesktopWindow; // r8
  bool v5; // cl
  __int64 v6; // [rsp+40h] [rbp-18h] BYREF
  std::_Ref_count_base *v7; // [rsp+48h] [rbp-10h]
  bool v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 280LL);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v6,
    *(_QWORD *)(a1 + 24) + 288LL);
  v2 = v6;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 447LL) )
  {
    DesktopWindow = GetDesktopWindow();
    v5 = 1;
  }
  else
  {
    if ( !v6 )
    {
      tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>(&v6);
      return Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v9);
    }
    DesktopWindow = *(HWND *)v6;
    v5 = (*(_DWORD *)(v6 + 56) & 2) != 0;
  }
  v8 = v5;
  if ( DesktopWindow )
  {
    BroadcastDVRComponent::SendShellNotificationToDVR(
      *(_QWORD *)(a1 + 24),
      13 - (unsigned int)(*(_DWORD *)(a1 + 16) != 0),
      DesktopWindow,
      0LL,
      0,
      &v8,
      0LL);
    if ( v8 && !*(_BYTE *)(*(_QWORD *)(a1 + 24) + 447LL) )
      *(_DWORD *)(v2 + 56) |= 2u;
  }
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v9);
}
