/*
 * XREFs of ExpDeleteTimer2 @ 0x140A42920
 * Callers:
 *     <none>
 * Callees:
 *     KeDisableTimer2 @ 0x14036F62C (KeDisableTimer2.c)
 */

char __fastcall ExpDeleteTimer2(__int64 a1)
{
  return KeDisableTimer2(a1, 1, 1, 0LL);
}
