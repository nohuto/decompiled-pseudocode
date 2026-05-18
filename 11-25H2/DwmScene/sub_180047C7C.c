/*
 * XREFs of sub_180047C7C @ 0x180047C7C
 * Callers:
 *     sub_180014060 @ 0x180014060 (sub_180014060.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_1800475E0 @ 0x1800475E0 (sub_1800475E0.c)
 */

void **__fastcall sub_180047C7C(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::MeshInstance::`vftable';
  v2 = *(volatile signed __int32 **)(a1 + 160);
  if ( v2 )
    sub_180010544(v2);
  v3 = *(volatile signed __int32 **)(a1 + 144);
  if ( v3 )
    sub_180010544(v3);
  v4 = *(_QWORD *)(a1 + 104);
  if ( v4 )
  {
    sub_1800475E0(v4, *(_QWORD *)(a1 + 112));
    sub_180010134(*(void **)(a1 + 104), 8 * ((__int64)(*(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 104)) >> 3));
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 96);
  if ( v5 )
    sub_18001050C(v5);
  return sub_1800403A4((_QWORD *)a1);
}
