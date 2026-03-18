/*
 * XREFs of MiCopyToUserVa @ 0x1403DDE48
 * Callers:
 *     MiCopyToCfgBitMap @ 0x14090603C (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiLockPageAndSetDirty @ 0x14023A2A0 (MiLockPageAndSetDirty.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiLocateCloneAddress @ 0x1403DE800 (MiLocateCloneAddress.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403DE840 (MiCopyOnWriteCheckConditions.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     MiChargeFullProcessCommitment @ 0x1409020A0 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1409E454C (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiCopyToUserVa(ULONG_PTR a1, __int64 a2, const void *a3, size_t a4)
{
  _KPROCESS *Process; // r15
  ULONG_PTR v5; // r13
  int v6; // esi
  int v7; // ebx
  unsigned __int8 v8; // r14
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r14
  unsigned __int64 v12; // rbx
  __int64 v13; // r8
  int v14; // r14d
  __int64 CloneAddress; // rax
  unsigned __int8 v17; // [rsp+30h] [rbp-68h]
  int v18; // [rsp+38h] [rbp-60h]
  int v19; // [rsp+3Ch] [rbp-5Ch]
  __int64 v20; // [rsp+40h] [rbp-58h]
  __int64 v21[10]; // [rsp+48h] [rbp-50h] BYREF

  v21[0] = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v21[1] = (__int64)Process;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 0;
  v7 = (*(_DWORD *)(a2 + 48) >> 12) & 0x7F;
LABEL_2:
  v17 = MiLockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink);
  v8 = v17;
  while ( 1 )
  {
    v18 = v6;
    MiMakeSystemAddressValid(v5, v7, v8, 0);
    if ( (*(_QWORD *)v5 & 1) == 0 )
    {
      MiUnlockPageTable((__int64)&Process[2].ReadyListHead.Blink, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v8);
      goto LABEL_2;
    }
    v10 = (*(_QWORD *)v5 >> 12) & 0xFFFFFFFFFFLL;
    v11 = 48 * v10 - 0x220000000000LL;
    if ( *(__int64 *)(v11 + 40) >= 0 )
      break;
    v20 = 0LL;
    if ( (*(_QWORD *)(v11 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v11 + 8) <= 0 )
    {
      if ( Process[1].IdealProcessorAssignmentBlock )
      {
        CloneAddress = MiLocateCloneAddress(Process, *(_QWORD *)(v11 + 8) | 0x8000000000000000uLL, v9);
        v20 = CloneAddress;
        if ( CloneAddress )
        {
          if ( Process[2].ActiveProcessors[4].Bitmap[0] <= *(_QWORD *)(CloneAddress + 96) )
          {
            v20 = 0LL;
          }
          else if ( !v6 )
          {
            MiUnlockPageTable((__int64)&Process[2].ReadyListHead.Blink, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v17);
            v14 = MiChargeFullProcessCommitment(Process, 1LL);
            if ( v14 < 0 )
              goto LABEL_8;
            v6 = 1;
            goto LABEL_2;
          }
        }
      }
    }
    v19 = MiCopyOnWrite(a1, (volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL, 0, v21);
    if ( v19 >= 0 )
    {
      v10 = (*(_QWORD *)v5 >> 12) & 0xFFFFFFFFFFLL;
      v11 = 48 * v10 - 0x220000000000LL;
      v6 = 0;
      if ( !v20 )
        v6 = v18;
      break;
    }
    MiUnlockPageTable((__int64)&Process[2].ReadyListHead.Blink, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v8 = v17;
    MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v17);
    MiCopyOnWriteCheckConditions(&Process[2].ReadyListHead.Blink, (unsigned int)v19, v21[0]);
    MiLockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink);
  }
  v12 = MiMapPageInHyperSpaceWorker(v10, 0LL, 0x80000000);
  memmove((void *)(v12 + (a1 & 0xFFF)), a3, a4);
  *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
  *(_QWORD *)(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  MiLockPageAndSetDirty(v11, 1LL, v13);
  if ( ((v5 >> 9) & 0x7FFFFFFFF8LL) != 0x98000000000LL )
    MiUnlockPageTable((__int64)&Process[2].ReadyListHead.Blink, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v17);
  v14 = 0;
LABEL_8:
  if ( v6 )
    MiReturnFullProcessCommitment(Process, 1LL);
  return (unsigned int)v14;
}
