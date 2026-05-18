/*
 * XREFs of sub_180081FE4 @ 0x180081FE4
 * Callers:
 *     sub_18007D890 @ 0x18007D890 (sub_18007D890.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_1800265E4 @ 0x1800265E4 (sub_1800265E4.c)
 *     sub_180075A78 @ 0x180075A78 (sub_180075A78.c)
 */

__int64 __fastcall sub_180081FE4(__int64 a1)
{
  volatile signed __int32 *v2; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::VertexLayout::`vftable';
  v2 = *(volatile signed __int32 **)(a1 + 168);
  if ( v2 )
    sub_180010644(v2);
  sub_1800265E4((void **)(a1 + 144));
  sub_180075A78(a1 + 112);
  return sub_180026748(a1);
}
