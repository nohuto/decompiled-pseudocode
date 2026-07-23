/*
 * XREFs of NtCancelIoFile @ 0x1409E3D30
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     IopReferenceFileObject @ 0x1403F6490 (IopReferenceFileObject.c)
 *     IopCancelIrpsInFileObjectList @ 0x14041AEB0 (IopCancelIrpsInFileObjectList.c)
 *     IoCancelIrp @ 0x14041B240 (IoCancelIrp.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

NTSTATUS __cdecl NtCancelIoFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  char v4; // r14
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // r8
  __int64 v7; // rcx
  NTSTATUS result; // eax
  struct _KTHREAD *v9; // rax
  unsigned __int8 CurrentIrql; // r15
  unsigned int *p_SystemCallNumber; // rdi
  unsigned int *v12; // rbx
  PVOID i; // rsi
  char v14; // bl
  unsigned __int8 v15; // r14
  unsigned int *j; // rax
  PVOID v17; // rbx
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  LARGE_INTEGER Interval; // [rsp+78h] [rbp+20h] BYREF

  Object = 0LL;
  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v7 = (__int64)IoStatusBlock;
    *(_DWORD *)v7 = *(_DWORD *)v7;
  }
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v9 = KeGetCurrentThread();
    ++v9->OtherOperationCount;
    __incgsdword(0x2EE4u);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
    p_SystemCallNumber = &CurrentThread[1].SystemCallNumber;
    v12 = *(unsigned int **)p_SystemCallNumber;
    for ( i = Object; p_SystemCallNumber != v12; v12 = *(unsigned int **)v12 )
    {
      if ( *((PVOID *)v12 + 20) == i )
      {
        v4 = 1;
        IoCancelIrp((PIRP)(v12 - 8));
      }
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( v4 )
    {
      Interval.QuadPart = -100000LL;
      while ( 2 )
      {
        v14 = 0;
        v15 = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v15, 1);
        for ( j = *(unsigned int **)p_SystemCallNumber; p_SystemCallNumber != j; j = *(unsigned int **)j )
        {
          if ( *((PVOID *)j + 20) == i )
          {
            v14 = 1;
            break;
          }
        }
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
        __writecr8(v15);
        if ( v14 )
        {
          KeDelayExecutionThread(0, 0, &Interval);
          continue;
        }
        break;
      }
    }
    v17 = Object;
    IopCancelIrpsInFileObjectList(
      (__int64)Object,
      (int)KeGetCurrentThread()->ApcState.Process,
      0,
      (int)KeGetCurrentThread(),
      1,
      0);
    IoStatusBlock->Status = 0;
    IoStatusBlock->Information = 0LL;
    ObfDereferenceObject(v17);
    return 0;
  }
  return result;
}
