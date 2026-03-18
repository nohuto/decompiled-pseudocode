/*
 * XREFs of AcpiPccLockSubspace @ 0x140051700
 * Callers:
 *     ACPIPccProcessSci @ 0x140023CF0 (ACPIPccProcessSci.c)
 *     AcpiPccAcquireSubspaceCore @ 0x1400460D8 (AcpiPccAcquireSubspaceCore.c)
 *     AcpiPccCommandComplete @ 0x140050C90 (AcpiPccCommandComplete.c)
 *     AcpiPccEjectInterface @ 0x140050E7C (AcpiPccEjectInterface.c)
 *     AcpiPccExecuteCommandAsync @ 0x140051170 (AcpiPccExecuteCommandAsync.c)
 *     AcpiPccRingDoorbell @ 0x140051340 (AcpiPccRingDoorbell.c)
 *     AcpiPccReleaseSubspace @ 0x140064010 (AcpiPccReleaseSubspace.c)
 * Callees:
 *     <none>
 */

void __fastcall AcpiPccLockSubspace(__int64 a1, KIRQL *a2)
{
  if ( a1 )
  {
    if ( a2 )
    {
      *a2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 800));
      *(_QWORD *)(a1 + 808) = KeGetCurrentThread();
    }
  }
}
