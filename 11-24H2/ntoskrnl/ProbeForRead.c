/*
 * XREFs of ProbeForRead @ 0x1409B18E0
 * Callers:
 *     RtlCopyFromUser @ 0x1404FBE18 (RtlCopyFromUser.c)
 *     RtlCopyToUser @ 0x1406FC3C8 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x1406FC42C (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1406FC468 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1406FC4A4 (RtlWriteULongToUser.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 */

void __stdcall ProbeForRead(volatile void *Address, SIZE_T Length, ULONG Alignment)
{
  if ( Length )
  {
    if ( ((Alignment - 1) & (unsigned int)Address) != 0 )
      ExRaiseDatatypeMisalignment();
  }
}
