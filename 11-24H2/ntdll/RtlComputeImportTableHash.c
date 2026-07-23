/*
 * XREFs of RtlComputeImportTableHash @ 0x1801330D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18006E7C0 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x18007A5A0 (RtlAddressInSectionTable.c)
 *     RtlFlushSecureMemoryCache @ 0x18010B300 (RtlFlushSecureMemoryCache.c)
 *     _stricmp @ 0x1801207E0 (_stricmp.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x180132D70 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_S.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x180132E34 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0-IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPO.c)
 *     ImportTablepFreeModuleSorted @ 0x180132EF8 (ImportTablepFreeModuleSorted.c)
 *     ImportTablepHashCanonicalLists @ 0x180132F7C (ImportTablepHashCanonicalLists.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180160550 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180160590 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180160990 (NtCreateSection.c)
 */

NTSTATUS __cdecl RtlComputeImportTableHash(HANDLE FileHandle, PCHAR Hash, ULONG ImportTableHashRevision)
{
  __int64 v3; // r14
  NTSTATUS v5; // ebx
  NTSTATUS v6; // eax
  NTSTATUS v7; // ebx
  NTSTATUS v8; // eax
  PIMAGE_NT_HEADERS v9; // rdi
  _IMAGE_NT_HEADERS64 *v10; // rsi
  ULONG PointerToSymbolTable; // r8d
  const char *v12; // rsi
  _QWORD *Heap; // rax
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 *v16; // r15
  int inserted; // eax
  HANDLE SectionHandle; // [rsp+50h] [rbp-20h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+58h] [rbp-18h] BYREF
  ULONG_PTR ViewSize; // [rsp+60h] [rbp-10h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+68h] [rbp-8h] BYREF
  unsigned int v23; // [rsp+B0h] [rbp+40h] BYREF
  PVOID BaseAddress; // [rsp+B8h] [rbp+48h] BYREF

  SectionHandle = (HANDLE)-1LL;
  v3 = 0LL;
  BaseAddress = 0LL;
  OutHeaders = 0LL;
  SectionOffset.QuadPart = 0LL;
  ViewSize = 0LL;
  if ( ImportTableHashRevision == 1 )
  {
    v6 = NtCreateSection(&SectionHandle, 0xF0005u, 0LL, 0LL, 2u, 0x8000000u, FileHandle);
    if ( SectionHandle == (HANDLE)-1LL || v6 < 0 )
    {
      v5 = -1073741816;
      goto LABEL_38;
    }
    v7 = ZwMapViewOfSection(
           SectionHandle,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &BaseAddress,
           0LL,
           0LL,
           &SectionOffset,
           &ViewSize,
           ViewShare,
           0,
           2u);
    NtClose(SectionHandle);
    if ( !BaseAddress || v7 < 0 )
    {
      v5 = -1073741799;
      goto LABEL_38;
    }
    v8 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseAddress, 0, 1u, &v23, (PIMAGE_NT_HEADERS)&OutHeaders);
    if ( v8 >= 0 )
    {
      v9 = OutHeaders;
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
    OutHeaders = 0LL;
    RtlImageNtHeaderEx(1u, BaseAddress, 0LL, &OutHeaders);
    v10 = OutHeaders;
    while ( v9 )
    {
      PointerToSymbolTable = v9->FileHeader.PointerToSymbolTable;
      if ( !PointerToSymbolTable || !v9->FileHeader.NumberOfSymbols )
        break;
      v12 = (const char *)RtlAddressInSectionTable(v10, BaseAddress, PointerToSymbolTable);
      if ( !v12 )
      {
        v5 = -1073741685;
        goto LABEL_38;
      }
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
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
      v10 = OutHeaders;
      if ( OutHeaders->OptionalHeader.Magic == 267 )
        inserted = InsertModuleFunctions<_IMAGE_THUNK_DATA32,unsigned long,2147483648>(
                     v14,
                     BaseAddress,
                     OutHeaders,
                     &v9->Signature);
      else
        inserted = InsertModuleFunctions<_IMAGE_THUNK_DATA64,unsigned __int64,-9223372036854775808>(
                     v14,
                     BaseAddress,
                     OutHeaders,
                     &v9->Signature);
      v5 = inserted;
      if ( inserted < 0 )
        goto LABEL_38;
      v9 = (PIMAGE_NT_HEADERS)((char *)v9 + 20);
    }
    v5 = ImportTablepHashCanonicalLists((_QWORD *)v3, (__int64)Hash);
  }
  else
  {
    v5 = -1073741736;
  }
LABEL_38:
  ImportTablepFreeModuleSorted((_QWORD **)v3);
  if ( BaseAddress
    && NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress) == -1073741755
    && RtlFlushSecureMemoryCache(BaseAddress, 0LL) )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  }
  return v5;
}
