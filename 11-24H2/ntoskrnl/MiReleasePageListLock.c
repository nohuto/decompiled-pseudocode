/*
 * XREFs of MiReleasePageListLock @ 0x1402262E0
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x140220F00 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiReplaceTransitionPage @ 0x140224B14 (MiReplaceTransitionPage.c)
 *     MiSynchronizeFastPageInsert @ 0x14022D9F0 (MiSynchronizeFastPageInsert.c)
 *     MiUnlinkPageFromBadList @ 0x14039398C (MiUnlinkPageFromBadList.c)
 *     MiGetRepurposedSlabStandbyPage @ 0x1403A18E8 (MiGetRepurposedSlabStandbyPage.c)
 *     MiUpdatePageAttributeStamp @ 0x1404767D4 (MiUpdatePageAttributeStamp.c)
 *     MiRepointPteAtExtendedStandby @ 0x140684E78 (MiRepointPteAtExtendedStandby.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiReleasePageListLock(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx
  _DWORD *v4; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)a2 )
  {
    if ( *(_BYTE *)(a2 + 24) )
    {
      result = *(_QWORD *)(a2 + 16);
      _InterlockedAnd64((volatile signed __int64 *)(result + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a2 + 24) = 0;
    }
    if ( *(_BYTE *)(a2 + 48) )
    {
      result = *(_QWORD *)(a2 + 40);
      _InterlockedAnd64((volatile signed __int64 *)(result + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a2 + 48) = 0;
    }
    if ( *(_BYTE *)(a2 + 72) )
    {
      result = *(_QWORD *)(a2 + 64);
      _InterlockedAnd64((volatile signed __int64 *)(result + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a2 + 72) = 0;
    }
    if ( *(_BYTE *)(a2 + 96) )
    {
      result = *(_QWORD *)(a2 + 88);
      _InterlockedAnd64((volatile signed __int64 *)(result + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a2 + 96) = 0;
    }
    v3 = (volatile signed __int32 *)(a1 + 32);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    {
      _InterlockedAnd(v3, 0xBFFFFFFF);
      _InterlockedDecrement(v3);
    }
    else
    {
      return ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v3, retaddr);
    }
  }
  else
  {
    v4 = (_DWORD *)(a1 + 32);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    {
      *v4 = 0;
    }
    else
    {
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
    }
  }
  return result;
}
