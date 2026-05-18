/*
 * XREFs of sub_1800504FC @ 0x1800504FC
 * Callers:
 *     sub_180017A70 @ 0x180017A70 (sub_180017A70.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_1800265E4 @ 0x1800265E4 (sub_1800265E4.c)
 *     sub_180050C60 @ 0x180050C60 (sub_180050C60.c)
 */

__int64 __fastcall sub_1800504FC(_QWORD *a1)
{
  void **v2; // rbx
  __int64 v3; // rcx
  volatile signed __int32 *v4; // rcx

  v2 = (void **)(a1 + 16);
  *a1 = &Spectre::Engine::Sampler::`vftable';
  sub_180050C60(a1 + 16);
  sub_1800265E4(v2);
  v3 = a1[15];
  if ( v3 )
    sub_18001060C(v3);
  v4 = (volatile signed __int32 *)a1[13];
  if ( v4 )
    sub_180010644(v4);
  return sub_180026748((__int64)a1);
}
