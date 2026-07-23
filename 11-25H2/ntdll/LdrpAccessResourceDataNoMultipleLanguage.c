/*
 * XREFs of LdrpAccessResourceDataNoMultipleLanguage @ 0x18001F4B0
 * Callers:
 *     LdrIsResItemExist @ 0x18001B220 (LdrIsResItemExist.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001B3A0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpGetRcConfig @ 0x18001D0E0 (LdrpGetRcConfig.c)
 *     LdrpAccessResourceData @ 0x18001D9D0 (LdrpAccessResourceData.c)
 *     LdrpSearchResourceSection_U @ 0x18001DC50 (LdrpSearchResourceSection_U.c)
 *     LdrpFindMessageInAlternateModule @ 0x18001FD40 (LdrpFindMessageInAlternateModule.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x1800AA648 (RtlpFileIsWin32WithRCManifest.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x18001FBF0 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlAddressInSectionTable @ 0x1800206B0 (RtlAddressInSectionTable.c)
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpAccessResourceDataNoMultipleLanguage(
        unsigned __int64 BaseOfImage,
        unsigned int *a2,
        char **a3,
        _DWORD *a4)
{
  char *v5; // rbx
  bool v7; // si
  char *v8; // rdi
  char *v9; // r14
  void *v10; // r12
  NTSTATUS v11; // edx
  unsigned __int16 Magic; // ax
  __int64 v13; // rax
  NTSTATUS v14; // esi
  __int64 FileSizeFromLoadAsDataTable; // rdi
  unsigned __int64 v16; // r15
  unsigned int *v17; // rdx
  unsigned __int64 v18; // rcx
  int v19; // eax
  unsigned __int16 v20; // ax
  unsigned int v21; // r8d
  _DWORD *v22; // rax
  unsigned int v23; // r10d
  unsigned int v24; // r9d
  unsigned int v25; // edx
  unsigned int v26; // edx
  PIMAGE_NT_HEADERS v27; // rax
  char *v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rdi
  _IMAGE_NT_HEADERS64 *v31; // r8
  unsigned int v32; // r11d
  unsigned int v33; // r9d
  unsigned int PointerToSymbolTable; // ecx
  __int64 v35; // r9
  _DWORD *v36; // rdx
  unsigned int v37; // r10d
  unsigned int v38; // r8d
  unsigned int v39; // ecx
  char *v40; // rdx
  __int64 VirtualAddress; // r9
  _DWORD *v42; // rdx
  unsigned int NumberOfSections; // r10d
  unsigned int v44; // r8d
  unsigned int v45; // ecx
  int v46; // eax
  unsigned __int16 v47; // cx
  int v48; // ecx
  PIMAGE_NT_HEADERS v50; // [rsp+40h] [rbp-E8h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+48h] [rbp-E0h] BYREF
  char *v52; // [rsp+50h] [rbp-D8h]
  __int64 v53; // [rsp+58h] [rbp-D0h]
  int v54; // [rsp+60h] [rbp-C8h]
  int v55; // [rsp+64h] [rbp-C4h]
  unsigned int j; // [rsp+68h] [rbp-C0h]
  unsigned int i; // [rsp+6Ch] [rbp-BCh]
  PIMAGE_NT_HEADERS v58; // [rsp+70h] [rbp-B8h] BYREF
  int v59; // [rsp+78h] [rbp-B0h]
  _DWORD *v60; // [rsp+80h] [rbp-A8h]
  _DWORD *v61; // [rsp+88h] [rbp-A0h]
  _IMAGE_NT_HEADERS64 *v62; // [rsp+90h] [rbp-98h]
  __int64 v63; // [rsp+98h] [rbp-90h]
  unsigned __int64 v64; // [rsp+A0h] [rbp-88h]
  _DWORD *v65; // [rsp+A8h] [rbp-80h]
  char *v66; // [rsp+B0h] [rbp-78h]
  unsigned __int64 v67; // [rsp+B8h] [rbp-70h]
  __int128 MemoryInformation; // [rsp+C0h] [rbp-68h] BYREF
  __int128 v69; // [rsp+D0h] [rbp-58h]
  __int128 v70; // [rsp+E0h] [rbp-48h]
  char *v71; // [rsp+130h] [rbp+8h]

  v71 = (char *)BaseOfImage;
  v5 = (char *)BaseOfImage;
  v50 = (PIMAGE_NT_HEADERS)BaseOfImage;
  v7 = 1;
  v8 = (char *)BaseOfImage;
  v67 = BaseOfImage;
  OutHeaders = 0LL;
  v9 = 0LL;
  v52 = 0LL;
  if ( (BaseOfImage & 3) != 0 )
  {
    v7 = (BaseOfImage & 1) == 0;
    v8 = (char *)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
    v67 = BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL;
  }
  v10 = (void *)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
  v11 = RtlImageNtHeaderEx(1u, v8, 0LL, &OutHeaders);
  if ( !OutHeaders )
    goto LABEL_11;
  Magic = OutHeaders->OptionalHeader.Magic;
  if ( Magic == 267 )
  {
    if ( HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) > 2 )
    {
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
      if ( (_DWORD)VirtualAddress )
      {
        if ( v7 || (unsigned int)VirtualAddress < OutHeaders->OptionalHeader.SizeOfHeaders )
        {
          v9 = &v8[VirtualAddress];
          v52 = &v8[VirtualAddress];
          v11 = 0;
        }
        else
        {
          v54 = 0;
          v60 = 0LL;
          v42 = (_DWORD *)((char *)&OutHeaders->OptionalHeader.Magic + OutHeaders->FileHeader.SizeOfOptionalHeader);
          v60 = v42;
          NumberOfSections = OutHeaders->FileHeader.NumberOfSections;
          v44 = 0;
          v54 = 0;
          while ( v44 < NumberOfSections )
          {
            v45 = v42[3];
            if ( (unsigned int)VirtualAddress >= v45 && (unsigned int)VirtualAddress < v42[4] + v45 )
            {
              if ( v42 )
                v9 = &v8[(unsigned int)v42[5] - (unsigned __int64)(unsigned int)v42[3] + VirtualAddress];
              break;
            }
            v42 += 10;
            v60 = v42;
            v54 = ++v44;
          }
          v52 = v9;
          v46 = 0;
          if ( !v9 )
            v46 = -1073741811;
          v11 = v46;
          v5 = v71;
        }
      }
      else
      {
        v11 = -1073741822;
      }
      goto LABEL_10;
    }
  }
  else if ( Magic == 523 && OutHeaders->OptionalHeader.NumberOfRvaAndSizes > 2 )
  {
    v13 = OutHeaders->OptionalHeader.DataDirectory[2].VirtualAddress;
    if ( (_DWORD)v13 )
    {
      if ( v7 || (unsigned int)v13 < OutHeaders->OptionalHeader.SizeOfHeaders )
      {
        v9 = &v8[v13];
        v52 = &v8[v13];
        v11 = 0;
      }
      else
      {
        v9 = (char *)RtlAddressInSectionTable(OutHeaders, v8, v13);
        v52 = v9;
        v48 = 0;
        if ( !v9 )
          v48 = -1073741811;
        v11 = v48;
      }
    }
    else
    {
      v11 = -1073741822;
    }
    goto LABEL_10;
  }
  v11 = -1073741811;
LABEL_10:
  v10 = (void *)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
LABEL_11:
  if ( v11 < 0 )
    v9 = 0LL;
  v52 = v9;
  v66 = v9;
  if ( !v9 )
    return 3221225609LL;
  v14 = 0;
  FileSizeFromLoadAsDataTable = 0LL;
  v53 = 0LL;
  v58 = 0LL;
  RtlImageNtHeaderEx(1u, v10, 0LL, &v58);
  if ( v58 )
  {
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
      FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable(v5);
      v53 = FileSizeFromLoadAsDataTable;
      if ( !FileSizeFromLoadAsDataTable )
      {
        MemoryInformation = 0LL;
        v69 = 0LL;
        v70 = 0LL;
        v14 = ZwQueryVirtualMemory(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                v10,
                MemoryRegionInformation,
                &MemoryInformation,
                0x30uLL,
                0LL);
        if ( v14 < 0 )
        {
          v14 = -1073741793;
        }
        else
        {
          FileSizeFromLoadAsDataTable = v69;
          v53 = v69;
        }
      }
    }
    else
    {
      v47 = v58->OptionalHeader.Magic;
      if ( v47 == 267 )
      {
        FileSizeFromLoadAsDataTable = v58->OptionalHeader.SizeOfImage;
        v53 = FileSizeFromLoadAsDataTable;
      }
      else if ( v47 == 523 )
      {
        FileSizeFromLoadAsDataTable = v58->OptionalHeader.SizeOfImage;
        v53 = FileSizeFromLoadAsDataTable;
      }
      else
      {
        FileSizeFromLoadAsDataTable = 0LL;
        v53 = 0LL;
        v14 = -1073741701;
      }
    }
    v16 = BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL;
  }
  else
  {
    v14 = -1073741701;
    v16 = (unsigned __int64)v10;
  }
  v63 = FileSizeFromLoadAsDataTable;
  if ( v14 < 0 )
    return (unsigned int)v14;
  v64 = v16;
  v17 = a2 + 4;
  if ( (unsigned __int64)a2 < v16 || v17 < a2 )
    return (unsigned int)-1073741701;
  v18 = v16;
  if ( !FileSizeFromLoadAsDataTable )
    goto LABEL_26;
  if ( (unsigned __int64)v17 > v16 + FileSizeFromLoadAsDataTable )
    return (unsigned int)-1073741701;
  v18 = (unsigned __int64)v50 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_26:
  v14 = 0;
  v19 = 0;
  v59 = 0;
  if ( ((unsigned __int8)v5 & 3) != 0 )
  {
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
      v19 = 1;
      v59 = 1;
    }
    v5 = (char *)v18;
    v71 = (char *)v18;
  }
  if ( v19 == 1 )
  {
    v50 = 0LL;
    RtlImageNtHeaderEx(1u, v5, 0LL, &v50);
    OutHeaders = v50;
    if ( !v50 )
      return (unsigned int)-1073741687;
    v20 = v50->OptionalHeader.Magic;
    if ( v20 == 267 )
    {
      v21 = v50->OptionalHeader.DataDirectory[0].VirtualAddress;
    }
    else
    {
      if ( v20 != 523 )
        return (unsigned int)-1073741687;
      v21 = v50->OptionalHeader.DataDirectory[2].VirtualAddress;
    }
    if ( v21 )
    {
      v58 = (PIMAGE_NT_HEADERS)&v5[v21 - (_QWORD)v9];
      i = 0;
      v65 = 0LL;
      v22 = (_DWORD *)((char *)&v50->OptionalHeader.Magic + v50->FileHeader.SizeOfOptionalHeader);
      v65 = v22;
      v23 = v50->FileHeader.NumberOfSections;
      v24 = 0;
      for ( i = 0; ; i = v24 )
      {
        if ( v24 >= v23 )
          return (unsigned int)-1073741687;
        v25 = v22[3];
        if ( v21 >= v25 && v21 < v22[4] + v25 )
          break;
        v22 += 10;
        v65 = v22;
        ++v24;
      }
      if ( !v22 )
        return (unsigned int)-1073741687;
      v26 = *a2;
      if ( *a2 > v22[2] )
      {
        v30 = (unsigned int)v22[3];
        j = 0;
        v62 = 0LL;
        v31 = (_IMAGE_NT_HEADERS64 *)((char *)&OutHeaders->OptionalHeader + OutHeaders->FileHeader.SizeOfOptionalHeader);
        v62 = v31;
        v32 = OutHeaders->FileHeader.NumberOfSections;
        v33 = 0;
        for ( j = 0; ; j = v33 )
        {
          if ( v33 >= v32 )
            return (unsigned int)-1073741687;
          PointerToSymbolTable = v31->FileHeader.PointerToSymbolTable;
          if ( v26 >= PointerToSymbolTable && v26 < v31->FileHeader.NumberOfSymbols + PointerToSymbolTable )
            break;
          v31 = (_IMAGE_NT_HEADERS64 *)((char *)v31 + 40);
          v62 = v31;
          ++v33;
        }
        v50 = v31;
        if ( !v31 )
          return (unsigned int)-1073741687;
        v35 = v31->FileHeader.PointerToSymbolTable;
        v55 = 0;
        v61 = 0LL;
        v36 = (_DWORD *)((char *)&OutHeaders->OptionalHeader.Magic + OutHeaders->FileHeader.SizeOfOptionalHeader);
        v61 = v36;
        v37 = OutHeaders->FileHeader.NumberOfSections;
        v38 = 0;
        v55 = 0;
        while ( v38 < v37 )
        {
          v39 = v36[3];
          if ( (unsigned int)v35 >= v39 && (unsigned int)v35 < v36[4] + v39 )
          {
            if ( v36 )
            {
              v5 = v71;
              v40 = &v71[(unsigned int)v36[5] - (unsigned __int64)(unsigned int)v36[3] + v35];
              goto LABEL_66;
            }
            break;
          }
          v36 += 10;
          v61 = v36;
          v55 = ++v38;
        }
        v40 = 0LL;
        v5 = v71;
LABEL_66:
        v27 = (PIMAGE_NT_HEADERS)&v66[v50->FileHeader.PointerToSymbolTable - v30 - (_QWORD)v40 + (_QWORD)v58];
        FileSizeFromLoadAsDataTable = v63;
        v16 = v64;
      }
      else
      {
        v5 = v71;
        v27 = v58;
        FileSizeFromLoadAsDataTable = v63;
        v16 = v64;
      }
      goto LABEL_43;
    }
    return (unsigned int)-1073741687;
  }
  v27 = 0LL;
LABEL_43:
  if ( !a3 )
    goto LABEL_49;
  v28 = &v5[*a2 - (_QWORD)v27];
  v29 = (unsigned __int64)&v28[a2[1]];
  if ( (unsigned __int64)v28 >= v16
    && v29 >= (unsigned __int64)v28
    && (!FileSizeFromLoadAsDataTable || v29 <= v16 + FileSizeFromLoadAsDataTable) )
  {
    *a3 = v28;
LABEL_49:
    if ( a4 )
      *a4 = a2[1];
    return (unsigned int)v14;
  }
  return (unsigned int)-1073741701;
}
