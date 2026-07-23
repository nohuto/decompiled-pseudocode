/*
 * XREFs of MiSplitReducedCommitClonePage @ 0x1404F6C58
 * Callers:
 *     MiProbeLeafPteAccess @ 0x1402394D0 (MiProbeLeafPteAccess.c)
 * Callees:
 *     MiLockProbePacketWorkingSet @ 0x14020AFF0 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14020BCC0 (MiUnlockProbePacketWorkingSet.c)
 *     MiLockLowestValidPageTableEx @ 0x1402454B0 (MiLockLowestValidPageTableEx.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140362450 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1403C8D90 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403C927C (MiCopyOnWriteCheckConditions.c)
 *     MiLocateCloneAddress @ 0x1403C9CE8 (MiLocateCloneAddress.c)
 *     MiProcessCommitIntact @ 0x1403FC8C0 (MiProcessCommitIntact.c)
 *     MiChargeFullProcessCommitment @ 0x140919BC0 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1409D8398 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitReducedCommitClonePage(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rcx
  int v7; // ebp
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int64 *v9; // rsi
  int v10; // edi
  __int64 v11; // rdx
  _QWORD *CloneAddress; // rax
  __int64 v13; // rcx
  volatile signed __int64 *v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  v5 = a1[1];
  v14 = 0LL;
  if ( !(unsigned int)MiProcessCommitIntact(v5, a2, a3, a4) )
    return 3221225477LL;
  MiUnlockProbePacketWorkingSet((__int64)a1);
  v7 = 1;
  CurrentThread = KeGetCurrentThread();
  v9 = (volatile signed __int64 *)(((a1[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1[11]);
  v10 = MiChargeFullProcessCommitment(a1[11]);
  if ( v10 >= 0 )
  {
    v15 = 0LL;
    MiLockProbePacketWorkingSet((__int64)a1);
    a1[5] = MiLockLowestValidPageTableEx(a1[13], (unsigned __int64)v9, (ULONG_PTR *)&v14, 0);
    if ( v14 == v9 && (*v14 & 1) != 0 )
    {
      v11 = 48 * (((unsigned __int64)*v14 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( *(__int64 *)(v11 + 40) < 0 && ((*(_QWORD *)(v11 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v11 + 8) <= 0) )
      {
        CloneAddress = MiLocateCloneAddress(a1[11], *(_QWORD *)(v11 + 8) | 0x8000000000000000uLL);
        if ( CloneAddress )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v13 + 1040) + 1064LL) > CloneAddress[12] )
          {
            v10 = MiCopyOnWrite(a1[1], v9, 0xFFFFFFFFFFFFFFFFuLL, 0, &v15);
            if ( v10 >= 0 )
              v7 = 0;
          }
        }
      }
    }
    MiUnlockProbePacketWorkingSet((__int64)a1);
    if ( v7 )
      MiReturnFullProcessCommitment(a1[11]);
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1[11]);
    if ( v10 < 0 )
      MiCopyOnWriteCheckConditions(a1[13], v10, v15);
    v10 = 0;
  }
  else
  {
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1[11]);
  }
  MiLockProbePacketWorkingSet((__int64)a1);
  return (unsigned int)v10;
}
