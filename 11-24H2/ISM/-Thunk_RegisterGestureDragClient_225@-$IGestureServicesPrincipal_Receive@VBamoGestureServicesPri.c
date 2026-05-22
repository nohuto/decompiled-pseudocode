/*
 * XREFs of ?Thunk_RegisterGestureDragClient_225@?$IGestureServicesPrincipal_Receive@VBamoGestureServicesPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180143C40
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterGestureDragClient@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJ_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@4567@I@Z @ 0x18003D30C (-RegisterGestureDragClient@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJ_KW4InputGestureSourc.c)
 */

__int64 __fastcall IGestureServicesPrincipal_Receive<BamoImpl::BamoGestureServicesPrincipalImpl>::Thunk_RegisterGestureDragClient_225(
        int *a1,
        __int64 a2)
{
  return BamoImpl::BamoGestureServicesPrincipalImpl::RegisterGestureDragClient(
           a1,
           **(_QWORD **)a2,
           **(_DWORD **)(a2 + 8),
           **(_DWORD **)(a2 + 16),
           **(_DWORD **)(a2 + 24));
}
