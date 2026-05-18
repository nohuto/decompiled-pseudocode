/*
 * XREFs of sub_180017508 @ 0x180017508
 * Callers:
 *     sub_180017AF0 @ 0x180017AF0 (sub_180017AF0.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

__int64 __fastcall sub_180017508(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  sub_18000E854((__int64 *)(a1 + 40));
  result = sub_18000E854((__int64 *)(a1 + 32));
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
    result = sub_18001050C(v3);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
