/*
 * XREFs of IopMarkBootPartition @ 0x140C1EDB0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140355DE8 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     RtlInitAnsiString @ 0x14045BBA0 (RtlInitAnsiString.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x140592BBC (IopCreateUnicodeFromAnsiBuffer.c)
 *     RtlStringCchPrintfA @ 0x140592C98 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x1406A7A10 (ZwOpenFile.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140718298 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140903ED0 (RtlAnsiStringToUnicodeString.c)
 *     IopStoreBootDriveLetter @ 0x140C1F3DC (IopStoreBootDriveLetter.c)
 *     IopStoreSystemPartitionInformation @ 0x140C1F590 (IopStoreSystemPartitionInformation.c)
 */

__int64 __fastcall IopMarkBootPartition(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  const char *v3; // r9
  NTSTATUS v6; // ebx
  PVOID *v7; // rbx
  void *DeviceAttachmentBaseRefWithTag; // rax
  __int64 v9; // rcx
  void *v10; // rdi
  int v11; // edx
  __int64 v12; // rcx
  HANDLE FileHandle; // [rsp+30h] [rbp-D0h] BYREF
  STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  char pszDest[256]; // [rsp+A0h] [rbp-60h] BYREF

  v3 = *(const char **)(a1 + 184);
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  v6 = RtlStringCchPrintfA(pszDest, 0x100uLL, "\\ArcName\\%s", v3);
  if ( v6 >= 0 )
  {
    RtlInitAnsiString(&DestinationString, pszDest);
    v6 = RtlAnsiStringToUnicodeString(a3, &DestinationString, 1u);
    if ( v6 >= 0 )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.ObjectName = a3;
      v6 = ZwOpenFile(&FileHandle, 0x80u, &ObjectAttributes, &IoStatusBlock, 0, 0x40u);
      if ( v6 >= 0 )
      {
        *(_QWORD *)&DestinationString.Length = 0LL;
        v6 = ObReferenceObjectByHandle(
               FileHandle,
               0,
               (POBJECT_TYPE)IoFileObjectType,
               0,
               (PVOID *)&DestinationString,
               0LL);
        if ( v6 >= 0 )
        {
          v7 = *(PVOID **)&DestinationString.Length;
          DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(
                                             *(_QWORD *)(*(_QWORD *)&DestinationString.Length + 8LL),
                                             0x746C6644u);
          v9 = (__int64)v7[1];
          v10 = DeviceAttachmentBaseRefWithTag;
          *(_DWORD *)(v9 + 48) |= 0x100u;
          *((_DWORD *)DeviceAttachmentBaseRefWithTag + 12) |= 0x100u;
          if ( InitIsWinPEMode )
          {
            v9 = (__int64)v7[1];
            v11 = *(_DWORD *)(v9 + 52);
            if ( (v11 & 1) != 0 )
              InitWinPEModeType |= 0x200u;
            if ( (v11 & 2) != 0 )
              InitWinPEModeType |= 0x100u;
          }
          PnpHardwareConfigCreateBootDriverFlags(v9, FileHandle);
          ObfReferenceObjectWithTag(v7[1], 0x746C6644u);
          ObCloseHandle(FileHandle, 0);
          ObfDereferenceObjectWithTag(v7, 0x746C6644u);
          ObfDereferenceObjectWithTag(v10, 0x746C6644u);
          v6 = IopStoreBootDriveLetter(*(_QWORD *)(a1 + 200));
          if ( v6 >= 0 )
          {
            v6 = IopCreateUnicodeFromAnsiBuffer(&UnicodeString, *(const CHAR **)(a1 + 208));
            if ( v6 >= 0 )
            {
              IopStoreSystemPartitionInformation(v12, &UnicodeString);
              RtlFreeAnsiString(&UnicodeString);
            }
          }
        }
      }
    }
  }
  return (unsigned int)v6;
}
