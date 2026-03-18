/*
 * XREFs of BiGetNtPartitionPath @ 0x140804030
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140802C54 (BiConvertBootEnvironmentDeviceToNt.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1404FBC30 (_wcsicmp.c)
 *     swprintf_s @ 0x1405006D0 (swprintf_s.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenFile @ 0x14069B7A0 (ZwOpenFile.c)
 *     ZwOpenDirectoryObject @ 0x14069BC40 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x14069DB00 (ZwQueryDirectoryObject.c)
 *     BiGetDriveLayoutBlock @ 0x140803F50 (BiGetDriveLayoutBlock.c)
 *     BiVerifyBootPartition @ 0x140804958 (BiVerifyBootPartition.c)
 *     BiTranslateSymbolicLink @ 0x140A801EC (BiTranslateSymbolicLink.c)
 *     BiGetPartitionVhdFilePath @ 0x140A82374 (BiGetPartitionVhdFilePath.c)
 *     BiIsValidDiskDevice @ 0x140AD62D4 (BiIsValidDiskDevice.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetNtPartitionPath(int a1, _QWORD *a2)
{
  wchar_t *v2; // rdi
  wchar_t **v3; // r13
  int v4; // eax
  wchar_t *v5; // r12
  int DirectoryObject; // ebx
  void *Pool2; // r14
  int i; // esi
  int v10; // esi
  char v11; // bl
  wchar_t **v12; // r15
  unsigned __int64 v13; // rcx
  _DWORD *v14; // r12
  _QWORD *v15; // rbx
  __int64 j; // rax
  __int64 v17; // r15
  ULONG v18; // eax
  const wchar_t *PartitionVhdFilePath; // rax
  bool v20; // zf
  __int64 v21; // rcx
  const wchar_t *v22; // rax
  ULONG ShareAccess[2]; // [rsp+20h] [rbp-E0h]
  int *OpenOptions; // [rsp+28h] [rbp-D8h]
  __int64 v25; // [rsp+30h] [rbp-D0h]
  char v26; // [rsp+40h] [rbp-C0h]
  bool v27; // [rsp+44h] [rbp-BCh]
  int v28; // [rsp+48h] [rbp-B8h]
  wchar_t **v29; // [rsp+50h] [rbp-B0h]
  int v30; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE DirectoryHandle; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v32; // [rsp+68h] [rbp-98h] BYREF
  wchar_t *Str1; // [rsp+70h] [rbp-90h] BYREF
  __int64 v34; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v36; // [rsp+88h] [rbp-78h] BYREF
  HANDLE FileHandle; // [rsp+90h] [rbp-70h] BYREF
  void *v38; // [rsp+98h] [rbp-68h]
  _QWORD *v39; // [rsp+A0h] [rbp-60h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES v41; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+108h] [rbp+8h] BYREF
  UNICODE_STRING v43; // [rsp+118h] [rbp+18h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+128h] [rbp+28h] BYREF
  _OWORD v45[2]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v46; // [rsp+158h] [rbp+58h]

  v39 = a2;
  v36 = 0LL;
  v46 = 0LL;
  v2 = 0LL;
  FileHandle = 0LL;
  v3 = 0LL;
  memset(v45, 0, sizeof(v45));
  v30 = 0;
  P = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v32 = 0LL;
  v34 = 0LL;
  DestinationString = 0LL;
  DirectoryHandle = 0LL;
  memset(&v41, 0, 44);
  v38 = 0LL;
  Str1 = 0LL;
  IoStatusBlock = 0LL;
  v43 = 0LL;
  v4 = BiVerifyBootPartition(a1, (unsigned int)&v32, (unsigned int)&v36, (unsigned int)&v34, (__int64)&Str1, 0LL);
  v5 = Str1;
  DirectoryObject = v4;
  if ( v4 < 0 )
    goto LABEL_77;
  Pool2 = (void *)ExAllocatePool2(0x102uLL);
  if ( !Pool2 )
    return 3221225495LL;
  v27 = 0;
  if ( v5 && !v32 )
    v27 = v36 == 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  DirectoryObject = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( DirectoryObject < 0 )
    goto LABEL_75;
  for ( i = 4096; ; i += 4096 )
  {
    v3 = (wchar_t **)ExAllocatePool2(0x102uLL);
    if ( !v3 )
    {
      DirectoryObject = -1073741801;
      goto LABEL_75;
    }
    v25 = 0LL;
    v30 = 0;
    OpenOptions = &v30;
    DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)v3);
    if ( DirectoryObject != 261 )
      break;
    ExFreePoolWithTag(v3, 0x4B444342u);
  }
  ZwClose(DirectoryHandle);
  v10 = 0;
  DirectoryHandle = 0LL;
  if ( (int)(DirectoryObject + 0x80000000) >= 0 && DirectoryObject != -2147483622 )
  {
LABEL_75:
    ExFreePoolWithTag(Pool2, 0x4B444342u);
    if ( v3 )
      goto LABEL_76;
    goto LABEL_77;
  }
  v11 = 0;
  v26 = 0;
  if ( !*(_WORD *)v3 )
    goto LABEL_73;
  v12 = v3 + 1;
  v29 = v3 + 1;
  while ( 2 )
  {
    if ( !(unsigned __int8)BiIsValidDiskDevice(*v12, v12[2]) )
      goto LABEL_68;
    swprintf_s((wchar_t *)Pool2, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v12, 0LL, OpenOptions, v25);
    if ( (int)BiGetDriveLayoutBlock((PCWSTR)Pool2, &P, (__int64)v45) < 0 )
      goto LABEL_68;
    if ( LODWORD(v45[0]) == 7 || !v5 )
    {
      v13 = *(_QWORD *)(v34 + 4) - *(_QWORD *)((char *)v45 + 4);
      if ( !v13 )
      {
        v13 = *(_QWORD *)(v34 + 12) - *(_QWORD *)((char *)v45 + 12);
        if ( !v13 )
          v13 = *(unsigned int *)(v34 + 20) - (unsigned __int64)DWORD1(v45[1]);
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
    if ( v36 )
    {
      if ( v10 == 1 )
      {
        ShareAccess[0] = *v36;
        swprintf_s((wchar_t *)Pool2, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v12, *(_QWORD *)ShareAccess);
        RtlInitUnicodeString(&v43, (PCWSTR)Pool2);
        v10 = 0;
        v41.Length = 48;
        v41.ObjectName = &v43;
        v41.RootDirectory = 0LL;
        v41.Attributes = 576;
        *(_OWORD *)&v41.SecurityDescriptor = 0LL;
        if ( ZwOpenFile(&FileHandle, 0x80000000, &v41, &IoStatusBlock, 3u, 0) >= 0 )
        {
          ZwClose(FileHandle);
          v11 = 1;
          v26 = 1;
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
      if ( v36 )
      {
        v15 = v36;
      }
      else if ( v32 )
      {
        v15 = v32;
      }
    }
    for ( j = 0LL; ; j = (unsigned int)(v28 + 1) )
    {
      v28 = j;
      if ( (unsigned int)j >= v14[1] )
        break;
      v17 = 36 * j;
      v18 = v14[36 * j + 18];
      if ( !v18 )
        continue;
      ShareAccess[0] = v18;
      swprintf_s((wchar_t *)Pool2, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v29, *(_QWORD *)ShareAccess);
      if ( v27 )
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
        if ( !v32 )
          continue;
        v20 = *v32 == *(_QWORD *)&v14[v17 + 14];
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
        v26 = 1;
        goto LABEL_59;
      }
    }
    v11 = v26;
LABEL_59:
    v12 = v29;
LABEL_60:
    v10 = 0;
LABEL_61:
    ExFreePoolWithTag(v14, 0x4B444342u);
    v5 = Str1;
    if ( !Str1 )
      goto LABEL_69;
    if ( !v11 )
      goto LABEL_68;
    if ( !v27 )
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
        v26 = 0;
LABEL_68:
        v12 += 4;
        v29 = v12;
        if ( !*((_WORD *)v12 - 4) )
        {
LABEL_69:
          if ( v11 )
            break;
LABEL_73:
          DirectoryObject = -1073741811;
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
    Pool2 = v38;
  }
  DirectoryObject = 0;
  *v39 = Pool2;
LABEL_76:
  ExFreePoolWithTag(v3, 0x4B444342u);
LABEL_77:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  return (unsigned int)DirectoryObject;
}
