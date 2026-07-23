/*
 * XREFs of HalpDmaAllocateEmergencyResources @ 0x140C1207C
 * Callers:
 *     HalpDmaInit @ 0x140C12654 (HalpDmaInit.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     MmAllocateMappingAddress @ 0x140A531D0 (MmAllocateMappingAddress.c)
 *     MmFreeMappingAddress @ 0x140A55EC0 (MmFreeMappingAddress.c)
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

  qword_140E3EC98 = (PMDL)HalpMmAllocCtxAlloc(a1, 56LL);
  if ( !qword_140E3EC98 )
    return 3221225626LL;
  MemoryDescriptorList = (PMDL)HalpMmAllocCtxAlloc(v1, 56LL);
  v3 = MemoryDescriptorList;
  if ( !MemoryDescriptorList )
  {
    v4 = qword_140E3EC98;
LABEL_5:
    HalpMmAllocCtxFree((__int64)v3, (__int64)v4);
    return 3221225626LL;
  }
  v5 = qword_140E3EC98;
  *(_DWORD *)&qword_140E3EC98->Size = 56;
  v5->Next = 0LL;
  v5->StartVa = 0LL;
  *(_QWORD *)&v5->ByteCount = 4096LL;
  *(_DWORD *)&v3->Size = 56;
  v3->Next = 0LL;
  v3->StartVa = 0LL;
  *(_QWORD *)&v3->ByteCount = 4096LL;
  v5->MdlFlags |= 2u;
  v3->MdlFlags |= 2u;
  qword_140E3EC70 = MmAllocateMappingAddress(0x1000uLL, 0x446C6148u);
  if ( !qword_140E3EC70 )
  {
    HalpMmAllocCtxFree(v6, (__int64)qword_140E3EC98);
    v4 = MemoryDescriptorList;
    goto LABEL_5;
  }
  MappingAddress = MmAllocateMappingAddress(0x1000uLL, 0x446C6148u);
  if ( !MappingAddress )
  {
    HalpMmAllocCtxFree(v7, (__int64)qword_140E3EC98);
    HalpMmAllocCtxFree(v8, (__int64)MemoryDescriptorList);
    MmFreeMappingAddress(qword_140E3EC70, 0x446C6148u);
    return 3221225626LL;
  }
  qword_140E3ECC0 = 0LL;
  return 0LL;
}
