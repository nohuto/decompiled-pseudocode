/*
 * XREFs of NtSetIoCompletion @ 0x1409D6870
 * Callers:
 *     <none>
 * Callees:
 *     IoSetIoCompletionEx @ 0x14031C620 (IoSetIoCompletionEx.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtSetIoCompletion(void *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  NTSTATUS result; // eax
  int v9; // ebx
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF

  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 2u, IoCompletionObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v9 = IoSetIoCompletionEx((__int64)Object, a2, a3, a4, a5, 1u, 0LL);
    ObfDereferenceObject(Object);
    return v9;
  }
  return result;
}
