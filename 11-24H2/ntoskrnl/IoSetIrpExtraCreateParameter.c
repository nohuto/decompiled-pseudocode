/*
 * XREFs of IoSetIrpExtraCreateParameter @ 0x1408AD470
 * Callers:
 *     IopSymlinkAllocateAndAddECP @ 0x1408AB7E0 (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoSetIrpExtraCreateParameter(PIRP Irp, struct _ECP_LIST *ExtraCreateParameter)
{
  if ( (Irp->Flags & 0x80u) == 0 )
    return -1073741585;
  if ( Irp->UserBuffer )
    return -1073741584;
  Irp->UserBuffer = ExtraCreateParameter;
  ExtraCreateParameter->Flags |= 8u;
  return 0;
}
