/*
 * XREFs of HalpDmaAllocateEmergencyResources @ 0x140BFF07C
 * Callers:
 *     HalpDmaInit @ 0x140BFF654 (HalpDmaInit.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x140338EDC (HalpMmAllocCtxAlloc.c)
 *     MmAllocateMappingAddress @ 0x140A58930 (MmAllocateMappingAddress.c)
 *     MmFreeMappingAddress @ 0x140A5BDC0 (MmFreeMappingAddress.c)
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

  MemoryDescriptorList = (PMDL)HalpMmAllocCtxAlloc(a1, 56LL);
  if ( !MemoryDescriptorList )
    return 3221225626LL;
  qword_140E3E8E0 = (PMDL)HalpMmAllocCtxAlloc(v1, 56LL);
  v3 = qword_140E3E8E0;
  if ( !qword_140E3E8E0 )
  {
    v4 = MemoryDescriptorList;
LABEL_5:
    HalpMmAllocCtxFree((__int64)v3, (__int64)v4);
    return 3221225626LL;
  }
  v5 = MemoryDescriptorList;
  *(_DWORD *)&MemoryDescriptorList->Size = 56;
  v5->Next = 0LL;
  v5->StartVa = 0LL;
  *(_QWORD *)&v5->ByteCount = 4096LL;
  *(_DWORD *)&v3->Size = 56;
  v3->Next = 0LL;
  v3->StartVa = 0LL;
  *(_QWORD *)&v3->ByteCount = 4096LL;
  v5->MdlFlags |= 2u;
  v3->MdlFlags |= 2u;
  MappingAddress = MmAllocateMappingAddress(0x1000uLL, 0x446C6148u);
  if ( !MappingAddress )
  {
    HalpMmAllocCtxFree(v6, (__int64)MemoryDescriptorList);
    v4 = qword_140E3E8E0;
    goto LABEL_5;
  }
  qword_140E3E920 = MmAllocateMappingAddress(0x1000uLL, 0x446C6148u);
  if ( !qword_140E3E920 )
  {
    HalpMmAllocCtxFree(v7, (__int64)MemoryDescriptorList);
    HalpMmAllocCtxFree(v8, (__int64)qword_140E3E8E0);
    MmFreeMappingAddress(MappingAddress, 0x446C6148u);
    return 3221225626LL;
  }
  qword_140E3E940 = 0LL;
  return 0LL;
}
