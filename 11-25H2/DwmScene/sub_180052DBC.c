/*
 * XREFs of sub_180052DBC @ 0x180052DBC
 * Callers:
 *     sub_180052970 @ 0x180052970 (sub_180052970.c)
 *     sub_1800529AC @ 0x1800529AC (sub_1800529AC.c)
 *     sub_1800D8DDB @ 0x1800D8DDB (sub_1800D8DDB.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 */

__int64 __fastcall sub_180052DBC(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000B77C(v1);
  return result;
}
