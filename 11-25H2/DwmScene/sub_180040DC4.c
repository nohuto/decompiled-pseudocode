/*
 * XREFs of sub_180040DC4 @ 0x180040DC4
 * Callers:
 *     sub_180041130 @ 0x180041130 (sub_180041130.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_1800264B4 @ 0x1800264B4 (sub_1800264B4.c)
 *     sub_180041814 @ 0x180041814 (sub_180041814.c)
 */

__int64 __fastcall sub_180040DC4(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::Material::`vftable';
  sub_180041814();
  v2 = *(volatile signed __int32 **)(a1 + 224);
  if ( v2 )
    sub_180010544(v2);
  sub_1800264B4((void **)(a1 + 200));
  v3 = *(_QWORD *)(a1 + 176);
  if ( v3 )
    sub_18001050C(v3);
  v4 = *(_QWORD *)(a1 + 144);
  if ( v4 )
    sub_18001050C(v4);
  v5 = *(_QWORD *)(a1 + 128);
  if ( v5 )
    sub_18001050C(v5);
  v6 = *(volatile signed __int32 **)(a1 + 104);
  if ( v6 )
    sub_180010544(v6);
  return sub_1800265E8(a1);
}
