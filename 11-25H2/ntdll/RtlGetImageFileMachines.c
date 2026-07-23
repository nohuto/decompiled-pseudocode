/*
 * XREFs of RtlGetImageFileMachines @ 0x180015120
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlAddressInSectionTable @ 0x1800206B0 (RtlAddressInSectionTable.c)
 *     RtlFreeAnsiString @ 0x1800832E0 (RtlFreeAnsiString.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenFile @ 0x180163880 (NtOpenFile.c)
 *     NtCreateSection @ 0x180163B60 (NtCreateSection.c)
 *     NtQuerySection @ 0x180163C40 (NtQuerySection.c)
 *     ZwMapViewOfSectionEx @ 0x1801655D0 (ZwMapViewOfSectionEx.c)
 *     NtUnmapViewOfSectionEx @ 0x180166DF0 (NtUnmapViewOfSectionEx.c)
 */

NTSTATUS __cdecl RtlGetImageFileMachines(PCWSTR FileName, PUSHORT FileMachines)
{
  size_t v3; // rax
  unsigned __int64 v4; // rdx
  ULONG_PTR v5; // r8
  int v6; // eax
  __int16 v7; // cx
  __int16 v8; // bx
  int v9; // eax
  char *v10; // rbx
  DWORD v11; // esi
  unsigned int Size; // r15d
  ULONG_PTR SizeOfImage; // rax
  __int64 v14; // r12
  bool v15; // r14
  char *v16; // rsi
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rax
  char *v19; // rax
  __int64 v20; // r9
  _DWORD *v21; // rdx
  unsigned int NumberOfSections; // r10d
  unsigned int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // ecx
  DWORD v26; // esi
  DWORD v27; // esi
  int Section; // [rsp+50h] [rbp-198h]
  PVOID BaseOfImage; // [rsp+60h] [rbp-188h] BYREF
  unsigned int v31; // [rsp+68h] [rbp-180h]
  char *v32; // [rsp+70h] [rbp-178h]
  HANDLE SectionHandle; // [rsp+80h] [rbp-168h] BYREF
  int v34; // [rsp+88h] [rbp-160h]
  ULONG_PTR ViewSize; // [rsp+90h] [rbp-158h] BYREF
  HANDLE FileHandle; // [rsp+98h] [rbp-150h] BYREF
  PIMAGE_NT_HEADERS NtHeaders; // [rsp+A0h] [rbp-148h] BYREF
  PVOID BaseAddress; // [rsp+B0h] [rbp-138h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+B8h] [rbp-130h] BYREF
  _DWORD *v40; // [rsp+C0h] [rbp-128h]
  __int128 v41; // [rsp+D0h] [rbp-118h] BYREF
  _QWORD v42[2]; // [rsp+E0h] [rbp-108h] BYREF
  MEM_EXTENDED_PARAMETER ExtendedParameters; // [rsp+F0h] [rbp-F8h] BYREF
  unsigned __int64 v44; // [rsp+100h] [rbp-E8h]
  char *v45; // [rsp+108h] [rbp-E0h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+120h] [rbp-C8h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+160h] [rbp-88h] BYREF
  _BYTE SectionInformation[48]; // [rsp+170h] [rbp-78h] BYREF
  __int128 v49; // [rsp+1A0h] [rbp-48h]

  v41 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock = 0LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  memset(SectionInformation, 0, sizeof(SectionInformation));
  v49 = 0LL;
  ExtendedParameters = 0LL;
  BaseAddress = 0LL;
  BaseOfImage = 0LL;
  ViewSize = 0LL;
  *(_DWORD *)FileMachines = 0;
  v42[0] = 0LL;
  v42[1] = FileName;
  if ( !FileName )
    goto LABEL_4;
  v3 = wcslen(FileName);
  if ( v3 <= 0x7FFE )
  {
    LOWORD(v42[0]) = 2 * v3;
    WORD1(v42[0]) = 2 * v3 + 2;
LABEL_4:
    v6 = RtlpDosPathNameToRelativeNtPathName(0, (unsigned int)v42, 0, (unsigned int)&v41, 0LL, 0LL, 0LL);
    goto LABEL_5;
  }
  v6 = -1073741562;
LABEL_5:
  Section = v6;
  if ( v6 < 0 )
    goto LABEL_15;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v41;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Section = NtOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  if ( Section < 0 )
    goto LABEL_15;
  Section = NtCreateSection(&SectionHandle, 5u, 0LL, 0LL, 2u, 0x11000000u, FileHandle);
  if ( Section < 0 )
    goto LABEL_15;
  Section = NtQuerySection(SectionHandle, SectionImageInformation, SectionInformation, 0x40uLL, 0LL);
  if ( Section < 0 )
    goto LABEL_15;
  v7 = v49;
  v8 = v49;
  if ( (unsigned __int16)v49 == 34404 )
  {
    *(_DWORD *)FileMachines |= 2u;
  }
  else
  {
    v4 = (unsigned int)(unsigned __int16)v49 - 332;
    if ( (unsigned __int16)v49 == 332 )
    {
      *(_DWORD *)FileMachines |= 1u;
    }
    else
    {
      v4 = (unsigned int)(unsigned __int16)v49 - 452;
      if ( (unsigned __int16)v49 == 452 )
      {
        *(_DWORD *)FileMachines |= 4u;
      }
      else if ( (unsigned __int16)v49 == 43620 )
      {
        *(_DWORD *)FileMachines |= 8u;
      }
    }
  }
  if ( (BYTE3(v49) & 2) != 0 && (BYTE3(v49) & 1) != 0 && v8 == 332 )
  {
    *(_DWORD *)FileMachines |= 4u;
    v9 = *(_DWORD *)FileMachines | 2;
    *(_DWORD *)FileMachines = v9;
    *(_DWORD *)FileMachines = v9 | 8;
LABEL_15:
    v10 = (char *)BaseOfImage;
    goto LABEL_91;
  }
  v11 = 43620;
  if ( v7 == -21916 || v7 == -31132 )
  {
    ExtendedParameters.0 = (MEM_EXTENDED_PARAMETER::$373F0C482CA2C07D4A7B2B94C5EA8081)(*(_QWORD *)&ExtendedParameters.0 & 0xFFFFFFFFFFFFFF00uLL | 6);
    if ( v7 != -31132 )
      v11 = 34404;
    ExtendedParameters.ULong = v11;
    if ( ZwMapViewOfSectionEx(
           SectionHandle,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &BaseAddress,
           0LL,
           &ViewSize,
           0,
           2u,
           &ExtendedParameters,
           1u) >= 0 )
    {
      if ( v8 == -31132 )
      {
        v26 = v11 - 332;
        if ( v26 )
        {
          v27 = v26 - 120;
          if ( v27 )
          {
            if ( v27 == 43168 )
              *(_DWORD *)FileMachines |= 8u;
          }
          else
          {
            *(_DWORD *)FileMachines |= 4u;
          }
        }
        else
        {
          *(_DWORD *)FileMachines |= 1u;
        }
      }
      else
      {
        *(_DWORD *)FileMachines |= 2u;
      }
      NtUnmapViewOfSectionEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, 0);
    }
  }
  if ( (*(_BYTE *)FileMachines & 2) == 0 )
    goto LABEL_15;
  Size = 0;
  v31 = 0;
  Section = ZwMapViewOfSectionEx(
              SectionHandle,
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              &BaseOfImage,
              0LL,
              &ViewSize,
              0,
              2u,
              0LL,
              0);
  if ( Section < 0 )
    goto LABEL_15;
  Section = 0;
  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &OutHeaders);
  v5 = ViewSize;
  v10 = (char *)BaseOfImage;
  v4 = (unsigned __int64)BaseOfImage + ViewSize;
  if ( &OutHeaders[1] > (_IMAGE_NT_HEADERS64 *)((char *)BaseOfImage + ViewSize)
    || v4 <= (unsigned __int64)BaseOfImage
    || OutHeaders < BaseOfImage
    || &OutHeaders[1] <= OutHeaders )
  {
    goto LABEL_44;
  }
  if ( OutHeaders->OptionalHeader.Magic == 267 )
    goto LABEL_91;
  SizeOfImage = OutHeaders->OptionalHeader.SizeOfImage;
  v14 = (unsigned int)SizeOfImage;
  if ( SizeOfImage > ViewSize )
    goto LABEL_44;
  v15 = 1;
  v44 = (unsigned __int64)BaseOfImage;
  NtHeaders = 0LL;
  v16 = 0LL;
  v32 = 0LL;
  if ( ((unsigned __int8)BaseOfImage & 3) != 0 )
  {
    v15 = ((unsigned __int8)BaseOfImage & 1) == 0;
    v10 = (char *)((unsigned __int64)BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
    v44 = (unsigned __int64)BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL;
  }
  v4 = (unsigned int)RtlImageNtHeaderEx(1u, v10, 0LL, &NtHeaders);
  if ( !NtHeaders )
    goto LABEL_40;
  Magic = NtHeaders->OptionalHeader.Magic;
  if ( Magic != 267 )
  {
    if ( Magic == 523 && NtHeaders->OptionalHeader.NumberOfRvaAndSizes > 0xA )
    {
      VirtualAddress = NtHeaders->OptionalHeader.DataDirectory[10].VirtualAddress;
      if ( (_DWORD)VirtualAddress )
      {
        Size = NtHeaders->OptionalHeader.DataDirectory[10].Size;
        v31 = Size;
        if ( v15 || (unsigned int)VirtualAddress < NtHeaders->OptionalHeader.SizeOfHeaders )
        {
          v16 = &v10[VirtualAddress];
          v32 = &v10[VirtualAddress];
          v4 = 0LL;
        }
        else
        {
          v16 = (char *)RtlAddressInSectionTable(NtHeaders, v10, VirtualAddress);
          v32 = v16;
          v25 = 0;
          if ( !v16 )
            v25 = -1073741811;
          v4 = v25;
        }
      }
      else
      {
        v4 = 3221225474LL;
      }
      goto LABEL_40;
    }
LABEL_59:
    v4 = 3221225485LL;
    goto LABEL_40;
  }
  if ( HIDWORD(NtHeaders->OptionalHeader.SizeOfHeapReserve) <= 0xA )
    goto LABEL_59;
  v20 = NtHeaders->OptionalHeader.DataDirectory[8].VirtualAddress;
  if ( (_DWORD)v20 )
  {
    Size = NtHeaders->OptionalHeader.DataDirectory[8].Size;
    v31 = Size;
    if ( v15 || (unsigned int)v20 < NtHeaders->OptionalHeader.SizeOfHeaders )
    {
      v16 = &v10[v20];
      v32 = &v10[v20];
      v4 = 0LL;
    }
    else
    {
      v34 = 0;
      v40 = 0LL;
      v21 = (_DWORD *)((char *)&NtHeaders->OptionalHeader.Magic + NtHeaders->FileHeader.SizeOfOptionalHeader);
      v40 = v21;
      NumberOfSections = NtHeaders->FileHeader.NumberOfSections;
      v5 = 0LL;
      v34 = 0;
      while ( (unsigned int)v5 < NumberOfSections )
      {
        v23 = v21[3];
        if ( (unsigned int)v20 >= v23 && (unsigned int)v20 < v21[4] + v23 )
        {
          if ( v21 )
          {
            v16 = &v10[(unsigned int)v21[5] - (unsigned __int64)(unsigned int)v21[3] + v20];
            v45 = v16;
            goto LABEL_56;
          }
          break;
        }
        v21 += 10;
        v40 = v21;
        v5 = (unsigned int)(v5 + 1);
        v34 = v5;
      }
      v16 = 0LL;
      v45 = 0LL;
LABEL_56:
      v32 = v16;
      v24 = 0;
      if ( !v16 )
        v24 = -1073741811;
      v4 = v24;
      Size = v31;
    }
  }
  else
  {
    v4 = 3221225474LL;
  }
LABEL_40:
  if ( (v4 & 0x80000000) != 0LL )
    v16 = 0LL;
  v32 = v16;
  v10 = (char *)BaseOfImage;
  if ( v16 )
  {
    v19 = &v16[Size];
    if ( v19 <= (char *)BaseOfImage + v14
      && (char *)BaseOfImage + v14 > BaseOfImage
      && v16 >= BaseOfImage
      && v19 > v16
      && *(_DWORD *)v16 == Size )
    {
      if ( Size >= 0xD0 && *((_QWORD *)v16 + 25) )
      {
        *(_DWORD *)FileMachines &= ~2u;
        *(_DWORD *)FileMachines |= 0x10u;
      }
      goto LABEL_91;
    }
LABEL_44:
    Section = -1073741701;
  }
LABEL_91:
  if ( v10 )
    NtUnmapViewOfSectionEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, v10, 0);
  if ( SectionHandle )
    NtClose(SectionHandle);
  if ( FileHandle )
    NtClose(FileHandle);
  if ( *((_QWORD *)&v41 + 1) )
    RtlpSysVolFree(*((_QWORD *)&v41 + 1), v4, v5);
  return Section;
}
