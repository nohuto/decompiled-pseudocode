/*
 * XREFs of sub_180029D08 @ 0x180029D08
 * Callers:
 *     sub_180029DA8 @ 0x180029DA8 (sub_180029DA8.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180029D44 @ 0x180029D44 (sub_180029D44.c)
 */

__int64 __fastcall sub_180029D08(_QWORD *a1)
{
  void *v1; // rbx
  __int64 result; // rax

  v1 = (void *)*a1;
  if ( *a1 )
  {
    sub_180029D44(*a1);
    return sub_18000BB4C(v1);
  }
  return result;
}
