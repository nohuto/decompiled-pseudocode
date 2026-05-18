/*
 * XREFs of sub_1800D4EC0 @ 0x1800D4EC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800266BC @ 0x1800266BC (sub_1800266BC.c)
 */

_QWORD *__fastcall sub_1800D4EC0(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::GpuQuery::`vftable';
  sub_1800266BC((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
