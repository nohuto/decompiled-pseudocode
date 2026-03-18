/*
 * XREFs of HalpIommuCreateDmarPageTable @ 0x14056788C
 * Callers:
 *     HalpIommuAllocateDmaDomain @ 0x1405534C4 (HalpIommuAllocateDmaDomain.c)
 *     HalpIommuConstructReservedPageTable @ 0x140B4DA90 (HalpIommuConstructReservedPageTable.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     HalpMmAllocateMemoryInternal @ 0x140542CD0 (HalpMmAllocateMemoryInternal.c)
 *     HalpIommuInitializeDmarPageTable @ 0x140567B64 (HalpIommuInitializeDmarPageTable.c)
 */

__int64 __fastcall HalpIommuCreateDmarPageTable(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  int v9; // r14d
  void *MemoryInternal; // rax
  int v11; // r9d
  __int64 v12; // rbx
  __int64 v14; // rcx
  int v15; // edi
  int v16; // [rsp+20h] [rbp-28h]

  v9 = a1;
  if ( a6 )
    MemoryInternal = (void *)HalpMmAllocateMemoryInternal(96, 1u);
  else
    MemoryInternal = (void *)HalpMmAllocCtxAlloc(a1, 96LL);
  v12 = (__int64)MemoryInternal;
  if ( !MemoryInternal )
    return 3221225626LL;
  if ( a3 > 6 || a2 < 2 || a3 < a2 )
    return 3221225485LL;
  v15 = HalpIommuInitializeDmarPageTable(v9, a2, a3, v11, v16, a6, MemoryInternal);
  if ( v15 < 0 )
  {
    *a7 = 0LL;
    if ( !a6 )
      HalpMmAllocCtxFree(v14, v12);
  }
  else
  {
    *a7 = v12;
  }
  return (unsigned int)v15;
}
