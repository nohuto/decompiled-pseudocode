/*
 * XREFs of KdGetDebugDevice @ 0x1405AF710
 * Callers:
 *     HalpDbgInitSystem @ 0x140B4D480 (HalpDbgInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *KdGetDebugDevice()
{
  return &KdDebugDevice;
}
