/*
 * XREFs of sub_180093D1C @ 0x180093D1C
 * Callers:
 *     sub_180093E30 @ 0x180093E30 (sub_180093E30.c)
 *     sub_1800945C0 @ 0x1800945C0 (sub_1800945C0.c)
 *     sub_1800DB818 @ 0x1800DB818 (sub_1800DB818.c)
 * Callees:
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180093D1C(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *a1 = &Spectre::Engine::RenderTargetState::`vftable';
  v2 = a1[54];
  if ( v2 )
    sub_18001050C(v2);
  v3 = a1[52];
  if ( v3 )
    sub_18001050C(v3);
  v4 = a1[50];
  if ( v4 )
    sub_18001050C(v4);
  sub_18000B2D4(
    (__int64)(a1 + 33),
    16LL,
    8LL,
    (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_18000B2D4(
    (__int64)(a1 + 17),
    16LL,
    8LL,
    (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  return sub_18000B2D4(
           (__int64)(a1 + 1),
           16LL,
           8LL,
           (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
}
