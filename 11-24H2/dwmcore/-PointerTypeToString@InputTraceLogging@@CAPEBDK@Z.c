/*
 * XREFs of ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x180203C00
 * Callers:
 *     ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x180092400 (-HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBV.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::PointerTypeToString(int a1)
{
  int v1; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  if ( !a1 )
    return "ComputeLuid";
  v1 = a1 - 1;
  if ( !v1 )
    return "Pointer";
  v3 = v1 - 1;
  if ( !v3 )
    return "Touch";
  v4 = v3 - 1;
  if ( !v4 )
    return "Pen";
  v5 = v4 - 1;
  if ( !v5 )
    return "Mouse";
  v6 = v5 - 1;
  if ( !v6 )
    return "Touchpad";
  if ( v6 == 1 )
    return "DropTarget";
  return "UNKNOWN";
}
