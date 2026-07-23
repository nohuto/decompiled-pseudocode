/*
 * XREFs of NtRemoveIoCompletion @ 0x140999EC0
 * Callers:
 *     <none>
 * Callees:
 *     IoRemoveIoCompletion @ 0x14029E4A0 (IoRemoveIoCompletion.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtRemoveIoCompletion(
        HANDLE IoCompletionHandle,
        PVOID *KeyContext,
        PVOID *ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER Timeout)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  LARGE_INTEGER *v13; // rbx
  NTSTATUS result; // eax
  NTSTATUS v15; // esi
  ULONG v16; // [rsp+44h] [rbp-64h] BYREF
  LARGE_INTEGER *v17; // [rsp+48h] [rbp-60h]
  __int64 v18; // [rsp+50h] [rbp-58h] BYREF
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  __int128 v20; // [rsp+60h] [rbp-48h] BYREF
  __int128 v21; // [rsp+70h] [rbp-38h]
  PLIST_ENTRY v22; // [rsp+88h] [rbp-20h] BYREF

  v22 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v16 = 0;
  v18 = 0LL;
  v17 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ApcContext < 0x7FFFFFFF0000LL )
      v10 = (__int64)ApcContext;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)KeyContext < 0x7FFFFFFF0000LL )
      v11 = (__int64)KeyContext;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v12 = (__int64)IoStatusBlock;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    if ( Timeout )
    {
      v17 = (LARGE_INTEGER *)&v18;
      if ( (unsigned __int64)Timeout < 0x7FFFFFFF0000LL )
        v9 = (__int64)Timeout;
      v18 = *(_QWORD *)v9;
    }
    v13 = v17;
  }
  else
  {
    v13 = v17;
    if ( Timeout )
      v13 = Timeout;
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(IoCompletionHandle, 2u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v15 = IoRemoveIoCompletion((struct _KQUEUE *)Object, (__int64)&v20, &v22, 1u, &v16, PreviousMode, v13, 0);
    ObfDereferenceObject(Object);
    if ( !v15 )
    {
      *KeyContext = (PVOID)v20;
      *ApcContext = (PVOID)*((_QWORD *)&v20 + 1);
      *(_OWORD *)&IoStatusBlock->Status = v21;
    }
    return v15;
  }
  return result;
}
