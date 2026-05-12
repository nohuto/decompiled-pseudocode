/*
 * XREFs of PortPassThroughExBasicValidation @ 0x140042A00
 * Callers:
 *     RaidAdapterPassThrough @ 0x1401B53BC (RaidAdapterPassThrough.c)
 *     PortPassThroughExSendAsync @ 0x1401B5774 (PortPassThroughExSendAsync.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1401B5FE8 (RaUnitScsiPassThroughIoctl.c)
 *     PortPassThroughGetAddress @ 0x1401B85E0 (PortPassThroughGetAddress.c)
 *     PortPassThroughSetAddress @ 0x1401B8868 (PortPassThroughSetAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortPassThroughExBasicValidation(IRP *a1)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  _IRP *MasterIrp; // rdi
  bool v3; // cf
  unsigned int Options; // eax
  unsigned int v5; // ecx
  unsigned int IrpCount; // edx
  int MdlAddress_high; // r8d
  unsigned int v9; // r9d
  int MdlAddress; // r10d
  unsigned int v11; // r8d

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a1->AssociatedIrp.MasterIrp;
  v3 = IoIs32bitProcess(a1) != 0;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v5 = v3 ? 52 : 64;
  if ( Options < v5 )
    return 3221225507LL;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) != v5 )
    return 3221225561LL;
  IrpCount = MasterIrp->AssociatedIrp.IrpCount;
  MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
  v9 = MdlAddress_high + IrpCount;
  if ( MdlAddress_high + IrpCount >= IrpCount
    && (MdlAddress = (int)MasterIrp->MdlAddress) != 0
    && MdlAddress_high
    && (v11 = v5 + MdlAddress - 1, IrpCount >= v11)
    && Options > v11
    && Options >= v9
    && BYTE2(MasterIrp->Flags) <= 3u )
  {
    return 0LL;
  }
  else
  {
    return 3221225485LL;
  }
}
