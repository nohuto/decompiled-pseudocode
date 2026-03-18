/*
 * XREFs of ACPIInternalIsReportedMissing @ 0x1400529F4
 * Callers:
 *     ACPIBusIrpSurpriseRemoval @ 0x140050500 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIFilterIrpSurpriseRemoval @ 0x1400BDC20 (ACPIFilterIrpSurpriseRemoval.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIInternalIsReportedMissing(__int64 a1)
{
  char v2; // di
  KIRQL v3; // dl

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  while ( (*(_DWORD *)(a1 + 8) & 0x100LL) == 0 && (*(_DWORD *)(a1 + 1120) & 0x20000000) == 0 )
  {
    a1 = *(_QWORD *)(a1 + 792);
    if ( !a1 )
      goto LABEL_7;
  }
  v2 = 1;
LABEL_7:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v3);
  return v2;
}
