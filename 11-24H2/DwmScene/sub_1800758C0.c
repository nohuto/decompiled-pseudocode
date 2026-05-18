/*
 * XREFs of sub_1800758C0 @ 0x1800758C0
 * Callers:
 *     sub_180073B34 @ 0x180073B34 (sub_180073B34.c)
 *     sub_18008C54C @ 0x18008C54C (sub_18008C54C.c)
 *     sub_18008C5FC @ 0x18008C5FC (sub_18008C5FC.c)
 *     sub_18008C888 @ 0x18008C888 (sub_18008C888.c)
 * Callees:
 *     sub_1800109F8 @ 0x1800109F8 (sub_1800109F8.c)
 */

__int64 __fastcall sub_1800758C0(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  result = sub_1800109F8((__int64)a1, &v5);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 16 * a2;
  return result;
}
