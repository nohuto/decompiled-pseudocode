/*
 * XREFs of MiReleaseCommitForResetPages @ 0x14066A7E8
 * Callers:
 *     MmOutSwapProcess @ 0x14042D50C (MmOutSwapProcess.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MiGetNextVad @ 0x1402614BC (MiGetNextVad.c)
 *     MiLockVad @ 0x1402629EC (MiLockVad.c)
 *     MiUnlockVad @ 0x140264968 (MiUnlockVad.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     KeForceDetachProcess @ 0x1402F9B70 (KeForceDetachProcess.c)
 *     MiGetFirstVad @ 0x1404043B8 (MiGetFirstVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140405E18 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x140405F18 (LOCK_ADDRESS_SPACE.c)
 *     KeForceAttachProcess @ 0x14042D8D0 (KeForceAttachProcess.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1404F9FF8 (MiIsVadEligibleForCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x14066A160 (MiLogResetPagesCommitRelease.c)
 *     MiWalkResetCommitPages @ 0x14066A948 (MiWalkResetCommitPages.c)
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

  KeForceAttachProcess((_KPROCESS *)a1, 0LL, 0);
  if ( (*(_DWORD *)(a1 + 1208) & 0xF) == 1 )
  {
    v2 = &unk_140E38748;
    v3 = (__int64 *)&unk_140E38760;
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
    MiReturnCommit(*((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(a1 + 1198)), v8, 0);
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
  KeForceDetachProcess(0LL, 0);
  return KeSetEvent(v10, 0, 0);
}
