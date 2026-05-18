/*
 * XREFs of sub_180029360 @ 0x180029360
 * Callers:
 *     sub_180028C30 @ 0x180028C30 (sub_180028C30.c)
 * Callees:
 *     sub_180011AFC @ 0x180011AFC (sub_180011AFC.c)
 */

__int64 __fastcall sub_180029360(unsigned __int64 a1)
{
  if ( a1 > 0x1AF286BCA1AF286LL )
    sub_180011AFC();
  return 152 * a1;
}
