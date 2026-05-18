/*
 * XREFs of sub_180090A30 @ 0x180090A30
 * Callers:
 *     sub_180090D40 @ 0x180090D40 (sub_180090D40.c)
 * Callees:
 *     sub_18008D9BC @ 0x18008D9BC (sub_18008D9BC.c)
 */

__int64 __fastcall sub_180090A30(_QWORD *a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = (_QWORD *)a1[2];
  a1[2] = *v1;
  sub_18008D9BC((__int64)a1, v1);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
