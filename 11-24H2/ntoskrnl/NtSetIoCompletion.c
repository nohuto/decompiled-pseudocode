/*
 * XREFs of NtSetIoCompletion @ 0x1409C66A0
 * Callers:
 *     <none>
 * Callees:
 *     IoSetIoCompletionEx @ 0x1402C51B0 (IoSetIoCompletionEx.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtSetIoCompletion(
        HANDLE IoCompletionHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation)
{
  NTSTATUS result; // eax
  NTSTATUS v9; // ebx
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF

  Object = 0LL;
  result = ObReferenceObjectByHandle(
             IoCompletionHandle,
             2u,
             IoCompletionObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v9 = IoSetIoCompletionEx(
           (__int64)Object,
           (__int64)KeyContext,
           (__int64)ApcContext,
           IoStatus,
           IoStatusInformation,
           1u,
           0LL);
    ObfDereferenceObject(Object);
    return v9;
  }
  return result;
}
