/*
 * XREFs of RtlComputeImportTableHash @ 0x180136750
 * Callers:
 *     <none>
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180014820 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x1800206B0 (RtlAddressInSectionTable.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFlushSecureMemoryCache @ 0x1800E15A0 (RtlFlushSecureMemoryCache.c)
 *     _stricmp @ 0x180124090 (_stricmp.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1801363F0 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_S.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1801364B4 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0-IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPO.c)
 *     ImportTablepFreeModuleSorted @ 0x180136578 (ImportTablepFreeModuleSorted.c)
 *     ImportTablepHashCanonicalLists @ 0x1801365FC (ImportTablepHashCanonicalLists.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180163B60 (NtCreateSection.c)
 */

__int64 __fastcall RtlComputeImportTableHash(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  unsigned int *v10; // rdi
  __int64 v11; // rsi
  unsigned int v12; // r8d
  const char *v13; // rsi
  _QWORD *Heap; // rax
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 *v17; // r15
  int inserted; // eax
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h] BYREF
  __int64 v22; // [rsp+60h] [rbp-10h] BYREF
  __int64 v23; // [rsp+68h] [rbp-8h] BYREF
  int v24; // [rsp+B0h] [rbp+40h] BYREF
  unsigned __int64 v25; // [rsp+B8h] [rbp+48h] BYREF

  Handle = (HANDLE)-1LL;
  v4 = 0LL;
  v25 = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  if ( (_DWORD)a3 == 1 )
  {
    v7 = NtCreateSection(&Handle, 983045LL, 0LL);
    if ( Handle == (HANDLE)-1LL || v7 < 0 )
    {
      v6 = -1073741816;
      goto LABEL_38;
    }
    v8 = ZwMapViewOfSection(Handle, -1LL, &v25, 0LL, 0LL, &v23, &v22, 1, 0, 2);
    NtClose(Handle);
    if ( !v25 || v8 < 0 )
    {
      v6 = -1073741799;
      goto LABEL_38;
    }
    v9 = RtlpImageDirectoryEntryToDataEx(v25, 0, 1u, &v24, (__int64)&v21);
    if ( v9 >= 0 )
    {
      v10 = (unsigned int *)v21;
    }
    else
    {
      if ( v9 != -1073741822 )
      {
        v6 = -1073741687;
        goto LABEL_38;
      }
      v10 = 0LL;
    }
    v21 = 0LL;
    RtlImageNtHeaderEx(1, v25, 0LL, &v21);
    v11 = v21;
    while ( v10 )
    {
      v12 = v10[3];
      if ( !v12 || !v10[4] )
        break;
      v13 = (const char *)RtlAddressInSectionTable(v11, v25, v12);
      if ( !v13 )
      {
        v6 = -1073741685;
        goto LABEL_38;
      }
      Heap = (_QWORD *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
      v15 = (__int64)Heap;
      if ( !Heap )
      {
        v6 = -1073741801;
        goto LABEL_38;
      }
      Heap[2] = 0LL;
      *Heap = 0LL;
      Heap[1] = v13;
      if ( v4 && stricmp(*(const char **)(v4 + 8), v13) <= 0 )
      {
        v16 = *(_QWORD *)v4;
        v17 = (__int64 *)v4;
        while ( v16 )
        {
          if ( stricmp(*(const char **)(v16 + 8), *(const char **)(v15 + 8)) >= 0 )
          {
            *(_QWORD *)v15 = v16;
            goto LABEL_25;
          }
          v17 = (__int64 *)v16;
          v16 = *(_QWORD *)v16;
        }
        *(_QWORD *)v15 = 0LL;
LABEL_25:
        *v17 = v15;
      }
      else
      {
        *(_QWORD *)v15 = v4;
        v4 = v15;
      }
      v11 = v21;
      if ( *(_WORD *)(v21 + 24) == 267 )
        inserted = InsertModuleFunctions<_IMAGE_THUNK_DATA32,unsigned long,2147483648>(v15, v25, v21, v10);
      else
        inserted = InsertModuleFunctions<_IMAGE_THUNK_DATA64,unsigned __int64,-9223372036854775808>(v15, v25, v21, v10);
      v6 = inserted;
      if ( inserted < 0 )
        goto LABEL_38;
      v10 += 5;
    }
    v6 = ImportTablepHashCanonicalLists((_QWORD *)v4, a2);
  }
  else
  {
    v6 = -1073741736;
  }
LABEL_38:
  ImportTablepFreeModuleSorted((_QWORD **)v4, a2, a3, a4);
  if ( v25 && (unsigned int)NtUnmapViewOfSection(-1LL) == -1073741755 && RtlFlushSecureMemoryCache(v25, 0LL) )
    NtUnmapViewOfSection(-1LL);
  return v6;
}
