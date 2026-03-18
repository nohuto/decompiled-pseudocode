/*
 * XREFs of HalpAllocateCommonBufferDmaThin @ 0x140414548
 * Callers:
 *     HalAllocateCommonBufferDmaThinEx @ 0x1404144B0 (HalAllocateCommonBufferDmaThinEx.c)
 *     HalAllocateCommonBufferWithBoundsDmaThin @ 0x14054E980 (HalAllocateCommonBufferWithBoundsDmaThin.c)
 *     HalAllocateDomainCommonBufferDmaThin @ 0x14054EA00 (HalAllocateDomainCommonBufferDmaThin.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402AB2E0 (MmGetPhysicalAddress.c)
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     MmFreeContiguousMemory @ 0x14038B3D0 (MmFreeContiguousMemory.c)
 *     MiFreePagesFromMdl @ 0x14038CC40 (MiFreePagesFromMdl.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404118D8 (HalpDmaDereferenceDomainObject.c)
 *     HalpAllocateCommonBufferEntry @ 0x1404147B4 (HalpAllocateCommonBufferEntry.c)
 *     HalpDmaReferenceDomainObject @ 0x1404148C8 (HalpDmaReferenceDomainObject.c)
 *     MmAllocateContiguousMemoryEx @ 0x140414940 (MmAllocateContiguousMemoryEx.c)
 *     MmAllocatePagesForMdlEx @ 0x1404154A0 (MmAllocatePagesForMdlEx.c)
 *     MmAllocateNodePagesForMdlEx @ 0x140415500 (MmAllocateNodePagesForMdlEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpAllocateCommonBufferDmaThin(
        PHYSICAL_ADDRESS *a1,
        PHYSICAL_ADDRESS *a2,
        PHYSICAL_ADDRESS *a3,
        int a4,
        char a5,
        MEMORY_CACHING_TYPE *a6,
        int a7,
        PHYSICAL_ADDRESS *a8,
        _QWORD *a9)
{
  PVOID v9; // r15
  SIZE_T v10; // r12
  struct _MDL *v12; // r14
  int CommonBufferEntry; // esi
  PHYSICAL_ADDRESS v14; // rax
  PHYSICAL_ADDRESS v15; // rdi
  PHYSICAL_ADDRESS v16; // r8
  MEMORY_CACHING_TYPE CacheType; // esi
  __int64 QuadPart; // r9
  PHYSICAL_ADDRESS PhysicalAddress; // rdi
  PVOID v20; // rdi
  unsigned int v22; // ecx
  PHYSICAL_ADDRESS v23; // rdx
  struct _MDL *NodePagesForMdl; // rax
  PHYSICAL_ADDRESS v25; // rcx
  ULONG Flags; // [rsp+50h] [rbp-39h]
  PVOID BaseAddress; // [rsp+60h] [rbp-29h] BYREF
  int v28[2]; // [rsp+68h] [rbp-21h] BYREF
  __int128 v29; // [rsp+70h] [rbp-19h]
  int v30; // [rsp+80h] [rbp-9h]
  char v33; // [rsp+E8h] [rbp+5Fh]

  Flags = 5;
  v30 = 0;
  v9 = 0LL;
  v33 = 0;
  v29 = 0LL;
  BaseAddress = 0LL;
  v10 = (a4 + 4095) & 0xFFFFF000;
  v12 = 0LL;
  CommonBufferEntry = HalpDmaReferenceDomainObject(a1);
  if ( CommonBufferEntry >= 0 )
  {
    v14 = a1[7];
    if ( v14.QuadPart )
      *(_BYTE *)(v14.QuadPart + 524) = 1;
    v15.QuadPart = 0LL;
    if ( a2 && a2->QuadPart )
      v15 = *a2;
    v16 = a1[2];
    if ( a3 && v16.QuadPart > (unsigned __int64)a3->QuadPart )
      v16 = *a3;
    if ( v15.QuadPart > (unsigned __int64)v16.QuadPart
      || (CacheType = MmCached, a6) && (CacheType = *a6, *a6 > (unsigned int)MmCached) )
    {
      CommonBufferEntry = -1073741811;
    }
    else
    {
      QuadPart = a1[3].QuadPart;
      if ( (a5 & 1) != 0 )
      {
        v22 = 1;
        v10 = ((_DWORD)v10 + 0x1FFFFF) & 0xFFE00000;
        do
        {
          if ( 1LL << v22 >= (unsigned __int64)(unsigned int)v10 )
            break;
          ++v22;
        }
        while ( v22 < 0x3F );
        Flags = 101;
        QuadPart = 1LL << v22;
      }
      *(_QWORD *)v28 = v10;
      if ( (int)MmAllocateContiguousMemoryEx(
                  (int)v28,
                  v15.LowPart,
                  v16.LowPart,
                  QuadPart,
                  a7,
                  CacheType != MmNonCached ? 4 : 516,
                  0LL,
                  1147953480,
                  a1[6].LowPart == 2,
                  (__int64)&BaseAddress) >= 0 )
      {
        if ( *(_QWORD *)v28 == v10 )
          v9 = BaseAddress;
        else
          MmFreeContiguousMemory(BaseAddress);
        if ( v9 )
          goto LABEL_18;
      }
      if ( a1[6].LowPart == 2
        && ((v23 = a1[2], a7 != 0x80000000)
          ? (NodePagesForMdl = (struct _MDL *)MmAllocateNodePagesForMdlEx(
                                                v15.LowPart,
                                                v23.LowPart,
                                                0,
                                                v10,
                                                CacheType,
                                                a7,
                                                Flags))
          : (NodePagesForMdl = MmAllocatePagesForMdlEx(v15, v23, 0LL, v10, CacheType, Flags)),
            (v12 = NodePagesForMdl) != 0LL
         && (v9 = MmMapLockedPagesSpecifyCache(NodePagesForMdl, 0, CacheType, 0LL, 0, 0x40000010u)) != 0LL) )
      {
LABEL_18:
        PhysicalAddress = MmGetPhysicalAddress(v9);
        if ( !v12 )
        {
LABEL_19:
          CommonBufferEntry = HalpAllocateCommonBufferEntry((_DWORD)v12, (_DWORD)v9, 0, (_DWORD)a1, 1, 0LL);
          *a8 = PhysicalAddress;
          v20 = a9;
          *a9 = v9;
          if ( CommonBufferEntry >= 0 )
            return (unsigned int)CommonBufferEntry;
          if ( v33 )
            ((void (__fastcall *)(_QWORD, _QWORD))guard_dispatch_icall_no_overrides)(
              (PHYSICAL_ADDRESS)a1[5].QuadPart,
              0LL);
LABEL_31:
          HalpDmaDereferenceDomainObject((__int64 *)a1);
          if ( v9 )
          {
            if ( !v12 )
            {
              MmFreeContiguousMemory(v20);
              return (unsigned int)CommonBufferEntry;
            }
            MmUnmapLockedPages(v9, v12);
          }
          else if ( !v12 )
          {
            return (unsigned int)CommonBufferEntry;
          }
          MiFreePagesFromMdl((ULONG_PTR)v12, 0, 0, 0);
          ExFreePoolWithTag(v12, 0);
          return (unsigned int)CommonBufferEntry;
        }
        LODWORD(v29) = 0;
        v25 = a1[5];
        *((_QWORD *)&v29 + 1) = v12;
        CommonBufferEntry = ((__int64 (__fastcall *)(_QWORD, _QWORD))guard_dispatch_icall_no_overrides)(
                              (PHYSICAL_ADDRESS)v25.QuadPart,
                              3LL);
        if ( CommonBufferEntry >= 0 )
        {
          PhysicalAddress.QuadPart = 0LL;
          v33 = 1;
          goto LABEL_19;
        }
      }
      else
      {
        CommonBufferEntry = -1073741670;
      }
    }
    v20 = a9;
    goto LABEL_31;
  }
  return (unsigned int)CommonBufferEntry;
}
