/*
 * XREFs of MiReleaseCommitForResetPages @ 0x14066B9B8
 * Callers:
 *     MmOutSwapProcess @ 0x1402DDEEC (MmOutSwapProcess.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiGetNextVad @ 0x140291ACC (MiGetNextVad.c)
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     KeForceDetachProcess @ 0x1403422E0 (KeForceDetachProcess.c)
 *     MiGetFirstVad @ 0x1403C6358 (MiGetFirstVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1403C8374 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403C8474 (LOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1403C870C (MiUnlockVad.c)
 *     KeForceAttachProcess @ 0x140424E30 (KeForceAttachProcess.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1404F78D8 (MiIsVadEligibleForCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x14066B330 (MiLogResetPagesCommitRelease.c)
 *     MiWalkResetCommitPages @ 0x14066BB18 (MiWalkResetCommitPages.c)
 */

LONG __fastcall MiReleaseCommitForResetPages(__int64 a1)
{
  _QWORD *v2; // r15
  __int64 *v3; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // r14
  __int64 i; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  unsigned __int8 v9; // al
  struct _KEVENT *v10; // rsi
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  KeForceAttachProcess((_KPROCESS *)a1, 0LL, 0);
  if ( (*(_DWORD *)(a1 + 1208) & 0xF) == 1 )
  {
    v2 = &unk_140E38888;
    v3 = (__int64 *)&unk_140E388A0;
  }
  else
  {
    v2 = (_QWORD *)(a1 + 1224);
    v3 = (__int64 *)(a1 + 1248);
  }
  CurrentThread = KeGetCurrentThread();
  v5 = *v3;
  if ( (*(_DWORD *)(*v3 + 48) & 1) != 0 )
  {
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
    for ( i = (__int64)MiGetFirstVad(a1); ; i = MiGetNextVad(v7) )
    {
      v7 = i;
      if ( !i )
        break;
      MiLockVad((__int64)CurrentThread, i);
      if ( MiIsVadEligibleForCommitRelease(v7) )
        MiWalkResetCommitPages(v7);
      MiUnlockVad((__int64)CurrentThread, v7);
    }
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
  }
  v8 = _InterlockedExchange64((volatile __int64 *)(a1 + 1232), 0LL);
  if ( v8 )
    MiReturnCommit(*((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a1 + 1198)), v8, 0);
  v9 = MiLockWorkingSetExclusive(a1 + 1024);
  v10 = *(struct _KEVENT **)(v5 + 40);
  *(_QWORD *)(v5 + 40) = 0LL;
  v11 = *(_QWORD *)(v5 + 32);
  if ( v11 <= v8 )
    v12 = 0LL;
  else
    v12 = v11 - v8;
  *(_QWORD *)(v5 + 32) = v12;
  *v2 += v8;
  MiUnlockWorkingSetExclusive(a1 + 1024, v9);
  MiLogResetPagesCommitRelease();
  KeForceDetachProcess(0LL, 0, v13, v14);
  return KeSetEvent(v10, 0, 0);
}
