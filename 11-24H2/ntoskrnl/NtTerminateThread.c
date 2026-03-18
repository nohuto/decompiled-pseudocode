/*
 * XREFs of NtTerminateThread @ 0x1408A7BD0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     PspTerminateThreadByPointer @ 0x1408A7CB0 (PspTerminateThreadByPointer.c)
 */

__int64 __fastcall NtTerminateThread(ULONG_PTR a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 result; // rax
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  Object = 0LL;
  v3 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( !a1 )
  {
    if ( LODWORD(CurrentThread->ApcState.Process[1].CpuPartitionList.Blink) == 1 )
      return 3221225691LL;
    goto LABEL_3;
  }
  if ( a1 == -2LL )
  {
LABEL_3:
    LOBYTE(a3) = 1;
    PspTerminateThreadByPointer(CurrentThread, a2, a3);
    return v3;
  }
  result = ObpReferenceObjectByHandleWithTag(
             a1,
             1,
             (__int64)PsThreadType,
             CurrentThread->PreviousMode,
             0x65547350u,
             &Object,
             0LL,
             0LL);
  v3 = result;
  if ( (int)result >= 0 )
  {
    if ( Object != CurrentThread )
    {
      v3 = PspTerminateThreadByPointer(Object, a2, 0LL);
      ObfDereferenceObjectWithTag(Object, 0x65547350u);
      return v3;
    }
    ObfDereferenceObjectWithTag(Object, 0x65547350u);
    goto LABEL_3;
  }
  return result;
}
