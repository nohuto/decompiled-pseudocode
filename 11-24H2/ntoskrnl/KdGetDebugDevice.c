/*
 * XREFs of KdGetDebugDevice @ 0x1405AC680
 * Callers:
 *     HalpDbgInitSystem @ 0x140B4F4D0 (HalpDbgInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *KdGetDebugDevice()
{
  return &KdDebugDevice;
}
