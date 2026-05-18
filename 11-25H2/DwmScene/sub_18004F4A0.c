/*
 * XREFs of sub_18004F4A0 @ 0x18004F4A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18008163C @ 0x18008163C (sub_18008163C.c)
 */

_QWORD *__fastcall sub_18004F4A0(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  sub_18008163C();
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
