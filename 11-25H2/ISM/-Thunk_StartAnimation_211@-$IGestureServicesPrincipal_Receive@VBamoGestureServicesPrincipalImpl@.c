/*
 * XREFs of ?Thunk_StartAnimation_211@?$IGestureServicesPrincipal_Receive@VBamoGestureServicesPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180141AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?StartAnimation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJIPEBIIIW4GestureProcessorType@@@Z @ 0x1801411E0 (-StartAnimation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJIPEBIIIW4GestureProcessorType@@@.c)
 */

__int64 __fastcall IGestureServicesPrincipal_Receive<BamoImpl::BamoGestureServicesPrincipalImpl>::Thunk_StartAnimation_211(
        int *a1,
        __int64 a2)
{
  return BamoImpl::BamoGestureServicesPrincipalImpl::StartAnimation(
           a1,
           **(_DWORD **)a2,
           *(_QWORD *)(a2 + 8),
           *(_DWORD *)(a2 + 16),
           **(_DWORD **)(a2 + 24),
           **(_DWORD **)(a2 + 32));
}
