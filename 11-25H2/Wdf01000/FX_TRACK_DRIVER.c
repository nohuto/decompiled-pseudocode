/*
 * XREFs of FX_TRACK_DRIVER @ 0x14003F8F0
 * Callers:
 *     ?WorkItemHandler@FxInterrupt@@QEAAXXZ @ 0x14003F448 (-WorkItemHandler@FxInterrupt@@QEAAXXZ.c)
 *     ?Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x14003F590 (-Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FX_TRACK_DRIVER(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  if ( FxDriverGlobals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = FxDriverGlobals;
}
