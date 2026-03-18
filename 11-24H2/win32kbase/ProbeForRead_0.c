/*
 * XREFs of ProbeForRead_0 @ 0x1401A2356
 * Callers:
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     RtlCopyToUser @ 0x1402C3008 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x1402C306C (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x1402C30A8 (RtlWriteULong64ToUser.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ProbeForRead_0(volatile void *Address, SIZE_T Length, ULONG Alignment)
{
  ProbeForRead(Address, Length, Alignment);
}
