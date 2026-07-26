/*
 * XREFs of NdisImmediateReadPortUlong @ 0x1400D51F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWritePort @ 0x1400D4E88 (ndisImmediateReadWritePort.c)
 */

char __fastcall NdisImmediateReadPortUlong(__int64 a1, unsigned int a2, unsigned __int8 *a3)
{
  return ndisImmediateReadWritePort(a1, a2, a3, 4u, 1);
}
