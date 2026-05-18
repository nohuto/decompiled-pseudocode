/*
 * XREFs of sub_18007C95C @ 0x18007C95C
 * Callers:
 *     sub_180013600 @ 0x180013600 (sub_180013600.c)
 *     sub_18004D338 @ 0x18004D338 (sub_18004D338.c)
 *     sub_1800626E4 @ 0x1800626E4 (sub_1800626E4.c)
 *     sub_18006406C @ 0x18006406C (sub_18006406C.c)
 *     sub_180064F0C @ 0x180064F0C (sub_180064F0C.c)
 *     sub_180065E60 @ 0x180065E60 (sub_180065E60.c)
 *     sub_180075340 @ 0x180075340 (sub_180075340.c)
 *     sub_18008FF00 @ 0x18008FF00 (sub_18008FF00.c)
 *     sub_180090050 @ 0x180090050 (sub_180090050.c)
 * Callees:
 *     sub_18007A010 @ 0x18007A010 (sub_18007A010.c)
 *     sub_18007C124 @ 0x18007C124 (sub_18007C124.c)
 */

_QWORD *__fastcall sub_18007C95C(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int16 v5; // ax
  _QWORD *result; // rax
  __int64 v7; // rdx

  v5 = sub_18007A010(*(_QWORD *)(a1 + 16), a2);
  result = (_QWORD *)sub_18007C124(a1, v5, 5);
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
