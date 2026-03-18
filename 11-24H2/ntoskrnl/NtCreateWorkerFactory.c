/*
 * XREFs of NtCreateWorkerFactory @ 0x1409A6CF0
 * Callers:
 *     <none>
 * Callees:
 *     KeRegisterObjectNotification @ 0x140205AB0 (KeRegisterObjectNotification.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     KeInitializeTimer2 @ 0x1403BF2C0 (KeInitializeTimer2.c)
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 *     ExpInitializeThreadHistory @ 0x14048C68C (ExpInitializeThreadHistory.c)
 *     KeDisableQueueingPriorityIncrement @ 0x14048E83C (KeDisableQueueingPriorityIncrement.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObOpenObjectByPointer @ 0x140854F10 (ObOpenObjectByPointer.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14089C4F0 (ObCreateObjectEx.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     IoAllocateMiniCompletionPacket @ 0x1409A70C0 (IoAllocateMiniCompletionPacket.c)
 *     IopFreeMiniCompletionPacket @ 0x1409A71B0 (IopFreeMiniCompletionPacket.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtCreateWorkerFactory(
        __int64 *a1,
        int a2,
        int a3,
        void *a4,
        ULONG_PTR BugCheckParameter1,
        void *a6,
        void *a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  char PreviousMode; // di
  __int64 v14; // rcx
  __int64 Pool2; // rax
  __int64 v16; // rsi
  int v17; // ebx
  volatile signed __int32 *v18; // rcx
  PVOID v19; // r14
  __int64 MiniCompletionPacket; // rax
  struct _FILE_OBJECT *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  void *v24; // rcx
  __int64 result; // rax
  ULONG_PTR v26; // rcx
  PVOID *Object; // [rsp+20h] [rbp-98h]
  HANDLE Handle; // [rsp+58h] [rbp-60h] BYREF
  PVOID v29; // [rsp+60h] [rbp-58h] BYREF
  PVOID v30; // [rsp+68h] [rbp-50h] BYREF
  PVOID v31; // [rsp+70h] [rbp-48h] BYREF
  __int64 v32; // [rsp+78h] [rbp-40h] BYREF
  _QWORD v33[3]; // [rsp+88h] [rbp-30h] BYREF

  Handle = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v30 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v14 = (__int64)a1;
    *(_QWORD *)v14 = *(_QWORD *)v14;
  }
  Pool2 = ExAllocatePool2(0x41uLL);
  v16 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  *(_QWORD *)Pool2 = 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_WORD *)(Pool2 + 32) = 0;
  *(_BYTE *)(Pool2 + 34) = 0;
  v29 = 0LL;
  v17 = ObReferenceObjectByHandle(a4, 2u, IoCompletionObjectType, PreviousMode, &v29, 0LL);
  v18 = (volatile signed __int32 *)v29;
  *(_QWORD *)(v16 + 8) = v29;
  if ( v17 < 0 )
  {
LABEL_23:
    ExFreePoolWithTag((PVOID)v16, 0);
    return (unsigned int)v17;
  }
  KeDisableQueueingPriorityIncrement(v18);
  v17 = ObpReferenceObjectByHandleWithTag(
          BugCheckParameter1,
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
          a3,
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
  v21 = (struct _FILE_OBJECT *)v31;
  *((_QWORD *)v31 + 2) = v16;
  *(_QWORD *)&v21->Waiters = -10000000LL * ExpWorkerFactoryThreadIdleTimeoutInSeconds;
  LODWORD(v21[1].Event.Header.WaitListHead.Flink) = 0;
  HIDWORD(v21[1].Event.Header.WaitListHead.Flink) = a8;
  HIDWORD(v21[1].CompletionContext) = 0;
  v21[1].Event.Header.WaitListHead.Blink = 0LL;
  v22 = 0x10000LL;
  if ( a9 )
    v22 = a9;
  *(_QWORD *)&v21->FinalStatus = v22;
  memset_0(&v21->LastLock, 0, 0x100uLL);
  v21[1].IrpList.Flink = 0LL;
  v23 = 4096LL;
  if ( a10 )
    v23 = a10;
  v21->RelatedFileObject = (struct _FILE_OBJECT *)v23;
  v21->FsContext = a6;
  v21->FsContext2 = a7;
  v21[1].IrpListLock = 0LL;
  LODWORD(v21[1].IrpList.Blink) = 0;
  v21->SectionObjectPointer = (PSECTION_OBJECT_POINTERS)Handle;
  v21->PrivateCacheMap = v19;
  LODWORD(v21[1].CompletionContext) = 0;
  LODWORD(v21[3].Vpb) = 0;
  LODWORD(v21[2].CompletionContext) = 1;
  KeInitializeTimer2((__int64)&v21[1].FileObjectExtension, 0LL, 0LL, 8LL);
  ExpInitializeThreadHistory((__int64)v21);
  v21->CurrentByteOffset.QuadPart = 0LL;
  PsReferenceSiloContext(v24);
  KeRegisterObjectNotification(
    (__int64)&v21[1].FileObjectExtension,
    (__int64)&ExpWorkerFactoryManagerQueue,
    (__int64)&v21[2].Lock);
  v33[0] = 0LL;
  v33[1] = -1LL;
  KeSetTimer2((__int64)&v21[1].FileObjectExtension, *(_QWORD *)&v21->Waiters, -*(_QWORD *)&v21->Waiters, (__int64)v33);
  result = ObInsertObjectEx(v21, 0LL, a2, 0, 0, 0LL, (__int64)&v32);
  if ( (int)result >= 0 )
    *a1 = v32;
  return result;
}
