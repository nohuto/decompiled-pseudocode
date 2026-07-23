/*
 * XREFs of MiBeginHoldingDirtyFaults @ 0x14067E020
 * Callers:
 *     MiPrepareToHotPatchVad @ 0x1407F6280 (MiPrepareToHotPatchVad.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F0C98 (MiMoveDirtyBitsToPfns.c)
 */

char __fastcall MiBeginHoldingDirtyFaults(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rsi
  unsigned __int8 v6; // al
  _QWORD *v7; // rcx
  __int64 v8; // rbx

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v6 = MiLockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink);
  v7 = *(_QWORD **)(a1 + 32);
  v8 = a1 + 24;
  if ( *v7 != v8 )
    __fastfail(3u);
  a2[1] = v7;
  *a2 = v8;
  *v7 = a2;
  *(_QWORD *)(v8 + 8) = a2;
  MiUnlockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink, v6);
  return MiMoveDirtyBitsToPfns(a2[2], a2[3], 0LL, 0);
}
