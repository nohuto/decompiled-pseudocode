/*
 * XREFs of sub_180038EFC @ 0x180038EFC
 * Callers:
 *     sub_1800392A0 @ 0x1800392A0 (sub_1800392A0.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180012040 @ 0x180012040 (sub_180012040.c)
 *     sub_18001A9C0 @ 0x18001A9C0 (sub_18001A9C0.c)
 *     sub_18002C478 @ 0x18002C478 (sub_18002C478.c)
 *     sub_18002FABC @ 0x18002FABC (sub_18002FABC.c)
 *     sub_18003AF34 @ 0x18003AF34 (sub_18003AF34.c)
 *     sub_18003BAF0 @ 0x18003BAF0 (sub_18003BAF0.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall sub_180038EFC(__int64 a1)
{
  _QWORD *v2; // rsi
  _QWORD *i; // rdi
  _QWORD *v4; // rsi
  _QWORD *j; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rcx
  volatile signed __int32 *v17; // rcx
  volatile signed __int32 *v18; // rcx
  volatile signed __int32 *v19; // rcx
  volatile signed __int32 *v20; // rcx
  __int64 v21; // rcx
  void **result; // rax
  volatile signed __int32 *v23; // rcx
  __int128 v24; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::SceneNode::`vftable';
  sub_18003BAF0();
  v2 = *(_QWORD **)(a1 + 40);
  for ( i = *(_QWORD **)(a1 + 32); i != v2; i += 2 )
  {
    v24 = 0LL;
    sub_18003AF34(*i, &v24);
  }
  v4 = *(_QWORD **)(a1 + 384);
  for ( j = *(_QWORD **)(a1 + 376); j != v4; j += 2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*j + 112LL))(*j);
  v6 = *(_QWORD *)(a1 + 584);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 584) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *(_QWORD *)(a1 + 576);
  if ( v7 )
    sub_18001050C(v7);
  v8 = *(_QWORD *)(a1 + 560);
  if ( v8 )
    sub_18001050C(v8);
  v9 = *(_QWORD *)(a1 + 544);
  if ( v9 )
    sub_18001050C(v9);
  v10 = *(_QWORD *)(a1 + 528);
  if ( v10 )
    sub_18001050C(v10);
  v11 = *(_QWORD *)(a1 + 512);
  if ( v11 )
    sub_18001050C(v11);
  v12 = *(_QWORD *)(a1 + 496);
  if ( v12 )
    sub_18001050C(v12);
  v13 = *(_QWORD *)(a1 + 480);
  if ( v13 )
    sub_18001050C(v13);
  v14 = *(_QWORD *)(a1 + 464);
  if ( v14 )
    sub_18001050C(v14);
  sub_18002FABC((void **)(a1 + 432));
  sub_180011A5C(a1 + 400);
  v15 = *(_QWORD *)(a1 + 376);
  if ( v15 )
  {
    sub_18002C478(v15, *(_QWORD *)(a1 + 384));
    sub_180010134(*(void **)(a1 + 376), (*(_QWORD *)(a1 + 392) - *(_QWORD *)(a1 + 376)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 376) = 0LL;
    *(_QWORD *)(a1 + 384) = 0LL;
    *(_QWORD *)(a1 + 392) = 0LL;
  }
  sub_18001A9C0(a1 + 184);
  v16 = *(volatile signed __int32 **)(a1 + 136);
  if ( v16 )
    sub_180010544(v16);
  v17 = *(volatile signed __int32 **)(a1 + 120);
  if ( v17 )
    sub_180010544(v17);
  v18 = *(volatile signed __int32 **)(a1 + 96);
  if ( v18 )
    sub_180010544(v18);
  v19 = *(volatile signed __int32 **)(a1 + 80);
  if ( v19 )
    sub_180010544(v19);
  v20 = *(volatile signed __int32 **)(a1 + 64);
  if ( v20 )
    sub_180010544(v20);
  v21 = *(_QWORD *)(a1 + 32);
  if ( v21 )
  {
    sub_180012040(v21, *(_QWORD *)(a1 + 40));
    sub_180010134(*(void **)(a1 + 32), (*(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 32)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  result = &Spectre::Engine::IVisitable::`vftable';
  *(_QWORD *)a1 = &Spectre::Engine::IVisitable::`vftable';
  v23 = *(volatile signed __int32 **)(a1 + 16);
  if ( v23 )
    return (void **)sub_180010544(v23);
  return result;
}
