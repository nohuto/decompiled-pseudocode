/*
 * XREFs of MiUnlockPageTable @ 0x1402CB940
 * Callers:
 *     MiProtectLargeKernelHalRange @ 0x1407E8490 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1402CA924 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall MiUnlockPageTable(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v3; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  char v5; // al
  __int64 v6; // rdx
  volatile signed __int64 **v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  bool v11; // di
  __int64 v12; // rcx
  struct _KPRCB *v13; // rcx
  _DWORD *SchedulerAssist; // r8
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  volatile signed __int32 *v17; // rcx
  char v18; // cl
  int v19; // ett
  signed __int32 v21[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v5 )
    {
      if ( v5 == 7 )
      {
        v6 = 1LL;
      }
      else
      {
        v6 = 3LL;
        if ( v5 == 5 )
          v6 = 0LL;
      }
    }
    else
    {
      v6 = 2LL;
    }
    v7 = (volatile signed __int64 **)&CurrentPrcb->SelfmapLockHandle[v6];
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      LOBYTE(v3) = KiReleaseQueuedSpinLockInstrumented(v7, retaddr);
      return v3;
    }
    _m_prefetchw(v7);
    v3 = (signed __int64)*v7;
    if ( !*v7 )
    {
      v3 = _InterlockedCompareExchange64(v7[1], 0LL, (signed __int64)v7);
      if ( v7 == (volatile signed __int64 **)v3 )
        return v3;
      v3 = KxWaitForLockChainValid((__int64 *)v7);
    }
    *v7 = 0LL;
    v8 = (__int64)v7[1];
    LOBYTE(v3) = v8 ^ _InterlockedExchange64((volatile __int64 *)(v3 + 8), v8);
    if ( (v3 & 4) != 0 )
    {
      _InterlockedOr(v21, 0);
      v11 = KeDisableInterrupts();
      LOBYTE(v3) = (unsigned __int8)KiHaltOnAddressWakeEntireList(
                                      v12,
                                      _InterlockedExchange64((volatile __int64 *)(v10 + 8 * v9 + 15863808), 0LL));
      if ( v11 )
      {
        v13 = KeGetCurrentPrcb();
        SchedulerAssist = v13->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          LODWORD(v3) = *SchedulerAssist;
          do
          {
            v19 = v3;
            LODWORD(v3) = _InterlockedCompareExchange(SchedulerAssist, v3 & 0xFFDFFFFF, v3);
          }
          while ( v19 != (_DWORD)v3 );
          if ( (v3 & 0x200000) != 0 )
            LOBYTE(v3) = KiRemoveSystemWorkPriorityKick((__int64)v13);
        }
        _enable();
      }
    }
  }
  else if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
         || a2 < 0xFFFFF6FB7DBED000uLL
         || a2 > 0xFFFFF6FB7DBEDFFFuLL
         || (v15 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v18 = (2 * ((__int64)(a2 + 0x90482413000LL) >> 3)) & 0x1F;
      v3 = (unsigned __int64)(2 * (unsigned int)((__int64)(a2 + 0x90482413000LL) >> 3)) >> 5;
      _InterlockedAnd(&dword_140E2F1EC[v3], ~(2 << v18) & ~(1 << v18));
    }
    else
    {
      LOBYTE(v3) = -1;
      _InterlockedAnd64((volatile signed __int64 *)a2, 0xCFFFFFFFFFFFFFFFuLL);
    }
  }
  else
  {
    v16 = (a2 >> 3) & 0x1FF;
    LODWORD(v3) = *(_DWORD *)(v15 + 4 * v16);
    v17 = (volatile signed __int32 *)(v15 + 4 * v16);
    if ( (v3 & 0x3FFFFFFF) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (LOBYTE(v3) = PopHibernateInProgress, PopHibernateInProgress) )
      {
        _InterlockedAnd(v17, 0xBFFFFFFF);
        _InterlockedDecrement(v17);
      }
      else
      {
        LOBYTE(v3) = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v17, retaddr);
      }
    }
    else
    {
      if ( (int)v3 >= 0 )
        KeBugCheckEx(0x10u, (ULONG_PTR)v17, 0x100uLL, 0LL, 0LL);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (LOBYTE(v3) = PopHibernateInProgress, PopHibernateInProgress) )
        *v17 = 0;
      else
        LOBYTE(v3) = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v17, retaddr);
    }
  }
  return v3;
}
