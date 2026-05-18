/*
 * XREFs of sub_180039CF0 @ 0x180039CF0
 * Callers:
 *     sub_180039D9C @ 0x180039D9C (sub_180039D9C.c)
 *     sub_18006165C @ 0x18006165C (sub_18006165C.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 */

_QWORD *__fastcall sub_180039CF0(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdx

  sub_18003BE3C(a1);
  v4 = *(_QWORD **)(a1 + 32);
  if ( v4 == *(_QWORD **)(a1 + 40) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    unknown_libname_81(a2, v4);
  }
  return a2;
}
