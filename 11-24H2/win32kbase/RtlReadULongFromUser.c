/*
 * XREFs of RtlReadULongFromUser @ 0x1402C306C
 * Callers:
 *     RtlReadULongFromUser$thunk$16789519765233612629 @ 0x140242030 (RtlReadULongFromUser$thunk$16789519765233612629.c)
 *     WmsgpConnect @ 0x1402C4794 (WmsgpConnect.c)
 * Callees:
 *     ProbeForRead_0 @ 0x1401A2356 (ProbeForRead_0.c)
 */

__int64 __fastcall RtlReadULongFromUser(unsigned int *a1)
{
  ProbeForRead_0(a1, 4uLL, 1u);
  return *a1;
}
