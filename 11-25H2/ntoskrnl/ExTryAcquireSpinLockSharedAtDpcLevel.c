/*
 * XREFs of ExTryAcquireSpinLockSharedAtDpcLevel @ 0x1404064A0
 * Callers:
 *     MiFreezeIoPfnNode @ 0x14066A44C (MiFreezeIoPfnNode.c)
 *     MmReadProcessPageTables @ 0x140674938 (MmReadProcessPageTables.c)
 * Callees:
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140406404 (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpTryAcquireSpinLockShared @ 0x1404064E0 (ExpTryAcquireSpinLockShared.c)
 */

__int64 __fastcall ExTryAcquireSpinLockSharedAtDpcLevel(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    return (unsigned __int8)ExpTryAcquireSpinLockShared(a1, a2, a3, a4);
  else
    return ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented(a1, a2, a3, a4);
}
