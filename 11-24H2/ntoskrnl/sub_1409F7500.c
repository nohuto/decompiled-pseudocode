/*
 * XREFs of sub_1409F7500 @ 0x1409F7500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409F7500(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v8; // rbx
  unsigned int v9; // r9d

  v8 = a1 & 3;
  v9 = a7 ^ *(unsigned __int16 *)(a6 + 2LL * (((_BYTE)v8 + (unsigned __int8)(a2 / 3) + (_BYTE)a2 + 1) & 3));
  return (a7 >> (a4 % 0xF + 1))
       + *(unsigned __int16 *)(a6 + 2 * v8) * ((v9 << (a3 % 7 + 1)) | (v9 >> (7 * (a3 / 7) - a3 + 31)));
}
