/*
 * XREFs of HalpAcpiAllocateMemory @ 0x14053A9C0
 * Callers:
 *     HalpAcpiCopyBiosTable @ 0x14053AAB0 (HalpAcpiCopyBiosTable.c)
 *     HalpAcpiGetAllTablesWork @ 0x14053ABC8 (HalpAcpiGetAllTablesWork.c)
 *     HalpAcpiFindRsdp @ 0x140C0F868 (HalpAcpiFindRsdp.c)
 *     HalpAcpiTableCacheInit @ 0x140C699DC (HalpAcpiTableCacheInit.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     HalpMap @ 0x140460358 (HalpMap.c)
 *     HalpAllocPhysicalMemoryEx @ 0x140C69568 (HalpAllocPhysicalMemoryEx.c)
 */

unsigned __int64 __fastcall HalpAcpiAllocateMemory(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  if ( !a1 )
    return HalpMmAllocCtxAlloc(0LL, a2);
  v7 = 0x1000000LL;
  v3 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v4 = HalpAllocPhysicalMemoryEx(a1, (unsigned int)&v7, v3, 0, 0LL);
  if ( v4 )
    return HalpMap(v4, v3, 1uLL, 0, 4u, 0LL);
  return v2;
}
