/*
 * XREFs of ?CheckMcdmDdiOverall@DXGADAPTER@@AEAAJXZ @ 0x140073584
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018D7A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGADAPTER::CheckMcdmDdiOverall(DXGADAPTER *this)
{
  int v2; // eax
  int v3; // edi
  __int64 v4; // rdx

  if ( (*((_DWORD *)this + 744) & 8) != 0 )
  {
    v2 = *((_DWORD *)this + 111);
    if ( (v2 & 8) == 0 && (v2 & 0x4000) == 0 )
    {
      v3 = 0;
      if ( !*((_QWORD *)this + 57) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 75;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiQueryAdapterInfo is required.",
          75LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v3 = 1;
      }
      if ( !*((_QWORD *)this + 68) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 77;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiBuildPagingBuffer is required.",
          77LL,
          0LL,
          0LL,
          0LL,
          0LL);
        ++v3;
      }
      if ( !*((_QWORD *)this + 114) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 78;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiCalibrateGpuClock is required.",
          78LL,
          0LL,
          0LL,
          0LL,
          0LL);
        ++v3;
      }
      if ( !*((_QWORD *)this + 91) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 79;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiCloseAllocation is required.",
          79LL,
          0LL,
          0LL,
          0LL,
          0LL);
        ++v3;
      }
      if ( !*((_QWORD *)this + 75) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 80;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiCollectDbgInfo is required.",
          80LL,
          0LL,
          0LL,
          0LL,
          0LL);
        ++v3;
      }
      if ( !*((_QWORD *)this + 59) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 81;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiCreateAllocation is required.",
          81LL,
          0LL,
          0LL,
          0LL,
          0LL);
        ++v3;
      }
      if ( !*((_QWORD *)this + 97) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 82;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiCreateContext is required.",
          82LL,
          0LL,
          0LL,
          0LL,
          0LL);
        ++v3;
      }
      if ( !*((_QWORD *)this + 58) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 83;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiCreateDevice is required.",
          83LL,
          0LL,
          0LL,
          0LL,
          0LL);
        ++v3;
      }
      if ( !*((_QWORD *)this + 61) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 84;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiDescribeAllocation is required.",
          84LL,
          0LL,
          0LL,
          0LL,
          0LL);
        ++v3;
      }
      if ( !*((_QWORD *)this + 60) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 85;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiDestroyAllocation is required.",
          85LL,
          0LL,
          0LL,
          0LL,
          0LL);
        ++v3;
      }
      if ( !*((_QWORD *)this + 98) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 86;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiDestroyContext is required.",
          86LL,
          0LL,
          0LL,
          0LL,
          0LL);
        ++v3;
      }
      if ( !*((_QWORD *)this + 89) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 87;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiDestroyDevice is required.",
          87LL,
          0LL,
          0LL,
          0LL,
          0LL);
        ++v3;
      }
      if ( !*((_QWORD *)this + 115) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 89;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiFormatHistoryBuffer is required.",
          89LL,
          0LL,
          0LL,
          0LL,
          0LL);
        ++v3;
      }
      if ( !*((_QWORD *)this + 110) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 90;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiGetNodeMetadata is required.",
          90LL,
          0LL,
          0LL,
          0LL,
          0LL);
        ++v3;
      }
      if ( !*((_QWORD *)this + 62) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 91;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiGetStandardAllocationDriverData is required.",
          91LL,
          0LL,
          0LL,
          0LL,
          0LL);
        ++v3;
      }
      if ( !*((_QWORD *)this + 90) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 93;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiOpenAllocation is required.",
          93LL,
          0LL,
          0LL,
          0LL,
          0LL);
        ++v3;
      }
      if ( !*((_QWORD *)this + 67) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 94;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiPreemptCommand is required.",
          94LL,
          0LL,
          0LL,
          0LL,
          0LL);
        ++v3;
      }
      if ( !*((_QWORD *)this + 57) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 95;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiQueryAdapterInfo is required.",
          95LL,
          0LL,
          0LL,
          0LL,
          0LL);
        ++v3;
      }
      if ( !*((_QWORD *)this + 101) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 96;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiQueryDependentEngineGroup is required.",
          96LL,
          0LL,
          0LL,
          0LL,
          0LL);
        ++v3;
      }
      if ( !*((_QWORD *)this + 102) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 98;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiQueryEngineStatus is required.",
          98LL,
          0LL,
          0LL,
          0LL,
          0LL);
        ++v3;
      }
      if ( !*((_QWORD *)this + 103) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 101;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiResetEngine is required.",
          101LL,
          0LL,
          0LL,
          0LL,
          0LL);
        ++v3;
      }
      if ( !*((_QWORD *)this + 72) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 102;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiResetFromTimeout is required.",
          102LL,
          0LL,
          0LL,
          0LL,
          0LL);
        ++v3;
      }
      if ( !*((_QWORD *)this + 73) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 103;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiRestartFromTimeout is required.",
          103LL,
          0LL,
          0LL,
          0LL,
          0LL);
        ++v3;
      }
      if ( !*((_QWORD *)this + 126) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 105;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiSetStablePowerState is required.",
          105LL,
          0LL,
          0LL,
          0LL,
          0LL);
        ++v3;
      }
      if ( !*((_QWORD *)this + 163) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 106;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiSetVirtualMachineData is required.",
          106LL,
          0LL,
          0LL,
          0LL,
          0LL);
        ++v3;
      }
      if ( *((_QWORD *)this + 82) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 115;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiCommitVidPn is not used.",
          115LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 63) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 116;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiAcquireSwizzlingRange is not used.",
          116LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 113) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 117;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiCheckMultiPlaneOverlaySupport is not used.",
          117LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 124) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 118;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiCheckMultiPlaneOverlaySupport2 is not used.",
          118LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 128) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 119;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiCheckMultiPlaneOverlaySupport3 is not used.",
          119LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((__int64 (__fastcall **)(void *const, struct _DXGKARG_CONTROLDIAGNOSTICREPORTING *))this + 167) != DXGADAPTER::DefaultDdiControlDiagnosticReporting )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 120;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiControlDiagnosticReporting is not used.",
          120LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 87) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 121;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiControlInterrupt is not used.",
          121LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 112) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 122;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiControlInterrupt2 is not used.",
          122LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 175) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 123;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiControlInterrupt3 is not used.",
          123LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((__int64 (__fastcall **)())this + 135) != W32kStub_GreSfmOpenTokenEvent )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 124;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiControlModeBehavior is not used.",
          124LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 88) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 126;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiCreateOverlay is not used.",
          126LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 143) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 127;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiCreatePeriodicFrameNotification is not used.",
          127LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 155) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 128;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiCreateProtectedSession is not used.",
          128LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 96) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 129;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiDestroyOverlay is not used.",
          129LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 144) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 130;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiDestroyPeriodicFrameNotification is not used.",
          130LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 156) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 131;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiDestroyProtectedSession is not used.",
          131LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 150) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 132;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiDisplayDetectControl is not used.",
          132LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 79) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 133;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiEnumVidPnCofuncModality is not used.",
          133LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 152) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 134;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiExchangePreStartInfo is not used.",
          134LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 95) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 135;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiFlipOverlay is not used.",
          135LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 153) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 136;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiGetMultiPlaneOverlayCaps is not used.",
          136LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 154) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 137;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiGetPostCompositionCaps is not used.",
          137LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 85) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 138;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiGetScanLine is not used.",
          138LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 77) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 139;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiIsSupportedVidPn is not used.",
          139LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 159) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 141;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiNotifyFocusPresent is not used.",
          141LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 130) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 142;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiPostMultiPlaneOverlayPresent is not used.",
          142LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 93) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 143;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiPresent is not used.",
          143LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 169) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 144;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiPresentToHwQueue is not used.",
          144LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 151) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 145;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiQueryConnectionChange is not used.",
          145LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 76) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 146;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiQueryCurrentFence is not used.",
          146LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((int (**)(struct OUTPUTDUPL_MGR *, void *))this + 166) != W32kStub_UserRemoveWindowedSwapChain )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 147;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiQueryDiagnosticTypesSupport is not used.",
          147LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 78) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 149;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiRecommendFunctionalVidPn is not used.",
          149LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 84) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 150;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiRecommendMonitorModes is not used.",
          150LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 64) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 152;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiReleaseSwizzlingRange is not used.",
          152LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 116) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 153;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiRenderGdi is not used.",
          153LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 100) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 154;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiRenderKm is not used.",
          154LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 99) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 155;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiSetDisplayPrivateDriverFormat is not used.",
          155LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 69) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 156;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiSetPalette is not used.",
          156LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 70) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 157;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiSetPointerPosition is not used.",
          157LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 71) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 158;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiSetPointerShape is not used.",
          158LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 111) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 159;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiSetPowerPState is not used.",
          159LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 149) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 160;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiSetTargetAdjustedColorimetry is not used.",
          160LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 148) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 162;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiSetTargetAnalogCopyProtection is not used.",
          162LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 147) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 163;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiSetTargetContentType is not used.",
          163LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 146) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 164;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiSetTargetGamma is not used.",
          164LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 145) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 165;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiSetTimingsFromVidPn is not used.",
          165LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 127) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 166;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiSetVideoProtectedRegion is not used.",
          166LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 80) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 167;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiSetVidPnSourceAddress is not used.",
          167LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 109) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 168;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiSetVidPnSourceAddressWithMultiPlaneOverlay is not used.",
          168LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 125) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 169;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiSetVidPnSourceAddressWithMultiPlaneOverlay2 is not used.",
          169LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 129) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 170;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiSetVidPnSourceAddressWithMultiPlaneOverlay3 is not used.",
          170LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 81) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 171;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiSetVidPnSourceVisibility is not used.",
          171LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 86) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 172;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiStopCapture is not used.",
          172LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 83) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 177;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiUpdateActiveVidPnPresentPath is not used.",
          177LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 136) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 178;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiUpdateMonitorLinkInfo is not used.",
          178LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)this + 94) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 179;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiUpdateOverlay is not used.",
          179LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v4 = *((_QWORD *)this + 108);
      if ( (*((_DWORD *)this + 616) & 0x10) != 0 )
      {
        if ( !v4 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 185;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"DxgkDdiCancelCommand is required.",
            185LL,
            0LL,
            0LL,
            0LL,
            0LL);
          ++v3;
        }
      }
      else if ( v4 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 185;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DxgkDdiCancelCommand is not used.",
          185LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( v3 )
        return 3221225561LL;
      *((_QWORD *)this + 93) = DXGADAPTER::DefaultDdiPresent;
      if ( !*((_QWORD *)this + 66) )
        *((_QWORD *)this + 66) = DXGADAPTER::DefaultDdiSubmitCommand;
    }
  }
  return 0LL;
}
