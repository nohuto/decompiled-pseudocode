/*
 * XREFs of MiLeapPrefetch @ 0x1404C0B80
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x1403799D0 (MiPrefetchVirtualMemory.c)
 *     MiInPagePageTable @ 0x1403EBC5C (MiInPagePageTable.c)
 *     MiPrefetchJumpVad @ 0x1404CDF78 (MiPrefetchJumpVad.c)
 * Callees:
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiGetNextVad @ 0x1402A96D8 (MiGetNextVad.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 */

__int64 __fastcall MiLeapPrefetch(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rdx
  _KPROCESS *Process; // rbp
  char v7; // r9
  unsigned __int64 NextVad; // rdx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  unsigned int v12; // ebx
  _QWORD *v13; // rax
  unsigned __int64 v14; // r8

  v2 = a2;
  if ( a2 )
  {
LABEL_17:
    v13 = (_QWORD *)(a1[1] + 16LL * a1[3]);
    v14 = *v13 & 0xFFFFFFFFFFFFF000uLL;
    if ( v2 >= v14 && v2 < v14 + (((*(_DWORD *)v13 & 0xFFF) + v13[1] + 4095LL) & 0xFFFFFFFFFFFFF000uLL) )
    {
      a1[4] = (v2 - v14) >> 12;
      return 1LL;
    }
    goto LABEL_22;
  }
  v4 = *(_QWORD *)(a1[1] + 16LL * a1[3]) + (a1[4] << 12);
  if ( v4 > 0x7FFFFFFEFFFFLL )
    return 1LL;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x4080) != 0 || ((__int64)CurrentThread[1].Queue & 3) != 0 )
    return 1LL;
  Process = CurrentThread->ApcState.Process;
  v7 = MiLockVadTree(0, (__int64)CurrentThread);
  if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 || (NextVad = *(_QWORD *)&Process[3].Header.Lock) == 0 )
  {
    v12 = 0;
LABEL_25:
    MiUnlockVadTree(0, v7);
    return v12;
  }
  v9 = v4 >> 12;
  while ( 1 )
  {
    v10 = *(unsigned int *)(NextVad + 24) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 32);
    if ( v9 < v10 )
    {
      v11 = *(_QWORD *)NextVad;
    }
    else
    {
      if ( v9 <= (*(unsigned int *)(NextVad + 28) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 33) << 32)) )
      {
        v12 = 1;
        goto LABEL_25;
      }
      v11 = *(_QWORD *)(NextVad + 8);
    }
    if ( !v11 )
      break;
    NextVad = v11;
  }
  if ( v10 >= v9 || (NextVad = MiGetNextVad(NextVad)) != 0 )
  {
    v2 = (*(unsigned int *)(NextVad + 24) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 32)) << 12;
    MiUnlockVadTree(0, v7);
    goto LABEL_17;
  }
  MiUnlockVadTree(0, v7);
LABEL_22:
  v12 = 1;
  ++a1[3];
  a1[4] = 0LL;
  return v12;
}
