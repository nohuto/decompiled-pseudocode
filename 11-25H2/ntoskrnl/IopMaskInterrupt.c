/*
 * XREFs of IopMaskInterrupt @ 0x1402016D8
 * Callers:
 *     IoReportInterruptInactive @ 0x140200A50 (IoReportInterruptInactive.c)
 * Callees:
 *     KeMaskInterrupt @ 0x14020254C (KeMaskInterrupt.c)
 */

__int64 __fastcall IopMaskInterrupt(__int64 a1)
{
  return KeMaskInterrupt(a1 + 392, __popcnt(*(_QWORD *)(a1 - 104)), a1 - 96, a1 + 320);
}
