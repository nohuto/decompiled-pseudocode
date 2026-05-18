/*
 * XREFs of sub_1800908D0 @ 0x1800908D0
 * Callers:
 *     sub_180090BE0 @ 0x180090BE0 (sub_180090BE0.c)
 * Callees:
 *     sub_18008D85C @ 0x18008D85C (sub_18008D85C.c)
 */

__int64 __fastcall sub_1800908D0(_QWORD *a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = (_QWORD *)a1[2];
  a1[2] = *v1;
  sub_18008D85C((__int64)a1, v1);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
