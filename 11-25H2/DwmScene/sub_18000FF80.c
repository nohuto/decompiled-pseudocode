/*
 * XREFs of sub_18000FF80 @ 0x18000FF80
 * Callers:
 *     sub_18000F110 @ 0x18000F110 (sub_18000F110.c)
 * Callees:
 *     sub_18000FF48 @ 0x18000FF48 (sub_18000FF48.c)
 */

FARPROC __fastcall sub_18000FF80(const CHAR *a1)
{
  HMODULE v2; // rax

  v2 = sub_18000FF48();
  return GetProcAddress(v2, a1);
}
