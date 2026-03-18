/*
 * XREFs of KzSetIrqlUnsafe @ 0x1405B3940
 * Callers:
 *     KiIdleLoop @ 0x1406A0960 (KiIdleLoop.c)
 *     KiChainedDispatch @ 0x1406A14D0 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x1406A18B0 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1406A19E0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1406A1A80 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1406A1B20 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatch @ 0x1406A1B80 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1406A1F60 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1406A2340 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1406A2720 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1406A2AF0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1406A36D0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1406A3E70 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1406A57A0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1406A5B90 (KiVmbusInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x1406A5F60 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1406A6010 (KiVmbusInterruptSubDispatch.c)
 *     KiSwInterrupt @ 0x1406A60C0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1406A6810 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1406A6F70 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1406A76B0 (KiIpiInterruptSubDispatch.c)
 *     KiNmiInterruptStart @ 0x1406AB4C0 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x1406AF7C0 (KiMcheckAbort.c)
 *     KiSystemStartup @ 0x140B3B3A0 (KiSystemStartup.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

unsigned __int8 __fastcall KzSetIrqlUnsafe(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v3; // cl

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > a1 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a1);
    __writecr8(v1);
  }
  else
  {
    v3 = KeGetCurrentIrql();
    __writecr8(v1);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v3, (unsigned __int8)v1);
  }
  return CurrentIrql;
}
