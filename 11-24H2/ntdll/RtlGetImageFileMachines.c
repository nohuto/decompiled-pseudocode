/*
 * XREFs of RtlGetImageFileMachines @ 0x18006F0C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18006F820 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlAddressInSectionTable @ 0x18007A5A0 (RtlAddressInSectionTable.c)
 *     RtlFreeAnsiString @ 0x180081430 (RtlFreeAnsiString.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenFile @ 0x1801606B0 (NtOpenFile.c)
 *     NtCreateSection @ 0x180160990 (NtCreateSection.c)
 *     NtQuerySection @ 0x180160A70 (NtQuerySection.c)
 *     ZwMapViewOfSectionEx @ 0x180162400 (ZwMapViewOfSectionEx.c)
 *     NtUnmapViewOfSectionEx @ 0x180163C20 (NtUnmapViewOfSectionEx.c)
 */

NTSTATUS __cdecl RtlGetImageFileMachines(PCWSTR FileName, PUSHORT FileMachines)
{
  size_t v3; // rax
  int v4; // eax
  __int16 v5; // cx
  __int16 v6; // bx
  int v7; // eax
  char *v8; // rbx
  DWORD v9; // esi
  unsigned int Size; // r15d
  ULONG_PTR SizeOfImage; // rax
  __int64 v12; // r12
  bool v13; // r14
  char *v14; // rsi
  NTSTATUS v15; // edx
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rax
  char *v18; // rax
  __int64 v19; // r9
  _DWORD *v20; // rdx
  unsigned int NumberOfSections; // r10d
  unsigned int v22; // r8d
  unsigned int v23; // ecx
  int v24; // eax
  int v25; // ecx
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
    v4 = RtlpDosPathNameToRelativeNtPathName(0, (unsigned int)v42, 0, (unsigned int)&v41, 0LL, 0LL, 0LL);
    goto LABEL_5;
  }
  v4 = -1073741562;
LABEL_5:
  Section = v4;
  if ( v4 < 0 )
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
  v5 = v49;
  v6 = v49;
  switch ( (unsigned __int16)v49 )
  {
    case 0x8664u:
      *(_DWORD *)FileMachines |= 2u;
      break;
    case 0x14Cu:
      *(_DWORD *)FileMachines |= 1u;
      break;
    case 0x1C4u:
      *(_DWORD *)FileMachines |= 4u;
      break;
    case 0xAA64u:
      *(_DWORD *)FileMachines |= 8u;
      break;
  }
  if ( (BYTE3(v49) & 2) != 0 && (BYTE3(v49) & 1) != 0 && v6 == 332 )
  {
    *(_DWORD *)FileMachines |= 4u;
    v7 = *(_DWORD *)FileMachines | 2;
    *(_DWORD *)FileMachines = v7;
    *(_DWORD *)FileMachines = v7 | 8;
LABEL_15:
    v8 = (char *)BaseOfImage;
    goto LABEL_91;
  }
  v9 = 43620;
  if ( v5 == -21916 || v5 == -31132 )
  {
    ExtendedParameters.0 = (MEM_EXTENDED_PARAMETER::$373F0C482CA2C07D4A7B2B94C5EA8081)(*(_QWORD *)&ExtendedParameters.0 & 0xFFFFFFFFFFFFFF00uLL | 6);
    if ( v5 != -31132 )
      v9 = 34404;
    ExtendedParameters.ULong = v9;
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
      if ( v6 == -31132 )
      {
        v26 = v9 - 332;
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
  v8 = (char *)BaseOfImage;
  if ( &OutHeaders[1] > (_IMAGE_NT_HEADERS64 *)((char *)BaseOfImage + ViewSize)
    || (char *)BaseOfImage + ViewSize <= BaseOfImage
    || OutHeaders < BaseOfImage
    || &OutHeaders[1] <= OutHeaders )
  {
    goto LABEL_44;
  }
  if ( OutHeaders->OptionalHeader.Magic == 267 )
    goto LABEL_91;
  SizeOfImage = OutHeaders->OptionalHeader.SizeOfImage;
  v12 = (unsigned int)SizeOfImage;
  if ( SizeOfImage > ViewSize )
    goto LABEL_44;
  v13 = 1;
  v44 = (unsigned __int64)BaseOfImage;
  NtHeaders = 0LL;
  v14 = 0LL;
  v32 = 0LL;
  if ( ((unsigned __int8)BaseOfImage & 3) != 0 )
  {
    v13 = ((unsigned __int8)BaseOfImage & 1) == 0;
    v8 = (char *)((unsigned __int64)BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
    v44 = (unsigned __int64)BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL;
  }
  v15 = RtlImageNtHeaderEx(1u, v8, 0LL, &NtHeaders);
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
        if ( v13 || (unsigned int)VirtualAddress < NtHeaders->OptionalHeader.SizeOfHeaders )
        {
          v14 = &v8[VirtualAddress];
          v32 = &v8[VirtualAddress];
          v15 = 0;
        }
        else
        {
          v14 = (char *)RtlAddressInSectionTable(NtHeaders, v8, VirtualAddress);
          v32 = v14;
          v25 = 0;
          if ( !v14 )
            v25 = -1073741811;
          v15 = v25;
        }
      }
      else
      {
        v15 = -1073741822;
      }
      goto LABEL_40;
    }
LABEL_59:
    v15 = -1073741811;
    goto LABEL_40;
  }
  if ( HIDWORD(NtHeaders->OptionalHeader.SizeOfHeapReserve) <= 0xA )
    goto LABEL_59;
  v19 = NtHeaders->OptionalHeader.DataDirectory[8].VirtualAddress;
  if ( (_DWORD)v19 )
  {
    Size = NtHeaders->OptionalHeader.DataDirectory[8].Size;
    v31 = Size;
    if ( v13 || (unsigned int)v19 < NtHeaders->OptionalHeader.SizeOfHeaders )
    {
      v14 = &v8[v19];
      v32 = &v8[v19];
      v15 = 0;
    }
    else
    {
      v34 = 0;
      v40 = 0LL;
      v20 = (_DWORD *)((char *)&NtHeaders->OptionalHeader.Magic + NtHeaders->FileHeader.SizeOfOptionalHeader);
      v40 = v20;
      NumberOfSections = NtHeaders->FileHeader.NumberOfSections;
      v22 = 0;
      v34 = 0;
      while ( v22 < NumberOfSections )
      {
        v23 = v20[3];
        if ( (unsigned int)v19 >= v23 && (unsigned int)v19 < v20[4] + v23 )
        {
          if ( v20 )
          {
            v14 = &v8[(unsigned int)v20[5] - (unsigned __int64)(unsigned int)v20[3] + v19];
            v45 = v14;
            goto LABEL_56;
          }
          break;
        }
        v20 += 10;
        v40 = v20;
        v34 = ++v22;
      }
      v14 = 0LL;
      v45 = 0LL;
LABEL_56:
      v32 = v14;
      v24 = 0;
      if ( !v14 )
        v24 = -1073741811;
      v15 = v24;
      Size = v31;
    }
  }
  else
  {
    v15 = -1073741822;
  }
LABEL_40:
  if ( v15 < 0 )
    v14 = 0LL;
  v32 = v14;
  v8 = (char *)BaseOfImage;
  if ( v14 )
  {
    v18 = &v14[Size];
    if ( v18 <= (char *)BaseOfImage + v12
      && (char *)BaseOfImage + v12 > BaseOfImage
      && v14 >= BaseOfImage
      && v18 > v14
      && *(_DWORD *)v14 == Size )
    {
      if ( Size >= 0xD0 && *((_QWORD *)v14 + 25) )
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
  if ( v8 )
    NtUnmapViewOfSectionEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, v8, 0);
  if ( SectionHandle )
    NtClose(SectionHandle);
  if ( FileHandle )
    NtClose(FileHandle);
  if ( *((_QWORD *)&v41 + 1) )
    RtlpSysVolFree(*((void **)&v41 + 1));
  return Section;
}
