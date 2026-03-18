/*
 * XREFs of FX_TRACK_DRIVER @ 0x1400563E0
 * Callers:
 *     ?WorkItemHandler@FxInterrupt@@QEAAXXZ @ 0x140055F38 (-WorkItemHandler@FxInterrupt@@QEAAXXZ.c)
 *     ?Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x140056080 (-Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FX_TRACK_DRIVER(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  if ( FxDriverGlobals->FxTrackDriverForMiniDumpLog )
    *(_QWORD *)((unsigned int)(unk_1400C8080 * HIDWORD(KeGetPcr()[1].LockArray)) + unk_1400C8070) = FxDriverGlobals;
}
