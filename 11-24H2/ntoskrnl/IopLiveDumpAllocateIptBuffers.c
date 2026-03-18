/*
 * XREFs of IopLiveDumpAllocateIptBuffers @ 0x1405995D4
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x1405982F0 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140262A88 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x14049ACB4 (IopLiveDumpIsUnderMemoryPressure.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MmAllocateIndependentPages @ 0x140A88F50 (MmAllocateIndependentPages.c)
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
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rax
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  *(_DWORD *)(a1 + 1060) = 0x10000000;
  v2 = (char **)(a1 + 1048);
  *(_QWORD *)(a1 + 1080) = 0LL;
  v14 = 0LL;
  guard_dispatch_icall_no_overrides(2LL, 0LL, a1 + 1048, 48LL);
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
      if ( (int)guard_dispatch_icall_no_overrides(&v14, v8, v9, v10) >= 0 )
      {
        if ( (_QWORD)v14 )
        {
          if ( *((_QWORD *)&v14 + 1) )
          {
            IopLiveDumpDiscardVirtualAddressRange(a1, (char *)v14, *((unsigned __int64 *)&v14 + 1));
            v11 = *((_QWORD *)&v14 + 1);
            *(_QWORD *)(a1 + 1032) = 0LL;
            *(_DWORD *)(a1 + 1040) = 0;
            *(_DWORD *)(a1 + 1008) = 0;
            v12 = MmAllocateIndependentPages(v11, 0xFFFFFFFFLL);
            *(_QWORD *)(a1 + 1000) = v12;
            if ( v12 )
            {
              *(_DWORD *)(a1 + 1008) = DWORD2(v14);
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
