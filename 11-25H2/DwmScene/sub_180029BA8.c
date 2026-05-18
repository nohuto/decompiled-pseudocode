/*
 * XREFs of sub_180029BA8 @ 0x180029BA8
 * Callers:
 *     sub_180029C48 @ 0x180029C48 (sub_180029C48.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180029BE4 @ 0x180029BE4 (sub_180029BE4.c)
 */

__int64 __fastcall sub_180029BA8(_QWORD *a1)
{
  void *v1; // rbx
  __int64 result; // rax

  v1 = (void *)*a1;
  if ( *a1 )
  {
    sub_180029BE4(*a1);
    return sub_18000B77C(v1);
  }
  return result;
}
