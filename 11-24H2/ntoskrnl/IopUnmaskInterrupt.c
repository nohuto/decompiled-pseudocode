/*
 * XREFs of IopUnmaskInterrupt @ 0x1402B4B2C
 * Callers:
 *     IoReportInterruptActive @ 0x1402B4AB0 (IoReportInterruptActive.c)
 * Callees:
 *     KeUnmaskInterrupt @ 0x1402B4B54 (KeUnmaskInterrupt.c)
 */

__int64 __fastcall IopUnmaskInterrupt(__int64 a1)
{
  return KeUnmaskInterrupt(a1 + 392, __popcnt(*(_QWORD *)(a1 - 104)), a1 - 96);
}
