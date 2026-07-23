/*
 * XREFs of NtCreateWorkerFactory @ 0x1409901C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeRegisterObjectNotification @ 0x14032D090 (KeRegisterObjectNotification.c)
 *     KeInitializeTimer2 @ 0x1403ADE80 (KeInitializeTimer2.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     ExpInitializeThreadHistory @ 0x1404873AC (ExpInitializeThreadHistory.c)
 *     KeDisableQueueingPriorityIncrement @ 0x140488C6C (KeDisableQueueingPriorityIncrement.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObOpenObjectByPointer @ 0x1408511D0 (ObOpenObjectByPointer.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     IoAllocateMiniCompletionPacket @ 0x140990590 (IoAllocateMiniCompletionPacket.c)
 *     IopFreeMiniCompletionPacket @ 0x140990680 (IopFreeMiniCompletionPacket.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtCreateWorkerFactory(
        PHANDLE WorkerFactoryHandleReturn,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE CompletionPortHandle,
        HANDLE WorkerProcessHandle,
        PVOID StartRoutine,
        PVOID StartParameter,
        ULONG MaxThreadCount,
        SIZE_T StackReserve,
        SIZE_T StackCommit)
{
  int v11; // r12d
  char PreviousMode; // di
  __int64 v14; // rcx
  __int64 Pool2; // rax
  __int64 v16; // rsi
  NTSTATUS v17; // ebx
  volatile signed __int32 *v18; // rcx
  PVOID v19; // r14
  __int64 MiniCompletionPacket; // rax
  LARGE_INTEGER *v21; // rdi
  SIZE_T v22; // rax
  SIZE_T v23; // rax
  void *v24; // rcx
  NTSTATUS result; // eax
  ULONG_PTR v26; // rcx
  PVOID *Object; // [rsp+20h] [rbp-98h]
  HANDLE Handle; // [rsp+58h] [rbp-60h] BYREF
  PVOID v29; // [rsp+60h] [rbp-58h] BYREF
  PVOID v30; // [rsp+68h] [rbp-50h] BYREF
  PVOID v31; // [rsp+70h] [rbp-48h] BYREF
  __int64 v32; // [rsp+78h] [rbp-40h] BYREF
  _QWORD v33[3]; // [rsp+88h] [rbp-30h] BYREF

  v11 = (int)ObjectAttributes;
  Handle = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v30 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)WorkerFactoryHandleReturn < 0x7FFFFFFF0000LL )
      v14 = (__int64)WorkerFactoryHandleReturn;
    *(_QWORD *)v14 = *(_QWORD *)v14;
  }
  Pool2 = ExAllocatePool2(0x41uLL, 0x28uLL, 0x63577054u);
  v16 = Pool2;
  if ( !Pool2 )
    return -1073741801;
  *(_QWORD *)Pool2 = 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_WORD *)(Pool2 + 32) = 0;
  *(_BYTE *)(Pool2 + 34) = 0;
  v29 = 0LL;
  v17 = ObReferenceObjectByHandle(CompletionPortHandle, 2u, IoCompletionObjectType, PreviousMode, &v29, 0LL);
  v18 = (volatile signed __int32 *)v29;
  *(_QWORD *)(v16 + 8) = v29;
  if ( v17 < 0 )
  {
LABEL_23:
    ExFreePoolWithTag((PVOID)v16, 0);
    return v17;
  }
  KeDisableQueueingPriorityIncrement(v18);
  v17 = ObpReferenceObjectByHandleWithTag(
          (ULONG_PTR)WorkerProcessHandle,
          42,
          (__int64)PsProcessType,
          PreviousMode,
          0x66577845u,
          &v30,
          0LL,
          0LL);
  if ( v17 < 0 )
  {
LABEL_22:
    ObfDereferenceObject(*(PVOID *)(v16 + 8));
    goto LABEL_23;
  }
  v19 = v30;
  if ( KeGetCurrentThread()->ApcState.Process != v30 )
  {
    v17 = -1073741811;
    goto LABEL_21;
  }
  v17 = ObOpenObjectByPointer(v30, 0x200u, 0LL, 0x2Au, (POBJECT_TYPE)PsProcessType, 0, &Handle);
  if ( v17 < 0 )
  {
LABEL_21:
    ObfDereferenceObjectWithTag(v19, 0x66577845u);
    goto LABEL_22;
  }
  MiniCompletionPacket = IoAllocateMiniCompletionPacket(ExpWorkerFactoryCompletionPacketRoutine, v16);
  *(_QWORD *)(v16 + 16) = MiniCompletionPacket;
  if ( !MiniCompletionPacket )
  {
    v17 = -1073741801;
    goto LABEL_20;
  }
  v17 = ObCreateObjectEx(
          PreviousMode,
          ExpWorkerFactoryObjectType,
          v11,
          PreviousMode,
          (__int64)Object,
          672,
          0,
          0,
          &v31,
          0LL);
  if ( v17 < 0 )
  {
    v26 = *(_QWORD *)(v16 + 16);
    *(_QWORD *)(v26 + 56) = 0LL;
    IopFreeMiniCompletionPacket(v26);
LABEL_20:
    ObCloseHandle(Handle, 0);
    goto LABEL_21;
  }
  v21 = (LARGE_INTEGER *)v31;
  *((_QWORD *)v31 + 2) = v16;
  v21[14].QuadPart = -10000000LL * ExpWorkerFactoryThreadIdleTimeoutInSeconds;
  v21[47].LowPart = 0;
  v21[47].HighPart = MaxThreadCount;
  v21[49].HighPart = 0;
  v21[48].QuadPart = 0LL;
  v22 = 0x10000LL;
  if ( StackReserve )
    v22 = StackReserve;
  v21[7].QuadPart = v22;
  memset_0(&v21[15], 0, 0x100uLL);
  v21[51].QuadPart = 0LL;
  v23 = 4096LL;
  if ( StackCommit )
    v23 = StackCommit;
  v21[8].QuadPart = v23;
  v21[3].QuadPart = (LONGLONG)StartRoutine;
  v21[4].QuadPart = (LONGLONG)StartParameter;
  v21[50].QuadPart = 0LL;
  v21[52].LowPart = 0;
  v21[5].QuadPart = (LONGLONG)Handle;
  v21[6].QuadPart = (LONGLONG)v19;
  v21[49].LowPart = 0;
  v21[83].LowPart = 0;
  v21[76].LowPart = 1;
  KeInitializeTimer2((__int64)&v21[53]);
  ExpInitializeThreadHistory((__int64)v21);
  v21[13].QuadPart = 0LL;
  PsReferenceSiloContext(v24);
  KeRegisterObjectNotification((__int64)&v21[53], (__int64)&ExpWorkerFactoryManagerQueue, (__int64)&v21[70]);
  v33[0] = 0LL;
  v33[1] = -1LL;
  KeSetTimer2((__int64)&v21[53], v21[14], -v21[14].QuadPart, (__int64)v33);
  result = ObInsertObjectEx((struct _FILE_OBJECT *)v21, 0LL, DesiredAccess, 0, 0, 0LL, (__int64)&v32);
  if ( result >= 0 )
    *WorkerFactoryHandleReturn = (HANDLE)v32;
  return result;
}
