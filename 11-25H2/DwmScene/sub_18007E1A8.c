/*
 * XREFs of sub_18007E1A8 @ 0x18007E1A8
 * Callers:
 *     sub_18007E078 @ 0x18007E078 (sub_18007E078.c)
 *     sub_18007E344 @ 0x18007E344 (sub_18007E344.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180050B00 @ 0x180050B00 (sub_180050B00.c)
 */

__int64 __fastcall sub_18007E1A8(_QWORD *a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx

  v2 = a2;
  if ( a2 == 1 )
  {
    a1[22] = 0LL;
    v4 = a1[23];
    a1[23] = 0LL;
    if ( v4 )
      sub_18001050C(v4);
  }
  sub_180050B00(a1 + 60);
  return sub_18004D588(&a1[2 * v2 + 48]);
}
