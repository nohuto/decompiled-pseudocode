/*
 * XREFs of NtCopyFileChunk @ 0x140ABE950
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x14025F988 (IopFreeCopyObjectsFromDataBuffer.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     IopReferenceFileObject @ 0x1403EB740 (IopReferenceFileObject.c)
 *     IopPopulateCopyWriteWorkerData @ 0x1403FB310 (IopPopulateCopyWriteWorkerData.c)
 *     IoIs32bitProcess @ 0x140402530 (IoIs32bitProcess.c)
 *     IopFileObjectRevoked @ 0x140405E80 (IopFileObjectRevoked.c)
 *     IopWaitForSynchronousIoEvent @ 0x14042ABC0 (IopWaitForSynchronousIoEvent.c)
 *     IopExceptionFilter @ 0x140593308 (IopExceptionFilter.c)
 *     Feature_CopyFileChunk_BufferAlignment__private_IsEnabledDeviceUsageNoInline @ 0x1405948FC (Feature_CopyFileChunk_BufferAlignment__private_IsEnabledDeviceUsageNoInline.c)
 *     ZwCreateEvent @ 0x1406A7CB0 (ZwCreateEvent.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObReferenceFileObjectForWrite @ 0x140863440 (ObReferenceFileObjectForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     IopReadFile @ 0x1408BDFD0 (IopReadFile.c)
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
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
  struct _IRP *v12; // rsi
  struct _KEVENT *v13; // r15
  __int64 AlignmentRequirement; // rdi
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v17; // rcx
  __int128 v18; // xmm6
  LONGLONG v19; // rax
  LONGLONG v20; // rcx
  NTSTATUS File; // edi
  __int64 v22; // r8
  int v23; // r14d
  ULONG v24; // ecx
  int IsEnabledDeviceUsageNoInline; // eax
  ULONG_PTR v26; // rdx
  __int64 Pool2; // rax
  struct _IRP *v28; // r14
  int v29; // r13d
  __int64 Pointer; // rcx
  HANDLE v31; // r8
  int InitialState; // [rsp+20h] [rbp-178h]
  NTSTATUS Status; // [rsp+70h] [rbp-128h]
  KPROCESSOR_MODE v34; // [rsp+74h] [rbp-124h]
  char v35; // [rsp+78h] [rbp-120h]
  PFILE_OBJECT v36; // [rsp+88h] [rbp-110h] BYREF
  PFILE_OBJECT FileObject; // [rsp+90h] [rbp-108h] BYREF
  PVOID v38; // [rsp+98h] [rbp-100h]
  LONGLONG QuadPart; // [rsp+A0h] [rbp-F8h]
  __int64 v40; // [rsp+A8h] [rbp-F0h] BYREF
  HANDLE EventHandlea; // [rsp+B0h] [rbp-E8h] BYREF
  LONGLONG v42; // [rsp+B8h] [rbp-E0h]
  __int64 v43; // [rsp+C0h] [rbp-D8h]
  PVOID Object; // [rsp+C8h] [rbp-D0h] BYREF
  PVOID v45; // [rsp+D0h] [rbp-C8h] BYREF
  _DWORD *v46; // [rsp+D8h] [rbp-C0h]
  struct _LIST_ENTRY *Flink; // [rsp+E0h] [rbp-B8h]
  __int128 v48; // [rsp+E8h] [rbp-B0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F8h] [rbp-A0h] BYREF
  __int64 v50[5]; // [rsp+128h] [rbp-70h] BYREF
  ULONG Flagsa; // [rsp+1E8h] [rbp+50h]

  v48 = 0LL;
  v12 = 0LL;
  v40 = 0LL;
  v46 = 0LL;
  EventHandlea = (HANDLE)-1LL;
  v13 = 0LL;
  v38 = 0LL;
  Flink = 0LL;
  FileObject = 0LL;
  v36 = 0LL;
  v43 = 0LL;
  AlignmentRequirement = 0LL;
  Feature_CopyFileChunk_BufferAlignment__private_IsEnabledDeviceUsageNoInline();
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v34 = PreviousMode;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)SourceOffset & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = 0x7FFFFFFF0000LL;
    QuadPart = SourceOffset->QuadPart;
    if ( ((unsigned __int8)DestOffset & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v42 = DestOffset->QuadPart;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v17 = (__int64)IoStatusBlock;
    *(_DWORD *)v17 = *(_DWORD *)v17;
    v18 = *(_OWORD *)&IoStatusBlock->Status;
    v48 = *(_OWORD *)&IoStatusBlock->Status;
    v19 = v42;
    v20 = QuadPart;
  }
  else
  {
    v20 = SourceOffset->QuadPart;
    QuadPart = SourceOffset->QuadPart;
    v19 = DestOffset->QuadPart;
    v42 = DestOffset->QuadPart;
    v18 = *(_OWORD *)&IoStatusBlock->Status;
    v48 = *(_OWORD *)&IoStatusBlock->Status;
  }
  if ( (Flags & 1) != 0 )
  {
    v50[0] = (__int64)SourceHandle;
    v50[1] = v20;
    v50[2] = v19;
    v50[3] = Length;
    return IopXxxControlFile(
             DestinationHandle,
             EventHandle,
             0LL,
             0LL,
             IoStatusBlock,
             0x98344u,
             (char *)v50,
             32,
             0LL,
             0,
             0,
             1);
  }
  if ( (unsigned int)Feature_CopyFileChunk_BufferAlignment__private_IsEnabledDeviceUsageNoInline() )
  {
    File = IopReferenceFileObject(SourceHandle, 1u, PreviousMode, (PVOID *)&FileObject, 0LL);
    if ( File < 0 )
      goto LABEL_67;
    File = ObReferenceFileObjectForWrite(
             (ULONG_PTR)DestinationHandle,
             PreviousMode,
             (struct _DMA_ADAPTER **)&v36,
             (int *)&v40);
    v23 = File;
    if ( File >= 0 && IopFileObjectRevoked((__int64)v36) )
    {
      File = -1073739504;
      v23 = -1073739504;
    }
    if ( v23 < 0 )
      goto LABEL_67;
    if ( (FileObject->Flags & 8) != 0 )
      AlignmentRequirement = IoGetRelatedDeviceObject(FileObject)->AlignmentRequirement;
    else
      AlignmentRequirement = 0LL;
    if ( (v36->Flags & 8) != 0 )
    {
      v24 = IoGetRelatedDeviceObject(v36)->AlignmentRequirement;
      if ( (unsigned int)AlignmentRequirement <= v24 )
        AlignmentRequirement = v24;
    }
  }
  IsEnabledDeviceUsageNoInline = Feature_CopyFileChunk_BufferAlignment__private_IsEnabledDeviceUsageNoInline();
  v26 = Length + 80LL;
  if ( IsEnabledDeviceUsageNoInline )
  {
    Pool2 = ExAllocatePool2(0x4BuLL, AlignmentRequirement + v26, 0x70436F49u);
    v43 = Pool2;
    if ( !Pool2 )
    {
LABEL_26:
      File = -1073741670;
      goto LABEL_67;
    }
    v12 = (struct _IRP *)(~AlignmentRequirement & (AlignmentRequirement + Pool2 + 80));
  }
  else
  {
    v12 = (struct _IRP *)ExAllocatePool2(0x43uLL, v26, 0x70436F49u);
    if ( !v12 )
      goto LABEL_26;
  }
  if ( (unsigned int)Feature_CopyFileChunk_BufferAlignment__private_IsEnabledDeviceUsageNoInline() )
  {
    v28 = (struct _IRP *)((char *)v12 - 80);
  }
  else
  {
    v28 = v12;
    v12 = (struct _IRP *)((char *)v12 + 80);
  }
  memset_0(v28, 0, 0x50uLL);
  *(_QWORD *)&v28->RequestorMode = QuadPart;
  if ( (unsigned int)Feature_CopyFileChunk_BufferAlignment__private_IsEnabledDeviceUsageNoInline() )
  {
    v28->IoStatus.Information = (ULONG_PTR)FileObject;
    v28->IoStatus.Pointer = v36;
    v28->UserIosb = (PIO_STATUS_BLOCK)v43;
    FileObject = 0LL;
    v36 = 0LL;
  }
  if ( !(unsigned int)Feature_CopyFileChunk_BufferAlignment__private_IsEnabledDeviceUsageNoInline() )
  {
    File = IopReferenceFileObject(SourceHandle, 1u, PreviousMode, (PVOID *)&v28->IoStatus.Information, 0LL);
    if ( File < 0 )
      goto LABEL_67;
    File = ObReferenceFileObjectForWrite(
             (ULONG_PTR)DestinationHandle,
             PreviousMode,
             (struct _DMA_ADAPTER **)&v28->IoStatus,
             (int *)&v40);
    v29 = File;
    if ( File >= 0 && IopFileObjectRevoked((__int64)v28->IoStatus.Pointer) )
    {
      File = -1073739504;
      v29 = -1073739504;
    }
    if ( v29 < 0 )
      goto LABEL_67;
    PreviousMode = v34;
  }
  Pointer = (__int64)v28->IoStatus.Pointer;
  Flagsa = *(_DWORD *)(Pointer + 80) & 2;
  v35 = (*(_DWORD *)(Pointer + 80) & 4) != 0;
  v31 = 0LL;
  if ( !Flagsa )
    v31 = EventHandle;
  File = IopPopulateCopyWriteWorkerData(
           Pointer,
           (__int64)IoStatusBlock,
           (__int64)v12,
           Length,
           InitialState,
           (__int64)&v28->IoStatus.Information,
           (__int64)v31,
           (__int64)DestOffset,
           (__int64)DestKey,
           SHIDWORD(v40),
           (__int64)&v28->ThreadListEntry);
  if ( File >= 0 )
  {
    if ( Flagsa )
    {
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      File = ZwCreateEvent(&EventHandlea, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
      if ( File < 0 )
        goto LABEL_67;
      Object = 0LL;
      File = ObReferenceObjectByHandle(EventHandlea, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
      v46 = Object;
      if ( File < 0 )
        goto LABEL_67;
      v28->ThreadListEntry.Flink[5].Flink = (struct _LIST_ENTRY *)Object;
      if ( EventHandle )
      {
        v45 = 0LL;
        File = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v45, 0LL);
        v13 = (struct _KEVENT *)v45;
        v38 = v45;
        if ( File < 0 )
          goto LABEL_67;
        KeResetEvent((PRKEVENT)v45);
      }
      Flink = v28->ThreadListEntry.Flink;
    }
    *(_OWORD *)&IoStatusBlock->Status = v18;
    PsReferenceSiloContext((void *)v28->IoStatus.Information);
    File = IopReadFile(
             (struct _FILE_OBJECT *)v28->IoStatus.Information,
             EventHandle,
             0LL,
             0LL,
             IoStatusBlock,
             v12,
             Length,
             (__int64)SourceOffset,
             SourceKey,
             0LL,
             0LL,
             0x40000000,
             0LL,
             &v28->IoStatus.Information);
    v12 = 0LL;
    if ( File >= 0 && Flagsa )
    {
      File = IopWaitForSynchronousIoEvent((PIRP)Flink, PreviousMode, v35, v46);
      if ( File >= 0 )
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
      if ( v13 )
        KeSetEvent(v13, 0, 0);
    }
    else if ( File >= 0 )
    {
      File = 259;
    }
    goto LABEL_67;
  }
  v28->IoStatus.Pointer = 0LL;
LABEL_67:
  if ( v12 )
    IopFreeCopyObjectsFromDataBuffer((__int64)v12, 1, v22);
  if ( (unsigned int)Feature_CopyFileChunk_BufferAlignment__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( FileObject )
      ObfDereferenceObject(FileObject);
    if ( v36 )
      ObfDereferenceObject(v36);
  }
  if ( EventHandlea != (HANDLE)-1LL )
    ObCloseHandle(EventHandlea, 0);
  if ( v13 )
    ObfDereferenceObject(v13);
  return File;
}
