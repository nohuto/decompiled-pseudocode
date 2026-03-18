/*
 * XREFs of IopUnmaskInterrupt @ 0x14046E43C
 * Callers:
 *     IoReportInterruptActive @ 0x14046E3C0 (IoReportInterruptActive.c)
 * Callees:
 *     KeUnmaskInterrupt @ 0x14046E464 (KeUnmaskInterrupt.c)
 */

__int64 __fastcall IopUnmaskInterrupt(__int64 a1)
{
  return KeUnmaskInterrupt(a1 + 392, __popcnt(*(_QWORD *)(a1 - 104)), a1 - 96);
}
