/*
 * XREFs of IopMaskInterrupt @ 0x1402B3170
 * Callers:
 *     IoReportInterruptInactive @ 0x1402B4CC0 (IoReportInterruptInactive.c)
 * Callees:
 *     KeMaskInterrupt @ 0x1402B3740 (KeMaskInterrupt.c)
 */

__int64 __fastcall IopMaskInterrupt(__int64 a1)
{
  return KeMaskInterrupt(a1 + 392, __popcnt(*(_QWORD *)(a1 - 104)), a1 - 96, a1 + 320);
}
