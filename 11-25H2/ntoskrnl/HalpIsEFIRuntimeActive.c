/*
 * XREFs of HalpIsEFIRuntimeActive @ 0x14054A170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HalpIsEFIRuntimeActive()
{
  return HalpEfiCalls != 0;
}
