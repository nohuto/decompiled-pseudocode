/*
 * XREFs of IoAllocateErrorLogEntry @ 0x14049D630
 * Callers:
 *     IopDisassociateThreadIrp @ 0x1405930AC (IopDisassociateThreadIrp.c)
 *     DifIoAllocateErrorLogEntryWrapper @ 0x140623C70 (DifIoAllocateErrorLogEntryWrapper.c)
 *     FsRtlLogCcFlushError @ 0x140AAD000 (FsRtlLogCcFlushError.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x14049D66C (IopAllocateErrorLogEntry.c)
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
