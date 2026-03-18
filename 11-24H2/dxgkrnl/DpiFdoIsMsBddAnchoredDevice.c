/*
 * XREFs of DpiFdoIsMsBddAnchoredDevice @ 0x140058E78
 * Callers:
 *     DxgkSetDeviceCandidateTarget @ 0x140058E58 (DxgkSetDeviceCandidateTarget.c)
 *     DpGetMSBDDDisplayInfoPlusEdid @ 0x140234D90 (DpGetMSBDDDisplayInfoPlusEdid.c)
 *     DpiFdoCreateChildDescriptor @ 0x14023D098 (DpiFdoCreateChildDescriptor.c)
 *     DpiFdoHandleRemoveDevice @ 0x140241460 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleStartDevice @ 0x1402418B0 (DpiFdoHandleStartDevice.c)
 *     DpiFdoHandleStopDevice @ 0x1402421F0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x140248100 (DpiFdoStopAdapter.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1402487C8 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiFdoHandleSystemPower @ 0x1403B9E38 (DpiFdoHandleSystemPower.c)
 *     DpiFdoSetAdapterPowerState @ 0x1404032B8 (DpiFdoSetAdapterPowerState.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x14040D3E0 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DpiFdoIsMsBddAnchoredDevice(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( a1 )
    return qword_140161068 == a1;
  return result;
}
