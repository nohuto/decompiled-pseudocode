/*
 * XREFs of sub_1800CFCC4 @ 0x1800CFCC4
 * Callers:
 *     sub_1800CF62C @ 0x1800CF62C (sub_1800CF62C.c)
 *     sub_1800CF964 @ 0x1800CF964 (sub_1800CF964.c)
 *     sub_1800D1394 @ 0x1800D1394 (sub_1800D1394.c)
 *     sub_1800E2389 @ 0x1800E2389 (sub_1800E2389.c)
 *     sub_1800E23C3 @ 0x1800E23C3 (sub_1800E23C3.c)
 * Callees:
 *     sub_1800CFE0C @ 0x1800CFE0C (sub_1800CFE0C.c)
 */

__int64 __fastcall sub_1800CFCC4(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_1800CFE0C(v2 + 16);
  return sub_1800CFC28(a1);
}
