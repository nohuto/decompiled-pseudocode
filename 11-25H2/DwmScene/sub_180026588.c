/*
 * XREFs of sub_180026588 @ 0x180026588
 * Callers:
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180026484 @ 0x180026484 (sub_180026484.c)
 */

__int64 __fastcall sub_180026588(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  volatile signed __int32 *v4; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::FrameBuffer::`vftable';
  v2 = *(_QWORD *)(a1 + 160);
  if ( v2 )
    sub_18001050C(v2);
  v3 = *(_QWORD *)(a1 + 144);
  if ( v3 )
    sub_18001050C(v3);
  sub_180026484((void **)(a1 + 120));
  v4 = *(volatile signed __int32 **)(a1 + 104);
  if ( v4 )
    sub_180010544(v4);
  return sub_1800265E8(a1);
}
