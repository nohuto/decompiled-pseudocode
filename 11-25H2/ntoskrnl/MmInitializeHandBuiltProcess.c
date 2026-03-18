/*
 * XREFs of MmInitializeHandBuiltProcess @ 0x140A47A3C
 * Callers:
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiGetSharedVm @ 0x14040A910 (MiGetSharedVm.c)
 *     ExInitializeAutoExpandPushLock @ 0x140441FA0 (ExInitializeAutoExpandPushLock.c)
 *     MiAllowWorkingSetExpansion @ 0x14048E998 (MiAllowWorkingSetExpansion.c)
 *     MiInsertNewProcess @ 0x14049125C (MiInsertNewProcess.c)
 *     MiCopyWorkingSetFields @ 0x14065E2C4 (MiCopyWorkingSetFields.c)
 *     MiAllocateProcessShadow @ 0x140A47EB0 (MiAllocateProcessShadow.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess(__int64 a1)
{
  __int64 v1; // rbp
  _KPROCESS *Process; // rsi
  unsigned __int64 DirectoryTableBase; // rax
  _QWORD *SharedVm; // r15
  __int64 result; // rax
  __int64 Pool; // rax
  __int64 v8; // rdi

  v1 = a1 + 1024;
  Process = KeGetCurrentThread()->ApcState.Process;
  DirectoryTableBase = Process->DirectoryTableBase;
  *(_DWORD *)(a1 + 1872) |= 0x20u;
  *(_QWORD *)(a1 + 600) = 0LL;
  *(_QWORD *)(a1 + 608) = 0LL;
  *(_QWORD *)(a1 + 40) = DirectoryTableBase;
  *(_BYTE *)(a1 + 1774) = -1;
  *(_QWORD *)(a1 + 1728) = a1 + 1720;
  *(_QWORD *)(a1 + 1720) = a1 + 1720;
  *(_QWORD *)(a1 + 1712) = 0LL;
  SharedVm = MiGetSharedVm(a1 + 1024);
  result = MiAllocateProcessShadow(a1, 0LL);
  if ( (int)result >= 0 )
  {
    Pool = MiAllocatePool(MmNumLockedPagesFixEnabled != 0 ? 72LL : 64LL, 0x580uLL, 844130637);
    v8 = Pool;
    if ( Pool )
    {
      *SharedVm = Pool + 256;
      ExInitializeAutoExpandPushLock((_QWORD *)(Pool + 1112), 1);
      *(_QWORD *)(a1 + 1368) = 0LL;
      *(_QWORD *)(a1 + 872) = *(_QWORD *)&Process[1].PrimaryGroup;
      MiCopyWorkingSetFields(v1, (__int64)&Process[2].ReadyListHead.Blink, v8);
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
