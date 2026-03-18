/*
 * XREFs of ProbeForRead_0 @ 0x140064FF6
 * Callers:
 *     RtlCopyFromUser @ 0x140064F88 (RtlCopyFromUser.c)
 *     RtlCopyToUser @ 0x14018D054 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x14018D0B8 (RtlWriteULong64ToUser.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ProbeForRead_0(volatile void *Address, SIZE_T Length, ULONG Alignment)
{
  ProbeForRead(Address, Length, Alignment);
}
