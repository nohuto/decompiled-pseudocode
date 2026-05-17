/*
 * XREFs of ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x180134C04
 * Callers:
 *     RtlComputeImportTableHash @ 0x180134EA0 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlAddressInSectionTable @ 0x1800649C0 (RtlAddressInSectionTable.c)
 *     ImportTablepInsertFunctionSorted @ 0x180134E20 (ImportTablepInsertFunctionSorted.c)
 */

__int64 __fastcall InsertModuleFunctions<_IMAGE_THUNK_DATA64,unsigned __int64,-9223372036854775808>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4)
{
  unsigned int *i; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD *Heap; // rax

  for ( i = (unsigned int *)RtlAddressInSectionTable(a3, a2, *a4); i && *(_QWORD *)i; i += 2 )
  {
    if ( *(__int64 *)i >= 0 )
    {
      v8 = RtlAddressInSectionTable(a3, a2, *i);
      if ( !v8 )
        return 3221225611LL;
      v9 = v8 + 2;
      if ( v8 == -2 )
        return 3221225611LL;
      Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
      if ( !Heap )
        return 3221225495LL;
      *Heap = 0LL;
      Heap[1] = v9;
      ImportTablepInsertFunctionSorted(Heap, a1 + 16);
    }
  }
  return 0LL;
}
