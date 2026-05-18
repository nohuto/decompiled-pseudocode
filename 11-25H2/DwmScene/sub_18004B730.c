/*
 * XREFs of sub_18004B730 @ 0x18004B730
 * Callers:
 *     ??_G__ExceptionPtr@@QEAAPEAXI@Z @ 0x18004BAB0 (--_G__ExceptionPtr@@QEAAPEAXI@Z.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180026484 @ 0x180026484 (sub_180026484.c)
 */

__int64 __fastcall sub_18004B730(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::Shader::`vftable';
  sub_180026484((void **)(a1 + 136));
  v2 = *(volatile signed __int32 **)(a1 + 128);
  if ( v2 )
    sub_180010544(v2);
  v3 = *(volatile signed __int32 **)(a1 + 104);
  if ( v3 )
    sub_180010544(v3);
  return sub_1800265E8(a1);
}
