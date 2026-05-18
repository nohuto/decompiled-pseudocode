/*
 * XREFs of sub_18006D080 @ 0x18006D080
 * Callers:
 *     sub_180028B4C @ 0x180028B4C (sub_180028B4C.c)
 * Callees:
 *     sub_180028CB4 @ 0x180028CB4 (sub_180028CB4.c)
 *     sub_18006CF4C @ 0x18006CF4C (sub_18006CF4C.c)
 *     sub_18006CFF4 @ 0x18006CFF4 (sub_18006CFF4.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18006D080(_QWORD *a1)
{
  __int64 *v2; // rbx
  unsigned __int64 v3; // rcx

  *a1 = &Spectre::Engine::GpuProfilingGrapher::`vftable';
  v2 = a1 + 1;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  v3 = 0x86BCA1AF286BCA1BuLL * ((__int64)a1[2] >> 3);
  if ( v3 <= 0xF0 )
  {
    if ( v3 < 0xF0 )
    {
      if ( 0x86BCA1AF286BCA1BuLL * (v2[2] >> 3) >= 0xF0 )
        v2[1] = sub_18006CFF4(v2[1], 240 - v3);
      else
        sub_18006CF4C(v2, 240LL, 0x86BCA1AF286BCA1BuLL);
    }
  }
  else
  {
    sub_180028CB4(36480LL, v2[1]);
    v2[1] = 36480LL;
  }
  return a1;
}
