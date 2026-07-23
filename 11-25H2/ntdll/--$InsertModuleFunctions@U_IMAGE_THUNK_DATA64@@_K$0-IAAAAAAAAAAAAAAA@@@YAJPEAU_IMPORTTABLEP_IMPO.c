/*
 * XREFs of ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1801364B4
 * Callers:
 *     RtlComputeImportTableHash @ 0x180136750 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x1800206B0 (RtlAddressInSectionTable.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     ImportTablepInsertFunctionSorted @ 0x1801366D0 (ImportTablepInsertFunctionSorted.c)
 */

__int64 __fastcall InsertModuleFunctions<_IMAGE_THUNK_DATA64,unsigned __int64,-9223372036854775808>(
        __int64 a1,
        void *a2,
        _IMAGE_NT_HEADERS64 *a3,
        ULONG *a4)
{
  ULONG *i; // rbx
  char *v8; // rax
  char *v9; // rdi
  _QWORD *Heap; // rax

  for ( i = (ULONG *)RtlAddressInSectionTable(a3, a2, *a4); i && *(_QWORD *)i; i += 2 )
  {
    if ( *(__int64 *)i >= 0 )
    {
      v8 = (char *)RtlAddressInSectionTable(a3, a2, *i);
      if ( !v8 )
        return 3221225611LL;
      v9 = v8 + 2;
      if ( v8 == (char *)-2LL )
        return 3221225611LL;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
      if ( !Heap )
        return 3221225495LL;
      *Heap = 0LL;
      Heap[1] = v9;
      ImportTablepInsertFunctionSorted(Heap, a1 + 16);
    }
  }
  return 0LL;
}
