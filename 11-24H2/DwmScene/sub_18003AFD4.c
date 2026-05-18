/*
 * XREFs of sub_18003AFD4 @ 0x18003AFD4
 * Callers:
 *     sub_180038D08 @ 0x180038D08 (sub_180038D08.c)
 *     sub_180040424 @ 0x180040424 (sub_180040424.c)
 *     sub_180046FF8 @ 0x180046FF8 (sub_180046FF8.c)
 *     sub_180047BB0 @ 0x180047BB0 (sub_180047BB0.c)
 *     sub_1800491F0 @ 0x1800491F0 (sub_1800491F0.c)
 *     sub_180061060 @ 0x180061060 (sub_180061060.c)
 *     sub_1800626E4 @ 0x1800626E4 (sub_1800626E4.c)
 * Callees:
 *     sub_18003BE7C @ 0x18003BE7C (sub_18003BE7C.c)
 */

__int64 __fastcall sub_18003AFD4(__int64 a1, char a2, char a3)
{
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdx

  sub_18003BE7C();
  v6 = *(_QWORD *)(a1 + 448);
  result = 1LL << a2;
  if ( a3 )
  {
    v8 = result | v6;
  }
  else
  {
    result = ~result;
    v8 = result & v6;
  }
  *(_QWORD *)(a1 + 448) = v8;
  return result;
}
