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

__int64 __fastcall NtCopyFileChunk(
        __int64 a1,
        void *a2,
        void *a3,
        struct _IO_STATUS_BLOCK *a4,
        ULONG Length,
        __int64 a6,
        __int64 a7,
        ULONG *a8,
        __int64 a9,
        int a10)
{
  struct _KEVENT *v11; // r14
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v13; // rcx
  struct _IO_STATUS_BLOCK v14; // xmm6
  __int64 v15; // rdi
  __int64 v16; // rax
  struct _IRP *Pool2; // rax
  struct _IRP *v18; // rsi
  struct _IRP *v19; // r13
  int File; // edi
  __int64 Pointer; // rcx
  __int64 v22; // rdx
  int v23; // r13d
  struct _FILE_OBJECT **v24; // rdi
  PIRP *v26; // r13
  NTSTATUS v27; // eax
  int InitialState; // [rsp+20h] [rbp-168h]
  NTSTATUS Status; // [rsp+70h] [rbp-118h]
  char v30; // [rsp+88h] [rbp-100h]
  HANDLE EventHandle; // [rsp+90h] [rbp-F8h] BYREF
  PIRP *p_ThreadListEntry; // [rsp+98h] [rbp-F0h]
  __int64 v33; // [rsp+A0h] [rbp-E8h]
  __int64 v34; // [rsp+A8h] [rbp-E0h]
  __int64 v35; // [rsp+B0h] [rbp-D8h]
  PVOID Object; // [rsp+B8h] [rbp-D0h] BYREF
  PVOID v37; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 p_Information; // [rsp+C8h] [rbp-C0h]
  _DWORD *v39; // [rsp+D0h] [rbp-B8h]
  PIRP v40; // [rsp+D8h] [rbp-B0h]
  __int128 v41; // [rsp+E0h] [rbp-A8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v43[4]; // [rsp+120h] [rbp-68h] BYREF
  void *v44; // [rsp+190h] [rbp+8h]
  int v47; // [rsp+1D8h] [rbp+50h]

  v44 = (void *)a1;
  v41 = 0LL;
  v35 = 0LL;
  v39 = 0LL;
  EventHandle = (HANDLE)-1LL;
  v11 = 0LL;
  v40 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a10 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( PreviousMode )
  {
    if ( (a6 & 3) != 0 || (v13 = 0x7FFFFFFF0000LL, v33 = *(_QWORD *)a6, (a7 & 3) != 0) )
      ExRaiseDatatypeMisalignment();
    v34 = *(_QWORD *)a7;
    if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
      v13 = (__int64)a4;
    *(_DWORD *)v13 = *(_DWORD *)v13;
    v14 = *(struct _IO_STATUS_BLOCK *)&a4->Status;
    v41 = *(_OWORD *)&a4->Status;
    v15 = v33;
    v16 = v34;
    a1 = (__int64)v44;
  }
  else
  {
    v15 = *(_QWORD *)a6;
    v33 = *(_QWORD *)a6;
    v16 = *(_QWORD *)a7;
    v34 = *(_QWORD *)a7;
    v14 = *(struct _IO_STATUS_BLOCK *)&a4->Status;
    v41 = *(_OWORD *)&a4->Status;
  }
  if ( (a10 & 1) != 0 )
  {
    v43[0] = a1;
    v43[1] = v15;
    v43[2] = v16;
    v43[3] = Length;
    return IopXxxControlFile(a2, a3, 0LL, 0LL, a4, 0x98344u, (char *)v43, 32, 0LL, 0, 0, 1);
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
    File = ObReferenceFileObjectForWrite((ULONG_PTR)a2);
    if ( File < 0 )
      goto LABEL_23;
    if ( IopFileObjectRevoked((__int64)v19->IoStatus.Pointer) )
      File = -1073739504;
    if ( File < 0 )
      goto LABEL_23;
    Pointer = (__int64)v19->IoStatus.Pointer;
    v47 = *(_DWORD *)(Pointer + 80) & 2;
    v30 = (*(_DWORD *)(Pointer + 80) & 4) != 0;
    p_ThreadListEntry = (PIRP *)&v19->ThreadListEntry;
    v22 = 0LL;
    if ( !v47 )
      v22 = (__int64)a3;
    File = IopPopulateCopyWriteWorkerData(
             Pointer,
             (__int64)a4,
             (__int64)v18,
             Length,
             InitialState,
             p_Information,
             v22,
             a7,
             a9,
             SHIDWORD(v35),
             (__int64)&v19->ThreadListEntry);
    if ( File < 0 )
    {
      v19->IoStatus.Pointer = 0LL;
    }
    else
    {
      v23 = v47;
      if ( !v47 )
      {
LABEL_20:
        *a4 = v14;
        v24 = (struct _FILE_OBJECT **)p_Information;
        PsReferenceSiloContext(*(void **)p_Information);
        File = IopReadFile(*v24, a3, 0LL, 0LL, a4, v18, Length, a6, a8, 0LL, 0LL, 0x40000000, 0LL, v24);
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
                Status = *(_DWORD *)(unsigned int)a4->Status;
              else
                Status = a4->Status;
              File = Status;
            }
            else if ( IoIs32bitProcess(0LL) )
            {
              File = *(_DWORD *)(unsigned int)a4->Status;
            }
            else
            {
              File = a4->Status;
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
      File = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
      if ( File >= 0 )
      {
        Object = 0LL;
        File = ObReferenceObjectByHandle(EventHandle, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
        v39 = Object;
        if ( File >= 0 )
        {
          v26 = p_ThreadListEntry;
          (*p_ThreadListEntry)->UserEvent = (PKEVENT)Object;
          if ( !a3 )
          {
LABEL_35:
            v40 = *v26;
            v23 = v47;
            goto LABEL_20;
          }
          v37 = 0LL;
          File = ObReferenceObjectByHandle(a3, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v37, 0LL);
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
  if ( EventHandle != (HANDLE)-1LL )
    ObCloseHandle(EventHandle, 0);
  if ( v11 )
    ObfDereferenceObject(v11);
  return (unsigned int)File;
}
