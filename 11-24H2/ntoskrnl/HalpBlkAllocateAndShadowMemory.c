/*
 * XREFs of HalpBlkAllocateAndShadowMemory @ 0x140C14C34
 * Callers:
 *     HalpBlkAllocateShadowCodePages @ 0x140C14E4C (HalpBlkAllocateShadowCodePages.c)
 *     HalpBlkAllocateShadowData @ 0x140C14E98 (HalpBlkAllocateShadowData.c)
 * Callees:
 *     HalpMap @ 0x140460358 (HalpMap.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HalpBlkAddVirtualMapping @ 0x140C14AF0 (HalpBlkAddVirtualMapping.c)
 *     HalpAllocPhysicalMemoryEx @ 0x140C69568 (HalpAllocPhysicalMemoryEx.c)
 */

char *__fastcall HalpBlkAllocateAndShadowMemory(char *Src, unsigned int a2, __int64 a3, int a4, __int64 *a5)
{
  __int64 v6; // rbp
  char *v8; // rdi
  __int64 v9; // rbx
  char *v10; // rax
  size_t v11; // r8

  v6 = a2;
  v8 = 0LL;
  v9 = HalpAllocPhysicalMemoryEx(HalpMmLoaderBlock, 0, a2, 0, 0LL);
  if ( v9 )
  {
    if ( a5 )
      *a5 = v9;
    v10 = (char *)HalpMap(v9, (unsigned int)v6, 1uLL, 0, 4u, 0LL);
    v8 = v10;
    if ( v10 )
    {
      v11 = v6 << 12;
      if ( Src )
      {
        memmove(v10, Src, v11);
      }
      else
      {
        memset_0(v10, 0, v11);
        Src = v8;
      }
      while ( (_DWORD)v6 )
      {
        if ( (int)HalpBlkAddVirtualMapping(HalpBlkRootPageTablePa, v9, (unsigned __int64)Src, 1, a4) < 0 )
          return 0LL;
        v9 += 4096LL;
        Src += 4096;
        LODWORD(v6) = v6 - 1;
      }
    }
  }
  return v8;
}
