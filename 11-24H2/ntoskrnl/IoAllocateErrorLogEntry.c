/*
 * XREFs of IoAllocateErrorLogEntry @ 0x1404A26A0
 * Callers:
 *     IopDisassociateThreadIrp @ 0x14059607C (IopDisassociateThreadIrp.c)
 *     DifIoAllocateErrorLogEntryWrapper @ 0x1406256B0 (DifIoAllocateErrorLogEntryWrapper.c)
 *     FsRtlLogCcFlushError @ 0x140AB2090 (FsRtlLogCcFlushError.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x1404A26DC (IopAllocateErrorLogEntry.c)
 */

PVOID __stdcall IoAllocateErrorLogEntry(PVOID IoObject, UCHAR EntrySize)
{
  PVOID v3; // rdx

  if ( !IoObject )
    return 0LL;
  if ( *(_WORD *)IoObject == 3 )
  {
    v3 = (PVOID)*((_QWORD *)IoObject + 1);
  }
  else
  {
    if ( *(_WORD *)IoObject != 4 )
      return 0LL;
    v3 = IoObject;
    IoObject = 0LL;
  }
  return (PVOID)IopAllocateErrorLogEntry(IoObject, v3);
}
