/*
 * XREFs of RtlComputeImportTableHash @ 0x180134EA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180058BE0 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x1800649C0 (RtlAddressInSectionTable.c)
 *     RtlFlushSecureMemoryCache @ 0x1800E44E0 (RtlFlushSecureMemoryCache.c)
 *     _stricmp @ 0x1801225B0 (_stricmp.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x180134B40 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_S.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x180134C04 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0-IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPO.c)
 *     ImportTablepFreeModuleSorted @ 0x180134CC8 (ImportTablepFreeModuleSorted.c)
 *     ImportTablepHashCanonicalLists @ 0x180134D4C (ImportTablepHashCanonicalLists.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180162190 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1801621D0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1801625D0 (NtCreateSection.c)
 */

__int64 __fastcall RtlComputeImportTableHash(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  unsigned int *v9; // rdi
  __int64 v10; // rsi
  unsigned int v11; // r8d
  const char *v12; // rsi
  _QWORD *Heap; // rax
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 *v16; // r15
  int inserted; // eax
  unsigned __int64 v18; // r8
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h] BYREF
  __int64 v22; // [rsp+60h] [rbp-10h] BYREF
  __int64 v23; // [rsp+68h] [rbp-8h] BYREF
  int v24; // [rsp+B0h] [rbp+40h] BYREF
  unsigned __int64 v25; // [rsp+B8h] [rbp+48h] BYREF

  Handle = (HANDLE)-1LL;
  v3 = 0LL;
  v25 = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  if ( a3 == 1 )
  {
    v6 = NtCreateSection(&Handle, 983045LL, 0LL, 0LL);
    if ( Handle == (HANDLE)-1LL || v6 < 0 )
    {
      v5 = -1073741816;
      goto LABEL_38;
    }
    v7 = ZwMapViewOfSection(Handle, -1LL, &v25, 0LL, 0LL, &v23, &v22, 1, 0, 2);
    NtClose(Handle);
    if ( !v25 || v7 < 0 )
    {
      v5 = -1073741799;
      goto LABEL_38;
    }
    v8 = RtlpImageDirectoryEntryToDataEx(v25, 0, 1u, &v24, (__int64)&v21);
    if ( v8 >= 0 )
    {
      v9 = (unsigned int *)v21;
    }
    else
    {
      if ( v8 != -1073741822 )
      {
        v5 = -1073741687;
        goto LABEL_38;
      }
      v9 = 0LL;
    }
    v21 = 0LL;
    RtlImageNtHeaderEx(1, v25, 0LL, &v21);
    v10 = v21;
    while ( v9 )
    {
      v11 = v9[3];
      if ( !v11 || !v9[4] )
        break;
      v12 = (const char *)RtlAddressInSectionTable(v10, v25, v11);
      if ( !v12 )
      {
        v5 = -1073741685;
        goto LABEL_38;
      }
      Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
      v14 = (__int64)Heap;
      if ( !Heap )
      {
        v5 = -1073741801;
        goto LABEL_38;
      }
      Heap[2] = 0LL;
      *Heap = 0LL;
      Heap[1] = v12;
      if ( v3 && stricmp(*(const char **)(v3 + 8), v12) <= 0 )
      {
        v15 = *(_QWORD *)v3;
        v16 = (__int64 *)v3;
        while ( v15 )
        {
          if ( stricmp(*(const char **)(v15 + 8), *(const char **)(v14 + 8)) >= 0 )
          {
            *(_QWORD *)v14 = v15;
            goto LABEL_25;
          }
          v16 = (__int64 *)v15;
          v15 = *(_QWORD *)v15;
        }
        *(_QWORD *)v14 = 0LL;
LABEL_25:
        *v16 = v14;
      }
      else
      {
        *(_QWORD *)v14 = v3;
        v3 = v14;
      }
      v10 = v21;
      if ( *(_WORD *)(v21 + 24) == 267 )
        inserted = InsertModuleFunctions<_IMAGE_THUNK_DATA32,unsigned long,2147483648>(v14, v25, v21, v9);
      else
        inserted = InsertModuleFunctions<_IMAGE_THUNK_DATA64,unsigned __int64,-9223372036854775808>(v14, v25, v21, v9);
      v5 = inserted;
      if ( inserted < 0 )
        goto LABEL_38;
      v9 += 5;
    }
    v5 = ImportTablepHashCanonicalLists((_QWORD *)v3, a2);
  }
  else
  {
    v5 = -1073741736;
  }
LABEL_38:
  ImportTablepFreeModuleSorted((_QWORD **)v3);
  if ( v25 && (unsigned int)NtUnmapViewOfSection(-1LL) == -1073741755 && RtlFlushSecureMemoryCache(v25, 0LL, v18) )
    NtUnmapViewOfSection(-1LL);
  return v5;
}
