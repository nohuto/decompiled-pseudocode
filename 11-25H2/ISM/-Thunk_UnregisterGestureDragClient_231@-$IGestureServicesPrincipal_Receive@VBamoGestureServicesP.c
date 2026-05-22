/*
 * XREFs of ?Thunk_UnregisterGestureDragClient_231@?$IGestureServicesPrincipal_Receive@VBamoGestureServicesPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180141B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IGestureServicesPrincipal_Receive<BamoImpl::BamoGestureServicesPrincipalImpl>::Thunk_UnregisterGestureDragClient_231(
        BamoImpl::BamoGestureServicesPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoGestureServicesPrincipalImpl::UnregisterGestureDragClient(
           a1,
           **(_QWORD **)a2,
           **(_DWORD **)(a2 + 8));
}
