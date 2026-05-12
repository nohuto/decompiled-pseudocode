/*
 * XREFs of PortPassThroughFreeIrpEx @ 0x1400378D4
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x14004D8C4 (RaUnitAtaPassThroughIoctl.c)
 *     PortPassThroughExSendAsync @ 0x1401B5774 (PortPassThroughExSendAsync.c)
 * Callees:
 *     <none>
 */

void __fastcall PortPassThroughFreeIrpEx(PIRP Irp)
{
  struct _MDL *MdlAddress; // rcx

  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
  {
    MmUnlockPages(MdlAddress);
    IoFreeMdl(Irp->MdlAddress);
    Irp->MdlAddress = 0LL;
  }
  IoFreeIrp(Irp);
}
