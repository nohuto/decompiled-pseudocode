/*
 * XREFs of HalpDmaAllocateLocalContiguousPool @ 0x1406F3974
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x1406F0ED0 (HalpDmaAllocateChildAdapterV3.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x1406F4C90 (HalpDmaAllocateChildAdapterV2.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x14033784C (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     RtlClearBits @ 0x140337F60 (RtlClearBits.c)
 *     HalpMmAllocCtxAlloc @ 0x140338EDC (HalpMmAllocCtxAlloc.c)
 *     RtlSetAllBits @ 0x1403397C0 (RtlSetAllBits.c)
 *     MmFreeContiguousMemory @ 0x14038B3D0 (MmFreeContiguousMemory.c)
 *     MmFreePagesFromMdl @ 0x14038C030 (MmFreePagesFromMdl.c)
 *     HalpDmaAllocateContiguousMemory @ 0x1404D83A0 (HalpDmaAllocateContiguousMemory.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x14054C850 (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaReturnPageToSource @ 0x14054CF6C (HalpDmaReturnPageToSource.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpDmaAllocateLocalContiguousPool(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r14d
  unsigned int v3; // esi
  _RTL_BITMAP *v5; // rax
  _RTL_BITMAP *v6; // rbx
  char v8; // r15
  ULONG v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  bool v12; // zf
  int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rcx
  PVOID v16; // rbx
  __int64 v17; // r13
  __int64 v18; // rcx
  unsigned __int64 QuadPart; // r8
  __int64 v20; // rcx
  struct _MDL *v21; // rsi
  __int64 v22; // rcx
  __int64 ContiguousPagesFromContiguousPool; // rbx
  unsigned int v24; // eax
  __int64 v25; // rdx
  _QWORD *v26; // r12
  unsigned __int64 v27; // r13
  _QWORD *v28; // rax
  _QWORD *v29; // rdx
  _QWORD *v30; // rbx
  unsigned __int64 v31; // rbx
  PVOID BaseAddress; // [rsp+30h] [rbp-18h] BYREF
  PHYSICAL_ADDRESS v33; // [rsp+38h] [rbp-10h]
  void *v34; // [rsp+90h] [rbp+48h]
  unsigned int v35; // [rsp+90h] [rbp+48h]
  ULONG NumberToClear; // [rsp+98h] [rbp+50h] BYREF
  PMDL MemoryDescriptorList; // [rsp+A0h] [rbp+58h] BYREF
  PHYSICAL_ADDRESS v38; // [rsp+A8h] [rbp+60h] BYREF

  BaseAddress = 0LL;
  v38.QuadPart = 0LL;
  v2 = a2;
  MemoryDescriptorList = 0LL;
  v3 = (a2 + 31) & 0xFFFFFFE0;
  v5 = (_RTL_BITMAP *)HalpMmAllocCtxAlloc(a1, ((unsigned __int64)v3 >> 3) + 16);
  v6 = v5;
  if ( !v5 )
    return 3221225626LL;
  v5->SizeOfBitMap = v3;
  v5->Buffer = &v5[1].SizeOfBitMap;
  RtlSetAllBits(v5);
  *(_QWORD *)(a1 + 24) = v6;
  v8 = 1;
LABEL_4:
  v9 = HalpDmaAllocateContiguousMemory(a1, v2, &BaseAddress, &v38, &MemoryDescriptorList);
  v11 = v9;
  NumberToClear = v9;
  if ( !v9 )
    goto LABEL_18;
  v12 = *(_BYTE *)(a1 + 153) == 0;
  v33 = v38;
  if ( v12 )
    v13 = ((v38.QuadPart + ((unsigned __int64)v9 << 12) - 1) >> 16) - ((unsigned __int64)v38.QuadPart >> 16);
  else
    v13 = 0;
  v14 = HalpMmAllocCtxAlloc(v10, 24LL);
  v16 = BaseAddress;
  v17 = v14;
  if ( !v14 )
  {
LABEL_13:
    v21 = MemoryDescriptorList;
    if ( MemoryDescriptorList )
    {
      if ( v16 )
        MmUnmapLockedPages(v16, MemoryDescriptorList);
      MmFreePagesFromMdl(v21);
      ExFreePoolWithTag(v21, 0);
    }
    else
    {
      MmFreeContiguousMemory(v16);
    }
LABEL_18:
    ContiguousPagesFromContiguousPool = HalpDmaAllocateContiguousPagesFromContiguousPool(
                                          a1,
                                          *(_QWORD *)(a1 + 160),
                                          v2,
                                          0LL,
                                          1,
                                          (__int64)&NumberToClear);
    if ( !ContiguousPagesFromContiguousPool )
      goto LABEL_19;
    v11 = NumberToClear;
    v24 = 0;
    v25 = 0LL;
    v26 = 0LL;
    v22 = 0LL;
    v27 = ContiguousPagesFromContiguousPool;
    while ( 1 )
    {
      v35 = v24;
      if ( v24 >= (unsigned int)v11 )
      {
        RtlClearBits(*(PRTL_BITMAP *)(a1 + 24), 0, v11);
        goto LABEL_43;
      }
      if ( ContiguousPagesFromContiguousPool == v27 || v25 != ContiguousPagesFromContiguousPool - 72 )
      {
        v28 = (_QWORD *)HalpMmAllocCtxAlloc(v22, 24LL);
        v22 = (__int64)v28;
        if ( !v28 )
        {
          if ( v26 )
          {
            v29 = *(_QWORD **)(a1 + 48);
            if ( v29 )
            {
              do
              {
                v30 = (_QWORD *)*v29;
                HalpMmAllocCtxFree(v22, (__int64)v29);
                v29 = v30;
              }
              while ( v30 );
            }
          }
          if ( (_DWORD)v11 )
          {
            do
            {
              v31 = *(_QWORD *)(v27 + 8);
              HalpDmaReturnPageToSource(a1, v27);
              v27 = v31;
              --v11;
            }
            while ( v11 );
          }
LABEL_19:
          if ( v2 <= 1 )
          {
            HalpMmAllocCtxFree(v22, *(_QWORD *)(a1 + 24));
            return 3221225626LL;
          }
          v2 >>= 1;
          goto LABEL_4;
        }
        if ( v26 )
          *v26 = v28;
        else
          *(_QWORD *)(a1 + 48) = v28;
        *v28 = 0LL;
        v26 = v28;
        v28[1] = 0LL;
        v28[2] = ContiguousPagesFromContiguousPool;
      }
      ++*(_DWORD *)(v22 + 8);
      v25 = ContiguousPagesFromContiguousPool;
      *(_QWORD *)(ContiguousPagesFromContiguousPool + 48) &= 0xFFFFFFFFFFFFFFF3uLL;
      ContiguousPagesFromContiguousPool = *(_QWORD *)(ContiguousPagesFromContiguousPool + 8);
      v24 = v35 + 1;
    }
  }
  v34 = (void *)HalpMmAllocCtxAlloc(v15, 72LL * (unsigned int)(v11 + v13));
  v18 = (__int64)v34;
  if ( !v34 )
  {
LABEL_12:
    HalpMmAllocCtxFree(v18, v17);
    goto LABEL_13;
  }
  *(_QWORD *)v17 = 0LL;
  *(_DWORD *)(v17 + 12) = 0;
  memset_0(v34, 0, 72 * v11);
  QuadPart = v33.QuadPart;
  *(_DWORD *)(v17 + 8) = v11 + v13;
  *(_QWORD *)(v17 + 16) = v34;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 48) = v17;
  *(_QWORD *)(a1 + 64) = v17;
  if ( !HalpDmaCommitContiguousMapBuffers(a1, (__int64)v16, QuadPart, v11) )
  {
    HalpMmAllocCtxFree(v20, *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL));
    goto LABEL_12;
  }
  if ( MemoryDescriptorList )
  {
    *(_QWORD *)(a1 + 328) = MemoryDescriptorList;
    *(_QWORD *)(a1 + 336) = v16;
  }
  else
  {
    *(_QWORD *)(a1 + 328) = v16;
    v8 = 0;
  }
  *(_BYTE *)(a1 + 344) = v8;
LABEL_43:
  *(_DWORD *)(a1 + 232) = v11;
  return 0LL;
}
