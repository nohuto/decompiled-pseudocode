/*
 * XREFs of StorFreeSynchronousScsiRequest @ 0x14000D344
 * Callers:
 *     RaidUnitSendSrbIoControlSynchronously @ 0x14000CE9C (RaidUnitSendSrbIoControlSynchronously.c)
 *     TcglibEalExecuteCommandSync @ 0x1400853BC (TcglibEalExecuteCommandSync.c)
 *     RaUnitSmartDataIoctl @ 0x1400987C8 (RaUnitSmartDataIoctl.c)
 *     RaUnitSmartReturnStatus @ 0x140099048 (RaUnitSmartReturnStatus.c)
 *     RaidUnitAbortSrbCompletion @ 0x14009DE70 (RaidUnitAbortSrbCompletion.c)
 *     RaidUnitLogSenseCommandSrb @ 0x14009F72C (RaidUnitLogSenseCommandSrb.c)
 *     RaidUnitResetTarget @ 0x14009FE7C (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1400A01E8 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1400A05BC (RaidUnitSendSrbProtocolCommandSynchronously.c)
 * Callees:
 *     <none>
 */

void __fastcall StorFreeSynchronousScsiRequest(PIRP Irp)
{
  struct _MDL *MdlAddress; // rcx

  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
  {
    MmUnlockPages(MdlAddress);
    IoFreeMdl(Irp->MdlAddress);
  }
  IoFreeIrp(Irp);
}
