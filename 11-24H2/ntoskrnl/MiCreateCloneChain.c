/*
 * XREFs of MiCreateCloneChain @ 0x140267008
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140AB879C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1402676E0 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateCloneChain(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // ebp
  _QWORD *v5; // rsi
  __int64 v6; // r14
  _KPROCESS *Process; // rbx
  unsigned __int8 v8; // r13
  _QWORD *j; // rdi
  _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK *i; // rax
  _QWORD *Pool; // rax
  _QWORD **v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  __int64 result; // rax
  _QWORD *v16; // rbx

  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  Process = CurrentThread->ApcState.Process;
  v8 = MiLockWorkingSetExclusive(&Process[2].ReadyListHead.Blink);
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
      Pool = (_QWORD *)MiAllocatePool(0x40uLL, 0x70uLL);
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
        v16 = (_QWORD *)*v5;
        ExFreePoolWithTag(v5, 0);
        v5 = v16;
      }
      while ( v16 );
    }
    v5 = 0LL;
  }
  result = (unsigned int)v4;
  *a2 = v5;
  return result;
}
