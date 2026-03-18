/*
 * XREFs of MiRemoveVad @ 0x1402A7E14
 * Callers:
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408F71CC (MiCoalescePlaceholderAllocations.c)
 *     MiPreparePlaceholderVadReplacement @ 0x140A68E90 (MiPreparePlaceholderVadReplacement.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     MiDereferenceVad @ 0x1402A8080 (MiDereferenceVad.c)
 *     MiInsertVad @ 0x1402A80AC (MiInsertVad.c)
 *     MiIsVadLargePrivate @ 0x1402A82E0 (MiIsVadLargePrivate.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     MiGetNextVad @ 0x1402A96D8 (MiGetNextVad.c)
 *     MiGetPreviousVad @ 0x1402A971C (MiGetPreviousVad.c)
 *     MiClearVadBits @ 0x1402A9CA0 (MiClearVadBits.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiCaptureDeleteHierarchy @ 0x1402B5FE0 (MiCaptureDeleteHierarchy.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140320330 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiReturnPageTablePageCommitment @ 0x1409E3F50 (MiReturnPageTablePageCommitment.c)
 */

__int64 __fastcall MiRemoveVad(__int64 a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r8
  _KPROCESS *Process; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 *v12; // rax
  __int64 *v13; // r13
  __int64 v14; // r8
  char v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r12
  int v19; // r15d
  __int64 result; // rax
  int v21; // [rsp+40h] [rbp-58h] BYREF
  __int64 PreviousVad; // [rsp+48h] [rbp-50h]
  __int64 NextVad; // [rsp+50h] [rbp-48h]
  struct _KTHREAD *v24; // [rsp+58h] [rbp-40h]
  char v25; // [rsp+A8h] [rbp+10h]
  unsigned int v26; // [rsp+B8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v21 = 0;
  v24 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  if ( a2 )
  {
    v8 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
    v9 = ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF;
    PreviousVad = MiGetPreviousVad(a1);
    NextVad = MiGetNextVad(a1, v10, v11);
  }
  else
  {
    v8 = 0LL;
    PreviousVad = 0LL;
    v9 = 0LL;
    NextVad = 0LL;
  }
  v26 = 2;
  --Process[3].Header.WaitListHead.Blink;
  --CurrentThread->SpecialApcDisable;
  v12 = KeAbPreAcquire((__int64)&Process[1].ActiveGroupsMask, 0LL);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Process[1].ActiveGroupsMask, 0LL) )
    ExfAcquirePushLockExclusiveEx(Process[1].ActiveGroupsMask.Masks, v12, (__int64)&Process[1].ActiveGroupsMask);
  if ( v13 )
    *((_BYTE *)v13 + 10) = 1;
  if ( a2 )
  {
    v26 = 3;
    LOBYTE(v14) = MiLockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink);
    v15 = v14;
    MiCaptureDeleteHierarchy(v8, v9, v14, &v21);
  }
  else
  {
    v15 = 17;
  }
  v25 = MiLockVadTree(v26);
  RtlAvlRemoveNode(&Process[3], a1);
  if ( Process[3].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)a1 )
    Process[3].Header.WaitListHead.Flink = *(struct _LIST_ENTRY **)&Process[3].Header.Lock;
  *(_QWORD *)(a1 + 16) = -2LL;
  MiDereferenceVad(a1);
  LOBYTE(v16) = v25;
  MiUnlockVadTree(v26, v16);
  if ( a2 )
  {
    LOBYTE(v17) = v15;
    MiUnlockWorkingSetShared(&Process[2].ReadyListHead.Blink, v17);
    v18 = NextVad;
    v19 = PreviousVad;
    if ( !a3 )
      MiClearVadBits(v8, v9, PreviousVad, NextVad);
    if ( ((v8 ^ v9) & 0xFFFFFFE00000LL) != 0 || v21 )
      MiReturnPageTablePageCommitment(v8, v9, (_DWORD)Process, v19, v18, a1, (__int64)&v21);
    if ( a3 )
      MiInsertVad(a3, Process, 2LL);
  }
  UNLOCK_PAGE_TABLE_COMMITMENT(v24, Process);
  result = MiIsVadLargePrivate(a1);
  if ( (_DWORD)result )
    --HIDWORD(Process[3].ActiveProcessors);
  return result;
}
