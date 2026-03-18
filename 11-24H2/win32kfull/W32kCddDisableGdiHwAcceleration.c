/*
 * XREFs of W32kCddDisableGdiHwAcceleration @ 0x1401DA410
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall W32kCddDisableGdiHwAcceleration(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = 0LL;
  if ( PtiCurrent(a1, a2) )
    v2 = *((_QWORD *)PtiCurrent(v4, v3) + 86);
  return (v2 >> 34) & 1;
}
