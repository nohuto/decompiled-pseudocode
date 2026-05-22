/*
 * XREFs of ?Thunk_SendHapticFeedbackForDuration_366@?$ISimpleHapticsControllerPrincipal_Receive@VBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801875A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ISimpleHapticsControllerPrincipal_Receive<BamoImpl::BamoSimpleHapticsControllerPrincipalImpl>::Thunk_SendHapticFeedbackForDuration_366(
        BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::SendHapticFeedbackForDuration(
           a1,
           **(_WORD **)a2,
           **(float **)(a2 + 8),
           **(_DWORD **)(a2 + 16));
}
