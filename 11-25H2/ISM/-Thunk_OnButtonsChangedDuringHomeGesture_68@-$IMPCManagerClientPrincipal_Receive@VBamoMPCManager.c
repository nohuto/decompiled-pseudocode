/*
 * XREFs of ?Thunk_OnButtonsChangedDuringHomeGesture_68@?$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180167E60
 * Callers:
 *     <none>
 * Callees:
 *     ?OnButtonsChangedDuringHomeGesture@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJIII_KI@Z @ 0x180167008 (-OnButtonsChangedDuringHomeGesture@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJIII_KI@Z.c)
 */

__int64 __fastcall IMPCManagerClientPrincipal_Receive<BamoImpl::BamoMPCManagerClientPrincipalImpl>::Thunk_OnButtonsChangedDuringHomeGesture_68(
        BamoImpl::BamoMPCManagerClientPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoMPCManagerClientPrincipalImpl::OnButtonsChangedDuringHomeGesture(
           a1,
           **(_DWORD **)a2,
           **(_DWORD **)(a2 + 8),
           **(_DWORD **)(a2 + 16));
}
