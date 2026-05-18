/*
 * XREFs of sub_180075760 @ 0x180075760
 * Callers:
 *     sub_1800739D4 @ 0x1800739D4 (sub_1800739D4.c)
 *     sub_18008C3EC @ 0x18008C3EC (sub_18008C3EC.c)
 *     sub_18008C49C @ 0x18008C49C (sub_18008C49C.c)
 *     sub_18008C728 @ 0x18008C728 (sub_18008C728.c)
 * Callees:
 *     sub_1800108F8 @ 0x1800108F8 (sub_1800108F8.c)
 */

__int64 __fastcall sub_180075760(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  result = sub_1800108F8((__int64)a1, &v5);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 16 * a2;
  return result;
}
