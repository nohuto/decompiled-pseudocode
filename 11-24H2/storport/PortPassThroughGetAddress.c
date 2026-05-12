/*
 * XREFs of PortPassThroughGetAddress @ 0x1401B85E0
 * Callers:
 *     NvmeAdapterPassThrough @ 0x14019A9EC (NvmeAdapterPassThrough.c)
 * Callees:
 *     PortPassThroughExBasicValidation @ 0x140042A00 (PortPassThroughExBasicValidation.c)
 */

__int64 __fastcall PortPassThroughGetAddress(IRP *a1, _BYTE *a2, _BYTE *a3, char *a4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  char v9; // di
  __int64 result; // rax
  _IRP *MasterIrp; // rdx
  char v12; // al
  char *v13; // rcx

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
    v13 = (char *)MasterIrp + (unsigned int)MasterIrp->AssociatedIrp.IrpCount;
    if ( *(_WORD *)v13 != 1 || *((_DWORD *)v13 + 1) < 4u )
      return 3221225485LL;
    *a2 = v13[8];
    *a3 = v13[9];
    v12 = v13[10];
  }
  else
  {
    *a2 = HIBYTE(MasterIrp->Size);
    *a3 = *((_BYTE *)&MasterIrp->Size + 2);
    v12 = *((_BYTE *)&MasterIrp->Size + 3);
  }
  *a4 = v12;
  return 0LL;
}
