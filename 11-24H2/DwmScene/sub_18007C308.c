/*
 * XREFs of sub_18007C308 @ 0x18007C308
 * Callers:
 *     sub_1800134D0 @ 0x1800134D0 (sub_1800134D0.c)
 *     sub_180013510 @ 0x180013510 (sub_180013510.c)
 *     sub_1800135B0 @ 0x1800135B0 (sub_1800135B0.c)
 *     sub_1800626E4 @ 0x1800626E4 (sub_1800626E4.c)
 *     sub_180064D90 @ 0x180064D90 (sub_180064D90.c)
 *     sub_180065E60 @ 0x180065E60 (sub_180065E60.c)
 *     sub_180090050 @ 0x180090050 (sub_180090050.c)
 * Callees:
 *     sub_18007A010 @ 0x18007A010 (sub_18007A010.c)
 *     sub_18007C124 @ 0x18007C124 (sub_18007C124.c)
 */

_QWORD *__fastcall sub_18007C308(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int16 v5; // ax
  _QWORD *result; // rax
  __int64 v7; // rdx

  v5 = sub_18007A010(*(_QWORD *)(a1 + 16), a2);
  result = (_QWORD *)sub_18007C124(a1, v5, 6);
  v7 = *result - *a3;
  if ( *result == *a3 )
    v7 = result[1] - a3[1];
  if ( v7 )
  {
    *(_OWORD *)result = *(_OWORD *)a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
