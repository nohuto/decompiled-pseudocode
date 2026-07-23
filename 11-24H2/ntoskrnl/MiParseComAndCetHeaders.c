/*
 * XREFs of MiParseComAndCetHeaders @ 0x14093DDBC
 * Callers:
 *     MiCreateNewSection @ 0x14098D630 (MiCreateNewSection.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x14041CAA0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14041F2B0 (MiDereferenceControlAreaFile.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiMapImageInSystemSpace @ 0x14093E220 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x14093E4B4 (MiUnmapImageInSystemSpace.c)
 *     MiLogRelocationRva @ 0x14093E524 (MiLogRelocationRva.c)
 */

__int64 __fastcall MiParseComAndCetHeaders(__int64 *a1, unsigned int *a2, _BYTE *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  unsigned int v8; // eax
  ULONG_PTR v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned int i; // r8d
  __int64 v13; // rdx
  unsigned int v14; // edx
  signed __int64 v15; // rsi
  int v16; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // r10
  int v21; // r8d
  __int64 v22; // rdx
  char v23; // cl
  char v24; // cl
  int v25; // [rsp+24h] [rbp-144h]
  unsigned int v26; // [rsp+28h] [rbp-140h]
  ULONG_PTR v27; // [rsp+40h] [rbp-128h]
  __int64 v28; // [rsp+48h] [rbp-120h]
  unsigned __int64 v29; // [rsp+68h] [rbp-100h]
  _QWORD v30[10]; // [rsp+80h] [rbp-E8h] BYREF
  __int128 v31; // [rsp+D0h] [rbp-98h]
  __int128 v32; // [rsp+E0h] [rbp-88h]
  __int128 v33; // [rsp+F0h] [rbp-78h]
  __int128 v34; // [rsp+100h] [rbp-68h]
  __int64 v35; // [rsp+110h] [rbp-58h]

  memset_0(v30, 0, sizeof(v30));
  v6 = 0;
  v27 = 0LL;
  *a3 = 0;
  v7 = a2[20];
  if ( (_DWORD)v7 )
  {
    if ( (v7 & 3) == 0 )
    {
      v19 = a2[21];
      if ( v19 >= 0x48 && (unsigned int)v7 + v19 > (unsigned int)v7 )
        v6 = v7 + 72 <= (unsigned __int64)a2[4];
    }
  }
  v8 = a2[26];
  if ( v8 )
  {
    if ( (v8 & 3) == 0 )
    {
      v18 = a2[27];
      if ( v18 >= 0x1C && v18 + v8 > v8 && v18 + v8 <= a2[4] )
        v6 |= 2u;
    }
  }
  if ( !v6 )
    return 0LL;
  v25 = MiMapImageInSystemSpace(a1, 3LL, v30);
  if ( v25 >= 0 )
  {
    v9 = MiReferenceControlAreaFile((__int64)a1);
    v27 = v9;
    v6 |= 0xCu;
    v10 = *a1;
    v28 = v30[0];
    if ( (v6 & 1) != 0 )
    {
      v20 = a2[20];
      v31 = *(_OWORD *)(v30[0] + v20);
      v32 = *(_OWORD *)(v30[0] + v20 + 16);
      v33 = *(_OWORD *)(v30[0] + v20 + 32);
      v34 = *(_OWORD *)(v30[0] + v20 + 48);
      v35 = *(_QWORD *)(v30[0] + v20 + 64);
      MiLogRelocationRva((unsigned int)v20, 72LL, v9, a1);
      v21 = v32;
      if ( (v32 & 1) != 0 )
      {
        *a3 = 1;
        *(_WORD *)(v10 + 12) |= 0x4000u;
        if ( WORD2(v31) > 2u || WORD2(v31) == 2 && WORD3(v31) >= 5u )
        {
          v22 = *(_QWORD *)(v10 + 56);
          v23 = *(_BYTE *)(v22 + 51) | 2;
          *(_BYTE *)(v22 + 51) = v23;
          if ( (v21 & 0x20002) != 2 )
          {
            if ( _bittest16((const signed __int16 *)(v10 + 12), 0xFu) )
            {
              v24 = v23 | 1;
              *(_BYTE *)(v22 + 51) = v24;
              if ( (v21 & 0x20000) != 0 )
                *(_BYTE *)(v22 + 51) = v24 | 0x20;
            }
          }
        }
      }
    }
    if ( (v6 & 2) != 0 )
    {
      v11 = v28 + a2[26];
      for ( i = 0; ; i = v26 + 1 )
      {
        v26 = i;
        v13 = (a2[27] * (unsigned __int128)0x2492492492492493uLL) >> 64;
        if ( i >= (v13 + (((unsigned __int64)a2[27] - v13) >> 1)) >> 4 )
          break;
        MiLogRelocationRva(a2[26] + 28 * i, 28LL, v27, a1);
        v29 = *(_QWORD *)(v11 + 16);
        if ( HIDWORD(*(_OWORD *)v11) == 20 )
        {
          if ( !HIDWORD(v29) )
            break;
          if ( (v29 & 0x300000000LL) != 0 )
            break;
          if ( !(_DWORD)v29 )
            break;
          if ( (v29 & 3) != 0 )
            break;
          v14 = a2[4];
          if ( (unsigned int)v29 >= v14 || HIDWORD(v29) >= v14 || HIDWORD(v29) + (int)v29 >= v14 )
            break;
          v15 = v27;
          MiLogRelocationRva(HIDWORD(v29), 4LL, v27, a1);
          v16 = *(_DWORD *)(v28 + HIDWORD(v29));
          if ( (v16 & 1) != 0 )
            *(_DWORD *)(*(_QWORD *)(v10 + 56) + 76LL) |= 1u;
          if ( (v16 & 2) != 0 )
            *(_DWORD *)(*(_QWORD *)(v10 + 56) + 76LL) |= 2u;
          if ( (v16 & 4) != 0 )
            *(_DWORD *)(*(_QWORD *)(v10 + 56) + 76LL) |= 4u;
          if ( (v16 & 8) != 0 )
            *(_DWORD *)(*(_QWORD *)(v10 + 56) + 76LL) |= 8u;
          if ( (v16 & 0x10) != 0 )
            *(_DWORD *)(*(_QWORD *)(v10 + 56) + 76LL) |= 0x10u;
          if ( (v16 & 0x20) != 0 )
            *(_DWORD *)(*(_QWORD *)(v10 + 56) + 76LL) |= 0x20u;
          if ( (v16 & 0x80u) != 0 )
            *(_DWORD *)(*(_QWORD *)(v10 + 56) + 76LL) |= 0x40u;
          goto LABEL_31;
        }
        v11 += 28LL;
      }
    }
  }
  v15 = v27;
LABEL_31:
  if ( (v6 & 4) != 0 )
    MiUnmapImageInSystemSpace(v30);
  if ( v6 >= 8 )
    MiDereferenceControlAreaFile((__int64)a1, v15);
  return (unsigned int)v25;
}
