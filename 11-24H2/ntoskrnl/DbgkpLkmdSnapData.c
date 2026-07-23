/*
 * XREFs of DbgkpLkmdSnapData @ 0x14057BA90
 * Callers:
 *     DbgkCaptureLiveDump @ 0x1407055FC (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapPendingIrps @ 0x140705E44 (DbgkpLkmdSnapPendingIrps.c)
 * Callees:
 *     DbgkpLkmdSnapDataEx @ 0x14057BAB4 (DbgkpLkmdSnapDataEx.c)
 */

__int64 __fastcall DbgkpLkmdSnapData(int a1, int a2, int a3)
{
  return DbgkpLkmdSnapDataEx(a1, a2, a3, 0, 0LL, 0LL);
}
