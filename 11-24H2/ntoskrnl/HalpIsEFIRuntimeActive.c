/*
 * XREFs of HalpIsEFIRuntimeActive @ 0x14054A320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HalpIsEFIRuntimeActive()
{
  return HalpEfiCalls != 0;
}
