/*
 * XREFs of MiUserFaultAllowed @ 0x14024ACD0
 * Callers:
 *     MiUserFault @ 0x14024A660 (MiUserFault.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiReferenceVad @ 0x1402A7A40 (MiReferenceVad.c)
 *     MiLockVadShared @ 0x1402A7C94 (MiLockVadShared.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140320840 (MiUnlockAndDereferenceVadShared.c)
 *     MiUnlockFaultWorkingSet @ 0x14048D360 (MiUnlockFaultWorkingSet.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1404CC278 (MiCheckHoldFaultForHotPatch.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1404F7888 (MiIsVadEligibleForCommitRelease.c)
 */

__int64 __fastcall MiUserFaultAllowed(unsigned __int64 a1)
{
  _KPROCESS *Process; // rax
  unsigned int *p_FreezeCount; // rdx
  _KPROCESS *v4; // rbx
  _KAB_UM_PROCESS_TREE *Trees; // rcx
  __int64 Address; // rax
  __int64 v8; // rdx
  struct _KTHREAD *CurrentThread; // r14
  int v10; // r15d
  unsigned __int64 v11; // rsi
  _KPROCESS *v12; // rbp
  _QWORD *v13; // rdx
  __int64 v14; // r8
  PVOID P; // [rsp+58h] [rbp+10h]

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[2].ContextSwitches & 0xF) == 1 )
    p_FreezeCount = (unsigned int *)&unk_140E38520;
  else
    p_FreezeCount = &Process[2].FreezeCount;
  if ( (HIBYTE(LODWORD(Process[2].ContextSwitches)) & 0x30) == 0x30
    && *(_QWORD *)p_FreezeCount
    && a1 < 0xFFFF800000000000uLL )
  {
    MiLockVadTree(1LL);
    Address = MiLocateAddress(a1);
    if ( !Address || (unsigned int)MiIsVadEligibleForCommitRelease(Address) )
    {
      LOBYTE(v8) = 17;
      MiUnlockVadTree(1LL, v8);
      return 3221225477LL;
    }
    LOBYTE(v8) = 17;
    MiUnlockVadTree(1LL, v8);
  }
  if ( (unsigned __int64)(*(_QWORD *)a1 - 0x7FFFFFFF0000LL) <= 0xFFFF00000000FFFFuLL )
    return 3221225477LL;
  v4 = KeGetCurrentThread()->ApcState.Process;
  if ( !v4[1].ActiveGroupsMask.Masks[1] )
    goto LABEL_6;
  CurrentThread = KeGetCurrentThread();
  v10 = 0;
  v11 = *(_QWORD *)a1 >> 12;
  v12 = CurrentThread->ApcState.Process;
  v13 = (_QWORD *)v12[1].ActiveGroupsMask.Masks[1];
  if ( !v13 )
    goto LABEL_6;
  while ( 1 )
  {
    v14 = v13[1];
    P = (PVOID)v14;
    if ( v11 >= (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32))
      && v11 <= (*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32)) )
    {
      break;
    }
    v13 = (_QWORD *)*v13;
LABEL_18:
    if ( !v13 )
      goto LABEL_19;
  }
  if ( (struct _KTHREAD *)v13[2] != CurrentThread )
  {
    v10 = 1;
    if ( (*(_BYTE *)(a1 + 69) & 1) != 0 )
    {
      MiReferenceVad(v14);
      MiUnlockWorkingSetExclusive(&v12[2].ReadyListHead.Blink, *(unsigned __int8 *)(a1 + 68));
      MiLockVadShared(CurrentThread, P);
      MiUnlockAndDereferenceVadShared(P);
      MiLockWorkingSetExclusive((__int64)&v12[2].ReadyListHead.Blink);
    }
    else
    {
      MiUnlockFaultWorkingSet(a1 + 56);
      MiLockWorkingSetExclusive((__int64)&v12[2].ReadyListHead.Blink);
      *(_BYTE *)(a1 + 69) |= 1u;
    }
    v13 = (_QWORD *)v12[1].ActiveGroupsMask.Masks[1];
    goto LABEL_18;
  }
LABEL_19:
  if ( v10 )
    return 3221226548LL;
LABEL_6:
  Trees = v4[4].AutoBoostState.Trees;
  if ( Trees )
    return (unsigned int)MiCheckHoldFaultForHotPatch(Trees, a1) != 0 ? 0xC0000434 : 0;
  else
    return 0LL;
}
