/*
 * XREFs of PrExtLogLatencyTime @ 0x140664234
 * Callers:
 *     HalpLoadMicrocode @ 0x140701A80 (HalpLoadMicrocode.c)
 * Callees:
 *     <none>
 */

void __fastcall PrExtLogLatencyTime(__int64 a1)
{
  MicrocodeLatencyTime = a1;
}
