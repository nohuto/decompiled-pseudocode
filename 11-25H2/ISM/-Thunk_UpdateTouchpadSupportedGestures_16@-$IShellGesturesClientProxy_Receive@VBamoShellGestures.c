/*
 * XREFs of ?Thunk_UpdateTouchpadSupportedGestures_16@?$IShellGesturesClientProxy_Receive@VBamoShellGesturesClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18015A360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IShellGesturesClientProxy_Receive<BamoImpl::BamoShellGesturesClientProxyImpl>::Thunk_UpdateTouchpadSupportedGestures_16(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int *v2; // rax

  v2 = *a2;
  LOBYTE(a2) = 1;
  return BamoImpl::BamoShellGesturesClientProxyImpl::UpdateTouchpadSupportedGestures(a1, a2, *v2);
}
