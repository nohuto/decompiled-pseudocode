/*
 * XREFs of IopFileUtilWalkDirectoryTreeHelper @ 0x140735AF0
 * Callers:
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x1407358F0 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeTopDown @ 0x140C26540 (IopFileUtilWalkDirectoryTreeTopDown.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1403FFE80 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14040BAE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14040BBA0 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1404FE3B0 (_wcsicmp.c)
 *     ZwWaitForSingleObject @ 0x1406A6490 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenFile @ 0x1406A6A70 (ZwOpenFile.c)
 *     ZwQueryDirectoryFile @ 0x1406A6AB0 (ZwQueryDirectoryFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopFileUtilWalkDirectoryTreeHelper(
        UNICODE_STRING *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int *FileInformation,
        __int16 a6,
        __int64 a7)
{
  char v7; // r13
  UNICODE_STRING *v8; // rsi
  char v9; // di
  int Status; // ebx
  unsigned int *v11; // rdi
  NTSTATUS v12; // eax
  unsigned __int64 v13; // rax
  __int16 v14; // cx
  unsigned __int16 v15; // r12
  UNICODE_STRING *Pool2; // rsi
  __int64 v17; // r8
  char v18; // r14
  UNICODE_STRING **v19; // rax
  __int64 v20; // rax
  BOOLEAN v22; // [rsp+58h] [rbp-71h]
  HANDLE FileHandle; // [rsp+68h] [rbp-61h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-59h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-39h] BYREF
  __int16 v29; // [rsp+140h] [rbp+77h]

  ObjectAttributes.ObjectName = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v7 = a2;
  v8 = a1;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  v9 = 1;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Status = ZwOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 1u, ~(a2 << 17) & 0x200000 | 0x4001);
  if ( Status < 0 )
    return (unsigned int)Status;
LABEL_2:
  v22 = v9;
  v11 = FileInformation;
  v12 = ZwQueryDirectoryFile(
          FileHandle,
          0LL,
          0LL,
          0LL,
          &IoStatusBlock,
          FileInformation,
          0x3FEu,
          FileBothDirectoryInformation,
          0,
          0LL,
          v22);
  Status = v12;
  if ( v12 < 0 )
    goto LABEL_27;
  if ( v12 == 259 )
  {
    ZwWaitForSingleObject(FileHandle, 1u, 0LL);
    Status = IoStatusBlock.Status;
    if ( IoStatusBlock.Status < 0 )
      goto LABEL_27;
  }
  while ( 1 )
  {
    v13 = (unsigned __int64)v11[15] >> 1;
    v14 = *((_WORD *)v11 + v13 + 47);
    *((_WORD *)v11 + v13 + 47) = 0;
    v29 = v14;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)v11 + 47);
    v15 = v8->Length + DestinationString.Length + 2;
    Pool2 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      break;
    Pool2[1].MaximumLength = v15;
    Pool2[1].Buffer = &Pool2[2].Length;
    Pool2[1].Length = 0;
    RtlCopyUnicodeString(Pool2 + 1, a1);
    RtlAppendUnicodeToString(Pool2 + 1, L"\\");
    RtlAppendUnicodeStringToString(Pool2 + 1, &DestinationString);
    v17 = v11[14];
    if ( (v17 & 0x10) == 0 )
    {
      if ( (v7 & 1) != 0 )
        Status = guard_dispatch_icall_no_overrides(&Pool2[1], &DestinationString, v17, a4);
LABEL_20:
      ExFreePoolWithTag(Pool2, 0);
      goto LABEL_21;
    }
    if ( !wcsicmp((const wchar_t *)v11 + 47, L".") || (v18 = 0, !wcsicmp((const wchar_t *)v11 + 47, L"..")) )
      v18 = 1;
    if ( (v7 & 2) != 0 )
    {
      if ( (v7 & 4) != 0 && v18 )
        goto LABEL_20;
      Status = guard_dispatch_icall_no_overrides(&Pool2[1], &DestinationString, v11[14], a4);
    }
    if ( v18 || (v7 & 8) == 0 )
      goto LABEL_20;
    v19 = *(UNICODE_STRING ***)(a7 + 8);
    if ( *v19 != (UNICODE_STRING *)a7 )
      __fastfail(3u);
    *(_QWORD *)&Pool2->Length = a7;
    Pool2->Buffer = (wchar_t *)v19;
    *v19 = Pool2;
    *(_QWORD *)(a7 + 8) = Pool2;
LABEL_21:
    if ( Status < 0 )
      goto LABEL_27;
    v8 = a1;
    *((_WORD *)v11 + ((unsigned __int64)v11[15] >> 1) + 47) = v29;
    v20 = *v11;
    if ( !(_DWORD)v20 )
    {
      v9 = 0;
      goto LABEL_2;
    }
    v11 = (unsigned int *)((char *)v11 + v20);
  }
  Status = -1073741670;
LABEL_27:
  ZwClose(FileHandle);
  if ( Status == -2147483642 )
    return 0;
  return (unsigned int)Status;
}
