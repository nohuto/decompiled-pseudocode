/*
 * XREFs of sub_1800688E0 @ 0x1800688E0
 * Callers:
 *     sub_1800689A0 @ 0x1800689A0 (sub_1800689A0.c)
 * Callees:
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180026484 @ 0x180026484 (sub_180026484.c)
 */

__int64 __fastcall sub_1800688E0(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::DepthBuffer::`vftable';
  sub_180026484((void **)(a1 + 256));
  sub_18000B2D4(a1 + 192, 16LL, 4LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_18000B2D4(a1 + 128, 16LL, 4LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  v2 = *(_QWORD *)(a1 + 120);
  if ( v2 )
    sub_18001050C(v2);
  v3 = *(volatile signed __int32 **)(a1 + 104);
  if ( v3 )
    sub_180010544(v3);
  return sub_1800265E8(a1);
}
