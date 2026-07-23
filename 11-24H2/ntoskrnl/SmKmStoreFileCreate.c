/*
 * XREFs of SmKmStoreFileCreate @ 0x14079A858
 * Callers:
 *     SmcCacheStart @ 0x14079D588 (SmcCacheStart.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     IoSetThreadHardErrorMode @ 0x1404523B0 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x1406A75D0 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x1406A7890 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1406A7CD0 (ZwQueryVolumeInformationFile.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SmKmStoreFileCreateForIoType @ 0x14079AD0C (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x14079AFC4 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x14079B060 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x14079B558 (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x14079B6F8 (SmKmStoreFileWriteHeader.c)
 *     IoRegisterPlugPlayNotification @ 0x1409EB2A0 (IoRegisterPlugPlayNotification.c)
 *     SmKmFileInfoCleanup @ 0x140AAC920 (SmKmFileInfoCleanup.c)
 */

__int64 __fastcall SmKmStoreFileCreate(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 *a5,
        int a6,
        PVOID a7,
        unsigned int *a8,
        _OWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        __int64 a12)
{
  char *v12; // r13
  unsigned int v16; // r15d
  HANDLE *v17; // rdi
  HANDLE v18; // r14
  char *v19; // rsi
  __int64 v20; // rax
  NTSTATUS Status; // ebx
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  unsigned int v24; // r13d
  __int128 v25; // xmm1
  _OWORD *v26; // rax
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  _DWORD *v29; // rcx
  int Context; // [rsp+28h] [rbp-D8h]
  BOOLEAN EnableHardErrors; // [rsp+50h] [rbp-B0h]
  __int64 v33; // [rsp+58h] [rbp-A8h]
  int v34; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+64h] [rbp-9Ch] BYREF
  int v36; // [rsp+6Ch] [rbp-94h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v38; // [rsp+80h] [rbp-80h]
  int v39; // [rsp+84h] [rbp-7Ch]
  __int64 FileInformation; // [rsp+88h] [rbp-78h] BYREF
  __int64 v41; // [rsp+90h] [rbp-70h] BYREF
  PVOID NotificationEntry; // [rsp+98h] [rbp-68h] BYREF
  HANDLE FileHandle[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v44; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v45; // [rsp+C0h] [rbp-40h]
  __int64 v46[2]; // [rsp+D0h] [rbp-30h] BYREF
  PDRIVER_OBJECT DriverObject; // [rsp+E0h] [rbp-20h]
  _OWORD *v48; // [rsp+E8h] [rbp-18h]
  _DWORD *v49; // [rsp+F0h] [rbp-10h]
  _DWORD *v50; // [rsp+F8h] [rbp-8h]
  __int64 *v51; // [rsp+100h] [rbp+0h]
  unsigned int *v52; // [rsp+108h] [rbp+8h]
  __int64 v53; // [rsp+110h] [rbp+10h]
  __int128 FsInformation; // [rsp+118h] [rbp+18h] BYREF
  __int64 v55; // [rsp+128h] [rbp+28h]
  __int128 v56; // [rsp+130h] [rbp+30h] BYREF
  __int64 v57; // [rsp+140h] [rbp+40h]

  v12 = 0LL;
  v48 = a9;
  v49 = a10;
  v50 = a11;
  v53 = a12;
  DriverObject = PnpDriverObject;
  v57 = 0LL;
  v55 = 0LL;
  v39 = a4;
  v38 = a3;
  v51 = a5;
  v52 = a8;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  v56 = 0LL;
  v41 = 0LL;
  FsInformation = 0LL;
  v35 = 0LL;
  NotificationEntry = 0LL;
  memset_0(FileHandle, 0, 0x40uLL);
  v16 = *a8;
  v36 = 0;
  v34 = v16;
  EnableHardErrors = IoSetThreadHardErrorMode(0);
  if ( (a2 & 1) != 0 )
  {
    v17 = (HANDLE *)(a2 & 0xFFFFFFFFFFFFFFFEuLL);
    v18 = *v17;
    v19 = (char *)v17[1];
    *((_QWORD *)&v45 + 1) = v17[5];
    FileHandle[0] = v18;
    FileHandle[1] = v19;
    memset_0(v17, 0, 0x40uLL);
    a2 = 0LL;
    v20 = -1LL;
    v12 = v19;
  }
  else
  {
    v20 = *a5;
    v19 = (char *)FileHandle[1];
    v18 = FileHandle[0];
  }
  v33 = v20;
  if ( a4 > a3 )
  {
    Status = -1073741811;
    goto LABEL_40;
  }
  if ( a2 )
  {
    Status = SmKmStoreFileCreateForIoType(FileHandle, a2, &v34);
    if ( Status < 0 )
      goto LABEL_40;
    v18 = FileHandle[0];
    v36 = 1;
    FileInformation = v33;
    v22 = ZwSetInformationFile(FileHandle[0], &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
    v19 = (char *)FileHandle[1];
    Status = v22;
    if ( v22 == 259 )
    {
      KeWaitForSingleObject((char *)FileHandle[1] + 152, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status < 0 )
    {
LABEL_39:
      SmKmStoreFileDelete(FileHandle);
      goto LABEL_40;
    }
    v16 = v34;
    if ( v34 )
    {
      v41 = v33;
      v23 = ZwSetInformationFile(v18, &IoStatusBlock, &v41, 8u, FileValidDataLengthInformation);
      if ( v23 == 259 )
      {
        KeWaitForSingleObject(v19 + 152, Executive, 0, 0, 0LL);
        v23 = IoStatusBlock.Status;
      }
      if ( v23 < 0 )
        HIDWORD(v35) = 1;
    }
LABEL_20:
    v24 = v38;
    if ( v33 / v38 < 0xFFFFFFFFLL )
    {
      Status = ZwQueryVolumeInformationFile(v18, &IoStatusBlock, &FsInformation, 0x18u, FileFsSizeInformation);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(v19 + 152, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
      {
        if ( !HIDWORD(v55)
          || ((HIDWORD(v55) - 1) & HIDWORD(v55)) != 0
          || HIDWORD(v55) > v39
          || HIDWORD(v55) > v24
          || HIDWORD(v55) > 0x1000 )
        {
          Status = -1070071787;
        }
        else
        {
          Status = SmKmStoreFileGetExtents(v18, v39, Context, v16, (__int64)&v35, (__int64)v46, (__int64)&v46[1]);
          if ( Status >= 0 )
          {
            if ( v16 || (Status = SmKmStoreFileOpenVolume(FileHandle[1], &v44, (char *)&v44 + 8), Status >= 0) )
            {
              if ( !a2 || (Status = SmKmStoreFileWriteHeader(FileHandle, v16), Status >= 0) )
              {
                Status = IoRegisterPlugPlayNotification(
                           EventCategoryTargetDeviceChange,
                           0,
                           FileHandle[1],
                           DriverObject,
                           SmcVolumePnpNotification,
                           a7,
                           &NotificationEntry);
                if ( Status >= 0 )
                {
                  v25 = v44;
                  *(_QWORD *)&v45 = NotificationEntry;
                  v26 = v48;
                  *v48 = *(_OWORD *)FileHandle;
                  v27 = v45;
                  v26[1] = v25;
                  v28 = *(_OWORD *)v46;
                  v26[2] = v27;
                  v26[3] = v28;
                  memset_0(FileHandle, 0, 0x40uLL);
                  Status = 0;
                  *v49 = HIDWORD(v55);
                  *v50 = v35;
                  *v51 = v33;
                  v29 = (_DWORD *)v53;
                  *v52 = v16;
                  *v29 = HIDWORD(v35);
                  goto LABEL_40;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      Status = -1073741811;
    }
    if ( !v36 )
      goto LABEL_40;
    goto LABEL_39;
  }
  Status = ZwQueryInformationFile(v18, &IoStatusBlock, &v56, 0x18u, FileStandardInformation);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(v12 + 152, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    v33 = *((_QWORD *)&v56 + 1);
    goto LABEL_20;
  }
LABEL_40:
  SmKmFileInfoCleanup(FileHandle);
  IoSetThreadHardErrorMode(EnableHardErrors);
  return (unsigned int)Status;
}
