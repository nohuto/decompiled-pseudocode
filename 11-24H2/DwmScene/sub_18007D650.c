/*
 * XREFs of sub_18007D650 @ 0x18007D650
 * Callers:
 *     sub_18007D9F4 @ 0x18007D9F4 (sub_18007D9F4.c)
 *     sub_1800820A0 @ 0x1800820A0 (sub_1800820A0.c)
 * Callees:
 *     sub_18007D078 @ 0x18007D078 (sub_18007D078.c)
 */

__int64 __fastcall sub_18007D650(__int64 a1, __int64 a2)
{
  __int64 *v4; // rcx

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v4 = (__int64 *)(a1 + 16);
  *v4 = 0LL;
  v4[1] = 0LL;
  v4[2] = 0LL;
  sub_18007D078(
    v4,
    0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 16)) >> 4),
    (__int64 *)(a2 + 16),
    (__int64 *)(a2 + 24));
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  return a1;
}
