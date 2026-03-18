/*
 * XREFs of ACPIEcServiceDevice @ 0x14001873C
 * Callers:
 *     AcpiEcCommonDpcHandler @ 0x140017F0C (AcpiEcCommonDpcHandler.c)
 *     ACPIEcOpRegionHandler @ 0x140018460 (ACPIEcOpRegionHandler.c)
 *     ACPIEcQueueEcIrp @ 0x1400185D0 (ACPIEcQueueEcIrp.c)
 *     ACPIEcWatchdogDpc @ 0x14004EA00 (ACPIEcWatchdogDpc.c)
 * Callees:
 *     ACPIEcServiceIoLoop @ 0x140018860 (ACPIEcServiceIoLoop.c)
 *     ACPIEcLogAction @ 0x140019010 (ACPIEcLogAction.c)
 *     ACPIEcUnmaskInterrupt @ 0x140019270 (ACPIEcUnmaskInterrupt.c)
 *     ACPIEcMaskInterrupt @ 0x1400199D0 (ACPIEcMaskInterrupt.c)
 *     ACPIEcUnloadPending @ 0x14005FF48 (ACPIEcUnloadPending.c)
 */

void __fastcall ACPIEcServiceDevice(__int64 a1)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v3; // al
  __int64 v4; // rdx
  bool v5; // zf
  KIRQL v6; // si

  if ( *(_BYTE *)(a1 + 121) <= 1u )
  {
    v2 = (KSPIN_LOCK *)(a1 + 88);
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    v5 = *(_BYTE *)(a1 + 456) == 0;
    v6 = v3;
    *(_BYTE *)(a1 + 457) = 1;
    if ( v5 )
    {
      v5 = *(_BYTE *)(a1 + 458) == 0;
      *(_BYTE *)(a1 + 456) = 1;
      if ( !v5 )
      {
        *(_BYTE *)(a1 + 458) = 0;
        LOBYTE(v4) = 96;
        ACPIEcLogAction(a1, v4, 0LL, 0LL);
        ACPIEcMaskInterrupt(a1);
      }
      while ( *(_BYTE *)(a1 + 457) )
      {
        *(_BYTE *)(a1 + 457) = 0;
        KeReleaseSpinLock(v2, v6);
        ACPIEcServiceIoLoop(a1);
        v6 = KeAcquireSpinLockRaiseToDpc(v2);
      }
      v5 = *(_BYTE *)(a1 + 121) == 0;
      *(_BYTE *)(a1 + 456) = 0;
      if ( !v5 )
        ACPIEcUnloadPending(a1);
      if ( !*(_BYTE *)(a1 + 458) )
      {
        *(_BYTE *)(a1 + 458) = 1;
        LOBYTE(v4) = 112;
        ACPIEcLogAction(a1, v4, 0LL, 0LL);
        ACPIEcUnmaskInterrupt(a1);
      }
    }
    KeReleaseSpinLock(v2, v6);
  }
}
