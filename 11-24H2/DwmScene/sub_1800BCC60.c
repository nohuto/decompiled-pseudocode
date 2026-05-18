/*
 * XREFs of sub_1800BCC60 @ 0x1800BCC60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800BCB30 @ 0x1800BCB30 (sub_1800BCB30.c)
 */

_QWORD *__fastcall sub_1800BCC60(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::D3D11::RenderOutputD3D11Window::`vftable';
  sub_1800BCB30((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
