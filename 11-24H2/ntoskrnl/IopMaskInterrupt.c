/*
 * XREFs of IopMaskInterrupt @ 0x1403B80B0
 * Callers:
 *     IoReportInterruptInactive @ 0x1404A5F00 (IoReportInterruptInactive.c)
 * Callees:
 *     KeMaskInterrupt @ 0x1403B748C (KeMaskInterrupt.c)
 */

__int64 __fastcall IopMaskInterrupt(__int64 a1)
{
  return KeMaskInterrupt((__int64 *)(a1 + 392), __popcnt(*(_QWORD *)(a1 - 104)), a1 - 96, (struct _KDPC *)(a1 + 320));
}
