/*
 * XREFs of CmpOpenHiveFile @ 0x14092FE64
 * Callers:
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CBE38 (CmpMountPreloadedHives.c)
 *     CmLoadKey @ 0x14092B788 (CmLoadKey.c)
 *     CmLoadAppKey @ 0x14092DB9C (CmLoadAppKey.c)
 *     CmpOpenHiveFiles @ 0x14092F1B0 (CmpOpenHiveFiles.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     PspUnlockThreadSecurityShared @ 0x14041AFC0 (PspUnlockThreadSecurityShared.c)
 *     PspLockThreadSecurityShared @ 0x14041F270 (PspLockThreadSecurityShared.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     SetFailureLocation @ 0x1404649E0 (SetFailureLocation.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     CmSiCreateEvent @ 0x14046D968 (CmSiCreateEvent.c)
 *     CmSiEventTupleCleanup @ 0x14047DA8C (CmSiEventTupleCleanup.c)
 *     CmSiEventTupleInitialize @ 0x14048A580 (CmSiEventTupleInitialize.c)
 *     CmSiWaitForSingleEvent @ 0x140493968 (CmSiWaitForSingleEvent.c)
 *     CmSiBugCheck @ 0x140668C6C (CmSiBugCheck.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1406A6630 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x1406A68F0 (ZwSetInformationFile.c)
 *     ZwOpenFile @ 0x1406A6A70 (ZwOpenFile.c)
 *     ZwFsControlFile @ 0x1406A6B30 (ZwFsControlFile.c)
 *     ZwQueryAttributesFile @ 0x1406A6BB0 (ZwQueryAttributesFile.c)
 *     ZwCreateFile @ 0x1406A6EB0 (ZwCreateFile.c)
 *     PsImpersonateClient @ 0x1409102D0 (PsImpersonateClient.c)
 *     CmpGetCompleteFileName @ 0x140930524 (CmpGetCompleteFileName.c)
 *     CmpLogHiveFileInaccessible @ 0x1409305F4 (CmpLogHiveFileInaccessible.c)
 *     CmpQueryFileSecurityDescriptor @ 0x140930A60 (CmpQueryFileSecurityDescriptor.c)
 *     CmpGetVolumeClusterSize @ 0x140930B1C (CmpGetVolumeClusterSize.c)
 *     CmpGetVolumeLogFileSizeCap @ 0x140930E60 (CmpGetVolumeLogFileSizeCap.c)
 *     PsRevertToSelf @ 0x140930F00 (PsRevertToSelf.c)
 */

__int64 __fastcall CmpOpenHiveFile(
        PCUNICODE_STRING Source,
        int a2,
        _QWORD *a3,
        int *a4,
        unsigned int a5,
        void *a6,
        __int64 a7,
        void *a8,
        __int64 a9,
        __int64 a10)
{
  char v11; // r15
  PCUNICODE_STRING v12; // r13
  struct _KTHREAD *CurrentThread; // rsi
  void *Thread; // r12
  __int64 v15; // rcx
  int v16; // eax
  NTSTATUS Status; // ebx
  int CompleteFileName; // eax
  int v19; // r8d
  ULONG CreateDisposition; // edi
  ULONG CreateOptions; // r13d
  SECURITY_IMPERSONATION_LEVEL *v22; // rbx
  int AttributesFile; // eax
  int Information; // esi
  __int64 v25; // r15
  int VolumeClusterSize; // eax
  HANDLE v27; // rax
  int v29; // r9d
  NTSTATUS v30; // eax
  NTSTATUS v31; // eax
  NTSTATUS v32; // eax
  NTSTATUS v33; // eax
  int AllocationSize; // [rsp+20h] [rbp-E0h]
  BOOLEAN CopyOnOpen; // [rsp+60h] [rbp-A0h]
  char v36; // [rsp+61h] [rbp-9Fh]
  bool EffectiveOnly; // [rsp+62h] [rbp-9Eh]
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  ACCESS_MASK DesiredAccess[2]; // [rsp+70h] [rbp-90h] BYREF
  ULONG FileAttributes; // [rsp+78h] [rbp-88h]
  ULONG ShareAccess; // [rsp+7Ch] [rbp-84h]
  PCUNICODE_STRING v42; // [rsp+80h] [rbp-80h]
  SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+88h] [rbp-78h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-70h] BYREF
  int InputBuffer; // [rsp+A0h] [rbp-60h] BYREF
  int v46; // [rsp+A4h] [rbp-5Ch]
  HANDLE Event[2]; // [rsp+A8h] [rbp-58h] BYREF
  PACCESS_TOKEN Token; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK v50; // [rsp+D0h] [rbp-30h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E0h] [rbp-20h] BYREF
  struct _KTHREAD *v52; // [rsp+118h] [rbp+18h]
  __int64 v53; // [rsp+120h] [rbp+20h]
  __int64 v54; // [rsp+128h] [rbp+28h]
  _QWORD *v55; // [rsp+130h] [rbp+30h]
  int *v56; // [rsp+138h] [rbp+38h]
  _OWORD v57[2]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v58; // [rsp+160h] [rbp+60h]
  __m128i FileInformation; // [rsp+168h] [rbp+68h] BYREF
  __m128i v60; // [rsp+178h] [rbp+78h]
  __int64 v61; // [rsp+188h] [rbp+88h]
  __int128 v62; // [rsp+190h] [rbp+90h] BYREF
  __int64 v63; // [rsp+1A0h] [rbp+A0h]

  v11 = a5;
  v12 = Source;
  v46 = a2;
  Token = a6;
  v53 = a7;
  v42 = Source;
  v50.Pointer = a8;
  CurrentThread = 0LL;
  v54 = a9;
  InputBuffer = 0;
  Thread = 0LL;
  CopyOnOpen = 0;
  EffectiveOnly = 0;
  *a3 = 0LL;
  FileHandle = 0LL;
  v36 = 0;
  v61 = 0LL;
  v63 = 0LL;
  v56 = a4;
  v55 = a3;
  FileInformation = 0LL;
  ImpersonationLevel = SecurityImpersonation;
  v60 = 0LL;
  *(_OWORD *)Event = 0LL;
  v62 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  CmSiEventTupleInitialize(Event);
  v16 = CmSiCreateEvent(v15, Event);
  Status = v16;
  if ( v16 < 0 )
  {
    SetFailureLocation(a10, 0, 35, v16, 16);
    goto LABEL_36;
  }
  CompleteFileName = CmpGetCompleteFileName(v12);
  Status = CompleteFileName;
  if ( CompleteFileName < 0 )
  {
    SetFailureLocation(a10, 0, 35, CompleteFileName, 32);
    goto LABEL_36;
  }
  if ( (a5 & 0x20) != 0 )
  {
    DesiredAccess[0] = 1;
    ShareAccess = ((a5 >> 7) & 1) == 0;
  }
  else
  {
    ShareAccess = 0;
    v19 = ((a5 & 8) == 0 ? 3 : 0) | 0x20000;
    if ( a2 )
      v19 = (a5 & 8) == 0 ? 3 : 0;
    DesiredAccess[0] = v19;
  }
  if ( a2 )
  {
    FileAttributes = 6;
    if ( (a5 & 0x20) != 0 )
      CreateDisposition = 1;
    else
      CreateDisposition = (a5 & 0x10) == 0 ? 3 : 0;
    CreateOptions = 32772;
  }
  else
  {
    FileAttributes = 128;
    if ( (a5 & 1) == 0 || (CreateDisposition = 3, (a5 & 0x20) != 0) )
      CreateDisposition = 1;
    CreateOptions = 49188;
  }
  if ( (a5 & 0x100) != 0 )
    CreateOptions = CreateOptions & 0xFFFEFFDF | 0x10000;
  v22 = (SECURITY_IMPERSONATION_LEVEL *)Token;
  if ( Token )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v52 = KeGetCurrentThread();
      PspLockThreadSecurityShared((__int64)CurrentThread, (__int64)v52);
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        Thread = CurrentThread[1].WaitBlock[1].Thread;
        if ( Thread
          || (Thread = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL),
              CopyOnOpen = 1,
              (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x100) == 0) )
        {
          CopyOnOpen = 0;
        }
        ObfReferenceObjectWithTag(Thread, 0x746C6644u);
        ImpersonationLevel = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
        v22 = (SECURITY_IMPERSONATION_LEVEL *)Token;
        EffectiveOnly = (*(_BYTE *)(&CurrentThread[1].MiscFlags + 1) & 4) != 0;
      }
      PspUnlockThreadSecurityShared((__int64)CurrentThread);
    }
    v30 = PsImpersonateClient(CurrentThread, v22, 0, 0, v22[49]);
    Status = v30;
    if ( v30 < 0 )
    {
      SetFailureLocation(a10, 0, 35, v30, 48);
      goto LABEL_35;
    }
    v11 = a5 | 0x40;
    v36 = 1;
  }
  ObjectAttributes.Attributes = 16 * (v11 & 0x40 | 0x24);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = v50.Pointer;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.Length = 48;
  Status = ZwCreateFile(
             &FileHandle,
             DesiredAccess[0],
             &ObjectAttributes,
             &IoStatusBlock,
             0LL,
             FileAttributes,
             ShareAccess,
             CreateDisposition,
             CreateOptions,
             0LL,
             0);
  if ( Status == -1073741790 )
  {
    SetFailureLocation(a10, 1, 35, -1073741790, 64);
    FileHandle = 0LL;
    *(_QWORD *)DesiredAccess = 0LL;
    v50 = 0LL;
    v58 = 0LL;
    memset(v57, 0, sizeof(v57));
    AttributesFile = ZwQueryAttributesFile((__int64)&ObjectAttributes, (__int64)v57);
    Status = AttributesFile;
    if ( AttributesFile >= 0 )
    {
      LODWORD(v58) = v58 & 0xFFFFFFFE;
      v31 = ZwOpenFile((PHANDLE)DesiredAccess, 0x100u, &ObjectAttributes, &v50, 7u, 0x4000u);
      Status = v31;
      if ( v31 >= 0 )
      {
        v32 = ZwSetInformationFile(*(HANDLE *)DesiredAccess, &v50, v57, 0x28u, FileBasicInformation);
        Status = v32;
        if ( v32 >= 0 )
        {
          ZwClose(*(HANDLE *)DesiredAccess);
          *(_QWORD *)DesiredAccess = 0LL;
          v33 = ZwCreateFile(
                  &FileHandle,
                  3u,
                  &ObjectAttributes,
                  &IoStatusBlock,
                  0LL,
                  FileAttributes,
                  0,
                  1u,
                  CreateOptions,
                  0LL,
                  0);
          Status = v33;
          if ( v33 >= 0 )
            Status = 0;
          else
            SetFailureLocation(a10, 0, 36, v33, 64);
        }
        else
        {
          SetFailureLocation(a10, 0, 36, v32, 48);
        }
      }
      else
      {
        SetFailureLocation(a10, 0, 36, v31, 32);
      }
    }
    else
    {
      SetFailureLocation(a10, 0, 36, AttributesFile, 16);
    }
    if ( *(_QWORD *)DesiredAccess )
      ZwClose(*(HANDLE *)DesiredAccess);
  }
  if ( v36 )
  {
    if ( Thread )
    {
      if ( PsImpersonateClient(CurrentThread, Thread, CopyOnOpen, EffectiveOnly, ImpersonationLevel) < 0 )
        CmSiBugCheck(0x26uLL, (ULONG_PTR)Thread, 0LL, 0LL);
    }
    else
    {
      PsRevertToSelf();
    }
  }
  if ( Status < 0 )
  {
    CmpLogHiveFileInaccessible(&DestinationString, (unsigned int)Status, CreateOptions, ShareAccess);
    AllocationSize = 80;
LABEL_45:
    v29 = Status;
LABEL_46:
    SetFailureLocation(a10, 0, 35, v29, AllocationSize);
    goto LABEL_35;
  }
  Information = IoStatusBlock.Information;
  if ( (v11 & 0x28) == 0 )
  {
    LODWORD(v61) = 0;
    FileInformation = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    v60 = FileInformation;
    ZwSetInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation);
  }
  if ( (v11 & 2) != 0 && (v11 & 0x20) == 0 )
  {
    Status = ZwFsControlFile(FileHandle, Event[0], 0LL, 0LL, &IoStatusBlock, 0x9004Fu, 0LL, 0, 0LL, 0);
    if ( Status == 259 )
    {
      CmSiWaitForSingleEvent((__int64)Event);
      Status = IoStatusBlock.Status;
    }
    if ( (int)(Status + 0x80000000) >= 0 && Status != -1073741808 )
    {
      AllocationSize = 96;
      goto LABEL_45;
    }
  }
  if ( ZwFsControlFile(FileHandle, Event[0], 0LL, 0LL, &IoStatusBlock, 0x9C040u, &InputBuffer, 4u, 0LL, 0) == 259 )
    CmSiWaitForSingleEvent((__int64)Event);
  if ( !v46 )
  {
    if ( Information != 2
      && ZwQueryInformationFile(FileHandle, &IoStatusBlock, &v62, 0x18u, FileStandardInformation) >= 0
      && !*((_QWORD *)&v62 + 1) )
    {
      Information = 2;
    }
    v25 = v53;
    if ( v53 )
    {
      VolumeClusterSize = CmpGetVolumeClusterSize(FileHandle);
      Status = VolumeClusterSize;
      if ( VolumeClusterSize < 0 )
      {
        AllocationSize = 112;
        goto LABEL_56;
      }
      *(_DWORD *)(v25 + 4) = CmpGetVolumeLogFileSizeCap(FileHandle);
    }
    if ( !v54 )
      goto LABEL_34;
    VolumeClusterSize = CmpQueryFileSecurityDescriptor(FileHandle);
    Status = VolumeClusterSize;
    if ( VolumeClusterSize >= 0 )
      goto LABEL_34;
    AllocationSize = 128;
LABEL_56:
    v29 = VolumeClusterSize;
    goto LABEL_46;
  }
LABEL_34:
  v27 = FileHandle;
  Status = 0;
  FileHandle = 0LL;
  *v55 = v27;
  *v56 = Information;
LABEL_35:
  v12 = v42;
LABEL_36:
  if ( DestinationString.Buffer && DestinationString.Buffer != v12->Buffer )
    CmSiFreeMemory((PPRIVILEGE_SET)DestinationString.Buffer);
  if ( Thread )
    ObfDereferenceObjectWithTag(Thread, 0x746C6644u);
  CmSiEventTupleCleanup((__int64)Event);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)Status;
}
