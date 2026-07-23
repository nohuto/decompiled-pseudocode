/*
 * XREFs of MiMakeHyperRangeAccessible @ 0x140241470
 * Callers:
 *     MiExpandVadBitMap @ 0x140918A94 (MiExpandVadBitMap.c)
 *     MiCommitPageTablesForVad @ 0x140919270 (MiCommitPageTablesForVad.c)
 *     MiExpandVadBitMapDown @ 0x140A78C90 (MiExpandVadBitMapDown.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14020FF30 (MiGetNextPageTable.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiFastReadLeafPte @ 0x140243130 (MiFastReadLeafPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiFillHyperPtes @ 0x1404502E8 (MiFillHyperPtes.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiUpdateChargedWsles @ 0x1404F3904 (MiUpdateChargedWsles.c)
 *     MiChargeFullProcessCommitment @ 0x140919BC0 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1409D8398 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiMakeHyperRangeAccessible(unsigned __int64 a1, unsigned __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdi
  _KPROCESS *Process; // r15
  __int64 *v6; // r14
  __int64 p_Blink; // rbp
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 v10; // al
  _KSCHEDULING_GROUP **p_SchedulingGroup; // rax
  unsigned int v12; // esi
  _KSCHEDULING_GROUP_POLICY *v13; // rbx
  __int64 CurrentIrql; // r12
  _DWORD *MmInternal; // rcx
  int v16; // ecx
  __int64 v17; // r13
  __int64 v18; // rbx
  __int64 v19; // rsi
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r14
  int v22; // r13d
  __int64 v23; // r8
  unsigned __int64 v24; // rsi
  __int64 result; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  signed __int32 v29; // eax
  signed __int32 v30; // ett
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // rbp
  unsigned __int64 v34; // r14
  __int64 v35; // r9
  __int64 DemandZeroPte; // rbx
  __int64 v37; // rcx
  unsigned __int64 v38; // [rsp+30h] [rbp-98h]
  unsigned __int64 v39; // [rsp+38h] [rbp-90h]
  int v40; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v41[20]; // [rsp+44h] [rbp-84h]
  __int64 v42; // [rsp+58h] [rbp-70h]
  __int64 v43; // [rsp+60h] [rbp-68h]
  unsigned __int64 v44; // [rsp+68h] [rbp-60h]
  __int64 v45; // [rsp+70h] [rbp-58h]
  _KPROCESS *v46; // [rsp+78h] [rbp-50h]
  unsigned __int64 NextPageTable; // [rsp+D0h] [rbp+8h] BYREF
  int v48; // [rsp+D8h] [rbp+10h]
  __int64 *v49; // [rsp+E0h] [rbp+18h]
  int v50; // [rsp+E8h] [rbp+20h] BYREF

  v49 = a3;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  *a3 = 0LL;
  Process = CurrentThread->ApcState.Process;
  v6 = a3;
  NextPageTable = 0LL;
  v50 = 0;
  *(_OWORD *)v41 = 0LL;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v46 = Process;
  v8 = 0xFFFFF68000000000uLL;
  v44 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = (a2 >> 9) & 0x7FFFFFFFF8LL;
  v39 = v9 - 0x98000000000LL;
  if ( v44 != v9 - 0x98000000000LL || (int)MiFastReadLeafPte(a1, &NextPageTable) < 0 || !NextPageTable )
  {
    v10 = Process[2].ContextSwitches & 0xF;
    v40 = 0;
    if ( v10 >= 6u )
    {
      CurrentIrql = KeGetCurrentIrql();
      v42 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, 2LL);
    }
    else
    {
      if ( (Process[2].ContextSwitches & 0xF) == 1 )
        p_SchedulingGroup = (_KSCHEDULING_GROUP **)&unk_140E38880;
      else
        p_SchedulingGroup = &Process[2].SchedulingGroup;
      v12 = (KeGetPcr()->Prcb.Number >> 1) & 3;
      v13 = &(*p_SchedulingGroup)->Policy + 8 * (unsigned __int64)v12;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, 2LL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(v13);
        v29 = v13->Value & 0x7FFFFFFF;
        do
        {
          v30 = v29;
          v29 = _InterlockedCompareExchange((volatile signed __int32 *)v13, v29 + 1, v29);
          if ( v30 == v29 )
            goto LABEL_12;
        }
        while ( v29 >= 0 );
        ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)v13, (unsigned __int8)CurrentIrql, v8, v9);
      }
      else
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v13, CurrentIrql);
      }
LABEL_12:
      MmInternal = KeGetCurrentPrcb()->MmInternal;
      if ( MmInternal )
        MmInternal[81] = v12;
      v42 = CurrentIrql;
    }
    v16 = 0;
    LODWORD(NextPageTable) = v40;
    v17 = 0LL;
    v43 = 0LL;
    while ( 1 )
    {
      v18 = 0LL;
      v19 = 0LL;
      v48 = v16;
      *(_OWORD *)&v41[4] = 0uLL;
      v38 = v44;
      if ( v44 <= v39 )
        break;
LABEL_23:
      if ( v16 || !v19 )
      {
        if ( v18 )
          MiUpdateChargedWsles(p_Blink, v18);
        MiUnlockWorkingSetShared(p_Blink, (unsigned __int8)CurrentIrql);
        v31 = *v6;
        if ( v19 != *v6 )
        {
          *v6 = v19;
          v4 = v31 - v19;
        }
        if ( v18 != v17 )
          v4 += v17 - v18;
        if ( v4 )
          MiReturnFullProcessCommitment(Process);
        return 0LL;
      }
      MiUnlockWorkingSetShared(p_Blink, (unsigned __int8)CurrentIrql);
      v43 = v18;
      v17 = v18;
      result = MiChargeFullProcessCommitment(Process);
      if ( (int)result < 0 )
        return result;
      *v6 = v19;
      LODWORD(NextPageTable) = 1;
      v40 = 1;
      MiLockWorkingSetShared(p_Blink, v26, v27, v28);
      v16 = 1;
    }
    v20 = v39;
    v21 = v44;
    v22 = NextPageTable;
    while ( 1 )
    {
      NextPageTable = MiGetNextPageTable(v21, v20, CurrentIrql, 0, &v50);
      if ( NextPageTable )
      {
        v32 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v45 = v32;
        if ( NextPageTable == v21 )
        {
          v33 = v38;
          v34 = (v38 & 0xFFFFFFFFFFFFF000uLL) + 4088;
          if ( v34 > v20 )
            v34 = v20;
          do
          {
            if ( v33 > v34 )
              break;
            NextPageTable = MI_READ_PTE_LOCK_FREE(v33, v32, v23);
            if ( !NextPageTable )
            {
              if ( v22 )
              {
                DemandZeroPte = MiMakeDemandZeroPte(4LL, v32, v23, v35);
                MiIncreaseUsedPtes(v37, ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
                *(_QWORD *)v33 = DemandZeroPte;
              }
              *(_QWORD *)&v41[4] = ++v19;
            }
            v33 += 8LL;
          }
          while ( (v33 & 0xFFF) != 0 );
          Process = v46;
          v38 = v33;
          p_Blink = (__int64)&v46[2].ReadyListHead.Blink;
          MiUnlockPageTableInternal(&v46[2].ReadyListHead.Blink, v45);
          LOBYTE(CurrentIrql) = v42;
          v20 = v39;
          v21 = v38;
          goto LABEL_21;
        }
        MiUnlockPageTableInternal(p_Blink, v32);
        v24 = NextPageTable - 8;
      }
      else
      {
        v24 = v20;
      }
      MiFillHyperPtes(v21, v24, (unsigned __int8)CurrentIrql, &v40);
      v22 = v40;
      v21 = v24 + 8;
      v19 = *(_QWORD *)&v41[4];
      v38 = v21;
LABEL_21:
      if ( v21 > v20 )
      {
        v6 = v49;
        v4 = 0LL;
        v17 = v43;
        v18 = *(_QWORD *)&v41[12];
        v16 = v48;
        goto LABEL_23;
      }
    }
  }
  return 0LL;
}
