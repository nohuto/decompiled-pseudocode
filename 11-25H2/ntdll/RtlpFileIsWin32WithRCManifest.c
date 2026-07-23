/*
 * XREFs of RtlpFileIsWin32WithRCManifest @ 0x1800AA648
 * Callers:
 *     RtlGetFileMUIPath @ 0x1800A9A40 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     LdrpSearchResourceSection_U @ 0x18001DC50 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18001F4B0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlInitUnicodeStringEx @ 0x18006CCF0 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlReleaseRelativeName @ 0x1800A2FC0 (RtlReleaseRelativeName.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180163B60 (NtCreateSection.c)
 *     ZwCreateFile @ 0x180163CC0 (ZwCreateFile.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

char __fastcall RtlpFileIsWin32WithRCManifest(PCWSTR SourceString)
{
  char v1; // di
  char v2; // r14
  PVOID v3; // rbx
  unsigned __int64 ContainingDirectory; // rdx
  NTSTATUS v5; // esi
  NTSTATUS v6; // ebx
  unsigned __int64 v7; // rbx
  PVOID BaseOfImage; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-98h] BYREF
  HANDLE FileHandle; // [rsp+70h] [rbp-90h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  __int64 v13; // [rsp+88h] [rbp-78h] BYREF
  char *v14; // [rsp+90h] [rbp-70h] BYREF
  PVOID BaseAddress[2]; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR ViewSize; // [rsp+A8h] [rbp-58h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+B0h] [rbp-50h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+B8h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-28h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v21[3]; // [rsp+118h] [rbp+18h] BYREF

  v1 = 0;
  ViewSize = 0LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  v2 = 0;
  BaseOfImage = 0LL;
  v14 = 0LL;
  SectionOffset.QuadPart = 0LL;
  *(_OWORD *)BaseAddress = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v13 = 0LL;
  IoStatusBlock = 0LL;
  memset(&RelativeName, 0, sizeof(RelativeName));
  DestinationString = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
    && (int)RtlpDosPathNameToRelativeNtPathName(
              2,
              &DestinationString.Length,
              0LL,
              (unsigned __int16 *)BaseAddress,
              0LL,
              0LL,
              (__int64)&RelativeName) >= 0 )
  {
    v3 = BaseAddress[1];
    if ( RelativeName.RelativeName.Length )
    {
      ContainingDirectory = (unsigned __int64)RelativeName.ContainingDirectory;
      *(UNICODE_STRING *)BaseAddress = RelativeName.RelativeName;
    }
    else
    {
      ContainingDirectory = 0LL;
      RelativeName.ContainingDirectory = 0LL;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.RootDirectory = (HANDLE)(ContainingDirectory & -(__int64)(v3 != 0LL));
    ObjectAttributes.ObjectName = (PUNICODE_STRING)BaseAddress;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateFile(&FileHandle, 0x80100080, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 5u, 1u, 0, 0LL, 0);
    if ( v3 )
    {
      RtlReleaseRelativeName(&RelativeName);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
    }
    if ( v5 >= 0 )
    {
      v2 = 1;
      if ( NtCreateSection(&SectionHandle, 0xF0005u, 0LL, 0LL, 2u, 0x8000000u, FileHandle) >= 0 )
      {
        v6 = ZwMapViewOfSection(
               SectionHandle,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               &BaseOfImage,
               0LL,
               0LL,
               &SectionOffset,
               &ViewSize,
               ViewShare,
               0,
               8u);
        NtClose(SectionHandle);
        if ( v6 >= 0 )
        {
          *(_QWORD *)&DestinationString.Length = 0LL;
          RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, (PIMAGE_NT_HEADERS *)&DestinationString);
          if ( *(_QWORD *)&DestinationString.Length )
          {
            v21[0] = L"MUI";
            v21[1] = 1LL;
            v7 = (unsigned __int64)BaseOfImage | 1;
            v21[2] = 0LL;
            if ( (int)LdrpSearchResourceSection_U(
                        (PVOID)((unsigned __int64)BaseOfImage | 1),
                        (__int64)v21,
                        3u,
                        0x30u,
                        (__int64)&v13) >= 0
              && (int)LdrpAccessResourceDataNoMultipleLanguage(v7, (unsigned int *)v13, &v14, &DestinationString) >= 0
              && *(_DWORD *)v14 == -20054323 )
            {
              v1 = 1;
            }
          }
        }
      }
    }
  }
  if ( BaseOfImage )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseOfImage);
  if ( v2 )
    NtClose(FileHandle);
  return v1;
}
