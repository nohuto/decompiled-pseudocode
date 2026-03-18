/*
 * XREFs of HalpMapPhysicalMemoryWriteThrough64 @ 0x140542BD0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMap @ 0x140478C5C (HalpMap.c)
 */

unsigned __int64 __fastcall HalpMapPhysicalMemoryWriteThrough64(__int64 a1, __int64 a2, char a3)
{
  return HalpMap(a1, a2, 0LL, a3, 4u, 0LL);
}
