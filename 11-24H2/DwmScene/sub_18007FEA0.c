/*
 * XREFs of sub_18007FEA0 @ 0x18007FEA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18007F438 @ 0x18007F438 (sub_18007F438.c)
 */

_QWORD *__fastcall sub_18007FEA0(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::VertexBuffer::`vftable';
  sub_18007F438((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
