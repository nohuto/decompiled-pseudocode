/*
 * XREFs of MiReleaseFaultState @ 0x1402B9970
 * Callers:
 *     MiIssueHardFault @ 0x1402085EC (MiIssueHardFault.c)
 *     MiFinishHardFault @ 0x14023BBC0 (MiFinishHardFault.c)
 *     MiUserFault @ 0x14024A660 (MiUserFault.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 *     MiWaitForCollidedFaultComplete @ 0x14033DB60 (MiWaitForCollidedFaultComplete.c)
 *     MiInPagePageTable @ 0x1403EBC5C (MiInPagePageTable.c)
 *     MiKernelWriteToExecutableMemory @ 0x140439960 (MiKernelWriteToExecutableMemory.c)
 *     MiPrivateFixup @ 0x140439BB4 (MiPrivateFixup.c)
 *     MiFaultGetFileExtents @ 0x14046FAA0 (MiFaultGetFileExtents.c)
 *     MiIdealClusterPage @ 0x1404D210C (MiIdealClusterPage.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiAddWorkingSetEntries @ 0x1402BA2B0 (MiAddWorkingSetEntries.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReleaseFaultState(__int64 a1, unsigned __int8 a2, _BYTE *a3)
{
  __int64 v3; // r14
  __int64 v5; // rsi
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  char v11; // cl
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  volatile signed __int32 *v16; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  char v18; // al
  __int64 v19; // rdx
  volatile signed __int64 **v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  bool v23; // di
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  struct _KPRCB *v27; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v29; // eax
  signed __int32 v30; // ett
  signed __int32 v31[8]; // [rsp+0h] [rbp-48h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)a1;
  if ( !v3 )
    goto LABEL_14;
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
      || (v13 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
    {
      if ( (*(_DWORD *)(v5 + 184) & 0xF) != 0 && v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v11 = (2 * ((__int64)(v10 + 0x90482413000LL) >> 3)) & 0x1F;
        _InterlockedAnd(
          &dword_140E2EE6C[(unsigned __int64)(2 * (unsigned int)((__int64)(v10 + 0x90482413000LL) >> 3)) >> 5],
          ~(2 << v11) & ~(1 << v11));
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)v10, 0xCFFFFFFFFFFFFFFFuLL);
      }
    }
    else
    {
      v14 = (v10 >> 3) & 0x1FF;
      v15 = *(_DWORD *)(v13 + 4 * v14);
      v16 = (volatile signed __int32 *)(v13 + 4 * v14);
      if ( (v15 & 0x3FFFFFFF) != 0 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
          _InterlockedAnd(v16, 0xBFFFFFFF);
          _InterlockedDecrement(v16);
        }
        else
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v16, retaddr);
        }
      }
      else
      {
        if ( v15 >= 0 )
          KeBugCheckEx(0x10u, (ULONG_PTR)v16, 0x100uLL, 0LL, 0LL);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v16 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v16, retaddr);
      }
    }
    goto LABEL_13;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v18 = *(_DWORD *)(v5 + 184) & 0xF;
  if ( v18 )
  {
    if ( v18 == 7 )
    {
      v19 = 1LL;
    }
    else
    {
      v19 = 3LL;
      if ( v18 == 5 )
        v19 = 0LL;
    }
  }
  else
  {
    v19 = 2LL;
  }
  v20 = (volatile signed __int64 **)&CurrentPrcb->SelfmapLockHandle[v19];
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(v20, retaddr);
    goto LABEL_13;
  }
  _m_prefetchw(v20);
  v21 = (__int64)*v20;
  if ( *v20 )
  {
LABEL_35:
    *v20 = 0LL;
    v22 = (__int64)v20[1];
    if ( (((unsigned __int8)v22 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v21 + 8), v22)) & 4) != 0 )
    {
      _InterlockedOr(v31, 0);
      v23 = KeDisableInterrupts();
      KiHaltOnAddressWakeEntireList(v26, _InterlockedExchange64((volatile __int64 *)(v25 + 8 * v24 + 15861120), 0LL));
      if ( v23 )
      {
        v27 = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)v27->SchedulerAssist;
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
            KiRemoveSystemWorkPriorityKick((__int64)v27);
        }
        _enable();
      }
    }
    goto LABEL_13;
  }
  if ( v20 != (volatile signed __int64 **)_InterlockedCompareExchange64(v20[1], 0LL, (signed __int64)v20) )
  {
    v21 = KxWaitForLockChainValid((__int64 *)v20);
    goto LABEL_35;
  }
LABEL_13:
  *(_BYTE *)(a1 + 13) |= 4u;
  *(_QWORD *)(a1 + 16) = 0LL;
LABEL_14:
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
