/*
 * XREFs of HalpDmaAllocateMappingResources @ 0x140BFF19C
 * Callers:
 *     HalpDmaInit @ 0x140BFF654 (HalpDmaInit.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402BD630 (KeQueryMaximumProcessorCountEx.c)
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x140338EDC (HalpMmAllocCtxAlloc.c)
 *     MmFreeMappingAddress @ 0x140A5BDC0 (MmFreeMappingAddress.c)
 *     HalpDmaAllocateReservedMapping @ 0x140BFF338 (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140BFF394 (HalpDmaAllocateReservedMappingArray.c)
 */

__int64 HalpDmaAllocateMappingResources()
{
  __int64 MaximumProcessorCount; // rdi
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // rsi
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 i; // rbx
  __int64 ReservedMapping; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rbp
  __int64 v18; // r14
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int ReservedMappingArray; // ebx
  __int64 v23; // rcx

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v1 = MaximumProcessorCount;
  qword_140E3E928 = HalpMmAllocCtxAlloc(v2, 8 * MaximumProcessorCount);
  if ( !qword_140E3E928 )
    return 3221225626LL;
  v5 = HalpMmAllocCtxAlloc(v3, 4144 * MaximumProcessorCount);
  v8 = v5;
  if ( !v5 )
  {
    v9 = qword_140E3E928;
LABEL_5:
    HalpMmAllocCtxFree(v6, v9);
    return 3221225626LL;
  }
  if ( (_DWORD)MaximumProcessorCount )
  {
    v7 = (_QWORD *)qword_140E3E928;
    v6 = v5 + 32;
    do
    {
      *(_QWORD *)v6 = 0LL;
      v10 = (_QWORD *)(v6 - 32);
      *(_DWORD *)(v6 + 12) = 0;
      *v10 = 0LL;
      *(_DWORD *)(v6 - 24) = 131128;
      *(_DWORD *)(v6 + 8) = 4096;
      v6 += 4144LL;
      *v7++ = v10;
      --v1;
    }
    while ( v1 );
  }
  qword_140E3E8E8 = 0LL;
  v11 = 4LL;
  if ( (unsigned int)MaximumProcessorCount <= 4 )
  {
    qword_140E3E930 = HalpMmAllocCtxAlloc(v6, 8 * MaximumProcessorCount);
    if ( !qword_140E3E930 )
    {
      HalpMmAllocCtxFree(v12, qword_140E3E928);
      v9 = v8;
      goto LABEL_5;
    }
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= (unsigned int)MaximumProcessorCount )
      {
        byte_140E3E8F8 = 1;
        return 0LL;
      }
      ReservedMapping = HalpDmaAllocateReservedMapping();
      v16 = qword_140E3E930;
      v17 = (unsigned int)i;
      *(_QWORD *)(qword_140E3E930 + 8 * i) = ReservedMapping;
      if ( !ReservedMapping )
        break;
    }
    if ( (_DWORD)i )
    {
      v18 = 0LL;
      do
      {
        v19 = *(_QWORD *)(v18 + v16);
        MmFreeMappingAddress(*(PVOID *)(v19 + 16), 0x446C6148u);
        HalpMmAllocCtxFree(v20, v19);
        v16 = qword_140E3E930;
        v18 += 8LL;
        --v17;
      }
      while ( v17 );
    }
    HalpMmAllocCtxFree(v15, v16);
    v11 = (unsigned int)MaximumProcessorCount;
  }
  ReservedMappingArray = HalpDmaAllocateReservedMappingArray((unsigned int)MaximumProcessorCount, v11, v7);
  if ( ReservedMappingArray < 0 )
  {
    HalpMmAllocCtxFree(v21, qword_140E3E928);
    HalpMmAllocCtxFree(v23, v8);
  }
  return (unsigned int)ReservedMappingArray;
}
