/*
 * XREFs of IoFreeMapRegistersThunk @ 0x14053B230
 * Callers:
 *     HalpAllocateMapRegisters @ 0x1406FB8A0 (HalpAllocateMapRegisters.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x14038951C (HalpDmaGetAdapterVersion.c)
 *     IoFreeMapRegistersV2 @ 0x14038A060 (IoFreeMapRegistersV2.c)
 *     IoFreeMapRegistersV3 @ 0x14038C590 (IoFreeMapRegistersV3.c)
 */

_QWORD *__fastcall IoFreeMapRegistersThunk(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // r9
  __int64 v3; // r10

  if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
    return (_QWORD *)IoFreeMapRegistersV2(v2, v3, v1);
  else
    return IoFreeMapRegistersV3(v2, v3, v1);
}
