/*
 * XREFs of HalpTscQueryCounterOrdered @ 0x140319950
 * Callers:
 *     HalpTimerStallExecutionProcessor @ 0x14031AB50 (HalpTimerStallExecutionProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpTscQueryCounterOrdered(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  __asm { rdtscp }
  return (a2 << 32) | v2;
}
