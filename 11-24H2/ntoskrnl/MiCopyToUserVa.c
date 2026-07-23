/*
 * XREFs of MiCopyToUserVa @ 0x1403C9340
 * Callers:
 *     MiCopyToCfgBitMap @ 0x14091C9CC (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiLockPageAndSetDirty @ 0x140249DD0 (MiLockPageAndSetDirty.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403C927C (MiCopyOnWriteCheckConditions.c)
 *     MiLocateCloneAddress @ 0x1403C9CE8 (MiLocateCloneAddress.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     MiChargeFullProcessCommitment @ 0x140919BC0 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1409D8398 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiCopyToUserVa(ULONG_PTR a1, __int64 a2, const void *a3, size_t a4)
{
  _KPROCESS *Process; // r15
  ULONG_PTR v5; // r13
  int v6; // esi
  int v7; // ebx
  unsigned __int8 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // r14
  unsigned __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r14d
  __int64 CloneAddress; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int8 v20; // [rsp+30h] [rbp-68h]
  int v21; // [rsp+38h] [rbp-60h]
  int v22; // [rsp+3Ch] [rbp-5Ch]
  __int64 v23; // [rsp+40h] [rbp-58h]
  __int64 v24[10]; // [rsp+48h] [rbp-50h] BYREF

  v24[0] = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v24[1] = (__int64)Process;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 0;
  v7 = (*(_DWORD *)(a2 + 48) >> 12) & 0x7F;
LABEL_2:
  v20 = MiLockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, a2, (__int64)a3, a4);
  v8 = v20;
  while ( 1 )
  {
    v21 = v6;
    MiMakeSystemAddressValid(v5, v7, v8, 0);
    if ( (*(_QWORD *)v5 & 1) == 0 )
    {
      MiUnlockPageTableInternal(
        (__int64)&Process[2].ReadyListHead.Blink,
        ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v8);
      goto LABEL_2;
    }
    v9 = (*(_QWORD *)v5 >> 12) & 0xFFFFFFFFFFLL;
    v10 = 48 * v9 - 0x220000000000LL;
    if ( *(__int64 *)(v10 + 40) >= 0 )
      break;
    v23 = 0LL;
    if ( (*(_QWORD *)(v10 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v10 + 8) <= 0 )
    {
      if ( Process[1].IdealProcessorAssignmentBlock )
      {
        CloneAddress = MiLocateCloneAddress(Process, *(_QWORD *)(v10 + 8) | 0x8000000000000000uLL);
        v23 = CloneAddress;
        if ( CloneAddress )
        {
          if ( Process[2].ActiveProcessors[4].Bitmap[0] <= *(_QWORD *)(CloneAddress + 96) )
          {
            v23 = 0LL;
          }
          else if ( !v6 )
          {
            MiUnlockPageTableInternal(
              (__int64)&Process[2].ReadyListHead.Blink,
              ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v20);
            v14 = MiChargeFullProcessCommitment(Process);
            if ( v14 < 0 )
              goto LABEL_8;
            v6 = 1;
            goto LABEL_2;
          }
        }
      }
    }
    v22 = MiCopyOnWrite(a1, (volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL, 0, v24);
    if ( v22 >= 0 )
    {
      v9 = (*(_QWORD *)v5 >> 12) & 0xFFFFFFFFFFLL;
      v10 = 48 * v9 - 0x220000000000LL;
      v6 = 0;
      if ( !v23 )
        v6 = v21;
      break;
    }
    MiUnlockPageTableInternal((__int64)&Process[2].ReadyListHead.Blink, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v8 = v20;
    MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v20);
    MiCopyOnWriteCheckConditions((__int64)&Process[2].ReadyListHead.Blink, v22, v24[0]);
    MiLockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v17, v18, v19);
  }
  v11 = MiMapPageInHyperSpaceWorker(v9, 0LL, 0x80000000);
  memmove((void *)(v11 + (a1 & 0xFFF)), a3, a4);
  *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
  *(_QWORD *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  MiLockPageAndSetDirty(v10, 1LL, v12, v13);
  if ( ((v5 >> 9) & 0x7FFFFFFFF8LL) != 0x98000000000LL )
    MiUnlockPageTableInternal((__int64)&Process[2].ReadyListHead.Blink, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v20);
  v14 = 0;
LABEL_8:
  if ( v6 )
    MiReturnFullProcessCommitment(Process);
  return (unsigned int)v14;
}
