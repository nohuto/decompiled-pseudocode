/*
 * XREFs of sub_18007F438 @ 0x18007F438
 * Callers:
 *     sub_180045120 @ 0x180045120 (sub_180045120.c)
 *     sub_18007FEA0 @ 0x18007FEA0 (sub_18007FEA0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_1800265E4 @ 0x1800265E4 (sub_1800265E4.c)
 *     sub_1800371F0 @ 0x1800371F0 (sub_1800371F0.c)
 */

__int64 __fastcall sub_18007F438(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::ArrayBuffer::`vftable';
  v2 = *(_QWORD *)(a1 + 144);
  if ( v2 )
    sub_18001060C(v2);
  sub_1800265E4((void **)(a1 + 120));
  sub_1800371F0((_QWORD *)(a1 + 112));
  v3 = *(volatile signed __int32 **)(a1 + 104);
  if ( v3 )
    sub_180010644(v3);
  return sub_180026748(a1);
}
