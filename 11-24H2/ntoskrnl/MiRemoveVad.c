/*
 * XREFs of MiRemoveVad @ 0x1402601E8
 * Callers:
 *     MiCoalescePlaceholderAllocations @ 0x1408DC33C (MiCoalescePlaceholderAllocations.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 *     MiPreparePlaceholderVadReplacement @ 0x140A6753C (MiPreparePlaceholderVadReplacement.c)
 * Callees:
 *     MiCaptureDeleteHierarchy @ 0x140216EC0 (MiCaptureDeleteHierarchy.c)
 *     MiInsertVad @ 0x14025FB40 (MiInsertVad.c)
 *     MiIsVadLargePrivate @ 0x14025FD90 (MiIsVadLargePrivate.c)
 *     MiDereferenceVad @ 0x140260450 (MiDereferenceVad.c)
 *     RtlAvlRemoveNode @ 0x140260BC0 (RtlAvlRemoveNode.c)
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     MiGetNextVad @ 0x1402614BC (MiGetNextVad.c)
 *     MiGetPreviousVad @ 0x140261500 (MiGetPreviousVad.c)
 *     MiClearVadBits @ 0x1402617BC (MiClearVadBits.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1402BAD10 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiReturnPageTablePageCommitment @ 0x1409DE1C0 (MiReturnPageTablePageCommitment.c)
 */

_BOOL8 __fastcall MiRemoveVad(__int64 a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 Process; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r8
  char v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r12
  int v17; // r15d
  _BOOL8 result; // rax
  int v19; // [rsp+40h] [rbp-58h] BYREF
  __int64 PreviousVad; // [rsp+48h] [rbp-50h]
  __int64 NextVad; // [rsp+50h] [rbp-48h]
  struct _KTHREAD *v22; // [rsp+58h] [rbp-40h]
  char v23; // [rsp+A8h] [rbp+10h]
  unsigned int v24; // [rsp+B8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v19 = 0;
  v22 = CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( a2 )
  {
    v8 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
    v9 = ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF;
    PreviousVad = MiGetPreviousVad(a1);
    NextVad = MiGetNextVad(a1);
  }
  else
  {
    v8 = 0LL;
    PreviousVad = 0LL;
    v9 = 0LL;
    NextVad = 0LL;
  }
  v24 = 2;
  --*(_QWORD *)(Process + 1384);
  --CurrentThread->SpecialApcDisable;
  v10 = KeAbPreAcquire(Process + 608, 0LL, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(Process + 608), 0LL) )
    ExfAcquirePushLockExclusiveEx(Process + 608, v10, Process + 608);
  if ( v11 )
    *(_BYTE *)(v11 + 10) = 1;
  if ( a2 )
  {
    v24 = 3;
    LOBYTE(v12) = MiLockWorkingSetShared(Process + 1024);
    v13 = v12;
    MiCaptureDeleteHierarchy(v8, v9, v12, (__int64)&v19);
  }
  else
  {
    v13 = 17;
  }
  v23 = MiLockVadTree(v24);
  RtlAvlRemoveNode(Process + 1368, a1);
  if ( *(_QWORD *)(Process + 1376) == a1 )
    *(_QWORD *)(Process + 1376) = *(_QWORD *)(Process + 1368);
  *(_QWORD *)(a1 + 16) = -2LL;
  MiDereferenceVad(a1);
  LOBYTE(v14) = v23;
  MiUnlockVadTree(v24, v14);
  if ( a2 )
  {
    LOBYTE(v15) = v13;
    MiUnlockWorkingSetShared(Process + 1024, v15);
    v16 = NextVad;
    v17 = PreviousVad;
    if ( !a3 )
      MiClearVadBits(v8, v9, PreviousVad, NextVad);
    if ( ((v8 ^ v9) & 0xFFFFFFE00000LL) != 0 || v19 )
      MiReturnPageTablePageCommitment(v8, v9, Process, v17, v16, a1, (__int64)&v19);
    if ( a3 )
      MiInsertVad(a3, Process, 2);
  }
  UNLOCK_PAGE_TABLE_COMMITMENT(v22, Process);
  result = MiIsVadLargePrivate(a1);
  if ( result )
    --*(_DWORD *)(Process + 1500);
  return result;
}
