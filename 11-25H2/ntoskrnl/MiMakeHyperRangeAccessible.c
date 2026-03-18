/*
 * XREFs of MiMakeHyperRangeAccessible @ 0x1402B94E0
 * Callers:
 *     MiExpandVadBitMap @ 0x140900244 (MiExpandVadBitMap.c)
 *     MiCommitPageTablesForVad @ 0x140900E00 (MiCommitPageTablesForVad.c)
 *     MiExpandVadBitMapDown @ 0x140A7BFC8 (MiExpandVadBitMapDown.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiFastReadLeafPte @ 0x1402BB030 (MiFastReadLeafPte.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiGetNextPageTable @ 0x14037D8BC (MiGetNextPageTable.c)
 *     MiIncreaseUsedPtes @ 0x1403837D0 (MiIncreaseUsedPtes.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiFillHyperPtes @ 0x14045BBC8 (MiFillHyperPtes.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiUpdateChargedWsles @ 0x1404F37B0 (MiUpdateChargedWsles.c)
 *     MiChargeFullProcessCommitment @ 0x1409020A0 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1409E454C (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiMakeHyperRangeAccessible(unsigned __int64 a1, unsigned __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdi
  _KPROCESS *Process; // r13
  __int64 *v6; // r15
  __int64 p_Blink; // rsi
  unsigned __int8 v8; // al
  _KSCHEDULING_GROUP **p_SchedulingGroup; // rax
  unsigned int v10; // ebp
  _KSCHEDULING_GROUP_POLICY *v11; // rbx
  unsigned __int8 v12; // r14
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  _DWORD *MmInternal; // rcx
  __int64 CurrentIrql; // rbp
  int v17; // ecx
  __int64 v18; // r12
  __int64 v19; // rbx
  __int64 v20; // r14
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r15
  int v23; // r12d
  unsigned __int64 v24; // r14
  __int64 v25; // rax
  __int64 result; // rax
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // r15
  __int64 DemandZeroPte; // rbx
  __int64 v30; // rcx
  unsigned __int64 v31; // [rsp+30h] [rbp-98h]
  unsigned __int64 v32; // [rsp+38h] [rbp-90h]
  int v33; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v34[20]; // [rsp+44h] [rbp-84h]
  __int64 v35; // [rsp+58h] [rbp-70h]
  __int64 v36; // [rsp+60h] [rbp-68h]
  unsigned __int64 v37; // [rsp+68h] [rbp-60h]
  unsigned __int64 v38; // [rsp+70h] [rbp-58h]
  _KPROCESS *v39; // [rsp+78h] [rbp-50h]
  unsigned __int64 NextPageTable; // [rsp+D0h] [rbp+8h] BYREF
  int v41; // [rsp+D8h] [rbp+10h]
  __int64 *v42; // [rsp+E0h] [rbp+18h]
  int v43; // [rsp+E8h] [rbp+20h] BYREF

  v42 = a3;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  *a3 = 0LL;
  Process = CurrentThread->ApcState.Process;
  v6 = a3;
  NextPageTable = 0LL;
  v43 = 0;
  *(_OWORD *)v34 = 0LL;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v39 = Process;
  v37 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v32 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v37 != v32 || (int)MiFastReadLeafPte(a1, &NextPageTable) < 0 || !NextPageTable )
  {
    v8 = Process[2].ContextSwitches & 0xF;
    v33 = 0;
    if ( v8 >= 6u )
    {
      CurrentIrql = KeGetCurrentIrql();
      v35 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql);
    }
    else
    {
      if ( (Process[2].ContextSwitches & 0xF) == 1 )
        p_SchedulingGroup = (_KSCHEDULING_GROUP **)&unk_140E38500;
      else
        p_SchedulingGroup = &Process[2].SchedulingGroup;
      v10 = (KeGetPcr()->Prcb.Number >> 1) & 3;
      v11 = &(*p_SchedulingGroup)->Policy + 8 * (unsigned __int64)v10;
      v12 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v12);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(v11);
        v13 = v11->Value & 0x7FFFFFFF;
        do
        {
          v14 = v13;
          v13 = _InterlockedCompareExchange((volatile signed __int32 *)v11, v13 + 1, v13);
          if ( v14 == v13 )
            goto LABEL_12;
        }
        while ( v13 >= 0 );
        ExpWaitForSpinLockSharedAndAcquire(v11, v12);
      }
      else
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v11, v12);
      }
LABEL_12:
      MmInternal = KeGetCurrentPrcb()->MmInternal;
      if ( MmInternal )
        MmInternal[81] = v10;
      LOBYTE(CurrentIrql) = v12;
      v35 = v12;
    }
    v17 = 0;
    LODWORD(NextPageTable) = v33;
    v18 = 0LL;
    v36 = 0LL;
    while ( 1 )
    {
      v19 = 0LL;
      v20 = 0LL;
      v41 = v17;
      *(_OWORD *)&v34[4] = 0uLL;
      v31 = v37;
      if ( v37 <= v32 )
        break;
LABEL_23:
      if ( v17 || !v20 )
      {
        if ( v19 )
          MiUpdateChargedWsles(p_Blink, v19);
        MiUnlockWorkingSetShared(p_Blink, (unsigned __int8)CurrentIrql);
        v25 = *v6;
        if ( v20 != *v6 )
        {
          *v6 = v20;
          v4 = v25 - v20;
        }
        if ( v19 != v18 )
          v4 += v18 - v19;
        if ( v4 )
          MiReturnFullProcessCommitment(Process, v4);
        return 0LL;
      }
      MiUnlockWorkingSetShared(p_Blink, (unsigned __int8)CurrentIrql);
      v36 = v19;
      v18 = v19;
      result = MiChargeFullProcessCommitment(Process, v20 + v19);
      if ( (int)result < 0 )
        return result;
      *v6 = v20;
      LODWORD(NextPageTable) = 1;
      v33 = 1;
      MiLockWorkingSetShared(p_Blink);
      v17 = 1;
    }
    v21 = v32;
    v22 = v37;
    v23 = NextPageTable;
    while ( 1 )
    {
      NextPageTable = MiGetNextPageTable(v22, v21, (unsigned __int8)CurrentIrql, 0, (__int64)&v43);
      if ( NextPageTable )
      {
        v38 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( NextPageTable == v22 )
        {
          v27 = v31;
          v28 = (v31 & 0xFFFFFFFFFFFFF000uLL) + 4088;
          if ( v28 > v21 )
            v28 = v21;
          do
          {
            if ( v27 > v28 )
              break;
            NextPageTable = MI_READ_PTE_LOCK_FREE(v27);
            if ( !NextPageTable )
            {
              if ( v23 )
              {
                DemandZeroPte = MiMakeDemandZeroPte(4LL);
                MiIncreaseUsedPtes(v30, ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL, 0LL);
                *(_QWORD *)v27 = DemandZeroPte;
              }
              *(_QWORD *)&v34[4] = ++v20;
            }
            v27 += 8LL;
          }
          while ( (v27 & 0xFFF) != 0 );
          Process = v39;
          v31 = v27;
          p_Blink = (__int64)&v39[2].ReadyListHead.Blink;
          MiUnlockPageTable((__int64)&v39[2].ReadyListHead.Blink, v38);
          LOBYTE(CurrentIrql) = v35;
          v21 = v32;
          v22 = v31;
          goto LABEL_21;
        }
        MiUnlockPageTable(p_Blink, ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v24 = NextPageTable - 8;
      }
      else
      {
        v24 = v21;
      }
      MiFillHyperPtes(v22, v24, (unsigned __int8)CurrentIrql, &v33);
      v23 = v33;
      v22 = v24 + 8;
      v20 = *(_QWORD *)&v34[4];
      v31 = v22;
LABEL_21:
      if ( v22 > v21 )
      {
        v6 = v42;
        v4 = 0LL;
        v18 = v36;
        v19 = *(_QWORD *)&v34[12];
        v17 = v41;
        goto LABEL_23;
      }
    }
  }
  return 0LL;
}
