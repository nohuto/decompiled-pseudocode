/*
 * XREFs of HalpAllocateDomainCommonBufferInternal @ 0x14054D9E0
 * Callers:
 *     HalAllocateCommonBufferExV3 @ 0x14054BEC0 (HalAllocateCommonBufferExV3.c)
 *     HalAllocateCommonBufferWithBounds @ 0x14054C060 (HalAllocateCommonBufferWithBounds.c)
 *     HalAllocateDomainCommonBuffer @ 0x14054D3F0 (HalAllocateDomainCommonBuffer.c)
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
 *     CvmDebugLog @ 0x1404F8EE8 (CvmDebugLog.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferShared @ 0x1406F3F14 (HalpDmaCvmMakeContiguousVirtualBufferShared.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpAllocateDomainCommonBufferInternal(
        __int64 a1,
        PHYSICAL_ADDRESS *a2,
        unsigned __int64 *a3,
        int a4,
        char a5,
        MEMORY_CACHING_TYPE *a6,
        int a7,
        _QWORD *a8,
        _RTL_BALANCED_NODE **a9)
{
  _RTL_BALANCED_NODE *v9; // r12
  struct _MDL *v12; // r15
  int CommonBufferEntry; // r14d
  __int64 v14; // rax
  PHYSICAL_ADDRESS v15; // rsi
  unsigned __int64 v16; // rdi
  MEMORY_CACHING_TYPE CacheType; // edx
  __int64 v18; // r9
  unsigned int v19; // r8d
  unsigned int v20; // ecx
  int v21; // ecx
  int v22; // r11d
  int v23; // ecx
  unsigned int Flags; // eax
  __int64 v25; // r14
  int ContiguousVirtualBufferShared; // eax
  void *v27; // rax
  struct _MDL *PagesForMdl; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  char v31; // [rsp+58h] [rbp-61h]
  char v32; // [rsp+59h] [rbp-60h]
  char v33; // [rsp+5Ah] [rbp-5Fh]
  unsigned int TotalBytes; // [rsp+5Ch] [rbp-5Dh]
  int TotalBytes_4; // [rsp+60h] [rbp-59h]
  MEMORY_CACHING_TYPE v36; // [rsp+64h] [rbp-55h]
  int v37[2]; // [rsp+68h] [rbp-51h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-49h] BYREF
  __int64 QuadPart; // [rsp+78h] [rbp-41h]
  __int64 v40; // [rsp+80h] [rbp-39h] BYREF
  PVOID v41; // [rsp+88h] [rbp-31h]
  __int64 v42; // [rsp+90h] [rbp-29h]
  __int128 v43; // [rsp+98h] [rbp-21h]
  __int64 v44; // [rsp+A8h] [rbp-11h]
  unsigned __int64 v45; // [rsp+B0h] [rbp-9h]
  PHYSICAL_ADDRESS v46; // [rsp+B8h] [rbp-1h]
  char v48; // [rsp+110h] [rbp+57h]

  v45 = 0LL;
  v46.QuadPart = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  QuadPart = 0LL;
  v9 = 0LL;
  TotalBytes = (a4 + 4095) & 0xFFFFF000;
  LODWORD(v44) = 0;
  v43 = 0LL;
  BaseAddress = 0LL;
  v12 = 0LL;
  v33 = 0;
  v32 = 0;
  v48 = 0;
  v31 = 0;
  TotalBytes_4 = 21;
  CommonBufferEntry = HalpDmaReferenceDomainObject(a1);
  if ( CommonBufferEntry < 0 )
    return (unsigned int)CommonBufferEntry;
  v14 = *(_QWORD *)(a1 + 56);
  if ( v14 )
    *(_BYTE *)(v14 + 524) = 1;
  v15.QuadPart = 0LL;
  if ( a2 )
    v15 = *a2;
  v16 = *(_QWORD *)(a1 + 16);
  if ( a3 && v16 > *a3 )
    v16 = *a3;
  CacheType = *(_BYTE *)(a1 + 32) != 0;
  v36 = CacheType;
  if ( a6 )
  {
    CacheType = *a6;
    v36 = *a6;
    if ( *a6 )
    {
      if ( CacheType != MmCached )
      {
        CommonBufferEntry = -1073741811;
        goto LABEL_58;
      }
    }
  }
  v18 = *(_QWORD *)(a1 + 24);
  v19 = TotalBytes;
  if ( (a5 & 1) != 0 )
  {
    v20 = 1;
    v19 = (TotalBytes + 0x1FFFFF) & 0xFFE00000;
    TotalBytes = v19;
    do
    {
      if ( 1LL << v20 >= (unsigned __int64)v19 )
        break;
      ++v20;
    }
    while ( v20 < 0x3F );
    TotalBytes_4 = 101;
    v18 = 1LL << v20;
  }
  v21 = *(_DWORD *)(a1 + 48);
  if ( v21 == 2 )
  {
    v22 = 1;
  }
  else
  {
    v22 = 0;
    if ( v21 )
    {
      v23 = v21 - 1;
      if ( v23 )
      {
        if ( v23 != 1 )
        {
          Flags = TotalBytes_4;
          goto LABEL_36;
        }
      }
      else
      {
        v31 = 1;
      }
    }
  }
  v25 = v19;
  v42 = v19;
  *(_QWORD *)v37 = v19;
  if ( (int)MmAllocateContiguousMemoryEx(
              v37,
              v15.LowPart,
              v16,
              v18,
              a7,
              CacheType != MmNonCached ? 4 : 516,
              0LL,
              1147953480,
              v22,
              (__int64 *)&BaseAddress) >= 0 )
  {
    if ( HalpDmaCvmConfiguration && *(_QWORD *)v37 == v25 )
    {
      v41 = BaseAddress;
      ContiguousVirtualBufferShared = HalpDmaCvmMakeContiguousVirtualBufferShared(
                                        BaseAddress,
                                        (unsigned int)v25,
                                        &BaseAddress,
                                        &v40);
      v9 = (_RTL_BALANCED_NODE *)BaseAddress;
      CommonBufferEntry = ContiguousVirtualBufferShared;
      CvmDebugLog();
      if ( CommonBufferEntry < 0 )
      {
        MmFreeContiguousMemory(v27);
        goto LABEL_58;
      }
      v25 = v42;
    }
    else
    {
      v9 = (_RTL_BALANCED_NODE *)BaseAddress;
    }
    if ( *(_QWORD *)v37 == v25 )
      goto LABEL_41;
    MmFreeContiguousMemory(v9);
  }
  v9 = 0LL;
  if ( *(_DWORD *)(a1 + 48) != 2 )
  {
LABEL_57:
    CommonBufferEntry = -1073741670;
    goto LABEL_58;
  }
  CacheType = v36;
  Flags = TotalBytes_4 & 0xFFFFFFEF;
LABEL_36:
  v48 = 1;
  v25 = TotalBytes;
  v42 = TotalBytes;
  if ( a7 == 0x80000000 )
    PagesForMdl = MmAllocatePagesForMdlEx(v15, *(PHYSICAL_ADDRESS *)(a1 + 16), 0LL, TotalBytes, CacheType, Flags);
  else
    PagesForMdl = (struct _MDL *)MmAllocateNodePagesForMdlEx(
                                   v15.LowPart,
                                   *(_QWORD *)(a1 + 16),
                                   0,
                                   TotalBytes,
                                   CacheType,
                                   a7,
                                   Flags);
  v12 = PagesForMdl;
  if ( !PagesForMdl )
    goto LABEL_57;
  v9 = (_RTL_BALANCED_NODE *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, v36, 0LL, 0, 0x40000010u);
LABEL_41:
  if ( !v9 )
    goto LABEL_57;
  PhysicalAddress = MmGetPhysicalAddress(v9);
  QuadPart = PhysicalAddress.QuadPart;
  if ( v12 )
  {
    *((_QWORD *)&v43 + 1) = v12;
  }
  else
  {
    LODWORD(v43) = 1;
    *((PHYSICAL_ADDRESS *)&v43 + 1) = PhysicalAddress;
    v44 = v25;
  }
  if ( v48 )
  {
    v46 = v15;
    v45 = v16;
    CommonBufferEntry = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 40));
    if ( CommonBufferEntry >= 0 )
    {
      v33 = 1;
LABEL_51:
      CommonBufferEntry = HalpAllocateCommonBufferEntry((__int64)v12, v9, QuadPart, a1, 1, (__int64)v41);
      if ( CommonBufferEntry >= 0 )
      {
        *a8 = QuadPart;
        *a9 = v9;
        return (unsigned int)CommonBufferEntry;
      }
      if ( v32 || v33 )
        guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 40));
    }
  }
  else
  {
    if ( !v31 )
      goto LABEL_51;
    CommonBufferEntry = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 40));
    if ( CommonBufferEntry >= 0 )
    {
      v32 = 1;
      goto LABEL_51;
    }
  }
LABEL_58:
  HalpDmaDereferenceDomainObject((__int64 *)a1);
  if ( v9 )
  {
    if ( v12 )
    {
      MmUnmapLockedPages(v9, v12);
LABEL_63:
      MiFreePagesFromMdl((ULONG_PTR)v12, 0, 0, 0);
      ExFreePoolWithTag(v12, 0);
      return (unsigned int)CommonBufferEntry;
    }
    MmFreeContiguousMemory(v9);
  }
  else if ( v12 )
  {
    goto LABEL_63;
  }
  return (unsigned int)CommonBufferEntry;
}
