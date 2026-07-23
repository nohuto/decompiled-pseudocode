/*
 * XREFs of NtTerminateThread @ 0x1408FDE30
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     PspTerminateThreadByPointer @ 0x1408FDF10 (PspTerminateThreadByPointer.c)
 */

NTSTATUS __cdecl NtTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  __int64 v2; // r8
  NTSTATUS v3; // ebx
  struct _KTHREAD *CurrentThread; // rsi
  NTSTATUS result; // eax
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  Object = 0LL;
  v3 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( !ThreadHandle )
  {
    if ( LODWORD(CurrentThread->ApcState.Process[1].CpuPartitionList.Blink) == 1 )
      return -1073741605;
    goto LABEL_3;
  }
  if ( ThreadHandle == (HANDLE)-2LL )
  {
LABEL_3:
    LOBYTE(v2) = 1;
    PspTerminateThreadByPointer(CurrentThread, (unsigned int)ExitStatus, v2);
    return v3;
  }
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ThreadHandle,
             1,
             (__int64)PsThreadType,
             CurrentThread->PreviousMode,
             0x65547350u,
             &Object,
             0LL,
             0LL);
  v3 = result;
  if ( result >= 0 )
  {
    if ( Object != CurrentThread )
    {
      v3 = PspTerminateThreadByPointer(Object, (unsigned int)ExitStatus, 0LL);
      ObfDereferenceObjectWithTag(Object, 0x65547350u);
      return v3;
    }
    ObfDereferenceObjectWithTag(Object, 0x65547350u);
    goto LABEL_3;
  }
  return result;
}
