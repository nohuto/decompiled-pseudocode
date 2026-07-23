/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x18006E7C0
 * Callers:
 *     RtlComputeImportTableHash @ 0x1801330D0 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x18007A5A0 (RtlAddressInSectionTable.c)
 */

NTSTATUS __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 BaseOfImage,
        char a2,
        unsigned __int16 a3,
        unsigned int *a4,
        PIMAGE_NT_HEADERS OutHeaders)
{
  PIMAGE_NT_HEADERS v5; // r14
  int v6; // edi
  char v7; // si
  __int64 v9; // rbp
  char *v10; // rbx
  NTSTATUS result; // eax
  PIMAGE_NT_HEADERS v12; // rcx
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rdx
  __int64 v15; // r10
  unsigned int v16; // r8d
  unsigned int *i; // rdx
  __int64 v18; // r9
  char *v19; // rax
  PVOID v20; // rax
  int v21; // ecx

  v5 = OutHeaders;
  v6 = 0;
  v7 = a2;
  v9 = a3;
  v10 = (char *)BaseOfImage;
  OutHeaders = 0LL;
  *(_QWORD *)&v5->Signature = 0LL;
  if ( (BaseOfImage & 3) != 0 )
  {
    v10 = (char *)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
    v7 = 0;
    if ( (BaseOfImage & 1) == 0 )
      v7 = a2;
  }
  result = RtlImageNtHeaderEx(1u, v10, 0LL, &OutHeaders);
  v12 = OutHeaders;
  if ( OutHeaders )
  {
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      if ( (unsigned int)v9 < HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) )
      {
        v15 = *((unsigned int *)&OutHeaders->OptionalHeader.SizeOfHeapCommit + 2 * v9);
        if ( !(_DWORD)v15 )
          return -1073741822;
        *a4 = *((_DWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit + 2 * v9 + 1);
        if ( v7 || (unsigned int)v15 < v12->OptionalHeader.SizeOfHeaders )
        {
          *(_QWORD *)&v5->Signature = &v10[v15];
          return v6;
        }
        v16 = 0;
        for ( i = (unsigned int *)((char *)&OutHeaders->OptionalHeader.Magic + v12->FileHeader.SizeOfOptionalHeader);
              ;
              i += 10 )
        {
          if ( v16 >= OutHeaders->FileHeader.NumberOfSections )
          {
            *(_QWORD *)&v5->Signature = 0LL;
            return -1073741811;
          }
          v18 = i[3];
          if ( (unsigned int)v15 >= (unsigned int)v18 && (unsigned int)v15 < (unsigned int)v18 + i[4] )
            break;
          ++v16;
        }
        v19 = &v10[i[5] - v18];
        *(_QWORD *)&v5->Signature = &v19[v15];
        if ( &v19[v15] )
          return v6;
      }
    }
    else if ( Magic == 523 && (unsigned int)v9 < OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
    {
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[v9].VirtualAddress;
      if ( (_DWORD)VirtualAddress )
      {
        *a4 = OutHeaders->OptionalHeader.DataDirectory[v9].Size;
        if ( v7 || (unsigned int)VirtualAddress < v12->OptionalHeader.SizeOfHeaders )
        {
          *(_QWORD *)&v5->Signature = &v10[VirtualAddress];
        }
        else
        {
          v20 = RtlAddressInSectionTable(v12, v10, VirtualAddress);
          v21 = 0;
          *(_QWORD *)&v5->Signature = v20;
          if ( !v20 )
            return -1073741811;
          return v21;
        }
        return v6;
      }
      return -1073741822;
    }
    return -1073741811;
  }
  return result;
}
