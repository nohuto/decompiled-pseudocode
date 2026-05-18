/*
 * XREFs of sub_180055484 @ 0x180055484
 * Callers:
 *     sub_180055BB0 @ 0x180055BB0 (sub_180055BB0.c)
 *     sub_1800B9EF0 @ 0x1800B9EF0 (sub_1800B9EF0.c)
 *     unknown_libname_40 @ 0x1800D92BD (unknown_libname_40.c)
 *     sub_1800E1F11 @ 0x1800E1F11 (sub_1800E1F11.c)
 * Callees:
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180055484(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = a1[165];
  if ( v2 )
    sub_18001060C(v2);
  sub_18000B6A4(
    (__int64)(a1 + 148),
    16LL,
    8LL,
    (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  v3 = a1[141];
  if ( v3 )
    sub_18001060C(v3);
  sub_18000B6A4(
    (__int64)(a1 + 95),
    16LL,
    15LL,
    (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  v4 = a1[93];
  if ( v4 )
    sub_18001060C(v4);
  v5 = a1[91];
  if ( v5 )
    sub_18001060C(v5);
  v6 = a1[89];
  if ( v6 )
    sub_18001060C(v6);
  sub_18000B6A4(
    (__int64)(a1 + 56),
    16LL,
    16LL,
    (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_18000B6A4(
    (__int64)(a1 + 24),
    16LL,
    16LL,
    (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  return sub_18000B6A4(
           (__int64)a1,
           16LL,
           12LL,
           (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
}
