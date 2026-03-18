/*
 * XREFs of DpiFdoIsMsBddAnchoredDevice @ 0x1400593B8
 * Callers:
 *     DxgkSetDeviceCandidateTarget @ 0x140059398 (DxgkSetDeviceCandidateTarget.c)
 *     DpGetMSBDDDisplayInfoPlusEdid @ 0x14022E530 (DpGetMSBDDDisplayInfoPlusEdid.c)
 *     DpiFdoCreateChildDescriptor @ 0x140236594 (DpiFdoCreateChildDescriptor.c)
 *     DpiFdoHandleRemoveDevice @ 0x14023A950 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleStartDevice @ 0x14023ADA0 (DpiFdoHandleStartDevice.c)
 *     DpiFdoHandleStopDevice @ 0x14023B6E0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1402412FC (DpiFdoStopAdapter.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1402419C8 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiFdoHandleSystemPower @ 0x1403C53F8 (DpiFdoHandleSystemPower.c)
 *     DpiFdoSetAdapterPowerState @ 0x14040AB28 (DpiFdoSetAdapterPowerState.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x140412150 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DpiFdoIsMsBddAnchoredDevice(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( a1 )
    return qword_14015E0A8 == a1;
  return result;
}
