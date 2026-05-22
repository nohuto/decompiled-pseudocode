/*
 * XREFs of ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800E0210
 * Callers:
 *     ?OnDeviceRemoval@SystemControlDeviceCollection@@MEAAJK@Z @ 0x180083CE0 (-OnDeviceRemoval@SystemControlDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@SpatialRimDeviceCollection@@MEAAJK@Z @ 0x1800D7BB0 (-OnDeviceRemoval@SpatialRimDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z @ 0x1800DA700 (-OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z @ 0x1800DB690 (-OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@CallControlDeviceCollection@@MEAAJK@Z @ 0x1800DC090 (-OnDeviceRemoval@CallControlDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@HeatDeviceCollection@@MEAAJK@Z @ 0x1800DC900 (-OnDeviceRemoval@HeatDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@GazeDeviceCollection@@MEAAJK@Z @ 0x1800DCE60 (-OnDeviceRemoval@GazeDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@DockDeviceCollection@@MEAAJK@Z @ 0x1800DD870 (-OnDeviceRemoval@DockDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z @ 0x1800DE920 (-OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z @ 0x1800DF780 (-OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@HapticDeviceCollection@@MEAAJK@Z @ 0x1800DFD80 (-OnDeviceRemoval@HapticDeviceCollection@@MEAAJK@Z.c)
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180067F64 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MouseHaptics2@@@details@wil@@QEAA_NXZ @ 0x1800CB118 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MouseHaptics2@@@details@wil@@QEAA.c)
 *     ?LogRawInputDeviceRemoved@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x1800E00E0 (-LogRawInputDeviceRemoved@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 */

__int64 __fastcall HIDDeviceCollection::OnDeviceRemoval(HIDDeviceCollection *this, int a2)
{
  __int64 v2; // rbx
  struct RIMDevice *v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  if ( (int)RIMDeviceCollection::FindDevice(this, a2, 0LL, &v4, 0LL) >= 0 )
  {
    v2 = *((_QWORD *)v4 + 4);
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_MouseHaptics2>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_MouseHaptics2>::GetImpl'::`2'::impl)
      || v2 )
    {
      RawInputProvidersTelemetry::LogRawInputDeviceRemoved(
        *(_DWORD *)(v2 + 4),
        *(_WORD *)(v2 + 32),
        *(_WORD *)(v2 + 34),
        *(_WORD *)(v2 + 36));
    }
  }
  return 0LL;
}
