/*
 * XREFs of RtlInitUTF8String @ 0x14045BB80
 * Callers:
 *     PiGetDefaultMessageString @ 0x1409B8860 (PiGetDefaultMessageString.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14045BBA0 (RtlInitAnsiString.c)
 */

void __cdecl RtlInitUTF8String(PUTF8_STRING DestinationString, PCSZ SourceString)
{
  RtlInitAnsiString(DestinationString, SourceString);
}
