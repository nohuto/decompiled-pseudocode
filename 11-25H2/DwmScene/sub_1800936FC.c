/*
 * XREFs of sub_1800936FC @ 0x1800936FC
 * Callers:
 *     sub_1800937E0 @ 0x1800937E0 (sub_1800937E0.c)
 *     sub_1800945C0 @ 0x1800945C0 (sub_1800945C0.c)
 *     sub_1800DB7D0 @ 0x1800DB7D0 (sub_1800DB7D0.c)
 * Callees:
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800936FC(_QWORD *a1)
{
  *a1 = &Spectre::Engine::VertexBufferState::`vftable';
  sub_18000B2D4(
    (__int64)(a1 + 61),
    16LL,
    15LL,
    (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_18000B2D4(
    (__int64)(a1 + 31),
    16LL,
    15LL,
    (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  return sub_18000B2D4(
           (__int64)(a1 + 1),
           16LL,
           15LL,
           (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
}
