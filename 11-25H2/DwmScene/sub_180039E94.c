/*
 * XREFs of sub_180039E94 @ 0x180039E94
 * Callers:
 *     sub_18003A280 @ 0x18003A280 (sub_18003A280.c)
 * Callees:
 *     sub_18003BB7C @ 0x18003BB7C (sub_18003BB7C.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 */

_OWORD *__fastcall sub_180039E94(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1

  sub_18003BCDC(a1);
  if ( *(_QWORD *)(a1 + 352) != *(_QWORD *)(a1 + 208) )
    sub_18003BB7C(a1);
  result = a2;
  v5 = *(_OWORD *)(a1 + 240);
  *a2 = *(_OWORD *)(a1 + 224);
  v6 = *(_OWORD *)(a1 + 256);
  a2[1] = v5;
  v7 = *(_OWORD *)(a1 + 272);
  a2[2] = v6;
  a2[3] = v7;
  return result;
}
