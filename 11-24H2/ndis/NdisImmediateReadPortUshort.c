/*
 * XREFs of NdisImmediateReadPortUshort @ 0x1400D5210
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWritePort @ 0x1400D4E88 (ndisImmediateReadWritePort.c)
 */

char __fastcall NdisImmediateReadPortUshort(__int64 a1, unsigned int a2, unsigned __int8 *a3)
{
  return ndisImmediateReadWritePort(a1, a2, a3, 2u, 1);
}
