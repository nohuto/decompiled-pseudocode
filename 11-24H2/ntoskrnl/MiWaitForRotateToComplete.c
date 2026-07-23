/*
 * XREFs of MiWaitForRotateToComplete @ 0x140494E48
 * Callers:
 *     MiUserFault @ 0x140307CE0 (MiUserFault.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiReferenceVad @ 0x140292770 (MiReferenceVad.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     MiLockVadShared @ 0x140345480 (MiLockVadShared.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140362A70 (MiUnlockAndDereferenceVadShared.c)
 *     MiUnlockFaultWorkingSet @ 0x140487790 (MiUnlockFaultWorkingSet.c)
 */

__int64 __fastcall MiWaitForRotateToComplete(unsigned __int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v3; // r14d
  unsigned __int64 v5; // rsi
  _KPROCESS *Process; // rbp
  _QWORD *i; // r8
  __int64 v8; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v5 = a1 >> 12;
  Process = CurrentThread->ApcState.Process;
LABEL_2:
  for ( i = (_QWORD *)Process[1].ActiveGroupsMask.Masks[1]; i; i = (_QWORD *)*i )
  {
    v8 = i[1];
    if ( v5 >= (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32))
      && v5 <= (*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) )
    {
      if ( (struct _KTHREAD *)i[2] == CurrentThread )
        return v3;
      v3 = 1;
      if ( (*(_BYTE *)(a2 + 13) & 1) != 0 )
      {
        MiReferenceVad(i[1]);
        MiUnlockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink, *(_BYTE *)(a2 + 12));
        MiLockVadShared((__int64)CurrentThread, v8);
        MiUnlockAndDereferenceVadShared(v8, v10, v11, v12);
        MiLockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink);
      }
      else
      {
        MiUnlockFaultWorkingSet(a2);
        MiLockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink);
        *(_BYTE *)(a2 + 13) |= 1u;
      }
      goto LABEL_2;
    }
  }
  return v3;
}
