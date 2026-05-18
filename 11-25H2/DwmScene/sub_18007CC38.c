/*
 * XREFs of sub_18007CC38 @ 0x18007CC38
 * Callers:
 *     sub_18007BA90 @ 0x18007BA90 (sub_18007BA90.c)
 *     sub_180082224 @ 0x180082224 (sub_180082224.c)
 *     sub_1800C2F54 @ 0x1800C2F54 (sub_1800C2F54.c)
 *     sub_1800C5D00 @ 0x1800C5D00 (sub_1800C5D00.c)
 * Callees:
 *     sub_180040A14 @ 0x180040A14 (sub_180040A14.c)
 */

__int64 *__fastcall sub_18007CC38(__int64 *a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v4; // r8
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  sub_180040A14(a1, &v8, a3);
  v6 = v9;
  if ( *(_BYTE *)(v9 + 25) || *v4 < *(_DWORD *)(v9 + 32) )
    v6 = *a1;
  *v5 = v6;
  return v5;
}
