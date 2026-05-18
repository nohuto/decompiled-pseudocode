/*
 * XREFs of sub_180081E84 @ 0x180081E84
 * Callers:
 *     sub_18007D730 @ 0x18007D730 (sub_18007D730.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180026484 @ 0x180026484 (sub_180026484.c)
 *     sub_180075918 @ 0x180075918 (sub_180075918.c)
 */

__int64 __fastcall sub_180081E84(__int64 a1)
{
  volatile signed __int32 *v2; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::VertexLayout::`vftable';
  v2 = *(volatile signed __int32 **)(a1 + 168);
  if ( v2 )
    sub_180010544(v2);
  sub_180026484((void **)(a1 + 144));
  sub_180075918(a1 + 112);
  return sub_1800265E8(a1);
}
