/*
 * XREFs of DbgkpLkmdSnapData @ 0x14057B2E0
 * Callers:
 *     DbgkCaptureLiveDump @ 0x1406FBB5C (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapPendingIrps @ 0x1406FC3A4 (DbgkpLkmdSnapPendingIrps.c)
 * Callees:
 *     DbgkpLkmdSnapDataEx @ 0x14057B304 (DbgkpLkmdSnapDataEx.c)
 */

__int64 __fastcall DbgkpLkmdSnapData(int a1, int a2, int a3)
{
  return DbgkpLkmdSnapDataEx(a1, a2, a3, 0, 0LL, 0LL);
}
