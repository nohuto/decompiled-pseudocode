/*
 * XREFs of ?Thunk_ProcessResult_218@?$IGestureServicesPrincipal_Receive@VBamoGestureServicesPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180141A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IGestureServicesPrincipal_Receive<BamoImpl::BamoGestureServicesPrincipalImpl>::Thunk_ProcessResult_218(
        BamoImpl::BamoGestureServicesPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoGestureServicesPrincipalImpl::ProcessResult(
           a1,
           **(_DWORD **)a2,
           *(const struct Windows::UI::Internal::Input::DragOperationResult **)(a2 + 8),
           **(_DWORD **)(a2 + 16));
}
