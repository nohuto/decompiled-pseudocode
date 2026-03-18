/*
 * XREFs of HalpPCIAcquireConfigSpaceLock @ 0x140266168
 * Callers:
 *     HaliPciInterfaceReadConfig @ 0x140265340 (HaliPciInterfaceReadConfig.c)
 *     HalpPCIConfig @ 0x140265960 (HalpPCIConfig.c)
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x140254BA0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140254C70 (KxWaitForSpinLockAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall HalpPCIAcquireConfigSpaceLock(unsigned __int8 *a1, __int64 a2)
{
  unsigned __int8 *v2; // rbx
  unsigned __int8 CurrentIrql; // di
  bool v4; // zf

  v2 = a1;
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
    v4 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
    *v2 = CurrentIrql;
    if ( v4 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)&HalpPCIConfigLock, 0LL) )
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&HalpPCIConfigLock);
    }
    else
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&HalpPCIConfigLock);
    }
  }
}
