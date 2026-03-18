/*
 * XREFs of MiSplitReducedCommitClonePage @ 0x1404F9378
 * Callers:
 *     MiProbeLeafPteAccess @ 0x140283F40 (MiProbeLeafPteAccess.c)
 * Callees:
 *     MiLockLowestValidPageTableEx @ 0x140218760 (MiLockLowestValidPageTableEx.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1402BAD10 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiLockProbePacketWorkingSet @ 0x1402C3B90 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1402E1C10 (MiUnlockProbePacketWorkingSet.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiLocateCloneAddress @ 0x1403E3608 (MiLocateCloneAddress.c)
 *     MiProcessCommitIntact @ 0x140402340 (MiProcessCommitIntact.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1404065E0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiCopyOnWriteCheckConditions @ 0x140406AD8 (MiCopyOnWriteCheckConditions.c)
 *     MiChargeFullProcessCommitment @ 0x1408E3010 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1409DE7C8 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitReducedCommitClonePage(_QWORD *a1)
{
  unsigned __int64 v2; // rcx
  int v4; // ebp
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int64 *v6; // rsi
  int v7; // edi
  __int64 v8; // rdx
  _QWORD *CloneAddress; // rax
  __int64 v10; // rcx
  volatile signed __int64 *v11; // [rsp+60h] [rbp+8h] BYREF
  __int128 v12; // [rsp+68h] [rbp+10h] BYREF

  v2 = a1[1];
  v11 = 0LL;
  if ( !(unsigned int)MiProcessCommitIntact(v2) )
    return 3221225477LL;
  MiUnlockProbePacketWorkingSet((__int64)a1);
  v4 = 1;
  CurrentThread = KeGetCurrentThread();
  v6 = (volatile signed __int64 *)(((a1[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1[11]);
  v7 = MiChargeFullProcessCommitment(a1[11], 1LL);
  if ( v7 >= 0 )
  {
    *(_QWORD *)&v12 = 0LL;
    MiLockProbePacketWorkingSet((__int64)a1);
    a1[5] = MiLockLowestValidPageTableEx(a1[13], (ULONG_PTR)v6, (ULONG_PTR *)&v11, 0);
    if ( v11 == v6 && (*v11 & 1) != 0 )
    {
      v8 = 48 * (((unsigned __int64)*v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( *(__int64 *)(v8 + 40) < 0 && ((*(_QWORD *)(v8 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v8 + 8) <= 0) )
      {
        CloneAddress = MiLocateCloneAddress(a1[11], *(_QWORD *)(v8 + 8) | 0x8000000000000000uLL);
        if ( CloneAddress )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v10 + 1040) + 1064LL) > CloneAddress[12] )
          {
            v7 = MiCopyOnWrite(a1[1], v6, 0xFFFFFFFFFFFFFFFFuLL, 0, &v12);
            if ( v7 >= 0 )
              v4 = 0;
          }
        }
      }
    }
    MiUnlockProbePacketWorkingSet((__int64)a1);
    if ( v4 )
      MiReturnFullProcessCommitment(a1[11], 1LL);
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1[11]);
    if ( v7 < 0 )
      MiCopyOnWriteCheckConditions(a1[13], v7, v12);
    v7 = 0;
  }
  else
  {
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1[11]);
  }
  MiLockProbePacketWorkingSet((__int64)a1);
  return (unsigned int)v7;
}
