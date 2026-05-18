/*
 * XREFs of sub_18007B2BC @ 0x18007B2BC
 * Callers:
 *     sub_18007B4C0 @ 0x18007B4C0 (sub_18007B4C0.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_1800265E4 @ 0x1800265E4 (sub_1800265E4.c)
 */

__int64 __fastcall sub_18007B2BC(__int64 a1)
{
  volatile signed __int32 *v2; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::ConstantBuffer::`vftable';
  sub_1800265E4((void **)(a1 + 112));
  v2 = *(volatile signed __int32 **)(a1 + 104);
  if ( v2 )
    sub_180010644(v2);
  return sub_180026748(a1);
}
