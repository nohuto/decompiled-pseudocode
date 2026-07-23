/*
 * XREFs of MiReleaseFaultState @ 0x1402418F0
 * Callers:
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiFinishHardFault @ 0x140255E80 (MiFinishHardFault.c)
 *     MiUserFault @ 0x140307CE0 (MiUserFault.c)
 *     MiPrivateFixup @ 0x14034FB30 (MiPrivateFixup.c)
 *     MiIssueHardFault @ 0x140350280 (MiIssueHardFault.c)
 *     MiTrimSharedPageFromViews @ 0x140362D10 (MiTrimSharedPageFromViews.c)
 *     MiInPagePageTable @ 0x140391778 (MiInPagePageTable.c)
 *     MiKernelWriteToExecutableMemory @ 0x140426B40 (MiKernelWriteToExecutableMemory.c)
 *     MiFaultGetFileExtents @ 0x140426C40 (MiFaultGetFileExtents.c)
 *     MiWaitForCollidedFaultComplete @ 0x1404270E4 (MiWaitForCollidedFaultComplete.c)
 *     MiIdealClusterPage @ 0x1404CB218 (MiIdealClusterPage.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiAddWorkingSetEntries @ 0x140242260 (MiAddWorkingSetEntries.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1402CA924 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReleaseFaultState(__int64 *a1, unsigned __int8 a2, _BYTE *a3)
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
  __int64 v22; // r9
  struct _KPRCB *v23; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // eax
  volatile signed __int32 *v28; // rcx
  char v29; // cl
  unsigned __int32 v30; // eax
  __int64 v31; // rdx
  unsigned __int32 v32; // ett
  signed __int32 v33[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = a1[2];
  v5 = *a1;
  if ( !v3 )
    goto LABEL_11;
  if ( *((_WORD *)a1 + 5) )
  {
    v8 = *((_BYTE *)a1 + 13) & 2;
    v9 = ((unsigned __int64)*((unsigned __int16 *)a1 + 4) << 12) + (v3 << 25 >> 16 << 25 >> 16);
    if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v8 = (unsigned int)v8 | 5;
    }
    else if ( (*(_DWORD *)(v5 + 184) & 0xF) == 0 )
    {
      v8 = (unsigned int)v8 | 4;
    }
    MiAddWorkingSetEntries(v5, v9, *((unsigned __int16 *)a1 + 5), v8);
    *((_WORD *)a1 + 5) = 0;
  }
  v10 = a1[2];
  if ( v10 != 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( (*(_DWORD *)(v5 + 184) & 0xF) != 0
      || v10 < 0xFFFFF6FB7DBED000uLL
      || v10 > 0xFFFFF6FB7DBEDFFFuLL
      || (v25 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
    {
      if ( (*(_DWORD *)(v5 + 184) & 0xF) != 0 && v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v29 = (2 * ((__int64)(v10 + 0x90482413000LL) >> 3)) & 0x1F;
        _InterlockedAnd(
          &dword_140E2F1EC[(unsigned __int64)(2 * (unsigned int)((__int64)(v10 + 0x90482413000LL) >> 3)) >> 5],
          ~(2 << v29) & ~(1 << v29));
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)v10, 0xCFFFFFFFFFFFFFFFuLL);
      }
    }
    else
    {
      v26 = (v10 >> 3) & 0x1FF;
      v27 = *(_DWORD *)(v25 + 4 * v26);
      v28 = (volatile signed __int32 *)(v25 + 4 * v26);
      if ( (v27 & 0x3FFFFFFF) != 0 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
          _InterlockedAnd(v28, 0xBFFFFFFF);
          _InterlockedDecrement(v28);
        }
        else
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v28, retaddr);
        }
      }
      else
      {
        if ( v27 >= 0 )
          KeBugCheckEx(0x10u, (ULONG_PTR)v28, 0x100uLL, 0LL, 0LL);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v28 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v28, retaddr);
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
      _InterlockedOr(v33, 0);
      v18 = KeDisableInterrupts(v17, v14 * 24, ((unsigned __int64)(v16 + 8) >> 5) & 0x7F, 0x140000000uLL);
      KiHaltOnAddressWakeEntireList(v21, _InterlockedExchange64((volatile __int64 *)(v20 + 8 * v19 + 15863808), 0LL));
      if ( v18 )
      {
        v23 = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)v23->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v30 = *SchedulerAssist;
          do
          {
            v31 = v30;
            LODWORD(v31) = v30 & 0xFFDFFFFF;
            v32 = v30;
            v30 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v30 & 0xFFDFFFFF, v30);
          }
          while ( v32 != v30 );
          if ( (v30 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v23, v31, SchedulerAssist, v22);
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
  *((_BYTE *)a1 + 13) |= 4u;
  a1[2] = 0LL;
LABEL_11:
  if ( a3 )
    *a3 = *((_BYTE *)a1 + 12);
  else
    a2 = *((_BYTE *)a1 + 12);
  if ( (*((_BYTE *)a1 + 13) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v5, a2);
  else
    MiUnlockWorkingSetShared(v5, a2);
  return v3;
}
