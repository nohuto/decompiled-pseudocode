/*
 * XREFs of ProbeForRead_0 @ 0x1400653D6
 * Callers:
 *     RtlCopyFromUser @ 0x140065368 (RtlCopyFromUser.c)
 *     RtlCopyToUser @ 0x14018AE14 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x14018AE78 (RtlWriteULong64ToUser.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ProbeForRead_0(volatile void *Address, SIZE_T Length, ULONG Alignment)
{
  ProbeForRead(Address, Length, Alignment);
}
