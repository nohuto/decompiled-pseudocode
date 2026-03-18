/*
 * XREFs of NtCreateIoCompletion @ 0x140A22900
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeQueue @ 0x140475830 (KeInitializeQueue.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14089C4F0 (ObCreateObjectEx.c)
 */

__int64 __fastcall NtCreateIoCompletion(__int64 *a1, int a2, int a3, ULONG a4)
{
  char PreviousMode; // si
  int Object; // ecx
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
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v12 = (__int64)a1;
    *(_QWORD *)v12 = *(_QWORD *)v12;
  }
  Object = ObCreateObjectEx(PreviousMode, IoCompletionObjectType, a3, PreviousMode, v13, 80, 0, 0, Queue, 0LL);
  if ( Object >= 0 )
  {
    v9 = a4;
    v10 = (struct _FILE_OBJECT *)Queue[0];
    KeInitializeQueue(Queue[0], v9);
    v10->RelatedFileObject = 0LL;
    v10->LockOperation = 0;
    Object = ObInsertObjectEx(v10, 0LL, a2, 0, 0, 0LL, (__int64)&v14);
    if ( Object >= 0 )
      *a1 = v14;
  }
  return (unsigned int)Object;
}
