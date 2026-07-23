/*
 * XREFs of ProbeForRead @ 0x1409A8C30
 * Callers:
 *     RtlCopyFromUser @ 0x1404F96D8 (RtlCopyFromUser.c)
 *     RtlCopyToUser @ 0x1406FA008 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x1406FA06C (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1406FA0A8 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1406FA0E4 (RtlWriteULongToUser.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

void __stdcall ProbeForRead(volatile void *Address, SIZE_T Length, ULONG Alignment)
{
  if ( Length )
  {
    if ( ((Alignment - 1) & (unsigned int)Address) != 0 )
      ExRaiseDatatypeMisalignment();
  }
}
