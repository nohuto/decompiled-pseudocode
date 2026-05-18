/*
 * XREFs of sub_18004B72C @ 0x18004B72C
 * Callers:
 *     sub_18004A558 @ 0x18004A558 (sub_18004A558.c)
 * Callees:
 *     sub_18004B83C @ 0x18004B83C (sub_18004B83C.c)
 */

__int64 __fastcall sub_18004B72C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18004B83C(v2 + 32);
  return sub_18001C2E4(a1);
}
