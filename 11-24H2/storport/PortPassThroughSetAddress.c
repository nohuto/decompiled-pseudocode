/*
 * XREFs of PortPassThroughSetAddress @ 0x1401B8868
 * Callers:
 *     NvmeNamespaceScsiPassThroughIoctl @ 0x1401A85FC (NvmeNamespaceScsiPassThroughIoctl.c)
 * Callees:
 *     PortPassThroughExBasicValidation @ 0x140042A00 (PortPassThroughExBasicValidation.c)
 */

__int64 __fastcall PortPassThroughSetAddress(IRP *a1, char a2, char a3, char a4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  char v9; // si
  __int64 result; // rax
  _IRP *MasterIrp; // rcx
  char *v12; // rax

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  if ( ((CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 315460) & 0xFFFFFFFB) != 0 )
  {
    v9 = 0;
    if ( CurrentStackLocation->Parameters.Create.Options < (IoIs32bitProcess(a1) != 0 ? 44 : 56) )
      return 3221225507LL;
  }
  else
  {
    result = PortPassThroughExBasicValidation(a1);
    v9 = 1;
    if ( (int)result < 0 )
      return result;
  }
  MasterIrp = a1->AssociatedIrp.MasterIrp;
  if ( v9 )
  {
    v12 = (char *)MasterIrp + (unsigned int)MasterIrp->AssociatedIrp.IrpCount;
    if ( *(_WORD *)v12 >= 2u || HIDWORD(MasterIrp->MdlAddress) < 0xC )
      return 3221225485LL;
    *(_DWORD *)v12 = 1;
    *((_DWORD *)v12 + 1) = 4;
    v12[8] = a2;
    v12[9] = a3;
    v12[10] = a4;
    v12[11] = 0;
  }
  else
  {
    HIBYTE(MasterIrp->Size) = a2;
    *((_BYTE *)&MasterIrp->Size + 2) = a3;
    *((_BYTE *)&MasterIrp->Size + 3) = a4;
  }
  return 0LL;
}
