/*
 * XREFs of ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x180679D28
 * Callers:
 *     ?v_PublishServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180063220 (-v_PublishServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800759E0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x18007A0D4 (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ?RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopTabletModePolicy@@@Z @ 0x180094530 (-RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesk.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x180096284 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x18009F1F4 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x18009F930 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 *     ?_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonitor@@@Z @ 0x1800A3034 (-_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonit.c)
 *     ?SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800A33B0 (-SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x1800A38AC (-InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperation.c)
 *     ?RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ @ 0x1800A5098 (-RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@UwpWindowEventDispatcher@@QEAAJXZ @ 0x1800D761C (-RuntimeClassInitialize@UwpWindowEventDispatcher@@QEAAJXZ.c)
 *     _lambda_4374eff018dc91e582b31b47abd97ab1_::operator() @ 0x18022FB58 (_lambda_4374eff018dc91e582b31b47abd97ab1_--operator().c)
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x18022FC48 (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x180234280 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 *     ?SubscribeToServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180249660 (-SubscribeToServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802686C0 (-SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?CreatePersistence@CVirtualDesktopComponent@@AEAAJPEAUIVirtualDesktopRegistryHelpers@@PEAPEAUIVirtualDesktopPersistence@@@Z @ 0x18029EDA8 (-CreatePersistence@CVirtualDesktopComponent@@AEAAJPEAUIVirtualDesktopRegistryHelpers@@PEAPEAUIVi.c)
 *     ?RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ @ 0x1804234BC (-RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ.c)
 *     ?SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180423A90 (-SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180426760 (-v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     _UwpWindowManagerBridge::RuntimeClassInitialize_::_1_::catch$25 @ 0x1806D654B (_UwpWindowManagerBridge--RuntimeClassInitialize_--_1_--catch$25.c)
 *     _WindowManagerBridge::RuntimeClassInitialize_::_1_::catch$6 @ 0x1806E979B (_WindowManagerBridge--RuntimeClassInitialize_--_1_--catch$6.c)
 * Callees:
 *     ?ReportFailure_@CCriticalFailureTelemetry@@QEBAXJPEBGIPEA_K1_N@Z @ 0x180679DFC (-ReportFailure_@CCriticalFailureTelemetry@@QEBAXJPEBGIPEA_K1_N@Z.c)
 *     ?_MatchesPreviousFailure@CCriticalFailureHandler@@AEBA_NJPEBGIPEA_K1@Z @ 0x180679F04 (-_MatchesPreviousFailure@CCriticalFailureHandler@@AEBA_NJPEBGIPEA_K1@Z.c)
 *     ?_RaiseFailFastException@CCriticalFailureHandler@@AEBAXJPEA_K0@Z @ 0x18067A0FC (-_RaiseFailFastException@CCriticalFailureHandler@@AEBAXJPEA_K0@Z.c)
 *     ?_RecordFailure@CCriticalFailureHandler@@AEBAXJPEBGIPEA_K1@Z @ 0x18067A204 (-_RecordFailure@CCriticalFailureHandler@@AEBAXJPEBGIPEA_K1@Z.c)
 *     ?get@?$static_lazy@VCCriticalFailureTelemetry@@@details@wil@@QEAAPEAVCCriticalFailureTelemetry@@P6AXXZ@Z @ 0x18067A3D8 (-get@-$static_lazy@VCCriticalFailureTelemetry@@@details@wil@@QEAAPEAVCCriticalFailureTelemetry@@.c)
 */

void __fastcall CCriticalFailureHandler::HandleFailure(
        CCriticalFailureHandler *this,
        int *a2,
        const unsigned __int16 *a3,
        unsigned int a4)
{
  bool v7; // di
  __int64 v8; // rcx
  CCriticalFailureHandler *v9; // rcx
  CCriticalFailureTelemetry *v10; // rcx
  CCriticalFailureHandler *v11; // rcx

  v7 = CCriticalFailureHandler::_MatchesPreviousFailure(this, *a2, a3, a4, 0LL, 0LL);
  v9 = *(CCriticalFailureHandler **)(wil::details::static_lazy<CCriticalFailureTelemetry>::get(
                                       v8,
                                       _lambda_a7f0a761e664b789011006ea52c1fb72_::_lambda_invoker_cdecl_)
                                   + 8);
  if ( v9 && *(_DWORD *)v9 )
  {
    wil::details::static_lazy<CCriticalFailureTelemetry>::get(
      v9,
      _lambda_a7f0a761e664b789011006ea52c1fb72_::_lambda_invoker_cdecl_);
    CCriticalFailureTelemetry::ReportFailure_(v10, *a2, a3, a4, 0LL, 0LL, v7);
  }
  if ( !v7 || IsDebuggerPresent() )
  {
    CCriticalFailureHandler::_RecordFailure(v9, *a2, a3, a4, 0LL, 0LL);
    CCriticalFailureHandler::_RaiseFailFastException(v11, *a2, 0LL, 0LL);
  }
  *a2 = -2144862209;
}
