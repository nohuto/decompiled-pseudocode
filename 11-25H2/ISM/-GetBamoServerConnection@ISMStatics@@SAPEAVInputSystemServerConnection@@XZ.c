/*
 * XREFs of ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002404C
 * Callers:
 *     ?RuntimeClassInitialize@ForegroundManager@@QEAAJXZ @ 0x18000B13C (-RuntimeClassInitialize@ForegroundManager@@QEAAJXZ.c)
 *     ?FromCookie@ActivationControllerBamoProxy@@SA?AV?$com_ptr_t@VBamoActivationControllerProxy@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x180023710 (-FromCookie@ActivationControllerBamoProxy@@SA-AV-$com_ptr_t@VBamoActivationControllerProxy@@Uerr.c)
 *     ?UpdateForegroundTarget@DWMInputRouter@@UEAAX_KIII@Z @ 0x180023AA0 (-UpdateForegroundTarget@DWMInputRouter@@UEAAX_KIII@Z.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180024020 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA?AV?$weak_ptr@VGestureHandler@@@std@@PEAUHitTestInfo@@PEAUHitTestResult@@@Z @ 0x180025980 (-TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA-AV-$weak_ptr@VGestureHandler@@@std.c)
 *     ?OnDisconnected@DragManagerClientProxy@@MEAAJXZ @ 0x180027B70 (-OnDisconnected@DragManagerClientProxy@@MEAAJXZ.c)
 *     ?ClearAnimationDataForAllSources@DragManagerClientProxy@@AEAAXXZ @ 0x180027C5C (-ClearAnimationDataForAllSources@DragManagerClientProxy@@AEAAXXZ.c)
 *     ?ClearAnimationDataForSource@DragManagerClientProxy@@QEAAX_K@Z @ 0x180027F68 (-ClearAnimationDataForSource@DragManagerClientProxy@@QEAAX_K@Z.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180034634 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?IsTipToGlassRequired@PenEventsTipToGlassAdapter@@SA_NXZ @ 0x180063F84 (-IsTipToGlassRequired@PenEventsTipToGlassAdapter@@SA_NXZ.c)
 *     ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z @ 0x18007C7B0 (-CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z.c)
 *     ?OnDisconnected@AnimationTargetClientProxy@@MEAAJXZ @ 0x18007CB40 (-OnDisconnected@AnimationTargetClientProxy@@MEAAJXZ.c)
 *     ?OnConnected@AnimationTargetClientProxy@@MEAAJXZ @ 0x18007FCF0 (-OnConnected@AnimationTargetClientProxy@@MEAAJXZ.c)
 *     ?ProcessOrientationChangeNotification@CursorNotificationProcessor@@AEAAJN@Z @ 0x180081EB4 (-ProcessOrientationChangeNotification@CursorNotificationProcessor@@AEAAJN@Z.c)
 *     ?Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z @ 0x180087AE4 (-Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z.c)
 *     ?RuntimeClassInitialize@ShellGesturesProcessor@@QEAAJXZ @ 0x180093988 (-RuntimeClassInitialize@ShellGesturesProcessor@@QEAAJXZ.c)
 *     ?OnReaderDisconnected@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_K@Z @ 0x180094000 (-OnReaderDisconnected@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_K@Z.c)
 *     ?OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z @ 0x1800DB730 (-OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z.c)
 *     ?ProcessFeatureReport@DockableDeviceCollection@@AEAAJAEBUGetFeatureReportResult@1@@Z @ 0x1800DBC04 (-ProcessFeatureReport@DockableDeviceCollection@@AEAAJAEBUGetFeatureReportResult@1@@Z.c)
 *     ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DC4E0 (-OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z @ 0x1800DC620 (-OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800DC6F0 (-OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?ProcessCrosshairEnabledStatusChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z @ 0x1800F1CD4 (-ProcessCrosshairEnabledStatusChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z.c)
 *     ?ProcessCrosshairPropertiesChangedNotification@CursorNotificationProcessor@@AEAAJK@Z @ 0x1800F1D4C (-ProcessCrosshairPropertiesChangedNotification@CursorNotificationProcessor@@AEAAJK@Z.c)
 *     ?ProcessShapeNotification@CursorNotificationProcessor@@AEAAJPEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z @ 0x1800F1DC4 (-ProcessShapeNotification@CursorNotificationProcessor@@AEAAJPEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@.c)
 *     ?OnFirstDataRead@DataSourcePrincipal@@UEAAJPEAVBamoDataSourceStub@@_K@Z @ 0x1801042A0 (-OnFirstDataRead@DataSourcePrincipal@@UEAAJPEAVBamoDataSourceStub@@_K@Z.c)
 *     ?OnNotify@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_KW4DataProviderNotificationEventArg@@@Z @ 0x180104340 (-OnNotify@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_KW4DataProviderNotificationEven.c)
 *     ?OnReaderConnected@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_K@Z @ 0x180104420 (-OnReaderConnected@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_K@Z.c)
 *     ?SetAnimationDataForSource@DragManagerClientProxy@@QEAAX_KAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x180143830 (-SetAnimationDataForSource@DragManagerClientProxy@@QEAAX_KAEBUGestureAnimationData@Input@Interna.c)
 *     ?SetData@AnimationTargetClientProxy@@QEAAXAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x180143F80 (-SetData@AnimationTargetClientProxy@@QEAAXAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z.c)
 *     ?StartManualDrag@ManualDragAreaClientProxy@@MEAAJI@Z @ 0x180146920 (-StartManualDrag@ManualDragAreaClientProxy@@MEAAJI@Z.c)
 *     ?Initialize@DragNDropProcessor@@AEAAJXZ @ 0x18014A3FC (-Initialize@DragNDropProcessor@@AEAAJXZ.c)
 *     ?StartManualResize@ManualResizeAreaClientProxy@@MEAAJIW4InputResizeRegion@Input@Internal@UI@Windows@@@Z @ 0x18014CC70 (-StartManualResize@ManualResizeAreaClientProxy@@MEAAJIW4InputResizeRegion@Input@Internal@UI@Wind.c)
 *     ?Initialize@ResizeProcessor@@AEAAJXZ @ 0x18014F154 (-Initialize@ResizeProcessor@@AEAAJXZ.c)
 *     ??0EdgyProcessor@@AEAA@AEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Z @ 0x18015100C (--0EdgyProcessor@@AEAA@AEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Z.c)
 *     ?CreateHandlerForHandlerContext@ShellGesturesProcessor@@CAXAEAUHandlerContext@1@UtagPOINT@@_K@Z @ 0x18015725C (-CreateHandlerForHandlerContext@ShellGesturesProcessor@@CAXAEAUHandlerContext@1@UtagPOINT@@_K@Z.c)
 *     ?OnDockDeviceArrival@DeviceDockServer@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x18017E188 (-OnDockDeviceArrival@DeviceDockServer@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 *     ?OnDockableDeviceArrival@DeviceDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z @ 0x18017E8CC (-OnDockableDeviceArrival@DeviceDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z.c)
 *     ?PopulateHeatGripServiceHost@ISMHeatFrameworkHost@@AEAAJXZ @ 0x180184984 (-PopulateHeatGripServiceHost@ISMHeatFrameworkHost@@AEAAJXZ.c)
 *     ?EnsureInterfaceAttached@HapticDeviceManager@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@AEBU_GUID@@@Z @ 0x1801868F8 (-EnsureInterfaceAttached@HapticDeviceManager@@QEAAXV-$com_ptr_t@VPenInterface@@Uerr_exception_po.c)
 *     ?UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z @ 0x180188D28 (-UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z.c)
 *     ?UpdateBamoProperties@PenDevice@@QEAAXXZ @ 0x180189B38 (-UpdateBamoProperties@PenDevice@@QEAAXXZ.c)
 *     ?UpdateBamoProperties@PenHapticDevice@@QEAAXXZ @ 0x18018E4FC (-UpdateBamoProperties@PenHapticDevice@@QEAAXXZ.c)
 *     ??$MakeAndInitialize@VCursorSuppressionProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEAPEAVCursorSuppressionProcessor@@$$QEAPEAVDWMInputRouter@@@Z @ 0x1801966F4 (--$MakeAndInitialize@VCursorSuppressionProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@.c)
 *     ?Initialize@EdgyConnection@@QEAAJXZ @ 0x1801A08B0 (-Initialize@EdgyConnection@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@ShellHandwritingProcessor@@QEAAJXZ @ 0x1801A7F58 (-RuntimeClassInitialize@ShellHandwritingProcessor@@QEAAJXZ.c)
 *     ?Initialize@DockProcessor@@IEAAJXZ @ 0x1801B07B8 (-Initialize@DockProcessor@@IEAAJXZ.c)
 *     ?NotifyTipToGlass@PenEventsTipToGlassAdapter@@SAXI@Z @ 0x1801B20A0 (-NotifyTipToGlass@PenEventsTipToGlassAdapter@@SAXI@Z.c)
 *     ??0DWMCursor@@IEAA@PEAVDWMCursorBroker@@W4InputType@@UCursorId@@@Z @ 0x1801C09B4 (--0DWMCursor@@IEAA@PEAVDWMCursorBroker@@W4InputType@@UCursorId@@@Z.c)
 * Callees:
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18000D33C (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18008D760 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
struct InputSystemServerConnection *ISMStatics::GetBamoServerConnection(void)
{
  int v1; // eax
  Microsoft::Bamo::BaseBamoConnection **v2; // rax
  struct InputSystemServerConnection *v3; // rcx
  Microsoft::Bamo::BaseBamoConnection *v4; // rcx
  __int64 v5; // rcx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  Microsoft::Bamo::BaseBamoConnection *v9; // [rsp+38h] [rbp+10h] BYREF

  if ( !ISMStatics::s_inputSystemBamoConnection )
  {
    v8 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
    v1 = CoreUICreate(&v8);
    if ( v1 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x31,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismstatics.cpp",
        (const char *)(unsigned int)v1,
        v6);
    v2 = InputSystemServerConnection::Create(&v9, v8);
    v3 = *v2;
    *v2 = 0LL;
    ISMStatics::s_inputSystemBamoConnection = v3;
    v4 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      Microsoft::Bamo::BaseBamoConnection::Release(v4);
    }
    v5 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  return ISMStatics::s_inputSystemBamoConnection;
}
