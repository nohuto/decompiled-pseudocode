/*
 * XREFs of InbvEnableDisplayString @ 0x1404F8AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall InbvEnableDisplayString(char a1)
{
  char result; // al

  result = byte_140E65E78;
  byte_140E65E78 = a1;
  return result;
}
