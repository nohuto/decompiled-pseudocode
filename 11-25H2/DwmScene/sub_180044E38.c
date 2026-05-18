/*
 * XREFs of sub_180044E38 @ 0x180044E38
 * Callers:
 *     sub_180017920 @ 0x180017920 (sub_180017920.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180026484 @ 0x180026484 (sub_180026484.c)
 *     sub_1800265E8 @ 0x1800265E8 (sub_1800265E8.c)
 */

__int64 __fastcall sub_180044E38(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 result; // rax
  volatile signed __int32 *v12; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::Mesh::`vftable';
  v2 = *(_QWORD *)(a1 + 280);
  if ( v2 )
    sub_18001050C(v2);
  v3 = *(_QWORD *)(a1 + 264);
  if ( v3 )
    sub_18001050C(v3);
  v4 = *(_QWORD *)(a1 + 248);
  if ( v4 )
    sub_18001050C(v4);
  v5 = *(_QWORD *)(a1 + 232);
  if ( v5 )
    sub_18001050C(v5);
  v6 = *(_QWORD *)(a1 + 216);
  if ( v6 )
    sub_18001050C(v6);
  v7 = *(_QWORD *)(a1 + 200);
  if ( v7 )
    sub_18001050C(v7);
  v8 = *(_QWORD *)(a1 + 184);
  if ( v8 )
    sub_18001050C(v8);
  v9 = *(_QWORD *)(a1 + 168);
  if ( v9 )
    sub_18001050C(v9);
  v10 = *(_QWORD *)(a1 + 152);
  if ( v10 )
    sub_18001050C(v10);
  sub_180026484((void **)(a1 + 128));
  result = sub_1800265E8(a1);
  v12 = *(volatile signed __int32 **)(a1 + 104);
  if ( v12 )
    return sub_180010544(v12);
  return result;
}
