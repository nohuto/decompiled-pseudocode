/*
 * XREFs of BiLogFileOwnerProcess @ 0x14068C42C
 * Callers:
 *     BiLoadSystemStore @ 0x140A288E0 (BiLoadSystemStore.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14069B360 (ZwQueryInformationFile.c)
 *     ZwQueryInformationProcess @ 0x14069B460 (ZwQueryInformationProcess.c)
 *     ZwOpenProcess @ 0x14069B600 (ZwOpenProcess.c)
 *     ZwOpenFile @ 0x14069B7A0 (ZwOpenFile.c)
 *     IopDmaOverrideConflict @ 0x1406EFE90 (IopDmaOverrideConflict.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall BiLogFileOwnerProcess(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v3; // xmm0
  unsigned int *v4; // rsi
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  UNICODE_STRING *v7; // r9
  NTSTATUS v8; // eax
  unsigned int *Pool2; // rax
  NTSTATUS v10; // eax
  unsigned int i; // r14d
  NTSTATUS v12; // eax
  unsigned int v13; // eax
  NTSTATUS v14; // eax
  const wchar_t *v15; // r9
  CLIENT_ID ClientId; // [rsp+30h] [rbp-49h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES v18; // [rsp+50h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+7h] BYREF
  ULONG Length; // [rsp+E8h] [rbp+6Fh] BYREF
  HANDLE ProcessHandle; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE FileHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ClientId = 0LL;
  v4 = 0LL;
  IoStatusBlock = 0LL;
  v5 = 0LL;
  memset(&v18, 0, 44);
  Length = 0;
  ProcessHandle = 0LL;
  FileHandle = 0LL;
  if ( (unsigned __int8)IopDmaOverrideConflict(a1, a2, a3, a1) )
  {
    *(double *)&v3 = BiLogMessage(2LL, L"Attempting to determine owner of file %ws.", *(_QWORD *)(v6 + 8));
    ObjectAttributes.ObjectName = v7;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = v3;
    v8 = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4020u);
    if ( v8 >= 0 )
    {
      Length = 1024;
      Pool2 = (unsigned int *)ExAllocatePool2(0x102uLL);
      v4 = Pool2;
      if ( Pool2 )
      {
        v10 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, Pool2, Length, FileProcessIdsUsingFileInformation);
        if ( v10 >= 0 )
        {
          if ( *v4 )
          {
            BiLogMessage(2LL, L"Found %d processes using this file.");
            for ( i = 0; ; ++i )
            {
              v5 = 0LL;
              if ( i >= *v4 )
                break;
              ClientId.UniqueThread = 0LL;
              ClientId.UniqueProcess = *(HANDLE *)&v4[2 * i + 2];
              v18.Length = 48;
              memset(&v18.RootDirectory, 0, 20);
              *(_OWORD *)&v18.SecurityDescriptor = 0LL;
              v12 = ZwOpenProcess(&ProcessHandle, 0x1000u, &v18, &ClientId);
              if ( v12 < 0 )
              {
                BiLogMessage(4LL, L"Failed to open process. Status: %x", (unsigned int)v12);
                break;
              }
              Length = 0;
              v13 = ZwQueryInformationProcess(ProcessHandle, ProcessImageFileName, 0LL, 0, &Length);
              if ( v13 != -2147483643 && v13 != -1073741789 && v13 != -1073741820 )
              {
                BiLogMessage(4LL, L"Failed to query process information for size. Status: %x", v13);
                break;
              }
              v5 = (_QWORD *)ExAllocatePool2(0x102uLL);
              if ( !v5 )
              {
                BiLogMessage(4LL, L"Failed to allocate memory for space for process name.");
                break;
              }
              v14 = ZwQueryInformationProcess(ProcessHandle, ProcessImageFileName, v5, Length, &Length);
              if ( v14 < 0 )
              {
                BiLogMessage(4LL, L"Failed to query process info. Status: %x", (unsigned int)v14);
                break;
              }
              if ( *(_WORD *)v5 )
                v15 = (const wchar_t *)v5[1];
              else
                v15 = L"System";
              BiLogMessage(4LL, L"Process Name [%d]: %ws", i, v15);
              ZwClose(ProcessHandle);
              ProcessHandle = 0LL;
              ExFreePoolWithTag(v5, 0x4B444342u);
            }
          }
          else
          {
            BiLogMessage(4LL, L"No processes are using this file.");
          }
        }
        else
        {
          BiLogMessage(4LL, L"Failed to query processes. Status: %x", (unsigned int)v10);
        }
      }
      else
      {
        BiLogMessage(4LL, L"Failed to allocate process ID buffer.");
      }
    }
    else
    {
      BiLogMessage(4LL, L"Failed to open file attributes. Status: %x", (unsigned int)v8);
    }
    if ( ProcessHandle )
      ZwClose(ProcessHandle);
    if ( v5 )
      ExFreePoolWithTag(v5, 0x4B444342u);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x4B444342u);
    if ( FileHandle )
      ZwClose(FileHandle);
  }
}
