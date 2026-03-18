/*
 * XREFs of NVMeHwTracingEnabled @ 0x1400188F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall NVMeHwTracingEnabled(__int64 a1, char a2)
{
  char result; // al

  result = *(_BYTE *)(a1 + 21);
  *(_BYTE *)(a1 + 21) = result ^ (a2 ^ result) & 1;
  return result;
}
