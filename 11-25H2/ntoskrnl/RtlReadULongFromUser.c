/*
 * XREFs of RtlReadULongFromUser @ 0x1406F0AB4
 * Callers:
 *     PoGetRequester @ 0x1404E911C (PoGetRequester.c)
 * Callees:
 *     ProbeForRead @ 0x1409CC640 (ProbeForRead.c)
 */

__int64 __fastcall RtlReadULongFromUser(unsigned int *a1)
{
  ProbeForRead(a1, 4uLL, 1u);
  return *a1;
}
