/*
 * XREFs of sub_18007D744 @ 0x18007D744
 * Callers:
 *     sub_18005C440 @ 0x18005C440 (sub_18005C440.c)
 * Callees:
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_1800265E4 @ 0x1800265E4 (sub_1800265E4.c)
 *     sub_180075A78 @ 0x180075A78 (sub_180075A78.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007D744(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  void *v8; // rcx
  volatile signed __int32 *v9; // rcx

  sub_18000B6A4(a1 + 496, 16LL, 10LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_1800265E4((void **)(a1 + 480));
  sub_18000B6A4(a1 + 384, 16LL, 6LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_18000B6A4(a1 + 192, 32LL, 6LL, (void (__fastcall *)(__int64))sub_180011020);
  v2 = *(_QWORD *)(a1 + 184);
  if ( v2 )
    sub_18001060C(v2);
  result = sub_180075A78(a1 + 144);
  v4 = *(_QWORD *)(a1 + 104);
  if ( v4 )
    result = sub_18001060C(v4);
  v5 = *(_QWORD *)(a1 + 88);
  if ( v5 )
    result = sub_18001060C(v5);
  v6 = *(_QWORD *)(a1 + 72);
  if ( v6 )
    result = sub_18001060C(v6);
  v7 = *(_QWORD *)(a1 + 56);
  if ( v7 )
    result = sub_18001060C(v7);
  v8 = *(void **)(a1 + 24);
  if ( v8 )
  {
    result = sub_180010234(v8, (*(_QWORD *)(a1 + 40) - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v9 = *(volatile signed __int32 **)(a1 + 8);
  if ( v9 )
    return sub_180010644(v9);
  return result;
}
