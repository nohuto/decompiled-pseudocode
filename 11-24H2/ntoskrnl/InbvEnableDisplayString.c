/*
 * XREFs of InbvEnableDisplayString @ 0x1404FB1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall InbvEnableDisplayString(char a1)
{
  char result; // al

  result = byte_140E65D3C;
  byte_140E65D3C = a1;
  return result;
}
