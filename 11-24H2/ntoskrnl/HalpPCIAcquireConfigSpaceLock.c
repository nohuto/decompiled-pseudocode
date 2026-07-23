/*
 * XREFs of HalpPCIAcquireConfigSpaceLock @ 0x1403AB24C
 * Callers:
 *     HaliPciInterfaceReadConfig @ 0x1403AA360 (HaliPciInterfaceReadConfig.c)
 *     HalpPCIConfig @ 0x1403AA980 (HalpPCIConfig.c)
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x1402851B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140285280 (KxWaitForSpinLockAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall HalpPCIAcquireConfigSpaceLock(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 *v4; // rbx
  unsigned __int8 CurrentIrql; // di
  bool v6; // zf

  v4 = a1;
  if ( HalpDoingCrashDump )
  {
    *a1 = 15;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 15;
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, a2);
    }
    v6 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
    *v4 = CurrentIrql;
    if ( v6 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)&HalpPCIConfigLock, 0LL) )
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&HalpPCIConfigLock, a2, a3, a4);
    }
    else
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&HalpPCIConfigLock);
    }
  }
}
