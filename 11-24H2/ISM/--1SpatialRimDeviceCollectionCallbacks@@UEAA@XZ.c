/*
 * XREFs of ??1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ @ 0x18009A52C
 * Callers:
 *     ??_GSpatialRimDeviceCollectionCallbacks@@UEAAPEAXI@Z @ 0x1800D5810 (--_GSpatialRimDeviceCollectionCallbacks@@UEAAPEAXI@Z.c)
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x1800D5F4C (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 *     ?OnCallbackOnInputThreadStatic@SpatialRimDeviceCollection@@CAJPEAXK0@Z @ 0x1800D73C0 (-OnCallbackOnInputThreadStatic@SpatialRimDeviceCollection@@CAJPEAXK0@Z.c)
 *     ?OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z @ 0x1800D7430 (-OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z.c)
 *     ?OnDeviceRemoval@SpatialRimDeviceCollection@@MEAAJK@Z @ 0x1800D7BB0 (-OnDeviceRemoval@SpatialRimDeviceCollection@@MEAAJK@Z.c)
 *     ?OnHeadUpdateEvent@SpatialRimDeviceCollection@@QEAAJAEBUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@1@Z @ 0x1800D7D90 (-OnHeadUpdateEvent@SpatialRimDeviceCollection@@QEAAJAEBUMPCMatrix4x4@@PEAUIPerceptionTimestamp@P.c)
 *     ?OnTrackingRequestedHeartbeat@SpatialRimDeviceCollection@@QEAAJK@Z @ 0x1800D7E44 (-OnTrackingRequestedHeartbeat@SpatialRimDeviceCollection@@QEAAJK@Z.c)
 *     ?SetInputDeviceHapticsFeedback@SpatialRimDeviceCollection@@QEAAJKEEG@Z @ 0x1800D881C (-SetInputDeviceHapticsFeedback@SpatialRimDeviceCollection@@QEAAJKEEG@Z.c)
 *     _SpatialRimDeviceCollection::OnInputReport_::_1_::dtor$0 @ 0x1801D14E6 (_SpatialRimDeviceCollection--OnInputReport_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollection::DoDeviceAttach_::_1_::dtor$3 @ 0x1801D58E2 (_SpatialRimDeviceCollection--DoDeviceAttach_--_1_--dtor$3.c)
 *     _SpatialRimDeviceCollection::OnTrackingRequestedHeartbeat_::_1_::dtor$0 @ 0x1801D595A (_SpatialRimDeviceCollection--OnTrackingRequestedHeartbeat_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollection::SetInputDeviceHapticsFeedback_::_1_::dtor$0 @ 0x1801D59FF (_SpatialRimDeviceCollection--SetInputDeviceHapticsFeedback_--_1_--dtor$0.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall SpatialRimDeviceCollectionCallbacks::~SpatialRimDeviceCollectionCallbacks(
        SpatialRimDeviceCollectionCallbacks *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  bool v4; // zf
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_DWORD *)this + 6) == 0;
  *(_QWORD *)this = &SpatialRimDeviceCollectionCallbacks::`vftable';
  if ( !v4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x45,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      a4);
  *((_DWORD *)this + 3) = -1073741823;
}
