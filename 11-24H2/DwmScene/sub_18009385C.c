/*
 * XREFs of sub_18009385C @ 0x18009385C
 * Callers:
 *     sub_180093940 @ 0x180093940 (sub_180093940.c)
 *     sub_180094720 @ 0x180094720 (sub_180094720.c)
 *     sub_1800DB930 @ 0x1800DB930 (sub_1800DB930.c)
 * Callees:
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009385C(_QWORD *a1)
{
  *a1 = &Spectre::Engine::VertexBufferState::`vftable';
  sub_18000B6A4(
    (__int64)(a1 + 61),
    16LL,
    15LL,
    (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_18000B6A4(
    (__int64)(a1 + 31),
    16LL,
    15LL,
    (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  return sub_18000B6A4(
           (__int64)(a1 + 1),
           16LL,
           15LL,
           (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
}
