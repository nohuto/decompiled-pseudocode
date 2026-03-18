/*
 * XREFs of ExpPartitionInitialize @ 0x1407BFE84
 * Callers:
 *     PspAllocatePartition @ 0x14077ABFC (PspAllocatePartition.c)
 *     ExpWorkerInitialization @ 0x140C42F00 (ExpWorkerInitialization.c)
 * Callees:
 *     ExpPartitionDestroy @ 0x1407BFCAC (ExpPartitionDestroy.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407C021C (ExpWorkQueueManagerInitialize.c)
 *     ExpPartitionCreatePoolInternal @ 0x140A22748 (ExpPartitionCreatePoolInternal.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpPartitionInitialize(__int64 a1)
{
  _QWORD *Pool2; // rax
  _QWORD *v3; // rdi
  int PoolInternal; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  unsigned __int16 i; // si
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 result; // rax

  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  v3 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  *Pool2 = a1;
  v5 = ExAllocatePool2(0x40uLL);
  v3[1] = v5;
  if ( !v5 || (v9 = ExAllocatePool2(0x40uLL), (v3[2] = v9) == 0LL) )
  {
LABEL_14:
    PoolInternal = -1073741801;
LABEL_15:
    ExpPartitionDestroy(v3, v6, v7, v8);
    return (unsigned int)PoolInternal;
  }
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v11 = 0LL;
    if ( (_UNKNOWN *)KeNodeBlock[i] != (_UNKNOWN *)((char *)&KiNodeInit + 824 * i) )
      v11 = KeNodeBlock[i];
    *(_QWORD *)(v3[2] + 8LL * i) = ExAllocatePool2(0x40uLL);
    v12 = *(_QWORD *)(v3[2] + 8LL * i);
    if ( !v12 )
      goto LABEL_14;
    ExpWorkQueueManagerInitialize(v12, v3, v11);
    *(_QWORD *)(v3[1] + 8LL * i) = ExAllocatePool2(0x40uLL);
    if ( !*(_QWORD *)(v3[1] + 8LL * i) )
      goto LABEL_14;
    PoolInternal = ExpPartitionCreatePoolInternal((_DWORD)v3, 0, ExpMaximumKernelWorkerThreads, v11, 0);
    if ( PoolInternal < 0 )
      goto LABEL_15;
    PoolInternal = ExpPartitionCreatePoolInternal((_DWORD)v3, 0, ExpMaximumKernelWorkerThreads, v11, 1);
    if ( PoolInternal < 0 )
      goto LABEL_15;
  }
  *((_DWORD *)v3 + 6) = 252;
  result = 0LL;
  *(_QWORD *)(a1 + 16) = v3;
  return result;
}
