/*
 * XREFs of sub_1800BCB00 @ 0x1800BCB00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800BC9D0 @ 0x1800BC9D0 (sub_1800BC9D0.c)
 */

_QWORD *__fastcall sub_1800BCB00(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::D3D11::RenderOutputD3D11Window::`vftable';
  sub_1800BC9D0((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
