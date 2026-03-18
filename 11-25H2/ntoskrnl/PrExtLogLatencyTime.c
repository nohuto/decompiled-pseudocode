/*
 * XREFs of PrExtLogLatencyTime @ 0x140657F74
 * Callers:
 *     HalpLoadMicrocode @ 0x1406F5C90 (HalpLoadMicrocode.c)
 * Callees:
 *     <none>
 */

void __fastcall PrExtLogLatencyTime(__int64 a1)
{
  MicrocodeLatencyTime = a1;
}
