/*
 * XREFs of ?Thunk_UpdateHaptics_8@?$IPenDeviceProxy_Receive@VBamoPenDeviceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180124AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IPenDeviceProxy_Receive<BamoImpl::BamoPenDeviceProxyImpl>::Thunk_UpdateHaptics_8(
        BamoImpl::BamoPenDeviceProxyImpl *a1,
        unsigned int **a2)
{
  return BamoImpl::BamoPenDeviceProxyImpl::UpdateHaptics(a1, 1, **a2);
}
