/*
 * XREFs of vLine4Octant25 @ 0x14031D070
 * Callers:
 *     vDrawLine @ 0x140007688 (vDrawLine.c)
 * Callees:
 *     <none>
 */

char __fastcall vLine4Octant25(_DWORD *a1, __int64 a2, int a3, char a4)
{
  unsigned int v4; // ebx
  int v5; // edi
  int v6; // esi
  int v7; // r14d
  int v8; // r15d
  unsigned __int64 v9; // r10
  __int64 v10; // rbp
  char v11; // r11
  char result; // al
  int v13; // edi
  __int64 v14; // r9
  int v15; // r8d
  unsigned int v16; // eax
  int v17; // esi
  unsigned __int64 v18; // rdx

  v4 = a1[1];
  v5 = a1[3];
  v6 = a1[6];
  v7 = a1[4];
  v8 = a1[5];
  v9 = (unsigned __int64)v4 >> 1;
  v10 = a2;
  v11 = a4 & 0xF | (16 * (a4 & 0xF));
  result = *(_BYTE *)(v9 + a2) & byte_1403568C8[v4 & 1] | v11 & ~byte_1403568C8[v4 & 1];
  *(_BYTE *)(v9 + a2) = result;
  v13 = v5 - 1;
  if ( v13 )
  {
    v14 = a3;
    do
    {
      v10 += v14;
      v16 = v4 - 1;
      v17 = v8 + v6;
      v15 = v17;
      if ( v17 < 0 )
        v16 = v4;
      v6 = v17 - v7;
      v4 = v16;
      v18 = (unsigned __int64)v16 >> 1;
      result = *(_BYTE *)(v18 + v10) & byte_1403568C8[v16 & 1] | v11 & ~byte_1403568C8[v16 & 1];
      *(_BYTE *)(v18 + v10) = result;
      if ( v15 < 0 )
        v6 = v15;
      --v13;
    }
    while ( v13 );
  }
  return result;
}
