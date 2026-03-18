/*
 * XREFs of VfDriverInitStarting @ 0x140B82248
 * Callers:
 *     MiIssueDllInitializeCall @ 0x1407E7684 (MiIssueDllInitializeCall.c)
 *     PnpInitializeBootStartDriver @ 0x140C66118 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     <none>
 */

__int64 VfDriverInitStarting()
{
  return (unsigned int)ViActiveVerifierThunks;
}
