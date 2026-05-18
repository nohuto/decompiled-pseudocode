/*
 * XREFs of sub_18003905C @ 0x18003905C
 * Callers:
 *     sub_180039400 @ 0x180039400 (sub_180039400.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180012140 @ 0x180012140 (sub_180012140.c)
 *     sub_18001AA80 @ 0x18001AA80 (sub_18001AA80.c)
 *     sub_18002C5D8 @ 0x18002C5D8 (sub_18002C5D8.c)
 *     sub_18002FC1C @ 0x18002FC1C (sub_18002FC1C.c)
 *     sub_18003B094 @ 0x18003B094 (sub_18003B094.c)
 *     sub_18003BC50 @ 0x18003BC50 (sub_18003BC50.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall sub_18003905C(__int64 a1)
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
  sub_18003BC50();
  v2 = *(_QWORD **)(a1 + 40);
  for ( i = *(_QWORD **)(a1 + 32); i != v2; i += 2 )
  {
    v24 = 0LL;
    sub_18003B094(*i, &v24);
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
    sub_18001060C(v7);
  v8 = *(_QWORD *)(a1 + 560);
  if ( v8 )
    sub_18001060C(v8);
  v9 = *(_QWORD *)(a1 + 544);
  if ( v9 )
    sub_18001060C(v9);
  v10 = *(_QWORD *)(a1 + 528);
  if ( v10 )
    sub_18001060C(v10);
  v11 = *(_QWORD *)(a1 + 512);
  if ( v11 )
    sub_18001060C(v11);
  v12 = *(_QWORD *)(a1 + 496);
  if ( v12 )
    sub_18001060C(v12);
  v13 = *(_QWORD *)(a1 + 480);
  if ( v13 )
    sub_18001060C(v13);
  v14 = *(_QWORD *)(a1 + 464);
  if ( v14 )
    sub_18001060C(v14);
  sub_18002FC1C((void **)(a1 + 432));
  sub_180011B5C(a1 + 400);
  v15 = *(_QWORD *)(a1 + 376);
  if ( v15 )
  {
    sub_18002C5D8(v15, *(_QWORD *)(a1 + 384));
    sub_180010234(*(void **)(a1 + 376), (*(_QWORD *)(a1 + 392) - *(_QWORD *)(a1 + 376)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 376) = 0LL;
    *(_QWORD *)(a1 + 384) = 0LL;
    *(_QWORD *)(a1 + 392) = 0LL;
  }
  sub_18001AA80(a1 + 184);
  v16 = *(volatile signed __int32 **)(a1 + 136);
  if ( v16 )
    sub_180010644(v16);
  v17 = *(volatile signed __int32 **)(a1 + 120);
  if ( v17 )
    sub_180010644(v17);
  v18 = *(volatile signed __int32 **)(a1 + 96);
  if ( v18 )
    sub_180010644(v18);
  v19 = *(volatile signed __int32 **)(a1 + 80);
  if ( v19 )
    sub_180010644(v19);
  v20 = *(volatile signed __int32 **)(a1 + 64);
  if ( v20 )
    sub_180010644(v20);
  v21 = *(_QWORD *)(a1 + 32);
  if ( v21 )
  {
    sub_180012140(v21, *(_QWORD *)(a1 + 40));
    sub_180010234(*(void **)(a1 + 32), (*(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 32)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  result = &Spectre::Engine::IVisitable::`vftable';
  *(_QWORD *)a1 = &Spectre::Engine::IVisitable::`vftable';
  v23 = *(volatile signed __int32 **)(a1 + 16);
  if ( v23 )
    return (void **)sub_180010644(v23);
  return result;
}
