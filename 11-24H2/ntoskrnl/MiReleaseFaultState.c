/*
 * XREFs of MiReleaseFaultState @ 0x1402E0010
 * Callers:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiWaitForCollidedFaultComplete @ 0x14023B89C (MiWaitForCollidedFaultComplete.c)
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 *     MiPrivateFixup @ 0x1402EE4F0 (MiPrivateFixup.c)
 *     MiFinishHardFault @ 0x1402F0070 (MiFinishHardFault.c)
 *     MiUserFault @ 0x1402FD560 (MiUserFault.c)
 *     MiFaultGetFileExtents @ 0x14036F4C8 (MiFaultGetFileExtents.c)
 *     MiIssueHardFault @ 0x140397B2C (MiIssueHardFault.c)
 *     MiInPagePageTable @ 0x1403F2FCC (MiInPagePageTable.c)
 *     MiKernelWriteToExecutableMemory @ 0x1404CE618 (MiKernelWriteToExecutableMemory.c)
 *     MiIdealClusterPage @ 0x1404D205C (MiIdealClusterPage.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiAddWorkingSetEntries @ 0x1402E0980 (MiAddWorkingSetEntries.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x140321D94 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReleaseFaultState(__int64 a1, unsigned __int8 a2, _BYTE *a3)
{
  __int64 v3; // r14
  __int64 v5; // rsi
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  char v13; // al
  __int64 v14; // rdx
  volatile signed __int64 **v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  char v18; // di
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  struct _KPRCB *v22; // rcx
  signed __int32 *SchedulerAssist; // r8
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  volatile signed __int32 *v27; // rcx
  char v28; // cl
  signed __int32 v29; // eax
  signed __int32 v30; // ett
  signed __int32 v31[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)a1;
  if ( !v3 )
    goto LABEL_11;
  if ( *(_WORD *)(a1 + 10) )
  {
    v8 = *(_BYTE *)(a1 + 13) & 2;
    v9 = ((unsigned __int64)*(unsigned __int16 *)(a1 + 8) << 12) + (v3 << 25 >> 16 << 25 >> 16);
    if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v8 = (unsigned int)v8 | 5;
    }
    else if ( (*(_DWORD *)(v5 + 184) & 0xF) == 0 )
    {
      v8 = (unsigned int)v8 | 4;
    }
    MiAddWorkingSetEntries(v5, v9, *(unsigned __int16 *)(a1 + 10), v8);
    *(_WORD *)(a1 + 10) = 0;
  }
  v10 = *(_QWORD *)(a1 + 16);
  if ( v10 != 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( (*(_DWORD *)(v5 + 184) & 0xF) != 0
      || v10 < 0xFFFFF6FB7DBED000uLL
      || v10 > 0xFFFFF6FB7DBEDFFFuLL
      || (v24 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
    {
      if ( (*(_DWORD *)(v5 + 184) & 0xF) != 0 && v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v28 = (2 * ((__int64)(v10 + 0x90482413000LL) >> 3)) & 0x1F;
        _InterlockedAnd(
          &dword_140E2F0AC[(unsigned __int64)(2 * (unsigned int)((__int64)(v10 + 0x90482413000LL) >> 3)) >> 5],
          ~(2 << v28) & ~(1 << v28));
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)v10, 0xCFFFFFFFFFFFFFFFuLL);
      }
    }
    else
    {
      v25 = (v10 >> 3) & 0x1FF;
      v26 = *(_DWORD *)(v24 + 4 * v25);
      v27 = (volatile signed __int32 *)(v24 + 4 * v25);
      if ( (v26 & 0x3FFFFFFF) != 0 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
          _InterlockedAnd(v27, 0xBFFFFFFF);
          _InterlockedDecrement(v27);
        }
        else
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v27, retaddr);
        }
      }
      else
      {
        if ( v26 >= 0 )
          KeBugCheckEx(0x10u, (ULONG_PTR)v27, 0x100uLL, 0LL, 0LL);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v27 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v27, retaddr);
      }
    }
    goto LABEL_10;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = *(_DWORD *)(v5 + 184) & 0xF;
  if ( v13 )
  {
    if ( v13 == 7 )
    {
      v14 = 1LL;
    }
    else
    {
      v14 = 3LL;
      if ( v13 == 5 )
        v14 = 0LL;
    }
  }
  else
  {
    v14 = 2LL;
  }
  v15 = (volatile signed __int64 **)&CurrentPrcb->SelfmapLockHandle[v14];
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(v15, retaddr);
    goto LABEL_10;
  }
  _m_prefetchw(v15);
  v16 = (__int64)*v15;
  if ( *v15 )
  {
LABEL_25:
    *v15 = 0LL;
    v17 = (__int64)v15[1];
    if ( (((unsigned __int8)v17 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v16 + 8), v17)) & 4) != 0 )
    {
      _InterlockedOr(v31, 0);
      v18 = KeDisableInterrupts(v17, v14 * 24, ((unsigned __int64)(v16 + 8) >> 5) & 0x7F);
      KiHaltOnAddressWakeEntireList(v21, _InterlockedExchange64((volatile __int64 *)(v20 + 8 * v19 + 15863072), 0LL));
      if ( v18 )
      {
        v22 = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)v22->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v29 = *SchedulerAssist;
          do
          {
            v30 = v29;
            v29 = _InterlockedCompareExchange(SchedulerAssist, v29 & 0xFFDFFFFF, v29);
          }
          while ( v30 != v29 );
          if ( (v29 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v22);
        }
        _enable();
      }
    }
    goto LABEL_10;
  }
  if ( v15 != (volatile signed __int64 **)_InterlockedCompareExchange64(v15[1], 0LL, (signed __int64)v15) )
  {
    v16 = KxWaitForLockChainValid(v15);
    goto LABEL_25;
  }
LABEL_10:
  *(_BYTE *)(a1 + 13) |= 4u;
  *(_QWORD *)(a1 + 16) = 0LL;
LABEL_11:
  if ( a3 )
    *a3 = *(_BYTE *)(a1 + 12);
  else
    a2 = *(_BYTE *)(a1 + 12);
  if ( (*(_BYTE *)(a1 + 13) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v5, a2);
  else
    MiUnlockWorkingSetShared(v5, a2);
  return v3;
}
