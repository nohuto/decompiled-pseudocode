/*
 * XREFs of sub_180093E7C @ 0x180093E7C
 * Callers:
 *     sub_180093F90 @ 0x180093F90 (sub_180093F90.c)
 *     sub_180094720 @ 0x180094720 (sub_180094720.c)
 *     sub_1800DB978 @ 0x1800DB978 (sub_1800DB978.c)
 * Callees:
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180093E7C(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *a1 = &Spectre::Engine::RenderTargetState::`vftable';
  v2 = a1[54];
  if ( v2 )
    sub_18001060C(v2);
  v3 = a1[52];
  if ( v3 )
    sub_18001060C(v3);
  v4 = a1[50];
  if ( v4 )
    sub_18001060C(v4);
  sub_18000B6A4(
    (__int64)(a1 + 33),
    16LL,
    8LL,
    (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_18000B6A4(
    (__int64)(a1 + 17),
    16LL,
    8LL,
    (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  return sub_18000B6A4(
           (__int64)(a1 + 1),
           16LL,
           8LL,
           (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
}
