/*
 * XREFs of sub_18005039C @ 0x18005039C
 * Callers:
 *     sub_1800179B0 @ 0x1800179B0 (sub_1800179B0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180026484 @ 0x180026484 (sub_180026484.c)
 *     sub_180050B00 @ 0x180050B00 (sub_180050B00.c)
 */

__int64 __fastcall sub_18005039C(_QWORD *a1)
{
  void **v2; // rbx
  __int64 v3; // rcx
  volatile signed __int32 *v4; // rcx

  v2 = (void **)(a1 + 16);
  *a1 = &Spectre::Engine::Sampler::`vftable';
  sub_180050B00(a1 + 16);
  sub_180026484(v2);
  v3 = a1[15];
  if ( v3 )
    sub_18001050C(v3);
  v4 = (volatile signed __int32 *)a1[13];
  if ( v4 )
    sub_180010544(v4);
  return sub_1800265E8((__int64)a1);
}
