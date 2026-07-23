/*
 * XREFs of HalpMapCR3Ex @ 0x140B5071C
 * Callers:
 *     HalpMmBuildTiledMemoryMap @ 0x140B50810 (HalpMmBuildTiledMemoryMap.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     HalpStoreFreeCr3 @ 0x140556FB8 (HalpStoreFreeCr3.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpMapCR3Ex(unsigned __int64 BaseAddress, PHYSICAL_ADDRESS PhysicalAddress, PHYSICAL_ADDRESS *a3)
{
  char *v3; // rdi
  int i; // ebp
  PVOID *v8; // rsi
  char *v9; // rax
  __int64 v10; // rcx

  v3 = (char *)HalpCR3Root;
  for ( i = 3; ; --i )
  {
    v8 = (PVOID *)&v3[8 * ((BaseAddress >> (i + 8 * (unsigned __int8)i + 12)) & 0x1FF)];
    if ( !i )
      break;
    v3 = (char *)*v8;
    if ( !*v8 )
    {
      v9 = (char *)HalpMmAllocCtxAlloc((unsigned int)(i + 8 * i + 12), 4096LL);
      v3 = v9;
      if ( !v9 )
        return 3221225626LL;
      memset_0(v9, 0, 0x1000uLL);
      if ( (int)HalpStoreFreeCr3((__int64)v3) < 0 )
      {
        HalpMmAllocCtxFree(v10, (__int64)v3);
        return 3221225626LL;
      }
      *v8 = v3;
    }
  }
  if ( !PhysicalAddress.QuadPart )
    PhysicalAddress = MmGetPhysicalAddress((PVOID)BaseAddress);
  *v8 = (PVOID)(PhysicalAddress.QuadPart ^ ((unsigned __int64)*v8 ^ PhysicalAddress.QuadPart) & 0xFFF0000000000FFFuLL | 3);
  if ( a3 )
    *a3 = MmGetPhysicalAddress(v8);
  return 0LL;
}
