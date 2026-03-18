/*
 * XREFs of MiUnlockFaultPageTable @ 0x1402E05F0
 * Callers:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x140243570 (MiMakeSystemCacheRangeValid.c)
 *     MiResolvePageTablePage @ 0x1402D86D0 (MiResolvePageTablePage.c)
 *     MiUnlockSystemVa @ 0x1402E1BA0 (MiUnlockSystemVa.c)
 *     MiUnlockStealVm @ 0x1402E1FC0 (MiUnlockStealVm.c)
 *     MiUserFault @ 0x1402FD560 (MiUserFault.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     MiAddWorkingSetEntries @ 0x1402E0980 (MiAddWorkingSetEntries.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x140321D94 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall MiUnlockFaultPageTable(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v3; // rdi
  __int64 v4; // r9
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  char v8; // al
  __int64 v9; // rdx
  volatile signed __int64 **v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  volatile signed __int32 *v14; // rcx
  char v15; // cl
  __int64 v16; // rax
  __int64 v17; // rcx
  char v18; // di
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  struct _KPRCB *v22; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  signed __int32 v26[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

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
        || (v11 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
      {
        if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0 && v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v15 = (2 * ((__int64)(v6 + 0x90482413000LL) >> 3)) & 0x1F;
          _InterlockedAnd(
            &dword_140E2F0AC[(unsigned __int64)(2 * (unsigned int)((__int64)(v6 + 0x90482413000LL) >> 3)) >> 5],
            ~(2 << v15) & ~(1 << v15));
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)v6, 0xCFFFFFFFFFFFFFFFuLL);
        }
      }
      else
      {
        v12 = (v6 >> 3) & 0x1FF;
        v13 = *(_DWORD *)(v11 + 4 * v12);
        v14 = (volatile signed __int32 *)(v11 + 4 * v12);
        if ( (v13 & 0x3FFFFFFF) != 0 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            _InterlockedAnd(v14, 0xBFFFFFFF);
            _InterlockedDecrement(v14);
          }
          else
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v14, retaddr);
          }
        }
        else
        {
          if ( v13 >= 0 )
            KeBugCheckEx(0x10u, (ULONG_PTR)v14, 0x100uLL, 0LL, 0LL);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            *v14 = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v14, retaddr);
        }
      }
      goto LABEL_10;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = *(_DWORD *)(v3 + 184) & 0xF;
    if ( v8 )
    {
      if ( v8 == 7 )
      {
        v9 = 1LL;
      }
      else
      {
        v9 = 3LL;
        if ( v8 == 5 )
          v9 = 0LL;
      }
    }
    else
    {
      v9 = 2LL;
    }
    v10 = (volatile signed __int64 **)&CurrentPrcb->SelfmapLockHandle[v9];
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      KiReleaseQueuedSpinLockInstrumented(v10, retaddr);
LABEL_10:
      *((_BYTE *)a1 + 13) |= 4u;
      a1[2] = 0LL;
      return;
    }
    _m_prefetchw(v10);
    v16 = (__int64)*v10;
    if ( !*v10 )
    {
      if ( v10 == (volatile signed __int64 **)_InterlockedCompareExchange64(v10[1], 0LL, (signed __int64)v10) )
        goto LABEL_10;
      v16 = KxWaitForLockChainValid(v10);
    }
    *v10 = 0LL;
    v17 = (__int64)v10[1];
    if ( (((unsigned __int8)v17 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v16 + 8), v17)) & 4) != 0 )
    {
      _InterlockedOr(v26, 0);
      v18 = KeDisableInterrupts(v17, v9 * 24, ((unsigned __int64)(v16 + 8) >> 5) & 0x7F);
      KiHaltOnAddressWakeEntireList(v21, _InterlockedExchange64((volatile __int64 *)(v20 + 8 * v19 + 15863072), 0LL));
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
    goto LABEL_10;
  }
}
