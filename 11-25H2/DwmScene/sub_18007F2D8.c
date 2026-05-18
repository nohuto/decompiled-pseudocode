/*
 * XREFs of sub_18007F2D8 @ 0x18007F2D8
 * Callers:
 *     sub_180044FC0 @ 0x180044FC0 (sub_180044FC0.c)
 *     sub_18007FD40 @ 0x18007FD40 (sub_18007FD40.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180026484 @ 0x180026484 (sub_180026484.c)
 *     sub_180037090 @ 0x180037090 (sub_180037090.c)
 */

__int64 __fastcall sub_18007F2D8(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::ArrayBuffer::`vftable';
  v2 = *(_QWORD *)(a1 + 144);
  if ( v2 )
    sub_18001050C(v2);
  sub_180026484((void **)(a1 + 120));
  sub_180037090((_QWORD *)(a1 + 112));
  v3 = *(volatile signed __int32 **)(a1 + 104);
  if ( v3 )
    sub_180010544(v3);
  return sub_1800265E8(a1);
}
