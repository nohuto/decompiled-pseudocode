/*
 * XREFs of sub_18005EBE0 @ 0x18005EBE0
 * Callers:
 *     sub_18005F510 @ 0x18005F510 (sub_18005F510.c)
 * Callees:
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18003D988 @ 0x18003D988 (sub_18003D988.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall sub_18005EBE0(__int64 a1)
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
  __int64 v11; // rcx
  void **result; // rax

  v2 = *(_QWORD *)(a1 + 320);
  if ( v2 )
    sub_18001060C(v2);
  v3 = *(_QWORD *)(a1 + 304);
  if ( v3 )
    sub_18001060C(v3);
  v4 = *(_QWORD *)(a1 + 288);
  if ( v4 )
    sub_18001060C(v4);
  v5 = *(_QWORD *)(a1 + 272);
  if ( v5 )
    sub_18001060C(v5);
  v6 = *(_QWORD *)(a1 + 256);
  if ( v6 )
    sub_18001060C(v6);
  v7 = *(_QWORD *)(a1 + 240);
  if ( v7 )
    sub_18001060C(v7);
  v8 = *(_QWORD *)(a1 + 224);
  if ( v8 )
    sub_18001060C(v8);
  v9 = *(_QWORD *)(a1 + 208);
  if ( v9 )
    sub_18001060C(v9);
  v10 = *(_QWORD *)(a1 + 192);
  if ( v10 )
    sub_18001060C(v10);
  sub_18000B6A4(a1 + 136, 16LL, 3LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  v11 = *(_QWORD *)(a1 + 128);
  if ( v11 )
    sub_18001060C(v11);
  sub_18003D988((void **)(a1 + 104));
  sub_18000B6A4(a1 + 56, 16LL, 3LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_18000B6A4(a1 + 8, 16LL, 3LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  result = &Spectre::Engine::SceneCustomData::`vftable';
  *(_QWORD *)a1 = &Spectre::Engine::SceneCustomData::`vftable';
  return result;
}
