/*
 * XREFs of sub_1800D24E4 @ 0x1800D24E4
 * Callers:
 *     sub_180087268 @ 0x180087268 (sub_180087268.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_1800877C8 @ 0x1800877C8 (sub_1800877C8.c)
 */

_QWORD *__fastcall sub_1800D24E4(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = (__int64)a2;
  v3 = (_QWORD *)sub_18001B098(8LL);
  if ( v3 )
    *v3 = &Spectre::Utils::Tweening::ExponentialEaseInOutCurve::`vftable';
  v5[0] = 0LL;
  *a2 = v3;
  sub_1800877C8(v5);
  return a2;
}
