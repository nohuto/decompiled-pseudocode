/*
 * XREFs of ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x140141658
 * Callers:
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1400C48DC (ndisAllocatePerProcessorPageDescriptor.c)
 * Callees:
 *     ??$?0$00X@?$unique_ptr@VInterfaceProfileKnobCollection@@U?$KFreePool@VInterfaceProfileKnobCollection@@@@@wistd@@QEAA@PEAVInterfaceProfileKnobCollection@@@Z @ 0x14002C200 (--$-0$00X@-$unique_ptr@VInterfaceProfileKnobCollection@@U-$KFreePool@VInterfaceProfileKnobCollec.c)
 *     ??$?0$00X@?$unique_ptr@_WU?$KFreePool@_W@@@wistd@@QEAA@$$T@Z @ 0x140090F64 (--$-0$00X@-$unique_ptr@_WU-$KFreePool@_W@@@wistd@@QEAA@$$T@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ndisFreeMappingAddress@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400C485C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-ndisFreeMappingAddress@@YAX0@ZU-$integra.c)
 *     ?ndisFreeMappingAddress@@YAXPEAX@Z @ 0x1400C4998 (-ndisFreeMappingAddress@@YAXPEAX@Z.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x140136070 (--_V@YAXPEAX@Z.c)
 *     ndisGetNodeIdForProcessor @ 0x140141908 (ndisGetNodeIdForProcessor.c)
 */

__int64 ndisAllocateNumaStripedPages(void)
{
  ULONG v0; // r14d
  SIZE_T v1; // rdi
  char v2; // r13
  __int64 v3; // rsi
  SIZE_T v4; // rax
  _OWORD *Pool2; // rax
  PMDL v6; // rbx
  __int64 v7; // r12
  size_t v8; // r15
  PMDL *v9; // rax
  PMDL *v10; // rdi
  __int64 i; // r15
  int NodeIdForProcessor; // eax
  __int64 NodePagesForMdl; // rax
  PMDL *v14; // r14
  __int64 MappingAddress; // [rsp+80h] [rbp+40h] BYREF
  PMDL MemoryDescriptorList; // [rsp+88h] [rbp+48h] BYREF
  __int64 v18; // [rsp+90h] [rbp+50h]

  v0 = KeQueryMaximumProcessorCountEx(0xFFFFu) + 1;
  v1 = v0 << 12;
  v2 = 0;
  MappingAddress = (__int64)MmAllocateMappingAddress(v1, 0x6C53444Eu);
  v3 = MappingAddress;
  if ( !MappingAddress )
    goto LABEL_26;
  v4 = MmSizeOfMdl(0LL, (unsigned int)v1);
  Pool2 = (_OWORD *)ExAllocatePool2(64LL, v4, 1833780302LL);
  if ( Pool2 )
  {
    *Pool2 = 0LL;
    Pool2[1] = 0LL;
    Pool2[2] = 0LL;
    wistd::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>(
      &MemoryDescriptorList,
      (__int64)Pool2);
  }
  else
  {
    wistd::unique_ptr<wchar_t,KFreePool<wchar_t>>::unique_ptr<wchar_t,KFreePool<wchar_t>>(&MemoryDescriptorList);
  }
  v6 = MemoryDescriptorList;
  if ( !MemoryDescriptorList )
    goto LABEL_26;
  v7 = v0;
  MemoryDescriptorList->Next = 0LL;
  v6->ByteCount = v1;
  v6->MdlFlags = 2;
  v6->ByteOffset = v3 & 0xFFF;
  v6->StartVa = (PVOID)(v3 & 0xFFFFFFFFFFFFF000uLL);
  v6->Size = 8 * (((v1 + (v3 & 0xFFF) + 4095) >> 12) + 6);
  v8 = 8LL * v0;
  if ( !is_mul_ok(v0, 8uLL) )
    v8 = -1LL;
  v9 = (PMDL *)ExAllocatePool2(256LL, v8, 1833780302LL);
  v10 = v9;
  if ( !v9 )
  {
    ExFreePoolWithTag(v6, 0);
LABEL_26:
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void ndisFreeMappingAddress(void *),wistd::integral_constant<unsigned __int64,1>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void ndisFreeMappingAddress(void *),wistd::integral_constant<unsigned __int64,1>,void *,void *,0,std::nullptr_t>>((void **)&MappingAddress);
    return 0LL;
  }
  memset(v9, 0, v8);
  for ( i = 0LL; (unsigned int)i < v0; i = (unsigned int)(i + 1) )
  {
    NodeIdForProcessor = ndisGetNodeIdForProcessor((_DWORD)i != 0 ? i - 1 : 0);
    MemoryDescriptorList = (PMDL)-1LL;
    v18 = 0LL;
    MappingAddress = 4096LL;
    NodePagesForMdl = MmAllocateNodePagesForMdlEx(0LL, -1LL, 4096LL, 4096LL, 1, NodeIdForProcessor, 5);
    v10[i] = (PMDL)NodePagesForMdl;
    if ( !NodePagesForMdl )
      goto LABEL_14;
    *((_QWORD *)&v6[1].Next + i) = *(_QWORD *)(NodePagesForMdl + 48);
  }
  if ( MmMapLockedPagesWithReservedMapping((PVOID)v3, 0x6C53444Eu, v6, MmCached) )
    goto LABEL_15;
LABEL_14:
  v2 = 1;
  ndisFreeMappingAddress((void *)v3);
  v3 = 0LL;
LABEL_15:
  if ( v0 )
  {
    v14 = v10;
    if ( v2 )
    {
      do
      {
        if ( *v14 )
        {
          MmFreePagesFromMdl(*v14);
          ExFreePoolWithTag(*v14, 0);
        }
        ++v14;
        --v7;
      }
      while ( v7 );
    }
    else
    {
      do
      {
        if ( *v14 )
          ExFreePoolWithTag(*v14, 0);
        ++v14;
        --v7;
      }
      while ( v7 );
    }
  }
  MappingAddress = 0LL;
  operator delete[](v10);
  ExFreePoolWithTag(v6, 0);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void ndisFreeMappingAddress(void *),wistd::integral_constant<unsigned __int64,1>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void ndisFreeMappingAddress(void *),wistd::integral_constant<unsigned __int64,1>,void *,void *,0,std::nullptr_t>>((void **)&MappingAddress);
  return v3;
}
