/*
 * XREFs of ??2@YAPEAX_K@Z @ 0x1800149A0
 * Callers:
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180003860 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 *     ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x180003A70 (-GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@.c)
 *     CreateResourceManagerProxy @ 0x18001365C (CreateResourceManagerProxy.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180013CF8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 * Callees:
 *     malloc_0 @ 0x180013F01 (malloc_0.c)
 *     _callnewh_0 @ 0x1800149EB (_callnewh_0.c)
 */

void *__fastcall operator new(size_t Size)
{
  size_t i; // rdi
  void *v2; // rbx

  for ( i = Size; ; Size = i )
  {
    v2 = malloc_0(Size);
    if ( v2 || !callnewh_0(i) )
      break;
  }
  return v2;
}
