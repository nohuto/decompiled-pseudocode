/*
 * XREFs of ??0MouseHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180188B70
 * Callers:
 *     ?TryAttachHapticMouse@HapticDeviceManager@@QEAAJKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x18018DBD0 (-TryAttachHapticMouse@HapticDeviceManager@@QEAAJKAEBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 * Callees:
 *     ?SetSupportedFeedback@BamoSimpleHapticsControllerPrincipal@@UEAAXPEAVBamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x1800858E0 (-SetSupportedFeedback@BamoSimpleHapticsControllerPrincipal@@UEAAXPEAVBamoList_SimpleHapticsContr.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     ??4?$com_ptr_t@VBamoEdgyGestureRecognitionConfigurationProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z @ 0x1800AF0CC (--4-$com_ptr_t@VBamoEdgyGestureRecognitionConfigurationProxy@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ??0?$ListPrincipal@USimpleHapticsControllerFeedback@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEAA@PEAVBamoConnection@1@@Z @ 0x18018466C (--0-$ListPrincipal@USimpleHapticsControllerFeedback@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEA.c)
 *     ??0BamoSimpleHapticsControllerPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1801846DC (--0BamoSimpleHapticsControllerPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ??0CompliantHapticInterface@@QEAA@_N0@Z @ 0x18018474C (--0CompliantHapticInterface@@QEAA@_N0@Z.c)
 *     ?SetDeviceType@BamoSimpleHapticsControllerPrincipal@@UEAAXW4HapticDeviceType@@@Z @ 0x180186F50 (-SetDeviceType@BamoSimpleHapticsControllerPrincipal@@UEAAXW4HapticDeviceType@@@Z.c)
 *     ?SetInterfacePath@BamoSimpleHapticsControllerPrincipal@@UEAAJPEBG@Z @ 0x180187010 (-SetInterfacePath@BamoSimpleHapticsControllerPrincipal@@UEAAJPEBG@Z.c)
 *     ?SetIsIntensitySupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x180187150 (-SetIsIntensitySupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z.c)
 *     ?SetIsPlayCountSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x180187210 (-SetIsPlayCountSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z.c)
 *     ?SetIsPlayDurationSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x1801872D0 (-SetIsPlayDurationSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z.c)
 *     ?SetIsReplayPauseIntervalSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x180187390 (-SetIsReplayPauseIntervalSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall MouseHapticDevice::MouseHapticDevice(
        __int64 a1,
        struct ISMBamos_AutoBamos::BamoConnection *a2,
        int a3,
        const unsigned __int16 *a4)
{
  _QWORD *v8; // rax
  _QWORD *v10; // [rsp+68h] [rbp+20h]

  BamoSimpleHapticsControllerPrincipal::BamoSimpleHapticsControllerPrincipal(
    (BamoSimpleHapticsControllerPrincipal *)a1,
    a2);
  *(_QWORD *)a1 = &MouseHapticDevice::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *(_QWORD *)(a1 + 8) = &MouseHapticDevice::`vftable'{for `ISimpleHapticsControllerPrincipal'};
  CompliantHapticInterface::CompliantHapticInterface((CompliantHapticInterface *)(a1 + 88));
  *(_QWORD *)(a1 + 616) = 0LL;
  *(_DWORD *)(a1 + 624) = a3;
  BamoSimpleHapticsControllerPrincipal::SetDeviceType(a1 + 8, 3);
  if ( *((_QWORD *)a4 + 3) > 7uLL )
    a4 = *(const unsigned __int16 **)a4;
  BamoSimpleHapticsControllerPrincipal::SetInterfacePath(
    (struct Microsoft::BamoImpl::ConnectionIndirector **)(a1 + 8),
    a4);
  BamoSimpleHapticsControllerPrincipal::SetIsIntensitySupported(
    (struct Microsoft::BamoImpl::ConnectionIndirector **)(a1 + 8),
    0);
  BamoSimpleHapticsControllerPrincipal::SetIsPlayCountSupported(
    (struct Microsoft::BamoImpl::ConnectionIndirector **)(a1 + 8),
    0);
  BamoSimpleHapticsControllerPrincipal::SetIsReplayPauseIntervalSupported(
    (struct Microsoft::BamoImpl::ConnectionIndirector **)(a1 + 8),
    0);
  BamoSimpleHapticsControllerPrincipal::SetIsPlayDurationSupported(
    (struct Microsoft::BamoImpl::ConnectionIndirector **)(a1 + 8),
    0);
  v10 = operator new(0x50uLL);
  v8 = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<SimpleHapticsControllerFeedback>::ListPrincipal<SimpleHapticsControllerFeedback>(
         v10,
         a2);
  wil::com_ptr_t<BamoEdgyGestureRecognitionConfigurationProxy,wil::err_returncode_policy>::operator=(
    (__int64 *)(a1 + 616),
    (void (__fastcall ***)(_QWORD))v8);
  BamoSimpleHapticsControllerPrincipal::SetSupportedFeedback(
    (struct Microsoft::BamoImpl::ConnectionIndirector **)(a1 + 8),
    *(struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Principal **)(a1 + 616));
  return a1;
}
