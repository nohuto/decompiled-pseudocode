/*
 * XREFs of sub_18005157C @ 0x18005157C
 * Callers:
 *     sub_180017BF0 @ 0x180017BF0 (sub_180017BF0.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_1800265E4 @ 0x1800265E4 (sub_1800265E4.c)
 *     sub_1800371F0 @ 0x1800371F0 (sub_1800371F0.c)
 *     sub_180050C60 @ 0x180050C60 (sub_180050C60.c)
 *     sub_180051510 @ 0x180051510 (sub_180051510.c)
 */

__int64 __fastcall sub_18005157C(__int64 a1)
{
  volatile signed __int32 *v2; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::Texture::`vftable';
  sub_180050C60((_QWORD *)(a1 + 112));
  sub_1800371F0((_QWORD *)(a1 + 136));
  sub_180051510((void **)(a1 + 128));
  sub_1800265E4((void **)(a1 + 112));
  v2 = *(volatile signed __int32 **)(a1 + 104);
  if ( v2 )
    sub_180010644(v2);
  return sub_180026748(a1);
}
