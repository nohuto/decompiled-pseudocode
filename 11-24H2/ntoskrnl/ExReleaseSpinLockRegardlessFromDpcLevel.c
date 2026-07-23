/*
 * XREFs of ExReleaseSpinLockRegardlessFromDpcLevel @ 0x14020BE60
 * Callers:
 *     MiUnlockWorkingSetOptimal @ 0x14020A46C (MiUnlockWorkingSetOptimal.c)
 *     MiReleaseWalkLocks @ 0x14020BAF0 (MiReleaseWalkLocks.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14020BCC0 (MiUnlockProbePacketWorkingSet.c)
 *     MiLockPageLeafPageTable @ 0x140238FF0 (MiLockPageLeafPageTable.c)
 *     MiResolvePageTablePage @ 0x140239FB0 (MiResolvePageTablePage.c)
 *     MiDeleteVaDirect @ 0x14023BBE0 (MiDeleteVaDirect.c)
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x140240190 (MiGetNextPageTablePte.c)
 *     MiCaptureDeleteHierarchy @ 0x140243D80 (MiCaptureDeleteHierarchy.c)
 *     MiReacquireWalkLocks @ 0x140246140 (MiReacquireWalkLocks.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseSpinLockRegardlessFromDpcLevel(
        volatile signed __int32 *BugCheckParameter1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
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
      return ExpReleaseSpinLockSharedFromDpcLevelInstrumented(BugCheckParameter1, retaddr, a3, a4);
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
