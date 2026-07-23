/*
 * XREFs of DbgkCaptureLiveKernelDump @ 0x14057BF68
 * Callers:
 *     NtSystemDebugControl @ 0x140A4F080 (NtSystemDebugControl.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     IoCaptureLiveDump @ 0x1404DC764 (IoCaptureLiveDump.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1406A75D0 (ZwQueryInformationFile.c)
 *     DbgkpWerAllocatePool @ 0x1406F9218 (DbgkpWerAllocatePool.c)
 *     DbgkpWerFreePool @ 0x140706910 (DbgkpWerFreePool.c)
 *     DbgkpWerIsFullLiveDumpDisabled @ 0x140706930 (DbgkpWerIsFullLiveDumpDisabled.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140847A60 (ObReferenceObjectByHandleWithTag.c)
 *     ObOpenObjectByPointerWithTag @ 0x140A69F10 (ObOpenObjectByPointerWithTag.c)
 */

__int64 __fastcall DbgkCaptureLiveKernelDump(__int64 a1)
{
  KPROCESSOR_MODE PreviousMode; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Status; // ebx
  _DWORD *Pool; // rax
  __int64 v7; // r14
  void *v8; // rcx
  NTSTATUS v9; // eax
  __int64 v10; // r9
  const CHAR *v11; // r8
  void *v12; // rcx
  PVOID v13; // r12
  NTSTATUS v14; // eax
  HANDLE v15; // r13
  NTSTATUS v16; // eax
  int v17; // eax
  ULONG Tag[2]; // [rsp+20h] [rbp-38h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-18h] BYREF
  int FileInformation; // [rsp+A0h] [rbp+48h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+50h] BYREF
  PVOID v22; // [rsp+B0h] [rbp+58h] BYREF
  HANDLE FileHandle; // [rsp+B8h] [rbp+60h] BYREF

  FileInformation = 0;
  IoStatusBlock = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !a1 )
    return 3221225485LL;
  if ( (unsigned __int8)DbgkpWerIsFullLiveDumpDisabled() )
  {
    DbgPrintEx(5u, 1u, "DBGK: Full Live Kernel Dumps are disabled. Failing request.\n");
    return 3221227524LL;
  }
  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  v22 = 0LL;
  FileHandle = 0LL;
  --CurrentThread->KernelApcDisable;
  if ( _InterlockedExchange(&DbgkpBusy, 1) != 1 )
  {
    Pool = (_DWORD *)DbgkpWerAllocatePool(56LL);
    v7 = (__int64)Pool;
    if ( !Pool )
    {
      DbgPrintEx(5u, 0, "DBGK: Could not allocate IoLivedumpControl\n");
      Status = -1073741801;
LABEL_50:
      _InterlockedExchange(&DbgkpBusy, 0);
      goto LABEL_51;
    }
    Pool[1] = 56;
    *Pool = 2;
    v8 = *(void **)(a1 + 48);
    if ( v8
      && (v9 = ObReferenceObjectByHandleWithTag(
                 v8,
                 0x100001u,
                 (POBJECT_TYPE)ExEventObjectType,
                 PreviousMode,
                 0x57676244u,
                 &Object,
                 0LL),
          Status = v9,
          v9 < 0) )
    {
      v10 = *(_QWORD *)(a1 + 48);
      v11 = "DBGK: Invalid event handle %p, status 0x%X\n";
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 56) & 0x10) != 0 && (!*(_QWORD *)(a1 + 64) || *(_DWORD *)a1 < 2u || *(_DWORD *)(a1 + 60)) )
      {
        Status = -1073741811;
        DbgPrintEx(
          5u,
          1u,
          "DBGK: Requested selective dump with invalid parameters: Version %d, Flags: 0x%X, Control Structure: %p\n",
          *(_DWORD *)a1,
          *(_DWORD *)(a1 + 60),
          *(const void **)(a1 + 64));
        goto LABEL_45;
      }
      v12 = *(void **)(a1 + 40);
      if ( !v12 )
      {
        Status = -1073741811;
        goto LABEL_45;
      }
      v9 = ObReferenceObjectByHandleWithTag(
             v12,
             2u,
             (POBJECT_TYPE)IoFileObjectType,
             PreviousMode,
             0x57676244u,
             &v22,
             0LL);
      Status = v9;
      if ( v9 >= 0 )
      {
        v13 = v22;
        v14 = ObOpenObjectByPointerWithTag(
                v22,
                0x200u,
                0LL,
                2u,
                (POBJECT_TYPE)IoFileObjectType,
                0,
                0x57676244u,
                &FileHandle);
        v15 = FileHandle;
        Status = v14;
        if ( v14 >= 0 )
        {
          v16 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 4u, FileModeInformation);
          Status = v16;
          if ( v16 >= 0 )
          {
            Status = IoStatusBlock.Status;
            if ( IoStatusBlock.Status >= 0 )
            {
              if ( (FileInformation & 0x30) != 0 )
              {
                *(_QWORD *)(v7 + 16) = Object;
                *(_QWORD *)(v7 + 8) = v15;
                if ( (*(_DWORD *)(a1 + 56) & 4) != 0 )
                  *(_DWORD *)(v7 + 24) |= 4u;
                if ( (*(_DWORD *)(a1 + 56) & 8) != 0 )
                  *(_DWORD *)(v7 + 24) |= 0x10u;
                if ( (*(_DWORD *)(a1 + 56) & 0x10) != 0 )
                {
                  *(_DWORD *)(v7 + 24) |= 0x20u;
                  *(_QWORD *)(v7 + 48) = *(_QWORD *)(a1 + 64);
                }
                if ( (*(_DWORD *)(a1 + 60) & 1) != 0 )
                  *(_DWORD *)(v7 + 28) |= 1u;
                if ( (*(_DWORD *)(a1 + 60) & 2) != 0 )
                  *(_DWORD *)(v7 + 28) |= 2u;
                DbgPrintEx(5u, 3u, "DBGK: Calling IoCaptureLiveDump\n");
                v17 = IoCaptureLiveDump(
                        *(_DWORD *)(a1 + 4),
                        *(_QWORD *)(a1 + 8),
                        *(_QWORD *)(a1 + 16),
                        *(_QWORD *)(a1 + 24),
                        *(void **)(a1 + 32),
                        v7,
                        0LL);
                Status = v17;
                if ( v17 < 0 )
                  DbgPrintEx(5u, 0, "DBGK: IoCaptureLiveDump failed, status 0x%X\n", v17);
              }
              else
              {
                Status = -1073741811;
                DbgPrintEx(5u, 1u, "DBGK: File was not opened for synchronous access.\n");
              }
            }
            else
            {
              DbgPrintEx(
                5u,
                1u,
                "DBGK: ZwQueryInformationFile IoStatusBlock.Status is failure, status 0x%X\n",
                (unsigned int)IoStatusBlock.Status);
            }
          }
          else
          {
            DbgPrintEx(5u, 1u, "DBGK: ZwQueryInformationFile failed for dump file, status 0x%X\n", (unsigned int)v16);
          }
        }
        else
        {
          DbgPrintEx(5u, 1u, "DBGK: ObOpenObjectByPointerWithTag failed for file %p, status 0x%X\n", v13, v14);
        }
        if ( v15 )
          ZwClose(v15);
        goto LABEL_45;
      }
      v10 = *(_QWORD *)(a1 + 40);
      v11 = "DBGK: Invalid file handle %p, ObReferenceObjectByHandleWithTag returns status 0x%X\n";
    }
    Tag[0] = v9;
    DbgPrintEx(5u, 1u, v11, v10, *(_QWORD *)Tag);
LABEL_45:
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x57676244u);
    if ( v22 )
      ObfDereferenceObjectWithTag(v22, 0x57676244u);
    DbgkpWerFreePool(v7);
    goto LABEL_50;
  }
  Status = -1073741267;
LABEL_51:
  KeLeaveCriticalRegion();
  return Status;
}
