/*
 * XREFs of IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x14058F5E0
 * Callers:
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C3730 (KiDeferredBugcheckRecoveryWorker.c)
 * Callees:
 *     IoSynchronousPageWriteEx @ 0x14025BD80 (IoSynchronousPageWriteEx.c)
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     MmBuildMdlForNonPagedPool @ 0x140293640 (MmBuildMdlForNonPagedPool.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x1406A75D0 (ZwQueryInformationFile.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 */

__int64 IoWriteCapturedPristineTriageDumpToDedicatedDumpFile()
{
  ULONG *v0; // rdi
  __int64 v1; // rdi
  NTSTATUS Status; // ebx
  void *v3; // rcx
  struct _MDL *Mdl; // rax
  struct _FILE_OBJECT *v5; // rsi
  struct _MDL *v6; // rdi
  PVOID Object; // [rsp+48h] [rbp+7h] BYREF
  struct _KEVENT v9; // [rsp+50h] [rbp+Fh] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+27h] BYREF
  __int128 FileInformation; // [rsp+78h] [rbp+37h] BYREF
  __int64 v12; // [rsp+88h] [rbp+47h]

  v0 = (ULONG *)KiPristineTriageDump;
  v12 = 0LL;
  memset(&v9, 0, sizeof(v9));
  FileInformation = 0LL;
  IoStatusBlock = 0LL;
  if ( !KiPristineTriageDump )
  {
    if ( *(_DWORD *)(CrashdmpDumpBlock + 1336) != 4 || (v1 = *(_QWORD *)(CrashdmpDumpBlock + 1328)) == 0 )
      return (unsigned int)-1073741670;
    v0 = (ULONG *)(v1 - 0x2000);
  }
  if ( v0 + 2048 == IoPreparedTriageDumpData )
  {
    v3 = *(void **)(CrashdmpDumpBlock + 1352);
    if ( v3 )
    {
      Object = 0LL;
      Status = ObReferenceObjectByHandle(v3, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
      if ( Status >= 0 )
      {
        Mdl = IoAllocateMdl(v0, v0[2049], 0, 0, 0LL);
        v5 = (struct _FILE_OBJECT *)Object;
        v6 = Mdl;
        if ( Mdl )
        {
          MmBuildMdlForNonPagedPool(Mdl);
          LOWORD(v9.Header.Lock) = 0;
          v9.Header.SignalState = 0;
          Object = 0LL;
          v9.Header.WaitListHead.Blink = &v9.Header.WaitListHead;
          v9.Header.WaitListHead.Flink = &v9.Header.WaitListHead;
          v9.Header.Size = 6;
          if ( ZwQueryInformationFile(
                 *(HANDLE *)(CrashdmpDumpBlock + 1352),
                 &IoStatusBlock,
                 &FileInformation,
                 0x18u,
                 FileStandardInformation) == 259 )
            KeWaitForSingleObject(&v5->Event, Executive, 0, 0, 0LL);
          Status = IoSynchronousPageWriteEx(v5, v6, (LARGE_INTEGER *)&Object, &v9, 0, 0LL, &IoStatusBlock);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&v9, Executive, 0, 0, 0LL);
            Status = IoStatusBlock.Status;
          }
          IoFreeMdl(v6);
        }
        else
        {
          Status = -1073741670;
        }
        ObfDereferenceObjectWithTag(v5, 0x746C6644u);
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)Status;
}
