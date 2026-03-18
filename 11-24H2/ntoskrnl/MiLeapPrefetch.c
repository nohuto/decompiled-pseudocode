/*
 * XREFs of MiLeapPrefetch @ 0x1404BF28C
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x1402A98D0 (MiPrefetchVirtualMemory.c)
 *     MiInPagePageTable @ 0x1403F2FCC (MiInPagePageTable.c)
 *     MiPrefetchJumpVad @ 0x1404CDD58 (MiPrefetchJumpVad.c)
 * Callees:
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     MiGetNextVad @ 0x1402614BC (MiGetNextVad.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 */

__int64 __fastcall MiLeapPrefetch(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rdx
  _KPROCESS *Process; // rbp
  char v8; // r9
  unsigned __int64 NextVad; // rdx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  unsigned int v13; // ebx
  _QWORD *v14; // rax
  unsigned __int64 v15; // r8

  v3 = a2;
  if ( a2 )
  {
LABEL_17:
    v14 = (_QWORD *)(a1[1] + 16LL * a1[3]);
    v15 = *v14 & 0xFFFFFFFFFFFFF000uLL;
    if ( v3 >= v15 && v3 < v15 + (((*(_DWORD *)v14 & 0xFFF) + v14[1] + 4095LL) & 0xFFFFFFFFFFFFF000uLL) )
    {
      a1[4] = (v3 - v15) >> 12;
      return 1LL;
    }
    goto LABEL_22;
  }
  v5 = *(_QWORD *)(a1[1] + 16LL * a1[3]) + (a1[4] << 12);
  if ( v5 > 0x7FFFFFFEFFFFLL )
    return 1LL;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x4080) != 0 || ((__int64)CurrentThread[1].Queue & 3) != 0 )
    return 1LL;
  Process = CurrentThread->ApcState.Process;
  v8 = MiLockVadTree(0, (__int64)CurrentThread, a3);
  if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 || (NextVad = *(_QWORD *)&Process[3].Header.Lock) == 0 )
  {
    v13 = 0;
LABEL_25:
    MiUnlockVadTree(0, v8);
    return v13;
  }
  v10 = v5 >> 12;
  while ( 1 )
  {
    v11 = *(unsigned int *)(NextVad + 24) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 32);
    if ( v10 < v11 )
    {
      v12 = *(_QWORD *)NextVad;
    }
    else
    {
      if ( v10 <= (*(unsigned int *)(NextVad + 28) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 33) << 32)) )
      {
        v13 = 1;
        goto LABEL_25;
      }
      v12 = *(_QWORD *)(NextVad + 8);
    }
    if ( !v12 )
      break;
    NextVad = v12;
  }
  if ( v11 >= v10 || (NextVad = MiGetNextVad(NextVad)) != 0 )
  {
    v3 = (*(unsigned int *)(NextVad + 24) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 32)) << 12;
    MiUnlockVadTree(0, v8);
    goto LABEL_17;
  }
  MiUnlockVadTree(0, v8);
LABEL_22:
  v13 = 1;
  ++a1[3];
  a1[4] = 0LL;
  return v13;
}
