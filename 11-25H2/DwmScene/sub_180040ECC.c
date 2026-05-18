/*
 * XREFs of sub_180040ECC @ 0x180040ECC
 * Callers:
 *     sub_180037634 @ 0x180037634 (sub_180037634.c)
 *     sub_1800419E8 @ 0x1800419E8 (sub_1800419E8.c)
 *     sub_18007EEC0 @ 0x18007EEC0 (sub_18007EEC0.c)
 * Callees:
 *     sub_180040FA4 @ 0x180040FA4 (sub_180040FA4.c)
 */

char __fastcall sub_180040ECC(__int64 a1, __int64 a2)
{
  char v2; // r10
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r9

  v2 = 0;
  if ( *(_DWORD *)a1 == *(_DWORD *)a2
    && *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 4)
    && *(_DWORD *)(a1 + 8) == *(_DWORD *)(a2 + 8)
    && *(float *)(a1 + 12) == *(float *)(a2 + 12)
    && *(float *)(a1 + 16) == *(float *)(a2 + 16)
    && *(float *)(a1 + 20) == *(float *)(a2 + 20)
    && *(_BYTE *)(a1 + 24) == *(_BYTE *)(a2 + 24)
    && (unsigned __int8)sub_180040FA4(a1 + 28, a2 + 28, a2, a1)
    && (unsigned __int8)sub_180040FA4(v4 + 44, v3 + 44, v3, v4)
    && *(_BYTE *)(v6 + 60) == *(_BYTE *)(v5 + 60)
    && *(_BYTE *)(v6 + 61) == *(_BYTE *)(v5 + 61)
    && *(_BYTE *)(v6 + 62) == *(_BYTE *)(v5 + 62)
    && *(_BYTE *)(v6 + 63) == *(_BYTE *)(v5 + 63)
    && *(_BYTE *)(v6 + 64) == *(_BYTE *)(v5 + 64)
    && *(_DWORD *)(v6 + 68) == *(_DWORD *)(v5 + 68) )
  {
    return 1;
  }
  return v2;
}
