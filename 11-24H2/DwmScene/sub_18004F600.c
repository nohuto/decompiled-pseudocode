/*
 * XREFs of sub_18004F600 @ 0x18004F600
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18008179C @ 0x18008179C (sub_18008179C.c)
 */

_QWORD *__fastcall sub_18004F600(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  sub_18008179C();
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
