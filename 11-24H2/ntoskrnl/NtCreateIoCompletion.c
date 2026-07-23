/*
 * XREFs of NtCreateIoCompletion @ 0x140A16D10
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeQueue @ 0x1404717A0 (KeInitializeQueue.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 */

NTSTATUS __cdecl NtCreateIoCompletion(
        PHANDLE IoCompletionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Count)
{
  char PreviousMode; // si
  NTSTATUS Object; // ecx
  ULONG v9; // edx
  struct _FILE_OBJECT *v10; // rbx
  __int64 v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-68h]
  __int64 v14; // [rsp+58h] [rbp-30h] BYREF
  PRKQUEUE Queue[4]; // [rsp+60h] [rbp-28h] BYREF

  v14 = 0LL;
  Queue[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoCompletionHandle < 0x7FFFFFFF0000LL )
      v12 = (__int64)IoCompletionHandle;
    *(_QWORD *)v12 = *(_QWORD *)v12;
  }
  Object = ObCreateObjectEx(
             PreviousMode,
             IoCompletionObjectType,
             (int)ObjectAttributes,
             PreviousMode,
             v13,
             80,
             0,
             0,
             Queue,
             0LL);
  if ( Object >= 0 )
  {
    v9 = Count;
    v10 = (struct _FILE_OBJECT *)Queue[0];
    KeInitializeQueue(Queue[0], v9);
    v10->RelatedFileObject = 0LL;
    v10->LockOperation = 0;
    Object = ObInsertObjectEx(v10, 0LL, DesiredAccess, 0, 0, 0LL, (__int64)&v14);
    if ( Object >= 0 )
      *IoCompletionHandle = (HANDLE)v14;
  }
  return Object;
}
