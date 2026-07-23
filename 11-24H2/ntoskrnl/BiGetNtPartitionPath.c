/*
 * XREFs of BiGetNtPartitionPath @ 0x1408142E8
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140812F0C (BiConvertBootEnvironmentDeviceToNt.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     swprintf_s @ 0x140500710 (swprintf_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenFile @ 0x1406A7A10 (ZwOpenFile.c)
 *     ZwOpenDirectoryObject @ 0x1406A7EB0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1406A9D70 (ZwQueryDirectoryObject.c)
 *     BiIsValidDiskDevice @ 0x1406F7734 (BiIsValidDiskDevice.c)
 *     BiGetDriveLayoutBlock @ 0x140814208 (BiGetDriveLayoutBlock.c)
 *     BiVerifyBootPartition @ 0x140814C10 (BiVerifyBootPartition.c)
 *     BiTranslateSymbolicLink @ 0x140A7EA6C (BiTranslateSymbolicLink.c)
 *     BiGetPartitionVhdFilePath @ 0x140A816B8 (BiGetPartitionVhdFilePath.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetNtPartitionPath(int a1, _QWORD *a2)
{
  wchar_t *v2; // rdi
  wchar_t **v3; // r13
  int v4; // eax
  wchar_t *v5; // r12
  NTSTATUS v6; // ebx
  void *Pool2; // r14
  ULONG i; // esi
  int v10; // esi
  char v11; // bl
  wchar_t **v12; // r15
  unsigned __int64 v13; // rcx
  _DWORD *v14; // r12
  _QWORD *v15; // rbx
  __int64 j; // rax
  __int64 v17; // r15
  int v18; // eax
  const wchar_t *PartitionVhdFilePath; // rax
  bool v20; // zf
  __int64 v21; // rcx
  const wchar_t *v22; // rax
  BOOLEAN RestartScan[8]; // [rsp+20h] [rbp-E0h]
  char v24; // [rsp+40h] [rbp-C0h]
  bool v25; // [rsp+44h] [rbp-BCh]
  int v26; // [rsp+48h] [rbp-B8h]
  wchar_t **v27; // [rsp+50h] [rbp-B0h]
  ULONG Context; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE DirectoryHandle; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v30; // [rsp+68h] [rbp-98h] BYREF
  wchar_t *Str1; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v34; // [rsp+88h] [rbp-78h] BYREF
  HANDLE FileHandle; // [rsp+90h] [rbp-70h] BYREF
  void *v36; // [rsp+98h] [rbp-68h]
  _QWORD *v37; // [rsp+A0h] [rbp-60h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES v39; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+108h] [rbp+8h] BYREF
  UNICODE_STRING v41; // [rsp+118h] [rbp+18h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+128h] [rbp+28h] BYREF
  _OWORD v43[2]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v44; // [rsp+158h] [rbp+58h]

  v37 = a2;
  v34 = 0LL;
  v44 = 0LL;
  v2 = 0LL;
  FileHandle = 0LL;
  v3 = 0LL;
  memset(v43, 0, sizeof(v43));
  Context = 0;
  P = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v30 = 0LL;
  v32 = 0LL;
  DestinationString = 0LL;
  DirectoryHandle = 0LL;
  memset(&v39, 0, 44);
  v36 = 0LL;
  Str1 = 0LL;
  IoStatusBlock = 0LL;
  v41 = 0LL;
  v4 = BiVerifyBootPartition(a1, (unsigned int)&v30, (unsigned int)&v34, (unsigned int)&v32, (__int64)&Str1, 0LL);
  v5 = Str1;
  v6 = v4;
  if ( v4 < 0 )
    goto LABEL_77;
  Pool2 = (void *)ExAllocatePool2(0x102uLL, 0x58uLL, 0x4B444342u);
  if ( !Pool2 )
    return 3221225495LL;
  v25 = 0;
  if ( v5 && !v30 )
    v25 = v34 == 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v6 < 0 )
    goto LABEL_75;
  for ( i = 4096; ; i += 4096 )
  {
    v3 = (wchar_t **)ExAllocatePool2(0x102uLL, i, 0x4B444342u);
    if ( !v3 )
    {
      v6 = -1073741801;
      goto LABEL_75;
    }
    Context = 0;
    v6 = ZwQueryDirectoryObject(DirectoryHandle, v3, i, 0, 1u, &Context, 0LL);
    if ( v6 != 261 )
      break;
    ExFreePoolWithTag(v3, 0x4B444342u);
  }
  ZwClose(DirectoryHandle);
  v10 = 0;
  DirectoryHandle = 0LL;
  if ( (int)(v6 + 0x80000000) >= 0 && v6 != -2147483622 )
  {
LABEL_75:
    ExFreePoolWithTag(Pool2, 0x4B444342u);
    if ( v3 )
      goto LABEL_76;
    goto LABEL_77;
  }
  v11 = 0;
  v24 = 0;
  if ( !*(_WORD *)v3 )
    goto LABEL_73;
  v12 = v3 + 1;
  v27 = v3 + 1;
  while ( 2 )
  {
    if ( !BiIsValidDiskDevice(*v12, v12[2], 0LL) )
      goto LABEL_68;
    swprintf_s((wchar_t *)Pool2, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v12, 0LL);
    if ( (int)BiGetDriveLayoutBlock((PCWSTR)Pool2, &P, (__int64)v43) < 0 )
      goto LABEL_68;
    if ( LODWORD(v43[0]) == 7 || !v5 )
    {
      v13 = *(_QWORD *)(v32 + 4) - *(_QWORD *)((char *)v43 + 4);
      if ( !v13 )
      {
        v13 = *(_QWORD *)(v32 + 12) - *(_QWORD *)((char *)v43 + 12);
        if ( !v13 )
          v13 = *(unsigned int *)(v32 + 20) - (unsigned __int64)DWORD1(v43[1]);
      }
      if ( v13 )
      {
        ExFreePoolWithTag(P, 0x4B444342u);
        goto LABEL_68;
      }
    }
    v14 = P;
    if ( *(_DWORD *)P )
    {
      if ( *(_DWORD *)P != 1 )
        v10 = 2;
    }
    else
    {
      v10 = 1;
    }
    if ( v34 )
    {
      if ( v10 == 1 )
      {
        *(_DWORD *)RestartScan = *v34;
        swprintf_s((wchar_t *)Pool2, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v12, *(_QWORD *)RestartScan);
        RtlInitUnicodeString(&v41, (PCWSTR)Pool2);
        v10 = 0;
        v39.Length = 48;
        v39.ObjectName = &v41;
        v39.RootDirectory = 0LL;
        v39.Attributes = 576;
        *(_OWORD *)&v39.SecurityDescriptor = 0LL;
        if ( ZwOpenFile(&FileHandle, 0x80000000, &v39, &IoStatusBlock, 3u, 0) >= 0 )
        {
          ZwClose(FileHandle);
          v11 = 1;
          v24 = 1;
        }
        goto LABEL_61;
      }
      goto LABEL_35;
    }
    if ( v10 != 1 )
    {
LABEL_35:
      if ( v10 )
        goto LABEL_60;
    }
    v15 = 0LL;
    if ( !v10 )
    {
      if ( v34 )
      {
        v15 = v34;
      }
      else if ( v30 )
      {
        v15 = v30;
      }
    }
    for ( j = 0LL; ; j = (unsigned int)(v26 + 1) )
    {
      v26 = j;
      if ( (unsigned int)j >= v14[1] )
        break;
      v17 = 36 * j;
      v18 = v14[36 * j + 18];
      if ( !v18 )
        continue;
      *(_DWORD *)RestartScan = v18;
      swprintf_s((wchar_t *)Pool2, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v27, *(_QWORD *)RestartScan);
      if ( v25 )
      {
        PartitionVhdFilePath = (const wchar_t *)BiGetPartitionVhdFilePath((PCWSTR)Pool2);
        v2 = (wchar_t *)PartitionVhdFilePath;
        if ( PartitionVhdFilePath )
        {
          if ( !wcsicmp(Str1, PartitionVhdFilePath) )
            goto LABEL_57;
          ExFreePoolWithTag(v2, 0x4B444342u);
          v2 = 0LL;
        }
      }
      if ( v10 == 1 )
      {
        if ( !v30 )
          continue;
        v20 = *v30 == *(_QWORD *)&v14[v17 + 14];
      }
      else
      {
        if ( !v15 )
          continue;
        v21 = *v15 - *(_QWORD *)&v14[v17 + 24];
        if ( *v15 == *(_QWORD *)&v14[v17 + 24] )
          v21 = v15[1] - *(_QWORD *)&v14[v17 + 26];
        v20 = v21 == 0;
      }
      if ( v20 )
      {
LABEL_57:
        v11 = 1;
        v24 = 1;
        goto LABEL_59;
      }
    }
    v11 = v24;
LABEL_59:
    v12 = v27;
LABEL_60:
    v10 = 0;
LABEL_61:
    ExFreePoolWithTag(v14, 0x4B444342u);
    v5 = Str1;
    if ( !Str1 )
      goto LABEL_69;
    if ( !v11 )
      goto LABEL_68;
    if ( !v25 )
    {
      v22 = (const wchar_t *)BiGetPartitionVhdFilePath((PCWSTR)Pool2);
      v2 = (wchar_t *)v22;
      if ( !v22 )
        goto LABEL_67;
      if ( wcsicmp(v5, v22) )
      {
        ExFreePoolWithTag(v2, 0x4B444342u);
        v2 = 0LL;
LABEL_67:
        v11 = 0;
        v24 = 0;
LABEL_68:
        v12 += 4;
        v27 = v12;
        if ( !*((_WORD *)v12 - 4) )
        {
LABEL_69:
          if ( v11 )
            break;
LABEL_73:
          v6 = -1073741811;
          goto LABEL_75;
        }
        continue;
      }
    }
    break;
  }
  if ( (int)BiTranslateSymbolicLink((PCWSTR)Pool2) >= 0 )
  {
    ExFreePoolWithTag(Pool2, 0x4B444342u);
    Pool2 = v36;
  }
  v6 = 0;
  *v37 = Pool2;
LABEL_76:
  ExFreePoolWithTag(v3, 0x4B444342u);
LABEL_77:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  return (unsigned int)v6;
}
