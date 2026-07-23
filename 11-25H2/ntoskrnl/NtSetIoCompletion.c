/*
 * XREFs of NtSetIoCompletion @ 0x1409D6EC0
 * Callers:
 *     <none>
 * Callees:
 *     IoSetIoCompletionEx2 @ 0x140284DA0 (IoSetIoCompletionEx2.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
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
    v9 = IoSetIoCompletionEx2(
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
