/*
 * XREFs of NtCopyFileChunk @ 0x140970910
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     IopPopulateCopyWriteWorkerData @ 0x1402D379C (IopPopulateCopyWriteWorkerData.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     IopReferenceFileObject @ 0x1403F6490 (IopReferenceFileObject.c)
 *     IoIs32bitProcess @ 0x140401A30 (IoIs32bitProcess.c)
 *     IopFileObjectRevoked @ 0x1404063C0 (IopFileObjectRevoked.c)
 *     IopWaitForSynchronousIoEvent @ 0x14043A8D0 (IopWaitForSynchronousIoEvent.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x140484034 (IopFreeCopyObjectsFromDataBuffer.c)
 *     IopExceptionFilter @ 0x140592C78 (IopExceptionFilter.c)
 *     ZwCreateEvent @ 0x14069BA40 (ZwCreateEvent.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     IopXxxControlFile @ 0x1408C3AD0 (IopXxxControlFile.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     IopReadFile @ 0x140935F80 (IopReadFile.c)
 *     ObReferenceFileObjectForWrite @ 0x140970E80 (ObReferenceFileObjectForWrite.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtCopyFileChunk(
        HANDLE SourceHandle,
        HANDLE DestinationHandle,
        HANDLE EventHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG Length,
        PLARGE_INTEGER SourceOffset,
        PLARGE_INTEGER DestOffset,
        PULONG SourceKey,
        PULONG DestKey,
        ULONG Flags)
{
  struct _KEVENT *v11; // r14
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v13; // rcx
  __int128 v14; // xmm6
  LONGLONG v15; // rdi
  LONGLONG v16; // rax
  struct _IRP *Pool2; // rax
  struct _IRP *v18; // rsi
  struct _IRP *v19; // r13
  NTSTATUS File; // edi
  __int64 Pointer; // rcx
  HANDLE v22; // rdx
  ULONG v23; // r13d
  struct _FILE_OBJECT **v24; // rdi
  PIRP *v26; // r13
  NTSTATUS v27; // eax
  int InitialState; // [rsp+20h] [rbp-168h]
  NTSTATUS Status; // [rsp+70h] [rbp-118h]
  char v30; // [rsp+88h] [rbp-100h]
  HANDLE EventHandlea; // [rsp+90h] [rbp-F8h] BYREF
  PIRP *p_ThreadListEntry; // [rsp+98h] [rbp-F0h]
  LONGLONG QuadPart; // [rsp+A0h] [rbp-E8h]
  LONGLONG v34; // [rsp+A8h] [rbp-E0h]
  __int64 v35; // [rsp+B0h] [rbp-D8h]
  PVOID Object; // [rsp+B8h] [rbp-D0h] BYREF
  PVOID v37; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 p_Information; // [rsp+C8h] [rbp-C0h]
  _DWORD *v39; // [rsp+D0h] [rbp-B8h]
  PIRP v40; // [rsp+D8h] [rbp-B0h]
  __int128 v41; // [rsp+E0h] [rbp-A8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v43[4]; // [rsp+120h] [rbp-68h] BYREF
  HANDLE v44; // [rsp+190h] [rbp+8h]
  ULONG Flagsa; // [rsp+1D8h] [rbp+50h]

  v44 = SourceHandle;
  v41 = 0LL;
  v35 = 0LL;
  v39 = 0LL;
  EventHandlea = (HANDLE)-1LL;
  v11 = 0LL;
  v40 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)SourceOffset & 3) != 0
      || (v13 = 0x7FFFFFFF0000LL, QuadPart = SourceOffset->QuadPart, ((unsigned __int8)DestOffset & 3) != 0) )
    {
      ExRaiseDatatypeMisalignment();
    }
    v34 = DestOffset->QuadPart;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v13 = (__int64)IoStatusBlock;
    *(_DWORD *)v13 = *(_DWORD *)v13;
    v14 = *(_OWORD *)&IoStatusBlock->Status;
    v41 = *(_OWORD *)&IoStatusBlock->Status;
    v15 = QuadPart;
    v16 = v34;
    SourceHandle = v44;
  }
  else
  {
    v15 = SourceOffset->QuadPart;
    QuadPart = SourceOffset->QuadPart;
    v16 = DestOffset->QuadPart;
    v34 = DestOffset->QuadPart;
    v14 = *(_OWORD *)&IoStatusBlock->Status;
    v41 = *(_OWORD *)&IoStatusBlock->Status;
  }
  if ( (Flags & 1) != 0 )
  {
    v43[0] = (__int64)SourceHandle;
    v43[1] = v15;
    v43[2] = v16;
    v43[3] = Length;
    return IopXxxControlFile(
             DestinationHandle,
             EventHandle,
             0LL,
             0LL,
             IoStatusBlock,
             0x98344u,
             (char *)v43,
             32,
             0LL,
             0,
             0,
             1);
  }
  Pool2 = (struct _IRP *)ExAllocatePool2(0x43uLL);
  v18 = Pool2;
  if ( Pool2 )
  {
    v19 = Pool2;
    memset_0(Pool2, 0, 0x48uLL);
    v18 = (struct _IRP *)((char *)v18 + 72);
    *(_QWORD *)&v19->RequestorMode = v15;
    p_Information = (__int64)&v19->IoStatus.Information;
    File = IopReferenceFileObject(v44, 1u, PreviousMode, (PVOID *)&v19->IoStatus.Information, 0LL);
    if ( File < 0 )
      goto LABEL_23;
    File = ObReferenceFileObjectForWrite((ULONG_PTR)DestinationHandle);
    if ( File < 0 )
      goto LABEL_23;
    if ( IopFileObjectRevoked((__int64)v19->IoStatus.Pointer) )
      File = -1073739504;
    if ( File < 0 )
      goto LABEL_23;
    Pointer = (__int64)v19->IoStatus.Pointer;
    Flagsa = *(_DWORD *)(Pointer + 80) & 2;
    v30 = (*(_DWORD *)(Pointer + 80) & 4) != 0;
    p_ThreadListEntry = (PIRP *)&v19->ThreadListEntry;
    v22 = 0LL;
    if ( !Flagsa )
      v22 = EventHandle;
    File = IopPopulateCopyWriteWorkerData(
             Pointer,
             (__int64)IoStatusBlock,
             (__int64)v18,
             Length,
             InitialState,
             p_Information,
             (__int64)v22,
             (__int64)DestOffset,
             (__int64)DestKey,
             SHIDWORD(v35),
             (__int64)&v19->ThreadListEntry);
    if ( File < 0 )
    {
      v19->IoStatus.Pointer = 0LL;
    }
    else
    {
      v23 = Flagsa;
      if ( !Flagsa )
      {
LABEL_20:
        *(_OWORD *)&IoStatusBlock->Status = v14;
        v24 = (struct _FILE_OBJECT **)p_Information;
        PsReferenceSiloContext(*(void **)p_Information);
        File = IopReadFile(
                 *v24,
                 EventHandle,
                 0LL,
                 0LL,
                 IoStatusBlock,
                 v18,
                 Length,
                 (__int64)SourceOffset,
                 SourceKey,
                 0LL,
                 0LL,
                 0x40000000,
                 0LL,
                 v24);
        v18 = 0LL;
        if ( File >= 0 && v23 )
        {
          v27 = IopWaitForSynchronousIoEvent(v40, PreviousMode, v30, v39);
          File = v27;
          if ( v27 >= 0 )
          {
            if ( PreviousMode )
            {
              if ( IoIs32bitProcess(0LL) )
                Status = *(_DWORD *)(unsigned int)IoStatusBlock->Status;
              else
                Status = IoStatusBlock->Status;
              File = Status;
            }
            else if ( IoIs32bitProcess(0LL) )
            {
              File = *(_DWORD *)(unsigned int)IoStatusBlock->Status;
            }
            else
            {
              File = IoStatusBlock->Status;
            }
          }
          if ( v11 )
            KeSetEvent(v11, 0, 0);
        }
        else if ( File >= 0 )
        {
          File = 259;
        }
        goto LABEL_23;
      }
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      File = ZwCreateEvent(&EventHandlea, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
      if ( File >= 0 )
      {
        Object = 0LL;
        File = ObReferenceObjectByHandle(EventHandlea, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
        v39 = Object;
        if ( File >= 0 )
        {
          v26 = p_ThreadListEntry;
          (*p_ThreadListEntry)->UserEvent = (PKEVENT)Object;
          if ( !EventHandle )
          {
LABEL_35:
            v40 = *v26;
            v23 = Flagsa;
            goto LABEL_20;
          }
          v37 = 0LL;
          File = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v37, 0LL);
          v11 = (struct _KEVENT *)v37;
          if ( File >= 0 )
          {
            KeResetEvent((PRKEVENT)v37);
            goto LABEL_35;
          }
        }
      }
    }
  }
  else
  {
    File = -1073741670;
  }
LABEL_23:
  if ( v18 )
    IopFreeCopyObjectsFromDataBuffer((__int64)v18, 1);
  if ( EventHandlea != (HANDLE)-1LL )
    ObCloseHandle(EventHandlea, 0);
  if ( v11 )
    ObfDereferenceObject(v11);
  return File;
}
