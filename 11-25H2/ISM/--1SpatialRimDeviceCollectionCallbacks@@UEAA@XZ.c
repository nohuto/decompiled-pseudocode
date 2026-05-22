/*
 * XREFs of ??1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ @ 0x18009A35C
 * Callers:
 *     ??_GSpatialRimDeviceCollectionCallbacks@@UEAAPEAXI@Z @ 0x1800D25D0 (--_GSpatialRimDeviceCollectionCallbacks@@UEAAPEAXI@Z.c)
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x1800D2D0C (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 *     ?OnCallbackOnInputThreadStatic@SpatialRimDeviceCollection@@CAJPEAXK0@Z @ 0x1800D41B0 (-OnCallbackOnInputThreadStatic@SpatialRimDeviceCollection@@CAJPEAXK0@Z.c)
 *     ?OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z @ 0x1800D4220 (-OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z.c)
 *     ?OnDeviceRemoval@SpatialRimDeviceCollection@@MEAAJK@Z @ 0x1800D49A0 (-OnDeviceRemoval@SpatialRimDeviceCollection@@MEAAJK@Z.c)
 *     ?OnHeadUpdateEvent@SpatialRimDeviceCollection@@QEAAJAEBUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@1@Z @ 0x1800D4B80 (-OnHeadUpdateEvent@SpatialRimDeviceCollection@@QEAAJAEBUMPCMatrix4x4@@PEAUIPerceptionTimestamp@P.c)
 *     ?OnTrackingRequestedHeartbeat@SpatialRimDeviceCollection@@QEAAJK@Z @ 0x1800D4C34 (-OnTrackingRequestedHeartbeat@SpatialRimDeviceCollection@@QEAAJK@Z.c)
 *     ?SetInputDeviceHapticsFeedback@SpatialRimDeviceCollection@@QEAAJKEEG@Z @ 0x1800D562C (-SetInputDeviceHapticsFeedback@SpatialRimDeviceCollection@@QEAAJKEEG@Z.c)
 *     _SpatialRimDeviceCollection::OnInputReport_::_1_::dtor$0 @ 0x1801CA046 (_SpatialRimDeviceCollection--OnInputReport_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollection::DoDeviceAttach_::_1_::dtor$3 @ 0x1801CE235 (_SpatialRimDeviceCollection--DoDeviceAttach_--_1_--dtor$3.c)
 *     _SpatialRimDeviceCollection::OnTrackingRequestedHeartbeat_::_1_::dtor$0 @ 0x1801CE2AD (_SpatialRimDeviceCollection--OnTrackingRequestedHeartbeat_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollection::SetInputDeviceHapticsFeedback_::_1_::dtor$0 @ 0x1801CE352 (_SpatialRimDeviceCollection--SetInputDeviceHapticsFeedback_--_1_--dtor$0.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
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
