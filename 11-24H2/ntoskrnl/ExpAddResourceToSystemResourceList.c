/*
 * XREFs of ExpAddResourceToSystemResourceList @ 0x1403656DC
 * Callers:
 *     ExInitializeResourceLite2 @ 0x140365350 (ExInitializeResourceLite2.c)
 *     ExInitializeResourceLite @ 0x1403655E0 (ExInitializeResourceLite.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpAddResourceToSystemResourceList(_QWORD *a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = ExAcquireSpinLockExclusive(&ExpResourceSpinLock);
  result = qword_140EFA6D8;
  if ( *(__int64 **)qword_140EFA6D8 != &ExpSystemResourcesList )
    __fastfail(3u);
  *a1 = &ExpSystemResourcesList;
  a1[1] = result;
  *(_QWORD *)result = a1;
  qword_140EFA6D8 = (__int64)a1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    ExpResourceSpinLock = 0;
  else
    result = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpResourceSpinLock, retaddr);
  if ( KiIrqlFlags )
  {
    LOBYTE(v2) = v3;
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
  }
  __writecr8(v3);
  return result;
}
