/*
 * XREFs of DbgkpLkmdSnapData @ 0x14057E600
 * Callers:
 *     DbgkCaptureLiveDump @ 0x140707A3C (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapPendingIrps @ 0x140708284 (DbgkpLkmdSnapPendingIrps.c)
 * Callees:
 *     DbgkpLkmdSnapDataEx @ 0x14057E624 (DbgkpLkmdSnapDataEx.c)
 */

__int64 __fastcall DbgkpLkmdSnapData(int a1, int a2, int a3)
{
  return DbgkpLkmdSnapDataEx(a1, a2, a3, 0, 0LL, 0LL);
}
