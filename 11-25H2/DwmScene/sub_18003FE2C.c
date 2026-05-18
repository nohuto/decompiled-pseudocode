/*
 * XREFs of sub_18003FE2C @ 0x18003FE2C
 * Callers:
 *     sub_18004014C @ 0x18004014C (sub_18004014C.c)
 * Callees:
 *     sub_18003CF08 @ 0x18003CF08 (sub_18003CF08.c)
 */

__int64 __fastcall sub_18003FE2C(_QWORD *a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = (_QWORD *)a1[2];
  a1[2] = *v1;
  sub_18003CF08((__int64)a1, v1);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
