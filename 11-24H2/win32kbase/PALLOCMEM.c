/*
 * XREFs of PALLOCMEM @ 0x14008F85C
 * Callers:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x14001A960 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     HmgInsertObjectInternal @ 0x14001E500 (HmgInsertObjectInternal.c)
 *     DrvEnumDisplaySettings @ 0x140024870 (DrvEnumDisplaySettings.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x140038680 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x14004CBE0 (DrvSetWddmDeviceMonitorPowerState.c)
 *     DrvUpdateGraphicsDeviceList @ 0x14004D070 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x14004E238 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?InitializeTypeIsolation@@YA_NXZ @ 0x140078DD0 (-InitializeTypeIsolation@@YA_NXZ.c)
 *     ?HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z @ 0x14007AA44 (-HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x14008C4A0 (DrvCreatePhysicalMonitorObjects.c)
 *     ?GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z @ 0x14008D980 (-GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x14008EE9C (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     PruneModesByDisplayDeviceCaps @ 0x14008F098 (PruneModesByDisplayDeviceCaps.c)
 *     ?newpathalloc@@YAPEAVPATHALLOC@@XZ @ 0x14008F6F0 (-newpathalloc@@YAPEAVPATHALLOC@@XZ.c)
 *     GreSfmCleanupPresentHistory @ 0x140092D50 (GreSfmCleanupPresentHistory.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400C52C8 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1400C80E0 (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?MakeRoom@ThreadRestrictNewHandlesRegion@@QEAA_NXZ @ 0x1400E2118 (-MakeRoom@ThreadRestrictNewHandlesRegion@@QEAA_NXZ.c)
 *     LogDiagSDC @ 0x1400E51A0 (LogDiagSDC.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1400F64B4 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400F75AC (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     ldevLoadInternal @ 0x140100EC0 (ldevLoadInternal.c)
 *     ldevLoadCdd @ 0x140101A20 (ldevLoadCdd.c)
 *     ?ldevBindDisplayStub@@YAPEAU_LDEV@@XZ @ 0x140101E28 (-ldevBindDisplayStub@@YAPEAU_LDEV@@XZ.c)
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x14010204C (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1401169EC (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1401170F8 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvBuildDevmodeList @ 0x1401180B8 (DrvBuildDevmodeList.c)
 *     ApplyPathModalityToCdsRegistryStore @ 0x140122B28 (ApplyPathModalityToCdsRegistryStore.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x140133408 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     ?AllocateSessionGlobalsArea@Base@Gre@@YA_NXZ @ 0x14014236C (-AllocateSessionGlobalsArea@Base@Gre@@YA_NXZ.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x14015B81C (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x140176B40 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140176D8C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x140178DA4 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvInitConsole @ 0x1401794EC (DrvInitConsole.c)
 *     NtHWCursorUpdatePointer @ 0x140179790 (NtHWCursorUpdatePointer.c)
 *     LogDiagCDS @ 0x140199A8C (LogDiagCDS.c)
 *     ?AllocateObjectFast@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@KK@Z @ 0x1401C19A0 (-AllocateObjectFast@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@KK@Z.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001C1C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400406A8 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x140040EBC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401985D4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019869C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall PALLOCMEM(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  int v5; // eax
  __int64 Pool2; // rbx
  unsigned __int64 *v8; // rax
  _DWORD *v9; // rax
  unsigned __int64 i; // rbp
  char v11; // r14
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = a2;
  v3 = (unsigned int)a1;
  if ( !(_DWORD)a1 )
    return 0LL;
  v4 = W32GetUserSessionState(a1) + 72288;
  v5 = *(_DWORD *)v4;
  if ( !*(_DWORD *)v4 )
    goto LABEL_3;
  if ( v5 != 1 )
  {
    if ( v5 == 2 )
    {
      if ( ((unsigned int)v2 & *(_DWORD *)(v4 + 80)) != (_DWORD)v2 )
      {
LABEL_3:
        Pool2 = ExAllocatePool2(256LL, v3, (unsigned int)v2);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)(v4 + 112));
        return Pool2;
      }
      v9 = (_DWORD *)(v4 + 48);
      for ( i = 0LL; ; ++i )
      {
        if ( i >= *(unsigned int *)(v4 + 84) )
          goto LABEL_3;
        if ( *v9 == (_DWORD)v2 )
          break;
        ++v9;
      }
      v11 = 0;
      if ( v3 < 0x1000 || (v3 & 0xFFF) != 0 )
      {
        v11 = 1;
        v3 += 16LL;
      }
      Pool2 = ExAllocatePool2(256LL, v3, (unsigned int)v2);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v4 + 128));
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v11 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v4,
                                  Pool2,
                                  i,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            return Pool2;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v4,
                                     Pool2,
                                     i,
                                     BackTrace) )
        {
          return Pool2;
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v4 + 136));
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
          (NSInstrumentation::CLeakTrackingAllocator *)v4,
          v2)
    || v3 + 16 < v3 )
  {
    return 0LL;
  }
  v8 = (unsigned __int64 *)ExAllocatePool2(256LL, v3 + 16, (unsigned int)v2);
  Pool2 = (__int64)v8;
  if ( !v8
    || (_InterlockedIncrement64((volatile signed __int64 *)(v4 + 112)),
        *v8 = v2,
        Pool2 = (__int64)(v8 + 2),
        v8 == (unsigned __int64 *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *(NSInstrumentation::CPointerHashTable **)(v4 + 8),
      v2);
  }
  return Pool2;
}
