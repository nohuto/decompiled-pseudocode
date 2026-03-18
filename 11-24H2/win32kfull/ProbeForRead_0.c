/*
 * XREFs of ProbeForRead_0 @ 0x14026E3F4
 * Callers:
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     RtlCopyToUser @ 0x1403D00E8 (RtlCopyToUser.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ProbeForRead_0(volatile void *Address, SIZE_T Length, ULONG Alignment)
{
  ProbeForRead(Address, Length, Alignment);
}
