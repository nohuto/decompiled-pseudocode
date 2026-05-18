/*
 * XREFs of sub_180068A40 @ 0x180068A40
 * Callers:
 *     sub_180068B00 @ 0x180068B00 (sub_180068B00.c)
 * Callees:
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_1800265E4 @ 0x1800265E4 (sub_1800265E4.c)
 */

__int64 __fastcall sub_180068A40(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::DepthBuffer::`vftable';
  sub_1800265E4((void **)(a1 + 256));
  sub_18000B6A4(a1 + 192, 16LL, 4LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_18000B6A4(a1 + 128, 16LL, 4LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  v2 = *(_QWORD *)(a1 + 120);
  if ( v2 )
    sub_18001060C(v2);
  v3 = *(volatile signed __int32 **)(a1 + 104);
  if ( v3 )
    sub_180010644(v3);
  return sub_180026748(a1);
}
