/*
 * XREFs of MiCreateCloneChain @ 0x1404B0C38
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140AB962C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403C5810 (PsChargeProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateCloneChain(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // ebp
  _QWORD *v5; // rsi
  unsigned __int64 v6; // r14
  _KPROCESS *Process; // rbx
  unsigned __int8 v8; // r13
  _QWORD *j; // rdi
  _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK *i; // rax
  _QWORD *Pool; // rax
  _QWORD **v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  _QWORD *v15; // rbx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  Process = CurrentThread->ApcState.Process;
  v8 = MiLockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink);
  j = 0LL;
  for ( i = Process[1].IdealProcessorAssignmentBlock;
        i;
        i = *(_KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK **)&i->ExpectedConcurrencyCount.0 )
  {
    j = i;
  }
  while ( j )
  {
    if ( j[6] )
    {
      Pool = (_QWORD *)MiAllocatePool(0x40uLL, 0x70uLL, 1682140493);
      if ( !Pool )
      {
        v4 = -1073741670;
        break;
      }
      *Pool = v5;
      v5 = Pool;
      Pool[8] = j[8];
      v6 += j[8];
    }
    v12 = (_QWORD **)j[1];
    v13 = j;
    if ( v12 )
    {
      v14 = *v12;
      for ( j = (_QWORD *)j[1]; v14; v14 = (_QWORD *)*v14 )
        j = v14;
    }
    else
    {
      while ( 1 )
      {
        j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !j || (_QWORD *)*j == v13 )
          break;
        v13 = j;
      }
    }
  }
  MiUnlockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink, v8);
  if ( v4 < 0 || v6 && (v4 = PsChargeProcessNonPagedPoolQuota(a1, v6), v4 < 0) )
  {
    if ( v5 )
    {
      do
      {
        v15 = (_QWORD *)*v5;
        ExFreePoolWithTag(v5, 0);
        v5 = v15;
      }
      while ( v15 );
    }
    v5 = 0LL;
  }
  result = (unsigned int)v4;
  *a2 = v5;
  return result;
}
