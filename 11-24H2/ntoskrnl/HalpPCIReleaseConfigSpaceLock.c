/*
 * XREFs of HalpPCIReleaseConfigSpaceLock @ 0x1403AB2D8
 * Callers:
 *     HaliPciInterfaceReadConfig @ 0x1403AA360 (HaliPciInterfaceReadConfig.c)
 *     HalpPCIConfig @ 0x1403AA980 (HalpPCIConfig.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall HalpPCIReleaseConfigSpaceLock(unsigned __int8 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1;
  if ( !HalpDoingCrashDump )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    {
      _InterlockedAnd64(&HalpPCIConfigLock, 0LL);
    }
    else
    {
      result = KiReleaseSpinLockInstrumented(&HalpPCIConfigLock, retaddr);
    }
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = v2;
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
    }
    __writecr8(v2);
  }
  return result;
}
