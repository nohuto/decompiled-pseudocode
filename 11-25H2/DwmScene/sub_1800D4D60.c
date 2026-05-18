/*
 * XREFs of sub_1800D4D60 @ 0x1800D4D60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18002655C @ 0x18002655C (sub_18002655C.c)
 */

_QWORD *__fastcall sub_1800D4D60(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::GpuQuery::`vftable';
  sub_18002655C((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
