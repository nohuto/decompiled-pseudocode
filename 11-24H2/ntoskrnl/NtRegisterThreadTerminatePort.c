/*
 * XREFs of NtRegisterThreadTerminatePort @ 0x140A661B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall NtRegisterThreadTerminatePort(void *a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS result; // eax
  void **Pool2; // rax
  void **v4; // rcx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 1u, LpcPortObjectType, CurrentThread->PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    Pool2 = (void **)ExAllocatePool2(0x101uLL);
    v4 = Pool2;
    if ( Pool2 )
    {
      Pool2[1] = Object;
      *Pool2 = CurrentThread[1].InitialStack;
      result = 0;
      CurrentThread[1].InitialStack = v4;
    }
    else
    {
      ObfDereferenceObject(Object);
      return -1073741670;
    }
  }
  return result;
}
