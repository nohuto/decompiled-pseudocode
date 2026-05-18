/*
 * XREFs of sub_180040E50 @ 0x180040E50
 * Callers:
 *     sub_180041170 @ 0x180041170 (sub_180041170.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180026484 @ 0x180026484 (sub_180026484.c)
 */

__int64 __fastcall sub_180040E50(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::RenderState::`vftable';
  sub_180026484((void **)(a1 + 128));
  v2 = *(_QWORD *)(a1 + 120);
  if ( v2 )
    sub_18001050C(v2);
  v3 = *(volatile signed __int32 **)(a1 + 104);
  if ( v3 )
    sub_180010544(v3);
  return sub_1800265E8(a1);
}
