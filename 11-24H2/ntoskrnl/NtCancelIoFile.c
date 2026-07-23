/*
 * XREFs of NtCancelIoFile @ 0x1409DCE40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     IopReferenceFileObject @ 0x1403EB740 (IopReferenceFileObject.c)
 *     IopCancelIrpsInFileObjectList @ 0x1404089C0 (IopCancelIrpsInFileObjectList.c)
 *     IoCancelIrp @ 0x140408D50 (IoCancelIrp.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
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
      (__int64)KeGetCurrentThread()->ApcState.Process,
      0LL,
      (__int64)KeGetCurrentThread(),
      1,
      0);
    IoStatusBlock->Status = 0;
    IoStatusBlock->Information = 0LL;
    ObfDereferenceObject(v17);
    return 0;
  }
  return result;
}
