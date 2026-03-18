/*
 * XREFs of PsGetUserContextThread @ 0x1408FD1FC
 * Callers:
 *     EtwpTraceContextRegisters @ 0x14064D0A8 (EtwpTraceContextRegisters.c)
 * Callees:
 *     PspGetContextThreadInternal @ 0x1408FD570 (PspGetContextThreadInternal.c)
 */

__int64 __fastcall PsGetUserContextThread(int a1, int a2)
{
  return PspGetContextThreadInternal(a1, a2, 0, 1, 1);
}
