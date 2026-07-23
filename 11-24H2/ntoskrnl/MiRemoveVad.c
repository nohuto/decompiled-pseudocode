/*
 * XREFs of MiRemoveVad @ 0x1402907F8
 * Callers:
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408DA56C (MiCoalescePlaceholderAllocations.c)
 *     MiPreparePlaceholderVadReplacement @ 0x140A6031C (MiPreparePlaceholderVadReplacement.c)
 * Callees:
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiCaptureDeleteHierarchy @ 0x140243D80 (MiCaptureDeleteHierarchy.c)
 *     MiInsertVad @ 0x140290150 (MiInsertVad.c)
 *     MiIsVadLargePrivate @ 0x1402903A0 (MiIsVadLargePrivate.c)
 *     MiDereferenceVad @ 0x140290A60 (MiDereferenceVad.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiGetNextVad @ 0x140291ACC (MiGetNextVad.c)
 *     MiGetPreviousVad @ 0x140291B10 (MiGetPreviousVad.c)
 *     MiClearVadBits @ 0x140291DCC (MiClearVadBits.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140362450 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiReturnPageTablePageCommitment @ 0x1409D7D90 (MiReturnPageTablePageCommitment.c)
 */

_BOOL8 __fastcall MiRemoveVad(__int64 a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 Process; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r13
  __int64 v15; // r8
  unsigned __int8 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r12
  int v20; // r15d
  _BOOL8 result; // rax
  int v22; // [rsp+40h] [rbp-58h] BYREF
  __int64 PreviousVad; // [rsp+48h] [rbp-50h]
  __int64 NextVad; // [rsp+50h] [rbp-48h]
  struct _KTHREAD *v25; // [rsp+58h] [rbp-40h]
  char v26; // [rsp+A8h] [rbp+10h]
  unsigned int v27; // [rsp+B8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v22 = 0;
  v25 = CurrentThread;
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
  v27 = 2;
  --*(_QWORD *)(Process + 1384);
  --CurrentThread->SpecialApcDisable;
  v10 = KeAbPreAcquire(Process + 608, 0LL, 0LL);
  v14 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(Process + 608), 0LL) )
    ExfAcquirePushLockExclusiveEx(Process + 608, v10, Process + 608);
  if ( v14 )
    *(_BYTE *)(v14 + 10) = 1;
  if ( a2 )
  {
    v27 = 3;
    LOBYTE(v15) = MiLockWorkingSetShared(Process + 1024, v11, v12, v13);
    v16 = v15;
    MiCaptureDeleteHierarchy(v8, v9, v15, (__int64)&v22);
  }
  else
  {
    v16 = 17;
  }
  v26 = MiLockVadTree(v27, v11, v12, v13);
  RtlAvlRemoveNode(Process + 1368, a1);
  if ( *(_QWORD *)(Process + 1376) == a1 )
    *(_QWORD *)(Process + 1376) = *(_QWORD *)(Process + 1368);
  *(_QWORD *)(a1 + 16) = -2LL;
  MiDereferenceVad(a1);
  LOBYTE(v17) = v26;
  MiUnlockVadTree(v27, v17);
  if ( a2 )
  {
    MiUnlockWorkingSetShared(Process + 1024, v16);
    v19 = NextVad;
    v20 = PreviousVad;
    if ( !a3 )
      MiClearVadBits(v8, v9, PreviousVad, NextVad);
    if ( ((v8 ^ v9) & 0xFFFFFFE00000LL) != 0 || v22 )
      MiReturnPageTablePageCommitment(v8, v9, Process, v20, v19, a1, (__int64)&v22);
    if ( a3 )
      MiInsertVad(a3, Process, 2LL, v18);
  }
  UNLOCK_PAGE_TABLE_COMMITMENT(v25, Process);
  result = MiIsVadLargePrivate(a1);
  if ( result )
    --*(_DWORD *)(Process + 1500);
  return result;
}
