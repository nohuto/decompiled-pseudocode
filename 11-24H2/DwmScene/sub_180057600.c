/*
 * XREFs of sub_180057600 @ 0x180057600
 * Callers:
 *     sub_180055E40 @ 0x180055E40 (sub_180055E40.c)
 *     sub_18005901C @ 0x18005901C (sub_18005901C.c)
 * Callees:
 *     sub_1800590A0 @ 0x1800590A0 (sub_1800590A0.c)
 *     sub_180059750 @ 0x180059750 (sub_180059750.c)
 */

__int64 __fastcall sub_180057600(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // xmm1_8

  if ( (unsigned __int8)sub_180059750() )
    sub_1800590A0(a1);
  result = a2;
  v5 = *(_QWORD *)(a1 + 1588);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 1572);
  *(_QWORD *)(a2 + 16) = v5;
  return result;
}
