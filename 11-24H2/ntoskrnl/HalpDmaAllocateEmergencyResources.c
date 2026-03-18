/*
 * XREFs of HalpDmaAllocateEmergencyResources @ 0x140C1007C
 * Callers:
 *     HalpDmaInit @ 0x140C10654 (HalpDmaInit.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     MmAllocateMappingAddress @ 0x140A5B600 (MmAllocateMappingAddress.c)
 *     MmFreeMappingAddress @ 0x140A5DAA0 (MmFreeMappingAddress.c)
 */

__int64 __fastcall HalpDmaAllocateEmergencyResources(__int64 a1)
{
  __int64 v1; // rcx
  PMDL v3; // rcx
  PMDL v4; // rdx
  PMDL v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  qword_140E3EB58 = (PMDL)HalpMmAllocCtxAlloc(a1, 56LL);
  if ( !qword_140E3EB58 )
    return 3221225626LL;
  MemoryDescriptorList = (PMDL)HalpMmAllocCtxAlloc(v1, 56LL);
  v3 = MemoryDescriptorList;
  if ( !MemoryDescriptorList )
  {
    v4 = qword_140E3EB58;
LABEL_5:
    HalpMmAllocCtxFree((__int64)v3, (__int64)v4);
    return 3221225626LL;
  }
  v5 = qword_140E3EB58;
  *(_DWORD *)&qword_140E3EB58->Size = 56;
  v5->Next = 0LL;
  v5->StartVa = 0LL;
  *(_QWORD *)&v5->ByteCount = 4096LL;
  *(_DWORD *)&v3->Size = 56;
  v3->Next = 0LL;
  v3->StartVa = 0LL;
  *(_QWORD *)&v3->ByteCount = 4096LL;
  v5->MdlFlags |= 2u;
  v3->MdlFlags |= 2u;
  qword_140E3EB30 = MmAllocateMappingAddress(0x1000uLL, 0x446C6148u);
  if ( !qword_140E3EB30 )
  {
    HalpMmAllocCtxFree(v6, (__int64)qword_140E3EB58);
    v4 = MemoryDescriptorList;
    goto LABEL_5;
  }
  MappingAddress = MmAllocateMappingAddress(0x1000uLL, 0x446C6148u);
  if ( !MappingAddress )
  {
    HalpMmAllocCtxFree(v7, (__int64)qword_140E3EB58);
    HalpMmAllocCtxFree(v8, (__int64)MemoryDescriptorList);
    MmFreeMappingAddress(qword_140E3EB30, 0x446C6148u);
    return 3221225626LL;
  }
  qword_140E3EB80 = 0LL;
  return 0LL;
}
