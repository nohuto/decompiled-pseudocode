/*
 * XREFs of ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402E2460
 * Callers:
 *     MiCaptureDeleteHierarchy @ 0x140216EC0 (MiCaptureDeleteHierarchy.c)
 *     MiReacquireWalkLocks @ 0x1402193F0 (MiReacquireWalkLocks.c)
 *     MiUnlockWorkingSetOptimal @ 0x14024231C (MiUnlockWorkingSetOptimal.c)
 *     MiLockPageLeafPageTable @ 0x140283A60 (MiLockPageLeafPageTable.c)
 *     MiResolvePageTablePage @ 0x1402D86D0 (MiResolvePageTablePage.c)
 *     MiDeleteVaDirect @ 0x1402DA300 (MiDeleteVaDirect.c)
 *     MiWalkPageTablesRecursively @ 0x1402DC430 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x1402DE8B0 (MiGetNextPageTablePte.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1402E1C10 (MiUnlockProbePacketWorkingSet.c)
 *     MiReleaseWalkLocks @ 0x1402E37F0 (MiReleaseWalkLocks.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseSpinLockRegardlessFromDpcLevel(volatile signed __int32 *BugCheckParameter1)
{
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

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
