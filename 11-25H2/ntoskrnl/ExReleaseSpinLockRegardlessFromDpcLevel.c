/*
 * XREFs of ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402BBC90
 * Callers:
 *     MiLockPageLeafPageTable @ 0x1402ADA90 (MiLockPageLeafPageTable.c)
 *     MiResolvePageTablePage @ 0x1402AE990 (MiResolvePageTablePage.c)
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x1402B4B60 (MiGetNextPageTablePte.c)
 *     MiCaptureDeleteHierarchy @ 0x1402B5FE0 (MiCaptureDeleteHierarchy.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1402BB270 (MiUnlockProbePacketWorkingSet.c)
 *     MiReleaseWalkLocks @ 0x1402BBAD0 (MiReleaseWalkLocks.c)
 *     MiUnlockWorkingSetOptimal @ 0x1402C04C8 (MiUnlockWorkingSetOptimal.c)
 *     MiProbeAndLockPages @ 0x1404011D0 (MiProbeAndLockPages.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseSpinLockRegardlessFromDpcLevel(volatile signed __int32 *BugCheckParameter1)
{
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  result = *(unsigned int *)BugCheckParameter1;
  if ( (result & 0x3FFFFFFF) != 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    {
      _InterlockedAnd(BugCheckParameter1, 0xBFFFFFFF);
      _InterlockedDecrement(BugCheckParameter1);
    }
    else
    {
      return ExpReleaseSpinLockSharedFromDpcLevelInstrumented(BugCheckParameter1, retaddr);
    }
  }
  else
  {
    if ( (int)result >= 0 )
      KeBugCheckEx(0x10u, (ULONG_PTR)BugCheckParameter1, 0x100uLL, 0LL, 0LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    {
      *BugCheckParameter1 = 0;
    }
    else
    {
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(BugCheckParameter1, retaddr);
    }
  }
  return result;
}
