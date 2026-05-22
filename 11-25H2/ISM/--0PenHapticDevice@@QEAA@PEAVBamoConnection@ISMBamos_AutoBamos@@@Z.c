/*
 * XREFs of ??0PenHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18018BC78
 * Callers:
 *     ?UpdateBamoProperties@PenDevice@@QEAAXXZ @ 0x180189B38 (-UpdateBamoProperties@PenDevice@@QEAAXXZ.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18000E01C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?SetIsIntensitySupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x18018E010 (-SetIsIntensitySupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z.c)
 *     ?SetIsPlayCountSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x18018E0D0 (-SetIsPlayCountSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z.c)
 *     ?SetIsPlayDurationSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x18018E190 (-SetIsPlayDurationSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z.c)
 *     ?SetIsReplayPauseIntervalSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x18018E250 (-SetIsReplayPauseIntervalSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
PenHapticDevice *__fastcall PenHapticDevice::PenHapticDevice(
        PenHapticDevice *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  BamoSimpleHapticsControllerPrincipal *v3; // rdi

  *(_QWORD *)this = &BamoSimpleHapticsControllerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v3 = (PenHapticDevice *)((char *)this + 8);
  *((_QWORD *)this + 1) = &PenHapticDevice::`vftable'{for `ISimpleHapticsControllerPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((PenHapticDevice *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)this = &PenHapticDevice::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *(_QWORD *)v3 = &PenHapticDevice::`vftable'{for `ISimpleHapticsControllerPrincipal'};
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  BamoSimpleHapticsControllerPrincipal::SetIsIntensitySupported(v3, 1);
  BamoSimpleHapticsControllerPrincipal::SetIsPlayCountSupported(v3, 1);
  BamoSimpleHapticsControllerPrincipal::SetIsReplayPauseIntervalSupported(v3, 1);
  BamoSimpleHapticsControllerPrincipal::SetIsPlayDurationSupported(v3, 1);
  return this;
}
