/*
 * XREFs of MmInitializeHandBuiltProcess @ 0x140AE7F8C
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiAllowWorkingSetExpansion @ 0x1402F2680 (MiAllowWorkingSetExpansion.c)
 *     MiGetSharedVm @ 0x140404E90 (MiGetSharedVm.c)
 *     ExInitializeAutoExpandPushLock @ 0x140438B70 (ExInitializeAutoExpandPushLock.c)
 *     MiInsertNewProcess @ 0x14048B0D4 (MiInsertNewProcess.c)
 *     MiCopyWorkingSetFields @ 0x14066AFB4 (MiCopyWorkingSetFields.c)
 *     MiAllocateProcessShadow @ 0x140A51A70 (MiAllocateProcessShadow.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess(__int64 a1)
{
  __int64 v1; // rbp
  _KPROCESS *Process; // rsi
  unsigned __int64 DirectoryTableBase; // rax
  _QWORD *SharedVm; // r14
  __int64 result; // rax
  __int64 Pool; // rax
  __int64 v8; // rdi
  __int64 v9; // r9

  v1 = a1 + 1024;
  Process = KeGetCurrentThread()->ApcState.Process;
  DirectoryTableBase = Process->DirectoryTableBase;
  *(_DWORD *)(a1 + 1872) |= 0x20u;
  *(_QWORD *)(a1 + 600) = 0LL;
  *(_QWORD *)(a1 + 608) = 0LL;
  *(_QWORD *)(a1 + 1712) = 0LL;
  *(_QWORD *)(a1 + 40) = DirectoryTableBase;
  *(_BYTE *)(a1 + 1774) = -1;
  *(_QWORD *)(a1 + 1728) = a1 + 1720;
  *(_QWORD *)(a1 + 1720) = a1 + 1720;
  SharedVm = MiGetSharedVm(a1 + 1024);
  result = MiAllocateProcessShadow(a1, 0);
  if ( (int)result >= 0 )
  {
    Pool = MiAllocatePool(0x48uLL, 0x580uLL, 844130637);
    v8 = Pool;
    if ( Pool )
    {
      *SharedVm = Pool + 256;
      ExInitializeAutoExpandPushLock((_QWORD *)(Pool + 1112), 1);
      *(_QWORD *)(a1 + 1368) = 0LL;
      *(_QWORD *)(a1 + 872) = *(_QWORD *)&Process[1].PrimaryGroup;
      MiCopyWorkingSetFields(v1, (__int64)&Process[2].ReadyListHead.Blink, v8, v9);
      *(_QWORD *)(a1 + 648) = Process[1].Padding[0];
      *(_DWORD *)(a1 + 1956) = 1;
      MiInsertNewProcess(a1);
      MiAllowWorkingSetExpansion(v1);
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
