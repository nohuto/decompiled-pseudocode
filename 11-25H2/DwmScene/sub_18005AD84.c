/*
 * XREFs of sub_18005AD84 @ 0x18005AD84
 * Callers:
 *     sub_18004D4A0 @ 0x18004D4A0 (sub_18004D4A0.c)
 * Callees:
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_18001A9C0 @ 0x18001A9C0 (sub_18001A9C0.c)
 *     sub_18001C1D8 @ 0x18001C1D8 (sub_18001C1D8.c)
 *     sub_18004A4F4 @ 0x18004A4F4 (sub_18004A4F4.c)
 *     sub_18005A330 @ 0x18005A330 (sub_18005A330.c)
 *     sub_18005ABDC @ 0x18005ABDC (sub_18005ABDC.c)
 *     sub_1800D25C4 @ 0x1800D25C4 (sub_1800D25C4.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18005AD84(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  char result; // al
  volatile signed __int32 *v5; // rcx

  sub_18001A9C0(a1 + 528);
  sub_180011A5C(a1 + 496);
  sub_18005A330((void **)(a1 + 480), a1 + 480);
  sub_1800D25C4(a1 + 472);
  v2 = *(_QWORD *)(a1 + 464);
  if ( v2 )
    sub_18001050C(v2);
  v3 = *(_QWORD *)(a1 + 448);
  if ( v3 )
    sub_18001050C(v3);
  sub_18005ABDC((void **)(a1 + 416));
  sub_18000B2D4(a1 + 256, 16LL, 10LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_18000B2D4(a1 + 96, 16LL, 10LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_18001C1D8((void **)(a1 + 80));
  sub_18004A4F4((void **)(a1 + 48), a1 + 48);
  result = sub_180011A5C(a1 + 16);
  v5 = *(volatile signed __int32 **)(a1 + 8);
  if ( v5 )
    return sub_180010544(v5);
  return result;
}
