/*
 * XREFs of MiMakeHyperRangeAccessible @ 0x1402DFB90
 * Callers:
 *     MiExpandVadBitMap @ 0x1408E1EE4 (MiExpandVadBitMap.c)
 *     MiCommitPageTablesForVad @ 0x1408E26C0 (MiCommitPageTablesForVad.c)
 *     MiExpandVadBitMapDown @ 0x140A7F4E0 (MiExpandVadBitMapDown.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetNextPageTable @ 0x140235DA0 (MiGetNextPageTable.c)
 *     MiIncreaseUsedPtes @ 0x14028A180 (MiIncreaseUsedPtes.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiFastReadLeafPte @ 0x1402E1850 (MiFastReadLeafPte.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiFillHyperPtes @ 0x14045AF48 (MiFillHyperPtes.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiUpdateChargedWsles @ 0x1404F6004 (MiUpdateChargedWsles.c)
 *     MiChargeFullProcessCommitment @ 0x1408E3010 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1409DE7C8 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiMakeHyperRangeAccessible(unsigned __int64 a1, unsigned __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdi
  _KPROCESS *Process; // r15
  __int64 *v6; // r14
  __int64 p_Blink; // rbp
  unsigned __int8 v8; // al
  _KSCHEDULING_GROUP **p_SchedulingGroup; // rax
  unsigned int v10; // esi
  _KSCHEDULING_GROUP_POLICY *v11; // rbx
  __int64 CurrentIrql; // r12
  _DWORD *MmInternal; // rcx
  int v14; // ecx
  __int64 v15; // r13
  __int64 v16; // rbx
  __int64 v17; // rsi
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r14
  int v20; // r13d
  unsigned __int64 v21; // rsi
  __int64 result; // rax
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  __int64 v25; // rax
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // r14
  __int64 DemandZeroPte; // rbx
  __int64 v29; // rcx
  unsigned __int64 v30; // [rsp+30h] [rbp-98h]
  unsigned __int64 v31; // [rsp+38h] [rbp-90h]
  int v32; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v33[20]; // [rsp+44h] [rbp-84h]
  __int64 v34; // [rsp+58h] [rbp-70h]
  __int64 v35; // [rsp+60h] [rbp-68h]
  unsigned __int64 v36; // [rsp+68h] [rbp-60h]
  __int64 v37; // [rsp+70h] [rbp-58h]
  _KPROCESS *v38; // [rsp+78h] [rbp-50h]
  unsigned __int64 NextPageTable; // [rsp+D0h] [rbp+8h] BYREF
  int v40; // [rsp+D8h] [rbp+10h]
  __int64 *v41; // [rsp+E0h] [rbp+18h]
  int v42; // [rsp+E8h] [rbp+20h] BYREF

  v41 = a3;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  *a3 = 0LL;
  Process = CurrentThread->ApcState.Process;
  v6 = a3;
  NextPageTable = 0LL;
  v42 = 0;
  *(_OWORD *)v33 = 0LL;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v38 = Process;
  v36 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v31 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v36 != v31 || (int)MiFastReadLeafPte(a1, &NextPageTable) < 0 || !NextPageTable )
  {
    v8 = Process[2].ContextSwitches & 0xF;
    v32 = 0;
    if ( v8 >= 6u )
    {
      CurrentIrql = KeGetCurrentIrql();
      v34 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, 2LL);
    }
    else
    {
      if ( (Process[2].ContextSwitches & 0xF) == 1 )
        p_SchedulingGroup = (_KSCHEDULING_GROUP **)&unk_140E38740;
      else
        p_SchedulingGroup = &Process[2].SchedulingGroup;
      v10 = (KeGetPcr()->Prcb.Number >> 1) & 3;
      v11 = &(*p_SchedulingGroup)->Policy + 8 * (unsigned __int64)v10;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, 2LL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(v11);
        v23 = v11->Value & 0x7FFFFFFF;
        do
        {
          v24 = v23;
          v23 = _InterlockedCompareExchange((volatile signed __int32 *)v11, v23 + 1, v23);
          if ( v24 == v23 )
            goto LABEL_12;
        }
        while ( v23 >= 0 );
        ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)v11, CurrentIrql);
      }
      else
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v11, CurrentIrql);
      }
LABEL_12:
      MmInternal = KeGetCurrentPrcb()->MmInternal;
      if ( MmInternal )
        MmInternal[81] = v10;
      v34 = CurrentIrql;
    }
    v14 = 0;
    LODWORD(NextPageTable) = v32;
    v15 = 0LL;
    v35 = 0LL;
    while ( 1 )
    {
      v16 = 0LL;
      v17 = 0LL;
      v40 = v14;
      *(_OWORD *)&v33[4] = 0uLL;
      v30 = v36;
      if ( v36 <= v31 )
        break;
LABEL_23:
      if ( v14 || !v17 )
      {
        if ( v16 )
          MiUpdateChargedWsles(p_Blink, v16);
        MiUnlockWorkingSetShared(p_Blink, (unsigned __int8)CurrentIrql);
        v25 = *v6;
        if ( v17 != *v6 )
        {
          *v6 = v17;
          v4 = v25 - v17;
        }
        if ( v16 != v15 )
          v4 += v15 - v16;
        if ( v4 )
          MiReturnFullProcessCommitment(Process, v4);
        return 0LL;
      }
      MiUnlockWorkingSetShared(p_Blink, (unsigned __int8)CurrentIrql);
      v35 = v16;
      v15 = v16;
      result = MiChargeFullProcessCommitment(Process, v17 + v16);
      if ( (int)result < 0 )
        return result;
      *v6 = v17;
      LODWORD(NextPageTable) = 1;
      v32 = 1;
      MiLockWorkingSetShared(p_Blink);
      v14 = 1;
    }
    v18 = v31;
    v19 = v36;
    v20 = NextPageTable;
    while ( 1 )
    {
      NextPageTable = MiGetNextPageTable(v19, v18, CurrentIrql, 0, &v42);
      if ( NextPageTable )
      {
        v37 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( NextPageTable == v19 )
        {
          v26 = v30;
          v27 = (v30 & 0xFFFFFFFFFFFFF000uLL) + 4088;
          if ( v27 > v18 )
            v27 = v18;
          do
          {
            if ( v26 > v27 )
              break;
            NextPageTable = MI_READ_PTE_LOCK_FREE(v26);
            if ( !NextPageTable )
            {
              if ( v20 )
              {
                DemandZeroPte = MiMakeDemandZeroPte(4LL);
                MiIncreaseUsedPtes(v29, ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1u, 0);
                *(_QWORD *)v26 = DemandZeroPte;
              }
              *(_QWORD *)&v33[4] = ++v17;
            }
            v26 += 8LL;
          }
          while ( (v26 & 0xFFF) != 0 );
          Process = v38;
          v30 = v26;
          p_Blink = (__int64)&v38[2].ReadyListHead.Blink;
          MiUnlockPageTableInternal(&v38[2].ReadyListHead.Blink, v37);
          LOBYTE(CurrentIrql) = v34;
          v18 = v31;
          v19 = v30;
          goto LABEL_21;
        }
        MiUnlockPageTableInternal(p_Blink, ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v21 = NextPageTable - 8;
      }
      else
      {
        v21 = v18;
      }
      MiFillHyperPtes(v19, v21, (unsigned __int8)CurrentIrql, &v32);
      v20 = v32;
      v19 = v21 + 8;
      v17 = *(_QWORD *)&v33[4];
      v30 = v19;
LABEL_21:
      if ( v19 > v18 )
      {
        v6 = v41;
        v4 = 0LL;
        v15 = v35;
        v16 = *(_QWORD *)&v33[12];
        v14 = v40;
        goto LABEL_23;
      }
    }
  }
  return 0LL;
}
