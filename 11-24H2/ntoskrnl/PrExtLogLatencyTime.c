/*
 * XREFs of PrExtLogLatencyTime @ 0x140662B24
 * Callers:
 *     HalpLoadMicrocode @ 0x1406FF6C0 (HalpLoadMicrocode.c)
 * Callees:
 *     <none>
 */

void __fastcall PrExtLogLatencyTime(__int64 a1)
{
  MicrocodeLatencyTime = a1;
}
