/*
 * XREFs of sub_1800285A4 @ 0x1800285A4
 * Callers:
 *     sub_180015998 @ 0x180015998 (sub_180015998.c)
 *     sub_18006BAB4 @ 0x18006BAB4 (sub_18006BAB4.c)
 *     sub_1800B62DC @ 0x1800B62DC (sub_1800B62DC.c)
 *     sub_1800B6488 @ 0x1800B6488 (sub_1800B6488.c)
 *     sub_1800B6634 @ 0x1800B6634 (sub_1800B6634.c)
 *     sub_1800B67E0 @ 0x1800B67E0 (sub_1800B67E0.c)
 *     sub_1800B698C @ 0x1800B698C (sub_1800B698C.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 */

__int64 __fastcall sub_1800285A4(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  volatile signed __int32 *v5; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    result = sub_18001060C(v2);
  v5 = *(volatile signed __int32 **)(a2 + 8);
  if ( v5 )
    return sub_180010644(v5);
  return result;
}
