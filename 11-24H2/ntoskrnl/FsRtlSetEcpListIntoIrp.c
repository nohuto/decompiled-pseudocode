/*
 * XREFs of FsRtlSetEcpListIntoIrp @ 0x1409DE3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlSetEcpListIntoIrp(PIRP Irp, PECP_LIST EcpList)
{
  NTSTATUS result; // eax

  if ( (Irp->Flags & 0x80u) == 0 )
    return -1073741585;
  result = 0;
  if ( Irp->UserBuffer )
    return -1073741584;
  Irp->UserBuffer = EcpList;
  EcpList->Flags |= 8u;
  return result;
}
