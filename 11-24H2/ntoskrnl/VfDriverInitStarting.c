/*
 * XREFs of VfDriverInitStarting @ 0x140B8424C
 * Callers:
 *     MiIssueDllInitializeCall @ 0x1407E7C54 (MiIssueDllInitializeCall.c)
 *     PnpInitializeBootStartDriver @ 0x140C68294 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     <none>
 */

__int64 VfDriverInitStarting()
{
  return (unsigned int)ViActiveVerifierThunks;
}
