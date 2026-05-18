/*
 * XREFs of sub_18004102C @ 0x18004102C
 * Callers:
 *     sub_180037794 @ 0x180037794 (sub_180037794.c)
 *     sub_180041B48 @ 0x180041B48 (sub_180041B48.c)
 *     sub_18007F020 @ 0x18007F020 (sub_18007F020.c)
 * Callees:
 *     sub_180041104 @ 0x180041104 (sub_180041104.c)
 */

char __fastcall sub_18004102C(__int64 a1, __int64 a2)
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
    && (unsigned __int8)sub_180041104(a1 + 28, a2 + 28, a2, a1)
    && (unsigned __int8)sub_180041104(v4 + 44, v3 + 44, v3, v4)
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
