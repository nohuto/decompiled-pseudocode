/*
 * XREFs of HalpMapPhysicalMemoryWriteThrough64 @ 0x1405403A0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMap @ 0x140412738 (HalpMap.c)
 */

unsigned __int64 __fastcall HalpMapPhysicalMemoryWriteThrough64(__int64 a1, unsigned int a2, char a3)
{
  return HalpMap(a1, a2, 0, a3, 4u, 0LL);
}
