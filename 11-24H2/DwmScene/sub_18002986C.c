/*
 * XREFs of sub_18002986C @ 0x18002986C
 * Callers:
 *     sub_1800298C4 @ 0x1800298C4 (sub_1800298C4.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180028540 @ 0x180028540 (sub_180028540.c)
 */

_QWORD *__fastcall sub_18002986C(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rcx

  sub_180028540((__int64)(a1 + 1), *(_DWORD *)(*a2 + 48LL));
  a1[8] = 0LL;
  a1[9] = 0LL;
  *a1 = &Spectre::Engine::IRenderOutput::`vftable';
  v4 = a2[1];
  if ( v4 )
    sub_18001060C(v4);
  return a1;
}
