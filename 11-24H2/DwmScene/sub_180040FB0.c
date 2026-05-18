/*
 * XREFs of sub_180040FB0 @ 0x180040FB0
 * Callers:
 *     sub_1800412D0 @ 0x1800412D0 (sub_1800412D0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_1800265E4 @ 0x1800265E4 (sub_1800265E4.c)
 */

__int64 __fastcall sub_180040FB0(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::RenderState::`vftable';
  sub_1800265E4((void **)(a1 + 128));
  v2 = *(_QWORD *)(a1 + 120);
  if ( v2 )
    sub_18001060C(v2);
  v3 = *(volatile signed __int32 **)(a1 + 104);
  if ( v3 )
    sub_180010644(v3);
  return sub_180026748(a1);
}
