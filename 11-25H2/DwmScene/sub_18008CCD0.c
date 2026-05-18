/*
 * XREFs of sub_18008CCD0 @ 0x18008CCD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800551C8 @ 0x1800551C8 (sub_1800551C8.c)
 */

_QWORD *__fastcall sub_18008CCD0(_QWORD *lpMem, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  *lpMem = &Spectre::Engine::ImageProcessingCamera::`vftable';
  sub_1800551C8((__int64)lpMem, a2);
  if ( (v2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
