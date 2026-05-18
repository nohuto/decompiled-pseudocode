/*
 * XREFs of sub_18005AEE4 @ 0x18005AEE4
 * Callers:
 *     sub_18004D600 @ 0x18004D600 (sub_18004D600.c)
 * Callees:
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_18001AA80 @ 0x18001AA80 (sub_18001AA80.c)
 *     sub_18001C338 @ 0x18001C338 (sub_18001C338.c)
 *     sub_18004A654 @ 0x18004A654 (sub_18004A654.c)
 *     sub_18005A490 @ 0x18005A490 (sub_18005A490.c)
 *     sub_18005AD3C @ 0x18005AD3C (sub_18005AD3C.c)
 *     sub_1800D2724 @ 0x1800D2724 (sub_1800D2724.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18005AEE4(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  char result; // al
  volatile signed __int32 *v5; // rcx

  sub_18001AA80(a1 + 528);
  sub_180011B5C(a1 + 496);
  sub_18005A490((void **)(a1 + 480), a1 + 480);
  sub_1800D2724(a1 + 472);
  v2 = *(_QWORD *)(a1 + 464);
  if ( v2 )
    sub_18001060C(v2);
  v3 = *(_QWORD *)(a1 + 448);
  if ( v3 )
    sub_18001060C(v3);
  sub_18005AD3C((void **)(a1 + 416));
  sub_18000B6A4(a1 + 256, 16LL, 10LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_18000B6A4(a1 + 96, 16LL, 10LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_18001C338((void **)(a1 + 80));
  sub_18004A654((void **)(a1 + 48), a1 + 48);
  result = sub_180011B5C(a1 + 16);
  v5 = *(volatile signed __int32 **)(a1 + 8);
  if ( v5 )
    return sub_180010644(v5);
  return result;
}
