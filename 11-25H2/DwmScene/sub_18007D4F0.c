/*
 * XREFs of sub_18007D4F0 @ 0x18007D4F0
 * Callers:
 *     sub_18007D894 @ 0x18007D894 (sub_18007D894.c)
 *     sub_180081F40 @ 0x180081F40 (sub_180081F40.c)
 * Callees:
 *     sub_18007CF18 @ 0x18007CF18 (sub_18007CF18.c)
 */

__int64 __fastcall sub_18007D4F0(__int64 a1, __int64 a2)
{
  __int64 *v4; // rcx

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v4 = (__int64 *)(a1 + 16);
  *v4 = 0LL;
  v4[1] = 0LL;
  v4[2] = 0LL;
  sub_18007CF18(
    v4,
    0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 16)) >> 4),
    (__int64 *)(a2 + 16),
    (__int64 *)(a2 + 24));
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  return a1;
}
