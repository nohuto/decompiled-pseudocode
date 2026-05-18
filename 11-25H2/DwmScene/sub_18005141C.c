/*
 * XREFs of sub_18005141C @ 0x18005141C
 * Callers:
 *     sub_180017B30 @ 0x180017B30 (sub_180017B30.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180026484 @ 0x180026484 (sub_180026484.c)
 *     sub_180037090 @ 0x180037090 (sub_180037090.c)
 *     sub_180050B00 @ 0x180050B00 (sub_180050B00.c)
 *     sub_1800513B0 @ 0x1800513B0 (sub_1800513B0.c)
 */

__int64 __fastcall sub_18005141C(__int64 a1)
{
  volatile signed __int32 *v2; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::Texture::`vftable';
  sub_180050B00((_QWORD *)(a1 + 112));
  sub_180037090((_QWORD *)(a1 + 136));
  sub_1800513B0((void **)(a1 + 128));
  sub_180026484((void **)(a1 + 112));
  v2 = *(volatile signed __int32 **)(a1 + 104);
  if ( v2 )
    sub_180010544(v2);
  return sub_1800265E8(a1);
}
