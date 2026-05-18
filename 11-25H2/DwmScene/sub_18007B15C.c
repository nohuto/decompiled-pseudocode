/*
 * XREFs of sub_18007B15C @ 0x18007B15C
 * Callers:
 *     sub_18007B360 @ 0x18007B360 (sub_18007B360.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180026484 @ 0x180026484 (sub_180026484.c)
 */

__int64 __fastcall sub_18007B15C(__int64 a1)
{
  volatile signed __int32 *v2; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::ConstantBuffer::`vftable';
  sub_180026484((void **)(a1 + 112));
  v2 = *(volatile signed __int32 **)(a1 + 104);
  if ( v2 )
    sub_180010544(v2);
  return sub_1800265E8(a1);
}
