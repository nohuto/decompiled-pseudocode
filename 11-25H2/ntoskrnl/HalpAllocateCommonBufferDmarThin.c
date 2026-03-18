/*
 * XREFs of HalpAllocateCommonBufferDmarThin @ 0x140412D64
 * Callers:
 *     HalAllocateCommonBufferDmarThinEx @ 0x140411A60 (HalAllocateCommonBufferDmarThinEx.c)
 *     HalAllocateCommonBufferWithBoundsDmarThin @ 0x14054EEB0 (HalAllocateCommonBufferWithBoundsDmarThin.c)
 *     HalAllocateDomainCommonBufferDmarThin @ 0x14054EF30 (HalAllocateDomainCommonBufferDmarThin.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     MiFreePagesFromMdl @ 0x14038CC40 (MiFreePagesFromMdl.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404118D8 (HalpDmaDereferenceDomainObject.c)
 *     HalpAllocateCommonBufferEntry @ 0x1404147B4 (HalpAllocateCommonBufferEntry.c)
 *     HalpDmaReferenceDomainObject @ 0x1404148C8 (HalpDmaReferenceDomainObject.c)
 *     MmAllocatePagesForMdlEx @ 0x1404154A0 (MmAllocatePagesForMdlEx.c)
 *     MmAllocateNodePagesForMdlEx @ 0x140415500 (MmAllocateNodePagesForMdlEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpAllocateCommonBufferDmarThin(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        MEMORY_CACHING_TYPE *a6,
        int a7,
        _QWORD *a8,
        _QWORD *a9)
{
  SIZE_T v9; // r14
  PVOID v11; // rbp
  struct _MDL *v12; // rsi
  int CommonBufferEntry; // edi
  __int64 v14; // rax
  MEMORY_CACHING_TYPE CacheType; // edi
  PHYSICAL_ADDRESS v16; // rdx
  ULONG Flags; // ecx
  struct _MDL *PagesForMdl; // rax

  v9 = (a4 + 4095) & 0xFFFFF000;
  v11 = 0LL;
  v12 = 0LL;
  CommonBufferEntry = HalpDmaReferenceDomainObject(a1);
  if ( CommonBufferEntry >= 0 )
  {
    v14 = a1[7];
    if ( v14 )
      *(_BYTE *)(v14 + 524) = 1;
    CacheType = MmCached;
    if ( a6 && (CacheType = *a6, *a6 > (unsigned int)MmCached) )
    {
      CommonBufferEntry = -1073741811;
    }
    else
    {
      if ( (a5 & 1) != 0 )
        v9 = ((_DWORD)v9 + 0x1FFFFF) & 0xFFE00000;
      v16.QuadPart = a1[2];
      Flags = (a5 & 1) != 0 ? 101 : 21;
      if ( a7 == 0x80000000 )
        PagesForMdl = MmAllocatePagesForMdlEx(0LL, v16, 0LL, v9, CacheType, Flags);
      else
        PagesForMdl = (struct _MDL *)MmAllocateNodePagesForMdlEx(0, v16.LowPart, 0, v9, CacheType, a7, Flags);
      v12 = PagesForMdl;
      if ( PagesForMdl && (v11 = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, CacheType, 0LL, 0, 0x40000010u)) != 0LL )
      {
        CommonBufferEntry = guard_dispatch_icall_no_overrides(a1[5], 3LL);
        if ( CommonBufferEntry >= 0 )
        {
          CommonBufferEntry = HalpAllocateCommonBufferEntry((_DWORD)v12, (_DWORD)v11, 0, (_DWORD)a1, 1, 0LL);
          if ( CommonBufferEntry >= 0 )
          {
            *a8 = 0LL;
            *a9 = v11;
            return (unsigned int)CommonBufferEntry;
          }
          guard_dispatch_icall_no_overrides(a1[5], 0LL);
        }
      }
      else
      {
        CommonBufferEntry = -1073741670;
      }
    }
    HalpDmaDereferenceDomainObject(a1);
    if ( v11 )
      MmUnmapLockedPages(v11, v12);
    if ( v12 )
    {
      MiFreePagesFromMdl((ULONG_PTR)v12, 0, 0, 0);
      ExFreePoolWithTag(v12, 0);
    }
  }
  return (unsigned int)CommonBufferEntry;
}
