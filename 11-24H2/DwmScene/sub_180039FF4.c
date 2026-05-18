/*
 * XREFs of sub_180039FF4 @ 0x180039FF4
 * Callers:
 *     sub_18003A3E0 @ 0x18003A3E0 (sub_18003A3E0.c)
 * Callees:
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 */

_OWORD *__fastcall sub_180039FF4(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1

  sub_18003BE3C(a1);
  if ( *(_QWORD *)(a1 + 352) != *(_QWORD *)(a1 + 208) )
    sub_18003BCDC(a1);
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
