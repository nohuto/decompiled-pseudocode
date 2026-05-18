/*
 * XREFs of sub_180055324 @ 0x180055324
 * Callers:
 *     sub_180055A50 @ 0x180055A50 (sub_180055A50.c)
 *     sub_1800B9D90 @ 0x1800B9D90 (sub_1800B9D90.c)
 *     unknown_libname_40 @ 0x1800D915D (unknown_libname_40.c)
 *     sub_1800E1DB1 @ 0x1800E1DB1 (sub_1800E1DB1.c)
 * Callees:
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180055324(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = a1[165];
  if ( v2 )
    sub_18001050C(v2);
  sub_18000B2D4(
    (__int64)(a1 + 148),
    16LL,
    8LL,
    (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  v3 = a1[141];
  if ( v3 )
    sub_18001050C(v3);
  sub_18000B2D4(
    (__int64)(a1 + 95),
    16LL,
    15LL,
    (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  v4 = a1[93];
  if ( v4 )
    sub_18001050C(v4);
  v5 = a1[91];
  if ( v5 )
    sub_18001050C(v5);
  v6 = a1[89];
  if ( v6 )
    sub_18001050C(v6);
  sub_18000B2D4(
    (__int64)(a1 + 56),
    16LL,
    16LL,
    (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_18000B2D4(
    (__int64)(a1 + 24),
    16LL,
    16LL,
    (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  return sub_18000B2D4(
           (__int64)a1,
           16LL,
           12LL,
           (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
}
