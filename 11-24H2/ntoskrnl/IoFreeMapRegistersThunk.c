/*
 * XREFs of IoFreeMapRegistersThunk @ 0x14053D930
 * Callers:
 *     HalpAllocateMapRegisters @ 0x1406FDC60 (HalpAllocateMapRegisters.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x14038FBDC (HalpDmaGetAdapterVersion.c)
 *     IoFreeMapRegistersV2 @ 0x140390720 (IoFreeMapRegistersV2.c)
 *     IoFreeMapRegistersV3 @ 0x140392C60 (IoFreeMapRegistersV3.c)
 */

_QWORD *__fastcall IoFreeMapRegistersThunk(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // r10

  if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
    return (_QWORD *)IoFreeMapRegistersV2(v2, v3, v1);
  else
    return IoFreeMapRegistersV3(v2, v3, v1);
}
