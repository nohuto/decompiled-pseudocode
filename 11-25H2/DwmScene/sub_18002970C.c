/*
 * XREFs of sub_18002970C @ 0x18002970C
 * Callers:
 *     sub_180029764 @ 0x180029764 (sub_180029764.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_1800283E0 @ 0x1800283E0 (sub_1800283E0.c)
 */

_QWORD *__fastcall sub_18002970C(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rcx

  sub_1800283E0((__int64)(a1 + 1), *(_DWORD *)(*a2 + 48LL));
  a1[8] = 0LL;
  a1[9] = 0LL;
  *a1 = &Spectre::Engine::IRenderOutput::`vftable';
  v4 = a2[1];
  if ( v4 )
    sub_18001050C(v4);
  return a1;
}
