/*
 * XREFs of sub_180010080 @ 0x180010080
 * Callers:
 *     sub_18000F210 @ 0x18000F210 (sub_18000F210.c)
 * Callees:
 *     sub_180010048 @ 0x180010048 (sub_180010048.c)
 */

FARPROC __fastcall sub_180010080(const CHAR *a1)
{
  HMODULE v2; // rax

  v2 = sub_180010048();
  return GetProcAddress(v2, a1);
}
