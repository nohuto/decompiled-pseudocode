/*
 * XREFs of DpiAcquireCoreSyncAccessSafe @ 0x1402CA36C
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x140027534 (DpiFdoHandleDisplayDetectControl.c)
 *     DxgkQueryConnectionChanges @ 0x140027BD0 (DxgkQueryConnectionChanges.c)
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x14004A800 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     ?CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z @ 0x140057454 (-CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z.c)
 *     ?Acquire@AUTO_ADAPTER_LOCK@@QEAAJXZ @ 0x14007CC3C (-Acquire@AUTO_ADAPTER_LOCK@@QEAAJXZ.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x140089E28 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiPanelBufferingSetAutomaticPolicy @ 0x14008A96C (DpiPanelBufferingSetAutomaticPolicy.c)
 *     DpiPanelBufferingSetOverrideState @ 0x14008AB54 (DpiPanelBufferingSetOverrideState.c)
 *     DpiFdoDestroyRelatedObjects @ 0x14023D714 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x140244460 (DpiFdoQueryAdapterInfoIntegratedDisplay.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1402446F8 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 *     ?DpiBrightness3Get@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_OUT@@@Z @ 0x14024C900 (-DpiBrightness3Get@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_OUT@@@Z.c)
 *     ?DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x14024CA00 (-DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z.c)
 *     ?DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z @ 0x14024CB00 (-DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z.c)
 *     ?DpiBrightnessIfGet@@YAJPEAXPEAE@Z @ 0x14024D080 (-DpiBrightnessIfGet@@YAJPEAXPEAE@Z.c)
 *     ?DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z @ 0x14024D1A0 (-DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z.c)
 *     ?DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x14024D2B0 (-DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z.c)
 *     ?DpiBrightnessIfSetState@@YAJPEAXPEAU_DXGK_BRIGHTNESS_STATE@@@Z @ 0x14024D3E0 (-DpiBrightnessIfSetState@@YAJPEAXPEAU_DXGK_BRIGHTNESS_STATE@@@Z.c)
 *     ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x14024D744 (-DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x14024DCAC (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiFdoThermalActiveCooling @ 0x14024EAE0 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x14024EC60 (DpiFdoThermalPassiveCooling.c)
 *     DpiPdoRemovePdoObjects @ 0x1402558C8 (DpiPdoRemovePdoObjects.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1402CB420 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 *     ?DpiBrightness3SetBacklightOptimization@@YAJPEAXKW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1402CB690 (-DpiBrightness3SetBacklightOptimization@@YAJPEAXKW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z.c)
 *     ?DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1402CC140 (-DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z.c)
 *     DpiPdoSetDevicePower @ 0x14039C45C (DpiPdoSetDevicePower.c)
 *     DpiPdoDispatchPnp @ 0x1403B44D0 (DpiPdoDispatchPnp.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1403FDFB4 (DpiFdoInitializeGpuVirtualization.c)
 *     DxgkHandleMiracastEscape @ 0x1404028D8 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z @ 0x1404049B0 (-DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z.c)
 *     DxgkPowerOnOffMonitor @ 0x1404279D4 (DxgkPowerOnOffMonitor.c)
 *     ?DpiBrightness3Set@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_SET_IN@@@Z @ 0x140428440 (-DpiBrightness3Set@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_SET_IN@@@Z.c)
 *     DpiPdoDispatchInternalIoctl @ 0x140429C30 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoDispatchIoctl @ 0x14042ACC0 (DpiPdoDispatchIoctl.c)
 *     DpiGdoDispatchInternalIoctl @ 0x14042BEA0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x14002A8E8 (DpiCheckForOutstandingD3Requests.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 *     DpiIsPowerRuntimeDStateTransition @ 0x1402CA5B8 (DpiIsPowerRuntimeDStateTransition.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1402CA614 (DxgkAcquireAdapterCoreSync.c)
 */

__int64 __fastcall DpiAcquireCoreSyncAccessSafe(__int64 a1, char a2)
{
  __int64 v2; // rbp
  int v3; // edi
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 v7; // rbx
  char IsPowerRuntimeDStateTransition; // al
  int v9; // r8d

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v5 = 0;
  v6 = *(_QWORD *)(v2 + 32);
  v7 = *(_QWORD *)(v6 + 64);
  if ( *(_BYTE *)(v7 + 482) )
    DpiCheckForOutstandingD3Requests(*(_QWORD *)(v6 + 64));
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v7 + 3928), 1u);
  if ( *(_DWORD *)(v7 + 236) == 6 || *(_DWORD *)(v7 + 240) == 6 || *(_DWORD *)(v7 + 4120) == 3 )
  {
    v5 = -1073741810;
    WdLogSingleEntry2(3LL, *(_QWORD *)(v7 + 24), -1073741810LL);
    WdLogGlobalForLineNumber = 147;
  }
  else if ( *(_DWORD *)(v2 + 16) == 1953656900
         && (*(_DWORD *)(v2 + 20) == 6 || *(_DWORD *)(v2 + 20) == 2 || *(_DWORD *)(v2 + 20) == 5) )
  {
    IsPowerRuntimeDStateTransition = DpiIsPowerRuntimeDStateTransition(v7);
    if ( IsPowerRuntimeDStateTransition || v9 != 1 && *(_DWORD *)(v7 + 284) == 1 )
    {
      if ( *(_QWORD *)(v7 + 4032) )
      {
        if ( !IsPowerRuntimeDStateTransition || !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304368) )
        {
          LOBYTE(v3) = a2 == 1;
          DxgkAcquireAdapterCoreSync(*(_QWORD *)(v7 + 4032), (unsigned int)(v3 + 1));
          return v5;
        }
        v5 = -1073741661;
        WdLogSingleEntry2(3LL, *(_QWORD *)(v7 + 24), -1073741661LL);
        WdLogGlobalForLineNumber = 195;
      }
      else
      {
        v5 = -1073741661;
        WdLogSingleEntry2(3LL, *(_QWORD *)(v7 + 24), -1073741661LL);
        WdLogGlobalForLineNumber = 185;
      }
    }
    else
    {
      v5 = -1073741661;
      WdLogSingleEntry2(3LL, *(_QWORD *)(v7 + 24), -1073741661LL);
      WdLogGlobalForLineNumber = 176;
    }
  }
  else
  {
    v5 = -1073741637;
    WdLogSingleEntry2(2LL, *(_QWORD *)(v2 + 24), -1073741637LL);
    WdLogGlobalForLineNumber = 209;
  }
  if ( *(_BYTE *)(v7 + 482) )
    DpiEnableD3Requests(*(_QWORD *)(v7 + 24));
  ExReleaseResourceLite((PERESOURCE)(v7 + 3928));
  KeLeaveCriticalRegion();
  return v5;
}
