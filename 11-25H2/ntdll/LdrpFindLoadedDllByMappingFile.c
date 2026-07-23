/*
 * XREFs of LdrpFindLoadedDllByMappingFile @ 0x1800CBEB8
 * Callers:
 *     LdrpFindLoadedDll @ 0x1800492A0 (LdrpFindLoadedDll.c)
 *     LdrpFindLoadedDllInternal @ 0x1800CBC80 (LdrpFindLoadedDllInternal.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     LdrpFindLoadedDllByMapping @ 0x18006CE70 (LdrpFindLoadedDllByMapping.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x180163880 (NtOpenFile.c)
 *     NtCreateSection @ 0x180163B60 (NtCreateSection.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMappingFile(_UNICODE_STRING *a1, __int64 a2, _DWORD *a3)
{
  ULONG v4; // eax
  NTSTATUS v6; // eax
  int LoadedDllByMapping; // ebx
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-19h] BYREF
  HANDLE SectionHandle; // [rsp+58h] [rbp-11h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+60h] [rbp-9h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+Fh] BYREF
  PVOID BaseAddress; // [rsp+D0h] [rbp+67h] BYREF
  HANDLE FileHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  ObjectAttributes.ObjectName = a1;
  FileHandle = 0LL;
  OutHeaders = 0LL;
  v4 = 64;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  if ( !LdrpUseImpersonatedDeviceMap )
    v4 = 2112;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.Attributes = v4;
  SectionHandle = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  IoStatusBlock = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  v6 = NtOpenFile(&FileHandle, 0x100021u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  LoadedDllByMapping = v6;
  if ( v6 >= 0
    || v6 != -1073741809
    && (LoadedDllByMapping = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u),
        LoadedDllByMapping >= 0) )
  {
    LoadedDllByMapping = NtCreateSection(&SectionHandle, 4u, 0LL, 0LL, 2u, 0x11000000u, FileHandle);
    if ( LoadedDllByMapping >= 0 )
    {
      BaseAddress = 0LL;
      ViewSize = 0LL;
      LoadedDllByMapping = ZwMapViewOfSection(
                             SectionHandle,
                             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                             &BaseAddress,
                             0LL,
                             0LL,
                             0LL,
                             &ViewSize,
                             ViewShare,
                             0,
                             2u);
      if ( LoadedDllByMapping >= 0 )
      {
        LoadedDllByMapping = RtlImageNtHeaderEx(0, BaseAddress, ViewSize, &OutHeaders);
        if ( LoadedDllByMapping >= 0 )
          LoadedDllByMapping = LdrpFindLoadedDllByMapping(BaseAddress, OutHeaders, a2, a3);
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
      }
      NtClose(SectionHandle);
    }
    NtClose(FileHandle);
  }
  return (unsigned int)LoadedDllByMapping;
}
