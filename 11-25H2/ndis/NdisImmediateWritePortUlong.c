/*
 * XREFs of NdisImmediateWritePortUlong @ 0x1400DC5C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWritePort @ 0x1400DC1C8 (ndisImmediateReadWritePort.c)
 */

char __fastcall NdisImmediateWritePortUlong(__int64 a1, unsigned int a2, int a3)
{
  int v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ndisImmediateReadWritePort(a1, a2, (unsigned __int8 *)&v4, 4u, 0);
}
