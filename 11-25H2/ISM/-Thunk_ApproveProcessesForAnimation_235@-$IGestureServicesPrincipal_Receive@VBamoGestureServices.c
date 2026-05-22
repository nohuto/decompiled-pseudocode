/*
 * XREFs of ?Thunk_ApproveProcessesForAnimation_235@?$IGestureServicesPrincipal_Receive@VBamoGestureServicesPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180141A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IGestureServicesPrincipal_Receive<BamoImpl::BamoGestureServicesPrincipalImpl>::Thunk_ApproveProcessesForAnimation_235(
        BamoImpl::BamoGestureServicesPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoGestureServicesPrincipalImpl::ApproveProcessesForAnimation(
           a1,
           *(const unsigned int **)a2,
           *(_DWORD *)(a2 + 8),
           **(_DWORD **)(a2 + 16));
}
