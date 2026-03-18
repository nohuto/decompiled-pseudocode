/*
 * XREFs of InbvEnableDisplayString @ 0x1404F8B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall InbvEnableDisplayString(char a1)
{
  char result; // al

  result = byte_140E65AF8;
  byte_140E65AF8 = a1;
  return result;
}
