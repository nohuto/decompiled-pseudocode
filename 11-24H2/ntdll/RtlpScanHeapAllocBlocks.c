/*
 * XREFs of RtlpScanHeapAllocBlocks @ 0x180040294
 * Callers:
 *     RtlpScanProcessVirtualMemory @ 0x180040460 (RtlpScanProcessVirtualMemory.c)
 * Callees:
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     RtlpGetHeapBlock @ 0x1800405D0 (RtlpGetHeapBlock.c)
 *     RtlpGetBlockInfo @ 0x180040680 (RtlpGetBlockInfo.c)
 *     RtlSizeHeap @ 0x1800406D0 (RtlSizeHeap.c)
 *     RtlpDumpEntryInfo @ 0x18011E998 (RtlpDumpEntryInfo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char RtlpScanHeapAllocBlocks()
{
  __int64 *v0; // rbx
  __int64 *j; // rbx
  __int64 BlockInfo; // rax
  int v3; // r10d
  __int64 v4; // rdi
  __int64 v5; // rax
  _QWORD *v7; // rdi
  __int64 *v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 i; // rcx
  __int64 HeapBlock; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  __int64 *v14; // rcx

  v0 = (__int64 *)RtlpBusyList;
  while ( v0 != &RtlpBusyList )
  {
    v7 = (_QWORD *)v0[2];
    v8 = v0;
    v9 = v0[3];
    v0 = (__int64 *)*v0;
    for ( i = (unsigned __int64)v7 + v9; (unsigned __int64)(v7 + 1) <= i; i = v8[3] + v8[2] )
    {
      HeapBlock = RtlpGetHeapBlock(*v7);
      if ( HeapBlock )
      {
        if ( !*(_DWORD *)(HeapBlock + 32) )
        {
          v12 = *(_QWORD *)HeapBlock;
          if ( *(_QWORD *)(*(_QWORD *)HeapBlock + 8LL) != HeapBlock
            || (v13 = *(_QWORD **)(HeapBlock + 8), *v13 != HeapBlock)
            || (*v13 = v12,
                *(_QWORD *)(v12 + 8) = v13,
                v14 = (__int64 *)qword_1801D3E98,
                *(__int64 **)qword_1801D3E98 != &RtlpBusyList) )
          {
            __fastfail(3u);
          }
          *(_QWORD *)HeapBlock = &RtlpBusyList;
          *(_QWORD *)(HeapBlock + 8) = v14;
          *v14 = HeapBlock;
          qword_1801D3E98 = HeapBlock;
        }
        ++*(_DWORD *)(HeapBlock + 32);
        if ( !*(_QWORD *)(HeapBlock + 16) )
          __debugbreak();
      }
      ++v7;
    }
  }
  for ( j = (__int64 *)RtlpLeakList; j != &RtlpLeakList; j = (__int64 *)*j )
  {
    BlockInfo = RtlpGetBlockInfo(RtlpProcessMemoryMap, j[2]);
    v4 = BlockInfo;
    if ( BlockInfo )
    {
      if ( *((_QWORD *)&xmmword_1801D4000 + 1) )
      {
        v5 = RtlSizeHeap(*(_QWORD *)(BlockInfo + 8), 0LL);
        (*((void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _DWORD, _QWORD))&xmmword_1801D4000 + 1))(
          0LL,
          *(_QWORD *)(v4 + 8),
          j[2],
          v5,
          0,
          0LL);
      }
      else
      {
        if ( !v3 )
        {
          DbgPrint("Below is a list of potentially leaked heap entries \nuse !heap -i Entry -h Heap for more information\n\n");
          DbgPrint("Entry     Heap              Size       \n");
          DbgPrint("---------------------------------------\n");
        }
        RtlpDumpEntryInfo(*(_QWORD *)(v4 + 8), j[2]);
      }
      ++RtlpLeaksCount;
    }
  }
  if ( *((_QWORD *)&xmmword_1801D4000 + 1) )
    (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))&xmmword_1801D4000 + 1))(
      0LL,
      0LL,
      0LL,
      0LL,
      0,
      0LL);
  return 1;
}
