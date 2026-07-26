/*
 * XREFs of NdisOpenFile @ 0x1400D4880
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Z @ 0x1400511B0 (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_D @ 0x1400527F0 (WPP_RECORDER_SF_D_ea_1400527F0.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

void __stdcall NdisOpenFile(
        PNDIS_STATUS Status,
        PNDIS_HANDLE FileHandle,
        PUINT FileLength,
        PNDIS_STRING FileName,
        NDIS_PHYSICAL_ADDRESS HighestAcceptableAddress)
{
  PNDIS_HANDLE v7; // r12
  unsigned __int16 v9; // ax
  __int64 Pool2; // rax
  NTSTATUS v11; // edi
  NTSTATUS v12; // eax
  int v13; // edx
  __int64 v14; // r14
  void *v15; // rax
  int v16; // edx
  void *v17; // rsi
  NTSTATUS v18; // r15d
  int v19; // edx
  _QWORD *v20; // rax
  _BYTE *v21; // rdi
  HANDLE FileHandlea; // [rsp+60h] [rbp-71h] BYREF
  _UNICODE_STRING Destination; // [rsp+68h] [rbp-69h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-59h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-49h] BYREF
  __int128 FileInformation; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-9h]

  FileHandlea = 0LL;
  v27 = 0LL;
  v7 = FileHandle;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Destination = 0LL;
  FileInformation = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(FileHandle) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)FileHandle,
      1,
      10,
      (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids);
  }
  v9 = FileName->MaximumLength + 60;
  if ( v9 < 0x3Cu )
  {
    *Status = -2147483643;
    Destination.MaximumLength = -1;
    goto LABEL_33;
  }
  Destination.MaximumLength = FileName->MaximumLength + 60;
  Pool2 = ExAllocatePool2(66LL, v9, 1852195918LL);
  Destination.Buffer = (wchar_t *)Pool2;
  if ( !Pool2 )
  {
    *Status = -1073741670;
    goto LABEL_33;
  }
  Destination.Length = 58;
  *(_OWORD *)Pool2 = *(_OWORD *)L"\\SystemRoot\\system32\\drivers\\";
  *(_OWORD *)(Pool2 + 16) = *(_OWORD *)L"oot\\system32\\drivers\\";
  *(_OWORD *)(Pool2 + 32) = *(_OWORD *)L"em32\\drivers\\";
  *(_QWORD *)(Pool2 + 48) = *(_QWORD *)L"vers\\";
  *(_DWORD *)(Pool2 + 56) = *(_DWORD *)L"\\";
  RtlAppendUnicodeStringToString(&Destination, FileName);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xBu,
      (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids,
      &Destination.Length);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &Destination;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = ZwCreateFile(&FileHandlea, 0x100001u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x20u, 0LL, 0);
  ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(FileHandle) = 2;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)FileHandle,
        1,
        12,
        (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids,
        v11);
    }
    *Status = -1073676261;
    goto LABEL_33;
  }
  v12 = ZwQueryInformationFile(FileHandlea, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v13,
        1,
        13,
        (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids,
        v12);
    }
LABEL_15:
    ZwClose(FileHandlea);
    *Status = -1073676260;
    goto LABEL_33;
  }
  v14 = DWORD2(FileInformation);
  if ( !DWORD2(FileInformation) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v13,
        1,
        14,
        (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids,
        SBYTE8(FileInformation));
    }
    goto LABEL_15;
  }
  v15 = (void *)ExAllocatePool2(66LL, DWORD2(FileInformation), 1768309838LL);
  v17 = v15;
  if ( !v15 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v16,
        1,
        15,
        (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids);
    }
    goto LABEL_15;
  }
  v18 = ZwReadFile(FileHandlea, 0LL, 0LL, 0LL, &IoStatusBlock, v15, v14, 0LL, 0LL);
  ZwClose(FileHandlea);
  if ( v18 >= 0 && IoStatusBlock.Information == v14 )
  {
    v20 = (_QWORD *)ExAllocatePool2(64LL, 24LL, 1684423758LL);
    v21 = v20;
    if ( v20 )
    {
      *v20 = v17;
      KeInitializeSpinLock(v20 + 1);
      *v7 = v21;
      *FileLength = v14;
      *Status = 0;
      v21[16] = 0;
    }
    else
    {
      *Status = -1073741670;
      ExFreePoolWithTag(v17, 0);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = 2;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v19,
        1,
        16,
        (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids,
        v18);
    }
    *Status = -1073676260;
    ExFreePoolWithTag(v17, 0);
  }
LABEL_33:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(FileHandle) = 4;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)FileHandle,
      1,
      17,
      (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids,
      *Status);
  }
}
