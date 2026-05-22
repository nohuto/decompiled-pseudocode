/*
 * XREFs of ?Thunk_CancelOperation_206@?$IGestureServicesPrincipal_Receive@VBamoGestureServicesPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180141A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IGestureServicesPrincipal_Receive<BamoImpl::BamoGestureServicesPrincipalImpl>::Thunk_CancelOperation_206(
        int *a1,
        unsigned int **a2)
{
  return BamoImpl::BamoGestureServicesPrincipalImpl::CancelOperation(a1, **a2, *a2[1], *a2[2]);
}
