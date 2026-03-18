/*
 * XREFs of HalpPCIAcquireConfigSpaceLock @ 0x1402833F0
 * Callers:
 *     HaliPciInterfaceReadConfig @ 0x140281470 (HaliPciInterfaceReadConfig.c)
 *     HalpPCIConfig @ 0x140282B20 (HalpPCIConfig.c)
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x140253620 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402536F0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall HalpPCIAcquireConfigSpaceLock(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // rbx
  unsigned __int8 CurrentIrql; // di
  bool v3; // zf

  v1 = a1;
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
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
    v3 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
    *v1 = CurrentIrql;
    if ( v3 || PopHibernateInProgress )
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
