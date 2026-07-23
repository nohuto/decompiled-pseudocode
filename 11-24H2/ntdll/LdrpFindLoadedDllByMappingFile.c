/*
 * XREFs of LdrpFindLoadedDllByMappingFile @ 0x1800C7618
 * Callers:
 *     LdrpFindLoadedDll @ 0x180036E00 (LdrpFindLoadedDll.c)
 *     LdrpFindLoadedDllInternal @ 0x1800C73E0 (LdrpFindLoadedDllInternal.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
 *     LdrpFindLoadedDllByMapping @ 0x1800C77DC (LdrpFindLoadedDllByMapping.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180160550 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180160590 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x1801606B0 (NtOpenFile.c)
 *     NtCreateSection @ 0x180160990 (NtCreateSection.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMappingFile(_UNICODE_STRING *a1)
{
  ULONG v1; // eax
  NTSTATUS v2; // eax
  NTSTATUS LoadedDllByMapping; // ebx
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
  v1 = 64;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  if ( !LdrpUseImpersonatedDeviceMap )
    v1 = 2112;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.Attributes = v1;
  SectionHandle = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  IoStatusBlock = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  v2 = NtOpenFile(&FileHandle, 0x100021u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  LoadedDllByMapping = v2;
  if ( v2 >= 0
    || v2 != -1073741809
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
          LoadedDllByMapping = LdrpFindLoadedDllByMapping(BaseAddress, OutHeaders);
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
      }
      NtClose(SectionHandle);
    }
    NtClose(FileHandle);
  }
  return (unsigned int)LoadedDllByMapping;
}
