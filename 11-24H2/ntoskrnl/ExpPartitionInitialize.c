/*
 * XREFs of ExpPartitionInitialize @ 0x1407C02D4
 * Callers:
 *     PspAllocatePartition @ 0x14077AAAC (PspAllocatePartition.c)
 *     ExpWorkerInitialization @ 0x140C45050 (ExpWorkerInitialization.c)
 * Callees:
 *     ExpPartitionDestroy @ 0x1407C00FC (ExpPartitionDestroy.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407C066C (ExpWorkQueueManagerInitialize.c)
 *     ExpPartitionCreatePoolInternal @ 0x1408F7C7C (ExpPartitionCreatePoolInternal.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpPartitionInitialize(__int64 a1)
{
  _QWORD *Pool2; // rax
  _QWORD *v3; // rdi
  int PoolInternal; // ebx
  ULONG_PTR v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned __int16 i; // si
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 result; // rax

  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x20uLL, 0x6C577845u);
  v3 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  v5 = 8 * (unsigned int)(unsigned __int16)KeNumberNodes;
  *Pool2 = a1;
  v6 = ExAllocatePool2(0x40uLL, v5, 0x6C577845u);
  v3[1] = v6;
  if ( !v6
    || (v10 = ExAllocatePool2(0x40uLL, 8 * (unsigned int)(unsigned __int16)KeNumberNodes, 0x6C577845u),
        (v3[2] = v10) == 0LL) )
  {
LABEL_14:
    PoolInternal = -1073741801;
LABEL_15:
    ExpPartitionDestroy(v3, v7, v8, v9);
    return (unsigned int)PoolInternal;
  }
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v12 = 0LL;
    if ( (_UNKNOWN *)KeNodeBlock[i] != (_UNKNOWN *)((char *)&KiNodeInit + 824 * i) )
      v12 = KeNodeBlock[i];
    *(_QWORD *)(v3[2] + 8LL * i) = ExAllocatePool2(0x40uLL, 0x118uLL, 0x6C577845u);
    v13 = *(_QWORD *)(v3[2] + 8LL * i);
    if ( !v13 )
      goto LABEL_14;
    ExpWorkQueueManagerInitialize(v13, v3, v12);
    *(_QWORD *)(v3[1] + 8LL * i) = ExAllocatePool2(0x40uLL, 0x40uLL, 0x6C577845u);
    if ( !*(_QWORD *)(v3[1] + 8LL * i) )
      goto LABEL_14;
    PoolInternal = ExpPartitionCreatePoolInternal((_DWORD)v3, 0, ExpMaximumKernelWorkerThreads, v12, 0);
    if ( PoolInternal < 0 )
      goto LABEL_15;
    PoolInternal = ExpPartitionCreatePoolInternal((_DWORD)v3, 0, ExpMaximumKernelWorkerThreads, v12, 1);
    if ( PoolInternal < 0 )
      goto LABEL_15;
  }
  *((_DWORD *)v3 + 6) = 252;
  result = 0LL;
  *(_QWORD *)(a1 + 16) = v3;
  return result;
}
