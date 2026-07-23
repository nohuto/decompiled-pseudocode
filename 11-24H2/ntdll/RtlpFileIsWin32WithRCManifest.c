/*
 * XREFs of RtlpFileIsWin32WithRCManifest @ 0x1800026C0
 * Callers:
 *     RtlGetFileMUIPath @ 0x1800016B0 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1800044C0 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18006F820 (RtlpDosPathNameToRelativeNtPathName.c)
 *     LdrpSearchResourceSection_U @ 0x180077BD0 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180079430 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlReleaseRelativeName @ 0x180094110 (RtlReleaseRelativeName.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180160550 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180160590 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180160990 (NtCreateSection.c)
 *     ZwCreateFile @ 0x180160AF0 (ZwCreateFile.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

char __fastcall RtlpFileIsWin32WithRCManifest(PCWSTR SourceString)
{
  char v1; // di
  char v2; // r14
  PVOID v3; // rbx
  unsigned __int64 ContainingDirectory; // rdx
  NTSTATUS v5; // esi
  NTSTATUS v6; // ebx
  void *v7; // rbx
  PVOID BaseOfImage; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-98h] BYREF
  HANDLE FileHandle; // [rsp+70h] [rbp-90h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  __int64 v13; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v14; // [rsp+90h] [rbp-70h]
  PVOID BaseAddress[2]; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR ViewSize; // [rsp+A8h] [rbp-58h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+B0h] [rbp-50h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+B8h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-28h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+108h] [rbp+8h] BYREF
  const wchar_t *v21; // [rsp+118h] [rbp+18h]
  __int64 v22; // [rsp+120h] [rbp+20h]
  __int64 v23; // [rsp+128h] [rbp+28h]

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
              (unsigned int)&DestinationString,
              0,
              (unsigned int)BaseAddress,
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
            v21 = L"MUI";
            v22 = 1LL;
            v7 = (void *)((unsigned __int64)BaseOfImage | 1);
            v23 = 0LL;
            if ( (int)LdrpSearchResourceSection_U((PVOID)((unsigned __int64)BaseOfImage | 1), (__int64)&v13) >= 0
              && (int)LdrpAccessResourceDataNoMultipleLanguage(v7) >= 0
              && *v14 == -20054323 )
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
