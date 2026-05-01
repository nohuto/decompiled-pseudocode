/*
 * XREFs of RtlFileMapMapView @ 0x18009F928
 * Callers:
 *     AslFileMappingEnsure @ 0x18009F0F0 (AslFileMappingEnsure.c)
 *     AslFileMappingEnsureMappedAs @ 0x18009F1C0 (AslFileMappingEnsureMappedAs.c)
 *     AslpFileGetChecksumAttributes @ 0x1800A0368 (AslpFileGetChecksumAttributes.c)
 *     AslpFileGetVersionBlock @ 0x1800A1C84 (AslpFileGetVersionBlock.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall RtlFileMapMapView(__int64 a1, char a2)
{
  NTSTATUS v4; // ebx
  void *v5; // rcx
  PVOID v6; // rdx
  HANDLE FileHandle; // [rsp+38h] [rbp-49h]
  void *SectionHandle; // [rsp+58h] [rbp-29h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-21h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp+1Fh] BYREF
  __int128 FileInformation; // [rsp+B0h] [rbp+2Fh] BYREF
  __int64 v15; // [rsp+C0h] [rbp+3Fh]

  SectionHandle = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v15 = 0LL;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  if ( *(_QWORD *)(a1 + 24) )
  {
    return (unsigned int)-1073741554;
  }
  else
  {
    v4 = ZwQueryInformationFile(*(HANDLE *)a1, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
    if ( v4 < 0
      || (memset(&ObjectAttributes.RootDirectory, 0, 20),
          ObjectAttributes.Length = 48,
          FileHandle = *(HANDLE *)a1,
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
          v4 = ZwCreateSection(
                 &SectionHandle,
                 0xF0005u,
                 &ObjectAttributes,
                 0LL,
                 2u,
                 a2 != 0 ? 285212672 : 0x8000000,
                 FileHandle),
          v4 < 0)
      || (v4 = ZwMapViewOfSection(
                 SectionHandle,
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 &BaseAddress,
                 0LL,
                 0LL,
                 0LL,
                 &ViewSize,
                 ViewUnmap,
                 0x500000u,
                 2u),
          v4 < 0) )
    {
      v5 = SectionHandle;
      v6 = BaseAddress;
    }
    else
    {
      v5 = 0LL;
      *(_QWORD *)(a1 + 8) = SectionHandle;
      v6 = 0LL;
      v4 = 0;
      *(_QWORD *)(a1 + 24) = BaseAddress;
      *(_QWORD *)(a1 + 32) = ViewSize;
      *(_QWORD *)(a1 + 16) = *((_QWORD *)&FileInformation + 1);
      *(_WORD *)(a1 + 41) = 257;
      *(_BYTE *)(a1 + 43) = a2;
      SectionHandle = 0LL;
      BaseAddress = 0LL;
    }
    if ( v5 )
    {
      ZwClose(v5);
      v6 = BaseAddress;
    }
    if ( v6 )
      ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v6);
  }
  return (unsigned int)v4;
}
