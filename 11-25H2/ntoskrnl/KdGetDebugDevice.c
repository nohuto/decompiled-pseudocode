/*
 * XREFs of KdGetDebugDevice @ 0x1405ABD80
 * Callers:
 *     HalpDbgInitSystem @ 0x140B3D480 (HalpDbgInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *KdGetDebugDevice()
{
  return &KdDebugDevice;
}
