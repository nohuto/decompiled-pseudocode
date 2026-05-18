/*
 * XREFs of sub_18004A1B0 @ 0x18004A1B0
 * Callers:
 *     sub_18004B074 @ 0x18004B074 (sub_18004B074.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004A1B0(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 result; // rax

  v2 = *a2;
  v3 = a2[2];
  v4 = a2[1];
  a2[2] = 0LL;
  a2[1] = 0LL;
  *a2 = 0LL;
  *a1 = v2;
  a1[1] = v4;
  a1[2] = v3;
  a1[3] = a2[3];
  result = a2[4];
  a1[4] = result;
  a2[3] = 0LL;
  a2[4] = 0LL;
  return result;
}
