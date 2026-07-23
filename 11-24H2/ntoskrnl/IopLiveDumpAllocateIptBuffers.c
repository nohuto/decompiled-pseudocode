/*
 * XREFs of IopLiveDumpAllocateIptBuffers @ 0x140596554
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x140595270 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14029293C (IopLiveDumpDiscardVirtualAddressRange.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x1404956A4 (IopLiveDumpIsUnderMemoryPressure.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MmAllocateIndependentPages @ 0x140A85350 (MmAllocateIndependentPages.c)
 */

__int64 __fastcall IopLiveDumpAllocateIptBuffers(__int64 a1)
{
  unsigned int v1; // ebx
  char **v2; // r14
  unsigned int v4; // eax
  char *v5; // rdx
  unsigned int v6; // esi
  __int64 IndependentPages; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  *(_DWORD *)(a1 + 1060) = 0x10000000;
  v2 = (char **)(a1 + 1048);
  *(_QWORD *)(a1 + 1080) = 0LL;
  v12 = 0LL;
  guard_dispatch_icall_no_overrides(2LL, 0LL);
  v4 = *(_DWORD *)(a1 + 1088);
  if ( v4 )
  {
    v5 = *(char **)(a1 + 1080);
    if ( v5 )
      IopLiveDumpDiscardVirtualAddressRange(a1, v5, v4);
    v6 = *(_DWORD *)(a1 + 1088);
    *(_QWORD *)(a1 + 1080) = 0LL;
    *(_DWORD *)(a1 + 1088) = 0;
    *(_DWORD *)(a1 + 1056) = 0;
    IndependentPages = MmAllocateIndependentPages(v6, 0xFFFFFFFFLL);
    *v2 = (char *)IndependentPages;
    if ( IndependentPages )
    {
      *(_DWORD *)(a1 + 1056) = v6;
      if ( IopLiveDumpIsUnderMemoryPressure(a1) )
        return (unsigned int)-1073741248;
      IopLiveDumpDiscardVirtualAddressRange(a1, *v2, (*(unsigned int *)(a1 + 1056) + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
      memset_0(*v2, 0, *(unsigned int *)(a1 + 1056));
      if ( (int)guard_dispatch_icall_no_overrides(&v12, v8) >= 0 )
      {
        if ( (_QWORD)v12 )
        {
          if ( *((_QWORD *)&v12 + 1) )
          {
            IopLiveDumpDiscardVirtualAddressRange(a1, (char *)v12, *((unsigned __int64 *)&v12 + 1));
            v9 = *((_QWORD *)&v12 + 1);
            *(_QWORD *)(a1 + 1032) = 0LL;
            *(_DWORD *)(a1 + 1040) = 0;
            *(_DWORD *)(a1 + 1008) = 0;
            v10 = MmAllocateIndependentPages(v9, 0xFFFFFFFFLL);
            *(_QWORD *)(a1 + 1000) = v10;
            if ( v10 )
            {
              *(_DWORD *)(a1 + 1008) = DWORD2(v12);
              if ( !IopLiveDumpIsUnderMemoryPressure(a1) )
              {
                IopLiveDumpDiscardVirtualAddressRange(
                  a1,
                  *(char **)(a1 + 1000),
                  (*(unsigned int *)(a1 + 1008) + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
                memset_0(*(void **)(a1 + 1000), 0, *(unsigned int *)(a1 + 1008));
                return v1;
              }
              return (unsigned int)-1073741248;
            }
          }
        }
      }
    }
  }
  return v1;
}
