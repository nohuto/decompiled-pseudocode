/*
 * XREFs of NtSetIoCompletionEx @ 0x14098FD60
 * Callers:
 *     <none>
 * Callees:
 *     IoSetIoCompletionEx @ 0x1402C51B0 (IoSetIoCompletionEx.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtSetIoCompletionEx(
        HANDLE IoCompletionHandle,
        HANDLE IoCompletionPacketHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation)
{
  NTSTATUS result; // eax
  PVOID v10; // rdi
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v12; // eax
  PVOID v13; // rsi
  NTSTATUS v14; // ebx
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  PVOID v16; // [rsp+48h] [rbp-20h] BYREF

  Object = 0LL;
  result = ObReferenceObjectByHandle(
             IoCompletionHandle,
             2u,
             IoCompletionObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  v10 = Object;
  if ( result < 0 )
    return result;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v16 = 0LL;
  v12 = ObReferenceObjectByHandle(IoCompletionPacketHandle, 2u, qword_140FC7388, PreviousMode, &v16, 0LL);
  v13 = v16;
  v14 = v12;
  if ( v12 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)v16, 1, 0) )
    {
      v14 = -1073741584;
    }
    else
    {
      v14 = IoSetIoCompletionEx(
              (__int64)Object,
              (__int64)KeyContext,
              (__int64)ApcContext,
              IoStatus,
              IoStatusInformation,
              0,
              (__int64)v13 + 8);
      if ( v14 >= 0 )
        goto LABEL_5;
      *(_DWORD *)v16 = 0;
    }
    if ( v13 )
      ObfDereferenceObject(v13);
  }
LABEL_5:
  if ( v10 )
    ObfDereferenceObject(v10);
  return v14;
}
