/*
 * XREFs of PiDqDispatch @ 0x1408377C0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     IoIs32bitProcess @ 0x140401A30 (IoIs32bitProcess.c)
 *     wcscmp @ 0x1404FD6A0 (wcscmp.c)
 *     PiDqIrpQueryGetResult @ 0x140836400 (PiDqIrpQueryGetResult.c)
 *     PiDqQueryCreate @ 0x1408379A8 (PiDqQueryCreate.c)
 *     PiDqIrpQueryCreate @ 0x140837A74 (PiDqIrpQueryCreate.c)
 *     PiDqQueryLock @ 0x1408384AC (PiDqQueryLock.c)
 *     PiDqQueryUnlock @ 0x14083850C (PiDqQueryUnlock.c)
 *     PiDqQueryRelease @ 0x140839334 (PiDqQueryRelease.c)
 *     PiDqQueryGetObjectManager @ 0x1408393CC (PiDqQueryGetObjectManager.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x140839848 (PiDqObjectManagerUnregisterQuery.c)
 *     PiDqIrpPropertySet @ 0x14095E610 (PiDqIrpPropertySet.c)
 */

__int64 __fastcall PiDqDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned int Status; // edi
  PFILE_OBJECT FileObject; // rcx
  UCHAR MajorFunction; // al
  PVOID *p_FsContext2; // r15
  IRP **FsContext2; // rbx
  IRP *v9; // rdi
  __int64 ObjectManager; // rbp
  IRP *v11; // rcx
  IRP *v12; // rcx
  const wchar_t *Buffer; // rbx
  __int64 v15; // rcx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  FileObject = CurrentStackLocation->FileObject;
  MajorFunction = CurrentStackLocation->MajorFunction;
  p_FsContext2 = &FileObject->FsContext2;
  FsContext2 = (IRP **)FileObject->FsContext2;
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
        PiDqQueryLock(FileObject->FsContext2);
        if ( ((_DWORD)FsContext2[27] & 4) != 0 )
          ObjectManager = PiDqQueryGetObjectManager(FsContext2);
        PiDqQueryUnlock(FsContext2);
        if ( ObjectManager )
          PiDqObjectManagerUnregisterQuery(ObjectManager, FsContext2);
        PiDqQueryLock(FsContext2);
        v11 = FsContext2[22];
        *((_DWORD *)FsContext2 + 54) |= 8u;
        if ( v11 && _InterlockedExchange64((volatile __int64 *)&v11->CancelRoutine, 0LL) )
        {
          v9 = FsContext2[22];
          FsContext2[22] = 0LL;
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
