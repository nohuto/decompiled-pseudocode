/*
 * XREFs of sub_18006D1E0 @ 0x18006D1E0
 * Callers:
 *     sub_180028CAC @ 0x180028CAC (sub_180028CAC.c)
 * Callees:
 *     sub_180028E14 @ 0x180028E14 (sub_180028E14.c)
 *     sub_18006D0AC @ 0x18006D0AC (sub_18006D0AC.c)
 *     sub_18006D154 @ 0x18006D154 (sub_18006D154.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18006D1E0(_QWORD *a1)
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
        v2[1] = sub_18006D154(v2[1], 240 - v3);
      else
        sub_18006D0AC(v2, 240LL, 0x86BCA1AF286BCA1BuLL);
    }
  }
  else
  {
    sub_180028E14(36480LL, v2[1]);
    v2[1] = 36480LL;
  }
  return a1;
}
