/*
 * XREFs of sub_1800BFC30 @ 0x1800BFC30
 * Callers:
 *     sub_1800C0070 @ 0x1800C0070 (sub_1800C0070.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 */

__int64 __fastcall sub_1800BFC30(__int64 *a1)
{
  __int64 *v2; // rbx

  v2 = a1 + 21;
  *a1 = (__int64)&Spectre::Engine::D3D11::TextureD3D11::`vftable';
  sub_18000E854(a1 + 21);
  sub_18000E854(a1 + 23);
  sub_18000E854(a1 + 22);
  sub_18000E854(v2);
  sub_18000E854(a1 + 20);
  return sub_1800513D4(a1);
}
