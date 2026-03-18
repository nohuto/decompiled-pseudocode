/*
 * XREFs of ExTryAcquireSpinLockSharedAtDpcLevel @ 0x14040C690
 * Callers:
 *     MiFreezeIoPfnNode @ 0x140675EAC (MiFreezeIoPfnNode.c)
 *     MmReadProcessPageTables @ 0x140680158 (MmReadProcessPageTables.c)
 * Callees:
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14040C5FC (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpTryAcquireSpinLockShared @ 0x14040C6D0 (ExpTryAcquireSpinLockShared.c)
 */

__int64 __fastcall ExTryAcquireSpinLockSharedAtDpcLevel(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    return (unsigned __int8)ExpTryAcquireSpinLockShared(a1, a2, a3, a4);
  else
    return ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented(a1, a2, a3, a4);
}
