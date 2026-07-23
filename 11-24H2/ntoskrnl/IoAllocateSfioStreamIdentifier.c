/*
 * XREFs of IoAllocateSfioStreamIdentifier @ 0x140593860
 * Callers:
 *     <none>
 * Callees:
 *     IopGetSetStreamIdentifier @ 0x14041AC4C (IopGetSetStreamIdentifier.c)
 */

NTSTATUS __stdcall IoAllocateSfioStreamIdentifier(
        PFILE_OBJECT FileObject,
        ULONG Length,
        PVOID Signature,
        PVOID *StreamIdentifier)
{
  if ( !FileObject )
    return -1073741585;
  if ( Length - 1 > 0xFFFFFFDE )
    return -1073741584;
  if ( Signature )
    return IopGetSetStreamIdentifier((__int64)FileObject, Length, (__int64)Signature, StreamIdentifier, 1);
  return -1073741583;
}
