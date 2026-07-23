/*
 * XREFs of PopCreateHiberFile @ 0x140750050
 * Callers:
 *     PopEnableHiberFile @ 0x140AAE8C0 (PopEnableHiberFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1406A75D0 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x1406A7890 (ZwSetInformationFile.c)
 *     ZwFsControlFile @ 0x1406A7AD0 (ZwFsControlFile.c)
 *     ZwFlushBuffersFile @ 0x1406A7D10 (ZwFlushBuffersFile.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14070AAE8 (FsRtlIssueFileNotificationFsctl.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1407505BC (PopCreateHiberFileSecurityDescriptor.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     IopCreateFile @ 0x1409557C0 (IopCreateFile.c)
 *     PopSetHiberFileMcb @ 0x140A72520 (PopSetHiberFileMcb.c)
 *     PopSanityCheckHiberFile @ 0x140A72784 (PopSanityCheckHiberFile.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopCreateHiberFile(__int64 a1)
{
  PFILE_OBJECT v1; // rdi
  void *HiberFileSecurityDescriptor; // r15
  NTSTATUS Status; // ebx
  unsigned int v4; // esi
  int File; // eax
  bool v6; // r14
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  HANDLE FileHandle; // [rsp+80h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  __int64 v13; // [rsp+98h] [rbp-68h] BYREF
  int v14; // [rsp+A0h] [rbp-60h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING Destination; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v17; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v18; // [rsp+C8h] [rbp-38h] BYREF
  PVOID P; // [rsp+D0h] [rbp-30h] BYREF
  int v20[4]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v21; // [rsp+E8h] [rbp-18h]
  void *v22; // [rsp+F8h] [rbp-8h]
  __int64 v23; // [rsp+100h] [rbp+0h]
  UNICODE_STRING DestinationString; // [rsp+108h] [rbp+8h] BYREF
  __int128 InputBuffer; // [rsp+118h] [rbp+18h] BYREF
  __int64 v26; // [rsp+128h] [rbp+28h]
  __int128 FileInformation; // [rsp+130h] [rbp+30h] BYREF
  __int64 v28; // [rsp+140h] [rbp+40h]
  _OWORD v29[2]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v30; // [rsp+168h] [rbp+68h]

  v13 = a1;
  v17 = 0LL;
  *(&Destination.MaximumLength + 2) = 0;
  v30 = 0LL;
  v28 = 0LL;
  v22 = 0LL;
  DestinationString = 0LL;
  LODWORD(v23) = 0;
  v1 = 0LL;
  memset(v29, 0, sizeof(v29));
  v18 = 0LL;
  HiberFileSecurityDescriptor = 0LL;
  v14 = 0;
  FileInformation = 0LL;
  v26 = 0LL;
  *(_OWORD *)v20 = 0LL;
  FileHandle = 0LL;
  v21 = 0LL;
  FileObject = 0LL;
  IoStatusBlock = 0LL;
  P = 0LL;
  InputBuffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\hiberfil.sys");
  *(_DWORD *)&Destination.MaximumLength = (unsigned __int16)(PoHiberFileRoot.Length + DestinationString.Length);
  Destination.Length = 0;
  Destination.Buffer = (wchar_t *)ExAllocatePool2(
                                    0x100uLL,
                                    (unsigned __int16)(PoHiberFileRoot.Length + DestinationString.Length),
                                    0x72626968u);
  if ( !Destination.Buffer )
  {
    Status = -1073741670;
    goto LABEL_34;
  }
  RtlAppendUnicodeStringToString(&Destination, &PoHiberFileRoot);
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  HiberFileSecurityDescriptor = (void *)PopCreateHiberFileSecurityDescriptor();
  v20[0] = 48;
  *(_QWORD *)&v20[2] = 0LL;
  *(_QWORD *)&v21 = &Destination;
  v4 = 0;
  DWORD2(v21) = 576;
  v22 = HiberFileSecurityDescriptor;
  v23 = 0LL;
  while ( 1 )
  {
    File = IopCreateFile(
             (int)&FileHandle,
             1048579,
             (int)v20,
             (int)&IoStatusBlock,
             (__int64)&v13,
             8198,
             0,
             3,
             36936,
             0LL,
             0,
             0,
             0LL,
             258,
             0,
             0LL);
    Status = File;
    if ( File < 0 )
    {
      if ( File != -1073741638 )
        goto LABEL_34;
      Status = IopCreateFile(
                 (int)&FileHandle,
                 0x10000,
                 (int)v20,
                 (int)&IoStatusBlock,
                 (__int64)&v13,
                 0,
                 0,
                 1,
                 2101249,
                 0LL,
                 0,
                 0,
                 0LL,
                 256,
                 0,
                 0LL);
      if ( Status < 0 )
        goto LABEL_34;
      goto LABEL_19;
    }
    v6 = IoStatusBlock.Information == 2;
    Status = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
    if ( Status < 0 )
      goto LABEL_34;
    if ( (unsigned int)v28 <= 1 )
      break;
LABEL_19:
    ZwClose(FileHandle);
    ++v4;
    FileHandle = 0LL;
    if ( v4 >= 3 )
      goto LABEL_10;
  }
  if ( !v6 && (PopSimulateHiberBugcheck & 0x200) == 0 )
  {
    v26 = -1LL;
    DWORD1(InputBuffer) = 1;
    *((_QWORD *)&InputBuffer + 1) = 0LL;
    ZwFsControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x98208u, &InputBuffer, 0x18u, 0LL, 0);
  }
LABEL_10:
  LODWORD(v30) = 8198;
  Status = ZwSetInformationFile(FileHandle, &IoStatusBlock, v29, 0x28u, FileBasicInformation);
  if ( Status >= 0 )
  {
    Status = ObpReferenceObjectByHandleWithTag((ULONG_PTR)FileHandle, 0x62486F50u, (__int64)&FileObject, 0LL, 0LL);
    if ( Status < 0 )
      goto LABEL_33;
    v17 = v13;
    Status = ZwSetInformationFile(FileHandle, &IoStatusBlock, &v17, 8u, FileAllocationInformation);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&::FileObject->Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status < 0 )
    {
LABEL_33:
      v1 = FileObject;
    }
    else
    {
      v18 = v13;
      v7 = ZwSetInformationFile(FileHandle, &IoStatusBlock, &v18, 8u, FileEndOfFileInformation);
      v1 = FileObject;
      Status = v7;
      if ( v7 == 259 )
      {
        KeWaitForSingleObject(&FileObject->Event, Executive, 0, 0, 0LL);
        v8 = IoStatusBlock.Status;
        Status = IoStatusBlock.Status;
      }
      else
      {
        v8 = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
      {
        if ( v8 < 0 )
        {
          Status = v8;
        }
        else
        {
          Status = ZwFsControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9004Fu, 0LL, 0, 0LL, 0);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
            Status = IoStatusBlock.Status;
          }
          if ( Status >= 0 )
          {
            if ( ZwFlushBuffersFile(FileHandle, &IoStatusBlock) == 259 )
              KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
            Status = PopSanityCheckHiberFile(
                       (_DWORD)FileHandle,
                       (_DWORD)v1,
                       (unsigned int)&v13,
                       (unsigned int)&P,
                       (__int64)&v14);
            if ( Status >= 0 )
            {
              Status = PopSetHiberFileMcb(P);
              if ( Status >= 0 )
              {
                PopHiberInfo = FileHandle;
                qword_140F0BB90 = v13;
                ::FileObject = v1;
                FsRtlIssueFileNotificationFsctl(v1, v9, (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_HIBERNATION_FILE);
                FileHandle = 0LL;
                Status = 0;
                goto LABEL_38;
              }
            }
          }
        }
      }
    }
  }
LABEL_34:
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( v1 )
    ObfDereferenceObjectWithTag(v1, 0x62486F50u);
LABEL_38:
  if ( HiberFileSecurityDescriptor )
    ExFreePoolWithTag(HiberFileSecurityDescriptor, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)Status;
}
