/*
 * XREFs of PiDqDispatch @ 0x1409F1FF0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     IoIs32bitProcess @ 0x140402530 (IoIs32bitProcess.c)
 *     wcscmp @ 0x1404FD6E0 (wcscmp.c)
 *     PiDqQueryLock @ 0x1408D0BAC (PiDqQueryLock.c)
 *     PiDqQueryUnlock @ 0x1408D0C0C (PiDqQueryUnlock.c)
 *     PiDqQueryRelease @ 0x1408D19A0 (PiDqQueryRelease.c)
 *     PiDqIrpQueryGetResult @ 0x1409F1D48 (PiDqIrpQueryGetResult.c)
 *     PiDqQueryCreate @ 0x1409F21D8 (PiDqQueryCreate.c)
 *     PiDqQueryGetObjectManager @ 0x1409F22A4 (PiDqQueryGetObjectManager.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x1409F230C (PiDqObjectManagerUnregisterQuery.c)
 *     PiDqIrpQueryCreate @ 0x1409F2380 (PiDqIrpQueryCreate.c)
 *     PiDqIrpPropertySet @ 0x1409F2F90 (PiDqIrpPropertySet.c)
 */

__int64 __fastcall PiDqDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned int Status; // edi
  PFILE_OBJECT FileObject; // rcx
  UCHAR MajorFunction; // al
  PVOID *p_FsContext2; // r15
  __int64 FsContext2; // rbx
  IRP *v9; // rdi
  __int64 ObjectManager; // rbp
  __int64 v11; // rcx
  IRP *v12; // rcx
  const wchar_t *Buffer; // rbx
  __int64 v15; // rcx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  FileObject = CurrentStackLocation->FileObject;
  MajorFunction = CurrentStackLocation->MajorFunction;
  p_FsContext2 = &FileObject->FsContext2;
  FsContext2 = (__int64)FileObject->FsContext2;
  if ( !CurrentStackLocation->MajorFunction )
  {
    Buffer = FileObject->FileName.Buffer;
    Status = 0;
    if ( !wcscmp(L"\\Dev\\Query", Buffer) )
    {
      LOBYTE(v15) = IoIs32bitProcess(a2) == 0;
      Status = PiDqQueryCreate(v15, p_FsContext2);
    }
    else if ( !wcscmp(L"\\Dev\\NoState", Buffer) )
    {
      *p_FsContext2 = 0LL;
    }
    else
    {
      Status = -1073741811;
    }
    a2->IoStatus.Status = Status;
    goto LABEL_14;
  }
  switch ( MajorFunction )
  {
    case 2u:
      if ( FsContext2 )
      {
        PiDqQueryRelease(FileObject->FsContext2);
        CurrentStackLocation->FileObject->FsContext2 = 0LL;
      }
      goto LABEL_13;
    case 0xEu:
      if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4653056 )
      {
        return (unsigned int)PiDqIrpQueryCreate(a2);
      }
      else if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4653063
             || CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4653064 )
      {
        return (unsigned int)PiDqIrpQueryGetResult((__int64)a2);
      }
      else
      {
        v12 = a2;
        if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 4653068 )
        {
          Status = -1073741637;
          a2->IoStatus.Status = -1073741637;
          goto LABEL_15;
        }
        return (unsigned int)PiDqIrpPropertySet(a2);
      }
    case 0x12u:
      if ( FsContext2 )
      {
        v9 = 0LL;
        ObjectManager = 0LL;
        PiDqQueryLock((__int64)FileObject->FsContext2);
        if ( (*(_DWORD *)(FsContext2 + 216) & 4) != 0 )
          ObjectManager = PiDqQueryGetObjectManager(FsContext2);
        PiDqQueryUnlock(FsContext2);
        if ( ObjectManager )
          PiDqObjectManagerUnregisterQuery(ObjectManager, FsContext2);
        PiDqQueryLock(FsContext2);
        v11 = *(_QWORD *)(FsContext2 + 176);
        *(_DWORD *)(FsContext2 + 216) |= 8u;
        if ( v11 && _InterlockedExchange64((volatile __int64 *)(v11 + 104), 0LL) )
        {
          v9 = *(IRP **)(FsContext2 + 176);
          *(_QWORD *)(FsContext2 + 176) = 0LL;
        }
        PiDqQueryUnlock(FsContext2);
        if ( v9 )
        {
          v9->IoStatus.Information = 0LL;
          v9->IoStatus.Status = -1073741536;
          IofCompleteRequest(v9, 0);
        }
      }
LABEL_13:
      Status = 0;
      a2->IoStatus.Status = 0;
LABEL_14:
      v12 = a2;
LABEL_15:
      IofCompleteRequest(v12, 0);
      break;
  }
  return Status;
}
