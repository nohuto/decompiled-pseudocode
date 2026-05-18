/*
 * XREFs of sub_1800D2644 @ 0x1800D2644
 * Callers:
 *     sub_1800873C8 @ 0x1800873C8 (sub_1800873C8.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_180087928 @ 0x180087928 (sub_180087928.c)
 */

_QWORD *__fastcall sub_1800D2644(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = (__int64)a2;
  v3 = (_QWORD *)sub_18001B1F8(8LL);
  if ( v3 )
    *v3 = &Spectre::Utils::Tweening::ExponentialEaseInOutCurve::`vftable';
  v5[0] = 0LL;
  *a2 = v3;
  sub_180087928(v5);
  return a2;
}
