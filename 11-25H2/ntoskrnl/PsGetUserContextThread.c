/*
 * XREFs of PsGetUserContextThread @ 0x1409095C4
 * Callers:
 *     EtwpTraceContextRegisters @ 0x140641088 (EtwpTraceContextRegisters.c)
 * Callees:
 *     PspGetContextThreadInternal @ 0x140909940 (PspGetContextThreadInternal.c)
 */

__int64 __fastcall PsGetUserContextThread(int a1, int a2)
{
  return PspGetContextThreadInternal(a1, a2, 0, 1, 1);
}
