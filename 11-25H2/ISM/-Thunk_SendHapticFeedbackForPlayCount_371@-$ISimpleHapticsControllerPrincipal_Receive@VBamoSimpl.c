/*
 * XREFs of ?Thunk_SendHapticFeedbackForPlayCount_371@?$ISimpleHapticsControllerPrincipal_Receive@VBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18018E4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAJGMII@Z @ 0x18018DCA4 (-SendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAJGMII@Z.c)
 */

__int64 __fastcall ISimpleHapticsControllerPrincipal_Receive<BamoImpl::BamoSimpleHapticsControllerPrincipalImpl>::Thunk_SendHapticFeedbackForPlayCount_371(
        BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::SendHapticFeedbackForPlayCount(
           a1,
           **(_WORD **)a2,
           **(float **)(a2 + 8),
           **(_DWORD **)(a2 + 16),
           **(_DWORD **)(a2 + 24));
}
