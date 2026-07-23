/*
 * XREFs of PsGetUserContextThread @ 0x14091FADC
 * Callers:
 *     EtwpTraceContextRegisters @ 0x14064B6B8 (EtwpTraceContextRegisters.c)
 * Callees:
 *     PspGetContextThreadInternal @ 0x14091FE50 (PspGetContextThreadInternal.c)
 */

__int64 __fastcall PsGetUserContextThread(int a1, int a2)
{
  return PspGetContextThreadInternal(a1, a2, 0, 1, 1);
}
