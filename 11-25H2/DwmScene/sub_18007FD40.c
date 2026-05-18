/*
 * XREFs of sub_18007FD40 @ 0x18007FD40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18007F2D8 @ 0x18007F2D8 (sub_18007F2D8.c)
 */

_QWORD *__fastcall sub_18007FD40(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::VertexBuffer::`vftable';
  sub_18007F2D8((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
