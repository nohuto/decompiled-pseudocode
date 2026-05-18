/*
 * XREFs of sub_18004B918 @ 0x18004B918
 * Callers:
 *     sub_180036460 @ 0x180036460 (sub_180036460.c)
 * Callees:
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_18001AA80 @ 0x18001AA80 (sub_18001AA80.c)
 *     sub_18001C338 @ 0x18001C338 (sub_18001C338.c)
 *     sub_1800265E4 @ 0x1800265E4 (sub_1800265E4.c)
 *     sub_18004B68C @ 0x18004B68C (sub_18004B68C.c)
 *     sub_18004B6BC @ 0x18004B6BC (sub_18004B6BC.c)
 *     sub_18004B6EC @ 0x18004B6EC (sub_18004B6EC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004B918(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax
  volatile signed __int32 *v5; // rcx

  sub_18001AA80(a1 + 18664);
  v2 = *(_QWORD *)(a1 + 18656);
  if ( v2 )
    sub_18001060C(v2);
  v3 = *(_QWORD *)(a1 + 18640);
  if ( v3 )
    sub_18001060C(v3);
  sub_1800265E4((void **)(a1 + 18608));
  sub_18004B6BC((void **)(a1 + 18592));
  sub_18004B68C((void **)(a1 + 18576));
  sub_18004B6EC((void **)(a1 + 18560));
  sub_180011B5C(a1 + 18528);
  sub_180011B5C(a1 + 18496);
  sub_18000B6A4(a1 + 2104, 32LL, 512LL, (void (__fastcall *)(__int64))sub_180011020);
  sub_18001C338((void **)(a1 + 2088));
  sub_18000B6A4(a1 + 32, 32LL, 64LL, (void (__fastcall *)(__int64))sub_180011020);
  result = sub_18001C338((void **)(a1 + 16));
  v5 = *(volatile signed __int32 **)(a1 + 8);
  if ( v5 )
    return sub_180010644(v5);
  return result;
}
