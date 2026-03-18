/*
 * XREFs of IoFreeMapRegistersThunk @ 0x14053B100
 * Callers:
 *     HalpAllocateMapRegisters @ 0x1406F1E70 (HalpAllocateMapRegisters.c)
 * Callees:
 *     IoFreeMapRegistersV3 @ 0x140331F10 (IoFreeMapRegistersV3.c)
 *     HalpDmaGetAdapterVersion @ 0x140333AC8 (HalpDmaGetAdapterVersion.c)
 *     IoFreeMapRegistersV2 @ 0x140336A70 (IoFreeMapRegistersV2.c)
 */

__int64 __fastcall IoFreeMapRegistersThunk(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // r9
  __int64 v3; // r10

  if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
    return IoFreeMapRegistersV2(v2, v3, v1);
  else
    return IoFreeMapRegistersV3(v2, v3, v1);
}
