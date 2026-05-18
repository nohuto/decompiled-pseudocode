/*
 * XREFs of sub_1800173A0 @ 0x1800173A0
 * Callers:
 *     sub_180017A30 @ 0x180017A30 (sub_180017A30.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

__int64 __fastcall sub_1800173A0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 192);
  if ( v2 )
    result = sub_18001050C(v2);
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
    result = sub_18001050C(v4);
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
    result = sub_18001050C(v5);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
