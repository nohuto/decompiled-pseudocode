/*
 * XREFs of ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800DCAA0
 * Callers:
 *     ?OnDeviceRemoval@SystemControlDeviceCollection@@MEAAJK@Z @ 0x180083CC0 (-OnDeviceRemoval@SystemControlDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@SpatialRimDeviceCollection@@MEAAJK@Z @ 0x1800D49A0 (-OnDeviceRemoval@SpatialRimDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z @ 0x1800D7510 (-OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z @ 0x1800D84A0 (-OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@CallControlDeviceCollection@@MEAAJK@Z @ 0x1800D8EA0 (-OnDeviceRemoval@CallControlDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@HeatDeviceCollection@@MEAAJK@Z @ 0x1800D9710 (-OnDeviceRemoval@HeatDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@GazeDeviceCollection@@MEAAJK@Z @ 0x1800D9C70 (-OnDeviceRemoval@GazeDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@DockDeviceCollection@@MEAAJK@Z @ 0x1800DA680 (-OnDeviceRemoval@DockDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z @ 0x1800DB730 (-OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z @ 0x1800DC620 (-OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z.c)
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180068174 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?LogRawInputDeviceRemoved@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x1800DC9F0 (-LogRawInputDeviceRemoved@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 */

__int64 __fastcall HIDDeviceCollection::OnDeviceRemoval(HIDDeviceCollection *this, int a2)
{
  struct RIMDevice *v3; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0LL;
  if ( (int)RIMDeviceCollection::FindDevice(this, a2, 0LL, &v3, 0LL) >= 0 )
    RawInputProvidersTelemetry::LogRawInputDeviceRemoved(
      *(unsigned int *)(*((_QWORD *)v3 + 4) + 4LL),
      *(_WORD *)(*((_QWORD *)v3 + 4) + 32LL),
      *(_WORD *)(*((_QWORD *)v3 + 4) + 34LL),
      *(_WORD *)(*((_QWORD *)v3 + 4) + 36LL));
  return 0LL;
}
