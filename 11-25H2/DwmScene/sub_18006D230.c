/*
 * XREFs of sub_18006D230 @ 0x18006D230
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 */

_QWORD *__fastcall sub_18006D230(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::IGpuProfilingGrapher::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B77C(a1);
  return a1;
}
