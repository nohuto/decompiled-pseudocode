/*
 * XREFs of HalpMmInitSystem @ 0x140B4F820
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxInit @ 0x14054054C (HalpMmAllocCtxInit.c)
 *     HalpMmReservePageTablePages @ 0x1405408AC (HalpMmReservePageTablePages.c)
 *     HalpInitMemoryCachingRequirementsTable @ 0x140B4E1E4 (HalpInitMemoryCachingRequirementsTable.c)
 *     HalpConsumeLowMemory @ 0x140C1034C (HalpConsumeLowMemory.c)
 */

__int64 __fastcall HalpMmInitSystem(int a1, __int64 a2, __int64 a3)
{
  int inited; // ebx
  int v4; // ecx
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax

  inited = 0;
  if ( a1 )
  {
    v4 = a1 - 12;
    if ( v4 )
    {
      v5 = v4 - 4;
      if ( v5 )
      {
        if ( v5 == 1 )
        {
          inited = HalpInitMemoryCachingRequirementsTable(a3);
          if ( inited >= 0 )
            HalpMoveMemory[0] = (__int64 (__fastcall *)())RtlCopyMemoryNonTemporal;
        }
      }
      else
      {
        HalpMmReservePageTablePages();
        HalpMmLoaderBlock = 0LL;
        HalpMmLeftoverMemory = 0LL;
        HalpMmLeftoverMemorySize = 0;
      }
    }
    else if ( HalpMiscDiscardLowMemory )
    {
      HalpConsumeLowMemory(a3);
    }
  }
  else
  {
    v6 = *(_QWORD *)(a3 + 240);
    HalpMmLeftoverMemory = 0LL;
    HalpMmLeftoverMemorySize = 0;
    HalpMmLoaderBlock = a3;
    v7 = *(_QWORD *)(v6 + 2960);
    v8 = *(_QWORD *)(v6 + 2968);
    HalpHeapStart = v7;
    HalpHeapEnd = v7 + v8;
    HalpOriginalHeapEnd = v7 + v8 - 1;
    qword_140E00958 = (__int64)HalpAllocateEarlyPages;
    qword_140E00960 = (__int64)HalpMapEarlyPages;
    HalpOriginalHeapStart = v7;
    HalpMmAllocCtxInit();
  }
  return (unsigned int)inited;
}
