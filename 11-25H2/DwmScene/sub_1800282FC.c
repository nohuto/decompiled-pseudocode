/*
 * XREFs of sub_1800282FC @ 0x1800282FC
 * Callers:
 *     sub_1800284DC @ 0x1800284DC (sub_1800284DC.c)
 *     sub_180041814 @ 0x180041814 (sub_180041814.c)
 *     sub_18005B17C @ 0x18005B17C (sub_18005B17C.c)
 * Callees:
 *     sub_180027FBC @ 0x180027FBC (sub_180027FBC.c)
 */

__int64 __fastcall sub_1800282FC(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = 0;
  sub_180027FBC(a2);
  result = a1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
