/*
 * XREFs of NtCreateIoCompletion @ 0x140A182B0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeQueue @ 0x1404752D0 (KeInitializeQueue.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateIoCompletion(__int64 *a1, int a2, int a3, ULONG a4)
{
  char PreviousMode; // si
  int Object; // ecx
  ULONG v9; // edx
  PRKQUEUE v10; // rbx
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
    v10 = Queue[0];
    KeInitializeQueue(Queue[0], v9);
    *(_QWORD *)&v10[1].Header.Lock = 0LL;
    LOBYTE(v10[1].Header.WaitListHead.Flink) = 0;
    Object = ObInsertObjectEx((char *)v10, 0LL, a2, 0, 0, 0LL, (__int64)&v14);
    if ( Object >= 0 )
      *a1 = v14;
  }
  return (unsigned int)Object;
}
