/*
 * XREFs of sub_18004B7B8 @ 0x18004B7B8
 * Callers:
 *     sub_180036300 @ 0x180036300 (sub_180036300.c)
 * Callees:
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_18001A9C0 @ 0x18001A9C0 (sub_18001A9C0.c)
 *     sub_18001C1D8 @ 0x18001C1D8 (sub_18001C1D8.c)
 *     sub_180026484 @ 0x180026484 (sub_180026484.c)
 *     sub_18004B52C @ 0x18004B52C (sub_18004B52C.c)
 *     sub_18004B55C @ 0x18004B55C (sub_18004B55C.c)
 *     sub_18004B58C @ 0x18004B58C (sub_18004B58C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004B7B8(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax
  volatile signed __int32 *v5; // rcx

  sub_18001A9C0(a1 + 18664);
  v2 = *(_QWORD *)(a1 + 18656);
  if ( v2 )
    sub_18001050C(v2);
  v3 = *(_QWORD *)(a1 + 18640);
  if ( v3 )
    sub_18001050C(v3);
  sub_180026484((void **)(a1 + 18608));
  sub_18004B55C((void **)(a1 + 18592));
  sub_18004B52C((void **)(a1 + 18576));
  sub_18004B58C((void **)(a1 + 18560));
  sub_180011A5C(a1 + 18528);
  sub_180011A5C(a1 + 18496);
  sub_18000B2D4(a1 + 2104, 32LL, 512LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_18001C1D8((void **)(a1 + 2088));
  sub_18000B2D4(a1 + 32, 32LL, 64LL, (void (__fastcall *)(__int64))sub_180010F20);
  result = sub_18001C1D8((void **)(a1 + 16));
  v5 = *(volatile signed __int32 **)(a1 + 8);
  if ( v5 )
    return sub_180010544(v5);
  return result;
}
