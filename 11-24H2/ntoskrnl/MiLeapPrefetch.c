/*
 * XREFs of MiLeapPrefetch @ 0x1404BA7C0
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x140351B80 (MiPrefetchVirtualMemory.c)
 *     MiInPagePageTable @ 0x140391778 (MiInPagePageTable.c)
 *     MiPrefetchJumpVad @ 0x1404C7128 (MiPrefetchJumpVad.c)
 * Callees:
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiGetNextVad @ 0x140291ACC (MiGetNextVad.c)
 */

__int64 __fastcall MiLeapPrefetch(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rdx
  _KPROCESS *Process; // rbp
  char v9; // r9
  unsigned __int64 NextVad; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned int v14; // ebx
  _QWORD *v15; // rax
  unsigned __int64 v16; // r8

  v4 = a2;
  if ( a2 )
  {
LABEL_17:
    v15 = (_QWORD *)(a1[1] + 16LL * a1[3]);
    v16 = *v15 & 0xFFFFFFFFFFFFF000uLL;
    if ( v4 >= v16 && v4 < v16 + (((*(_DWORD *)v15 & 0xFFF) + v15[1] + 4095LL) & 0xFFFFFFFFFFFFF000uLL) )
    {
      a1[4] = (v4 - v16) >> 12;
      return 1LL;
    }
    goto LABEL_22;
  }
  v6 = *(_QWORD *)(a1[1] + 16LL * a1[3]) + (a1[4] << 12);
  if ( v6 > 0x7FFFFFFEFFFFLL )
    return 1LL;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x4080) != 0 || ((__int64)CurrentThread[1].Queue & 3) != 0 )
    return 1LL;
  Process = CurrentThread->ApcState.Process;
  v9 = MiLockVadTree(0, (__int64)CurrentThread, a3, a4);
  if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 || (NextVad = *(_QWORD *)&Process[3].Header.Lock) == 0 )
  {
    v14 = 0;
LABEL_25:
    MiUnlockVadTree(0, v9);
    return v14;
  }
  v11 = v6 >> 12;
  while ( 1 )
  {
    v12 = *(unsigned int *)(NextVad + 24) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 32);
    if ( v11 < v12 )
    {
      v13 = *(_QWORD *)NextVad;
    }
    else
    {
      if ( v11 <= (*(unsigned int *)(NextVad + 28) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 33) << 32)) )
      {
        v14 = 1;
        goto LABEL_25;
      }
      v13 = *(_QWORD *)(NextVad + 8);
    }
    if ( !v13 )
      break;
    NextVad = v13;
  }
  if ( v12 >= v11 || (NextVad = MiGetNextVad(NextVad)) != 0 )
  {
    v4 = (*(unsigned int *)(NextVad + 24) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 32)) << 12;
    MiUnlockVadTree(0, v9);
    goto LABEL_17;
  }
  MiUnlockVadTree(0, v9);
LABEL_22:
  v14 = 1;
  ++a1[3];
  a1[4] = 0LL;
  return v14;
}
