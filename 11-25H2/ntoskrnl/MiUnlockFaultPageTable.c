/*
 * XREFs of MiUnlockFaultPageTable @ 0x1402B9F30
 * Callers:
 *     MiResolvePageTablePage @ 0x1402AE990 (MiResolvePageTablePage.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiUnlockSystemVa @ 0x1402BB200 (MiUnlockSystemVa.c)
 *     MiUnlockStealVm @ 0x1402BB590 (MiUnlockStealVm.c)
 *     MiMakeSystemCacheRangeValid @ 0x1402C5040 (MiMakeSystemCacheRangeValid.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     MiAddWorkingSetEntries @ 0x1402BA2B0 (MiAddWorkingSetEntries.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall MiUnlockFaultPageTable(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v3; // rdi
  __int64 v4; // r9
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  char v7; // cl
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  volatile signed __int32 *v11; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  char v13; // al
  __int64 v14; // rdx
  volatile signed __int64 **v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  bool v18; // di
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  struct _KPRCB *v22; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  signed __int32 v26[8]; // [rsp+0h] [rbp-38h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1[2];
  v3 = *a1;
  if ( v1 )
  {
    if ( *((_WORD *)a1 + 5) )
    {
      v4 = *((_BYTE *)a1 + 13) & 2;
      v5 = ((unsigned __int64)*((unsigned __int16 *)a1 + 4) << 12) + (v1 << 25 >> 16 << 25 >> 16);
      if ( v5 < 0xFFFFF68000000000uLL || v5 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v4 = (unsigned int)v4 | 5;
      }
      else if ( (*(_DWORD *)(v3 + 184) & 0xF) == 0 )
      {
        v4 = (unsigned int)v4 | 4;
      }
      MiAddWorkingSetEntries(v3, v5, *((unsigned __int16 *)a1 + 5), v4);
      *((_WORD *)a1 + 5) = 0;
    }
    v6 = a1[2];
    if ( v6 != 0xFFFFF6FB7DBEDF68uLL )
    {
      if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0
        || v6 < 0xFFFFF6FB7DBED000uLL
        || v6 > 0xFFFFF6FB7DBEDFFFuLL
        || (v8 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
      {
        if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0 && v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v7 = (2 * ((__int64)(v6 + 0x90482413000LL) >> 3)) & 0x1F;
          _InterlockedAnd(
            &dword_140E2EE6C[(unsigned __int64)(2 * (unsigned int)((__int64)(v6 + 0x90482413000LL) >> 3)) >> 5],
            ~(2 << v7) & ~(1 << v7));
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)v6, 0xCFFFFFFFFFFFFFFFuLL);
        }
      }
      else
      {
        v9 = (v6 >> 3) & 0x1FF;
        v10 = *(_DWORD *)(v8 + 4 * v9);
        v11 = (volatile signed __int32 *)(v8 + 4 * v9);
        if ( (v10 & 0x3FFFFFFF) != 0 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            _InterlockedAnd(v11, 0xBFFFFFFF);
            _InterlockedDecrement(v11);
          }
          else
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v11, retaddr);
          }
        }
        else
        {
          if ( v10 >= 0 )
            KeBugCheckEx(0x10u, (ULONG_PTR)v11, 0x100uLL, 0LL, 0LL);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            *v11 = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v11, retaddr);
        }
      }
      goto LABEL_13;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = *(_DWORD *)(v3 + 184) & 0xF;
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
      goto LABEL_13;
    }
    _m_prefetchw(v15);
    v16 = (__int64)*v15;
    if ( !*v15 )
    {
      if ( v15 == (volatile signed __int64 **)_InterlockedCompareExchange64(v15[1], 0LL, (signed __int64)v15) )
      {
LABEL_13:
        *((_BYTE *)a1 + 13) |= 4u;
        a1[2] = 0LL;
        return;
      }
      v16 = KxWaitForLockChainValid((__int64 *)v15);
    }
    *v15 = 0LL;
    v17 = (__int64)v15[1];
    if ( (((unsigned __int8)v17 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v16 + 8), v17)) & 4) != 0 )
    {
      _InterlockedOr(v26, 0);
      v18 = KeDisableInterrupts();
      KiHaltOnAddressWakeEntireList(v21, _InterlockedExchange64((volatile __int64 *)(v20 + 8 * v19 + 15861120), 0LL));
      if ( v18 )
      {
        v22 = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)v22->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v24 = *SchedulerAssist;
          do
          {
            v25 = v24;
            v24 = _InterlockedCompareExchange(SchedulerAssist, v24 & 0xFFDFFFFF, v24);
          }
          while ( v25 != v24 );
          if ( (v24 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v22);
        }
        _enable();
      }
    }
    goto LABEL_13;
  }
}
