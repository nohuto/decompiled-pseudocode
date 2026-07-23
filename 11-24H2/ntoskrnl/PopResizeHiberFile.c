/*
 * XREFs of PopResizeHiberFile @ 0x140A72354
 * Callers:
 *     PopAdjustHiberFile @ 0x14074FDC8 (PopAdjustHiberFile.c)
 *     PopEnlargeHiberFile @ 0x140750744 (PopEnlargeHiberFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ZwSetInformationFile @ 0x1406A7890 (ZwSetInformationFile.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14070AAE8 (FsRtlIssueFileNotificationFsctl.c)
 *     PopSetHiberFileMcb @ 0x140A72520 (PopSetHiberFileMcb.c)
 *     PopValidateHiberFileSize @ 0x140A725BC (PopValidateHiberFileSize.c)
 *     PopSanityCheckHiberFile @ 0x140A72784 (PopSanityCheckHiberFile.c)
 */

__int64 __fastcall PopResizeHiberFile(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rbx
  NTSTATUS Status; // ecx
  __int64 v6; // rdx
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  PVOID P; // [rsp+38h] [rbp-28h] BYREF
  __int64 FileInformation; // [rsp+40h] [rbp-20h] BYREF
  ULONG_PTR v11; // [rsp+48h] [rbp-18h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-10h] BYREF
  int v13; // [rsp+78h] [rbp+18h] BYREF
  ULONG_PTR v14; // [rsp+88h] [rbp+28h] BYREF

  v8 = 0LL;
  P = 0LL;
  v13 = 0;
  v4 = a1;
  IoStatusBlock = 0LL;
  if ( !FileObject )
    goto LABEL_15;
  if ( qword_140F0BB90 == a1 )
  {
LABEL_17:
    Status = 0;
    goto LABEL_14;
  }
  if ( (int)PopValidateHiberFileSize(a1, &v8, a3, 0LL) < 0 )
    v4 = v8;
  v14 = v4;
  if ( v4 <= 0 )
  {
LABEL_15:
    Status = -1073741823;
    goto LABEL_14;
  }
  FileInformation = v4;
  Status = ZwSetInformationFile(PopHiberInfo, &IoStatusBlock, &FileInformation, 8u, FileAllocationInformation);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&FileObject->Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    v11 = v14;
    Status = ZwSetInformationFile(PopHiberInfo, &IoStatusBlock, &v11, 8u, FileEndOfFileInformation);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&FileObject->Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      Status = PopSanityCheckHiberFile(
                 (_DWORD)PopHiberInfo,
                 (_DWORD)FileObject,
                 (unsigned int)&v14,
                 (unsigned int)&P,
                 (__int64)&v13);
      if ( Status >= 0 )
      {
        Status = PopSetHiberFileMcb(P);
        if ( Status >= 0 )
        {
          qword_140F0BB90 = v14;
          FsRtlIssueFileNotificationFsctl(FileObject, v6, (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_HIBERNATION_FILE);
          goto LABEL_17;
        }
      }
    }
  }
LABEL_14:
  *a2 = qword_140F0BB90;
  return (unsigned int)Status;
}
