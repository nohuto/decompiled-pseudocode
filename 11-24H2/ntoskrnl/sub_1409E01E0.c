/*
 * XREFs of sub_1409E01E0 @ 0x1409E01E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409E01E0(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  unsigned int v7; // r11d

  v7 = *(_DWORD *)(a6 + 4LL * (((unsigned __int8)(a1 >> 1) - 1) & 1)) - a7;
  return ((v7 << (31 * (a3 / 0x1F) - a3 + 31)) | (v7 >> (a3 % 0x1F + 1))) * *(unsigned __int16 *)(a6 + 2 * (a1 & 3))
       - ((a7 << (31 * (a4 / 0x1F) - a4 + 31)) | (a7 >> (a4 % 0x1F + 1)));
}
