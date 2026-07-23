/*
 * XREFs of DbgkpLkmdEnumApcOrDpcDataCallback @ 0x14057BA60
 * Callers:
 *     <none>
 * Callees:
 *     DbgkpLkmdSnapDataEx @ 0x14057BAB4 (DbgkpLkmdSnapDataEx.c)
 */

__int64 __fastcall DbgkpLkmdEnumApcOrDpcDataCallback(int a1, int a2, int a3)
{
  return DbgkpLkmdSnapDataEx(a3, a1, a2, 0, 0LL, 0LL);
}
