/*
 * XREFs of ProbeForRead @ 0x1409CC640
 * Callers:
 *     RtlReadULong64FromUser @ 0x1406F0A78 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1406F0AB4 (RtlReadULongFromUser.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 */

void __stdcall ProbeForRead(volatile void *Address, SIZE_T Length, ULONG Alignment)
{
  if ( Length )
  {
    if ( ((Alignment - 1) & (unsigned int)Address) != 0 )
      ExRaiseDatatypeMisalignment();
  }
}
