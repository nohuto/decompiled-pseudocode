/*
 * XREFs of sub_18004B890 @ 0x18004B890
 * Callers:
 *     ??_G__ExceptionPtr@@QEAAPEAXI@Z @ 0x18004BC10 (--_G__ExceptionPtr@@QEAAPEAXI@Z.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_1800265E4 @ 0x1800265E4 (sub_1800265E4.c)
 */

__int64 __fastcall sub_18004B890(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::Shader::`vftable';
  sub_1800265E4((void **)(a1 + 136));
  v2 = *(volatile signed __int32 **)(a1 + 128);
  if ( v2 )
    sub_180010644(v2);
  v3 = *(volatile signed __int32 **)(a1 + 104);
  if ( v3 )
    sub_180010644(v3);
  return sub_180026748(a1);
}
