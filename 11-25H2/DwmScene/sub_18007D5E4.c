/*
 * XREFs of sub_18007D5E4 @ 0x18007D5E4
 * Callers:
 *     sub_18005C2E0 @ 0x18005C2E0 (sub_18005C2E0.c)
 * Callees:
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180026484 @ 0x180026484 (sub_180026484.c)
 *     sub_180075918 @ 0x180075918 (sub_180075918.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007D5E4(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  void *v8; // rcx
  volatile signed __int32 *v9; // rcx

  sub_18000B2D4(a1 + 496, 16LL, 10LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_180026484((void **)(a1 + 480));
  sub_18000B2D4(a1 + 384, 16LL, 6LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_18000B2D4(a1 + 192, 32LL, 6LL, (void (__fastcall *)(__int64))sub_180010F20);
  v2 = *(_QWORD *)(a1 + 184);
  if ( v2 )
    sub_18001050C(v2);
  result = sub_180075918(a1 + 144);
  v4 = *(_QWORD *)(a1 + 104);
  if ( v4 )
    result = sub_18001050C(v4);
  v5 = *(_QWORD *)(a1 + 88);
  if ( v5 )
    result = sub_18001050C(v5);
  v6 = *(_QWORD *)(a1 + 72);
  if ( v6 )
    result = sub_18001050C(v6);
  v7 = *(_QWORD *)(a1 + 56);
  if ( v7 )
    result = sub_18001050C(v7);
  v8 = *(void **)(a1 + 24);
  if ( v8 )
  {
    result = sub_180010134(v8, (*(_QWORD *)(a1 + 40) - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v9 = *(volatile signed __int32 **)(a1 + 8);
  if ( v9 )
    return sub_180010544(v9);
  return result;
}
