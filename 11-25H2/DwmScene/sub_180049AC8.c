/*
 * XREFs of sub_180049AC8 @ 0x180049AC8
 * Callers:
 *     sub_1800474A4 @ 0x1800474A4 (sub_1800474A4.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180047484 @ 0x180047484 (sub_180047484.c)
 *     sub_1800475E0 @ 0x1800475E0 (sub_1800475E0.c)
 *     sub_180049A80 @ 0x180049A80 (sub_180049A80.c)
 */

__int64 __fastcall sub_180049AC8(__int64 *a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 > 0x2E8BA2E8BA2E8BALL )
    std::_Xlength_error("vector too long");
  v3 = sub_180049A80(a1, a2);
  v4 = *a1;
  v5 = v3;
  if ( *a1 )
  {
    sub_1800475E0(v4, a1[1]);
    sub_180010134((void *)*a1, 8 * ((a1[2] - *a1) >> 3));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  v7 = v5;
  result = sub_180047484(v4, &v7);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 88 * v5;
  return result;
}
