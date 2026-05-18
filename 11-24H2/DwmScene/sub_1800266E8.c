/*
 * XREFs of sub_1800266E8 @ 0x1800266E8
 * Callers:
 *     sub_1800267B0 @ 0x1800267B0 (sub_1800267B0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_1800265E4 @ 0x1800265E4 (sub_1800265E4.c)
 */

__int64 __fastcall sub_1800266E8(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  volatile signed __int32 *v4; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::FrameBuffer::`vftable';
  v2 = *(_QWORD *)(a1 + 160);
  if ( v2 )
    sub_18001060C(v2);
  v3 = *(_QWORD *)(a1 + 144);
  if ( v3 )
    sub_18001060C(v3);
  sub_1800265E4((void **)(a1 + 120));
  v4 = *(volatile signed __int32 **)(a1 + 104);
  if ( v4 )
    sub_180010644(v4);
  return sub_180026748(a1);
}
