/*
 * XREFs of sub_180040F24 @ 0x180040F24
 * Callers:
 *     sub_180041290 @ 0x180041290 (sub_180041290.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180026614 @ 0x180026614 (sub_180026614.c)
 *     sub_180041974 @ 0x180041974 (sub_180041974.c)
 */

__int64 __fastcall sub_180040F24(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::Material::`vftable';
  sub_180041974();
  v2 = *(volatile signed __int32 **)(a1 + 224);
  if ( v2 )
    sub_180010644(v2);
  sub_180026614((void **)(a1 + 200));
  v3 = *(_QWORD *)(a1 + 176);
  if ( v3 )
    sub_18001060C(v3);
  v4 = *(_QWORD *)(a1 + 144);
  if ( v4 )
    sub_18001060C(v4);
  v5 = *(_QWORD *)(a1 + 128);
  if ( v5 )
    sub_18001060C(v5);
  v6 = *(volatile signed __int32 **)(a1 + 104);
  if ( v6 )
    sub_180010644(v6);
  return sub_180026748(a1);
}
