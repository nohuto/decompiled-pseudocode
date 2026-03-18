/*
 * XREFs of NtSetContextThread @ 0x140A71400
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     IoThreadToProcess @ 0x140441CC0 (IoThreadToProcess.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     PspSetContextThreadInternal @ 0x1408FD220 (PspSetContextThreadInternal.c)
 *     PspLogAuditSetContextThreadEvent @ 0x140A714E8 (PspLogAuditSetContextThreadEvent.c)
 */

__int64 __fastcall NtSetContextThread(void *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // si
  int v5; // ebx
  PEPROCESS v6; // rax
  struct _KTHREAD *v7; // rdi
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  v5 = ObReferenceObjectByHandle(a1, 0x10u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    v6 = IoThreadToProcess(CurrentThread);
    v7 = (struct _KTHREAD *)Object;
    if ( (v6[1].DirectoryTableBase & 0x20000) != 0 && v6 == IoThreadToProcess((PETHREAD)Object) )
    {
      v5 = -1073740278;
    }
    else if ( (v7->MiscFlags & 0x400) != 0 || *(_QWORD *)&v7[1].WaitBlockFill11[112] )
    {
      v5 = -1073741816;
    }
    else
    {
      v5 = PspSetContextThreadInternal(v7, a2, PreviousMode, PreviousMode, 1);
    }
    ObfDereferenceObject(v7);
  }
  PspLogAuditSetContextThreadEvent((unsigned int)v5);
  return (unsigned int)v5;
}
