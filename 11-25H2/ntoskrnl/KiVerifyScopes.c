/*
 * XREFs of KiVerifyScopes @ 0x140C1933C
 * Callers:
 *     KeInitSystem @ 0x140C4FA10 (KeInitSystem.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutEx @ 0x140347C60 (KeExpandKernelStackAndCalloutEx.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

NTSTATUS KiVerifyScopes()
{
  NTSTATUS result; // eax

  result = KeExpandKernelStackAndCalloutEx(KiVerifyScopesExecute, 0LL, 0xC000uLL, 1u, 0LL);
  if ( result < 0 )
    KeBugCheckEx(0x32u, result, 0x5356694BuLL, 0LL, 0LL);
  return result;
}
