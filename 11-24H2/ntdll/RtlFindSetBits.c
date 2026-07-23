/*
 * XREFs of RtlFindSetBits @ 0x18010BF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindSetBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r15d
  ULONG v6; // r9d
  unsigned int v7; // r10d
  unsigned int *Buffer; // r8
  ULONG v9; // r9d
  __int64 v10; // r13
  ULONG v11; // eax
  int v12; // r14d
  ULONG v13; // edx
  unsigned int v14; // r11d
  char *v15; // rsi
  ULONG v16; // ebp
  __int64 v17; // r8
  unsigned __int64 v18; // rdi
  char *v19; // rdx
  signed __int64 v20; // r8
  unsigned __int64 v21; // r10
  int v22; // ecx
  bool v23; // zf
  __int64 v24; // rax
  char *v25; // rcx
  __int64 v26; // r8
  char v27; // r8
  char *v28; // rcx
  unsigned int v29; // r8d
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // r8d
  unsigned int v33; // ecx
  __int64 v34; // rax
  ULONG v35; // r10d
  int v36; // r9d
  char *v37; // r11
  __int64 v38; // rax
  ULONG v39; // r10d
  unsigned __int64 v40; // r9
  __int64 v41; // rax
  bool v42; // cc
  unsigned __int64 v43; // rax
  unsigned int *v45; // [rsp+40h] [rbp+8h]
  ULONG v46; // [rsp+48h] [rbp+10h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v6 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v7 = BitMapHeader->SizeOfBitMap - 1;
  Buffer = BitMapHeader->Buffer;
  v45 = Buffer;
  if ( NumberToFind )
  {
    v10 = (unsigned __int8)Buffer & 4;
    v11 = v6;
    v12 = v10 != 0 ? 0x20 : 0;
    while ( 1 )
    {
      v13 = v12 + v11;
      v46 = v11;
      v14 = v12 + v7;
      v15 = (char *)Buffer - (v10 != 0 ? 4 : 0);
      if ( v7 - v11 + 1 < NumberToFind )
      {
        v9 = -1;
        goto LABEL_48;
      }
      v16 = v14 - NumberToFind + 1;
      v17 = (1LL << (v13 & 0x3F)) - 1;
      v18 = (unsigned __int64)&v15[8 * ((unsigned __int64)v16 >> 6)];
      v19 = &v15[8 * ((unsigned __int64)v13 >> 6)];
      v20 = ~*(_QWORD *)v19 | v17;
      if ( NumberToFind <= 0x7F )
        break;
      v21 = v18 + 8;
      if ( (v16 & 0x3F) == 0 )
        v21 = (unsigned __int64)&v15[8 * ((unsigned __int64)(v14 - NumberToFind + 1) >> 6)];
      if ( v20 )
      {
        v19 += 8;
        if ( *(_QWORD *)v19 != -1LL )
          goto LABEL_15;
        v23 = !_BitScanReverse64((unsigned __int64 *)&v24, v20);
        if ( v23 )
LABEL_13:
          v22 = 64;
        else
          v22 = 63 - v24;
      }
      else
      {
        v22 = 0;
      }
LABEL_19:
      v9 = ((unsigned int)((v19 - v15) >> 3) << 6) - v22;
      if ( v9 <= v16 )
      {
        v27 = NumberToFind - v22;
        v28 = &v19[8 * ((unsigned __int64)(NumberToFind - v22) >> 6)];
        while ( 1 )
        {
          v19 += 8;
          if ( v19 == v28 )
            break;
          if ( *(_QWORD *)v19 != -1LL )
            goto LABEL_15;
        }
        v29 = v27 & 0x3F;
        if ( !v29 )
          goto LABEL_46;
        v23 = !_BitScanForward64((unsigned __int64 *)&v30, ~*(_QWORD *)v19);
        if ( v23 )
          LODWORD(v30) = 64;
        if ( (unsigned int)v30 >= v29 )
          goto LABEL_46;
LABEL_15:
        while ( 1 )
        {
          v25 = v19;
          if ( (unsigned __int64)v19 > v21 )
            break;
          v19 += 8;
          if ( *(_QWORD *)v19 == -1LL )
          {
            v23 = !_BitScanReverse64((unsigned __int64 *)&v26, ~*(_QWORD *)v25);
            if ( v23 )
              goto LABEL_13;
            v22 = 63 - v26;
            goto LABEL_19;
          }
        }
      }
LABEL_29:
      v9 = -1;
LABEL_47:
      Buffer = v45;
LABEL_48:
      if ( !v46 )
        return v9;
      v35 = NumberToFind + HintIndex;
      if ( NumberToFind + HintIndex > SizeOfBitMap )
        v35 = SizeOfBitMap;
      v7 = v35 - 1;
      v11 = 0;
    }
    if ( NumberToFind < 0x40 )
    {
      if ( NumberToFind <= 1 )
      {
        while ( v20 == -1 )
        {
          v19 += 8;
          if ( (unsigned __int64)v19 > v18 )
            goto LABEL_29;
          v20 = ~*(_QWORD *)v19;
        }
        _BitScanForward64(&v43, ~v20);
        v9 = v43 + ((unsigned int)((v19 - v15) >> 3) << 6);
        v42 = v9 <= v16;
      }
      else
      {
        v36 = 0;
        v37 = &v15[8 * ((unsigned __int64)v14 >> 6)];
        while ( 1 )
        {
          if ( v20 == -1 )
          {
            do
            {
              v19 += 8;
              if ( (unsigned __int64)v19 > v18 )
                goto LABEL_29;
              v20 = ~*(_QWORD *)v19;
            }
            while ( !*(_QWORD *)v19 );
            v36 = 0;
          }
          v23 = !_BitScanForward64((unsigned __int64 *)&v38, v20);
          if ( v23 )
            LODWORD(v38) = 64;
          if ( v36 + (int)v38 >= NumberToFind )
            break;
          v39 = NumberToFind;
          v40 = ~v20;
          while ( 1 )
          {
            v40 &= v40 >> (v39 >> 1);
            if ( !v40 )
              break;
            v39 -= v39 >> 1;
            if ( v39 <= 1 )
            {
              _BitScanForward64(&v40, v40);
              goto LABEL_71;
            }
          }
          if ( v19 == v37 )
            goto LABEL_29;
          v23 = !_BitScanReverse64((unsigned __int64 *)&v41, v20);
          if ( v23 )
            v36 = 64;
          else
            v36 = 63 - v41;
          v19 += 8;
          v20 = ~*(_QWORD *)v19;
        }
        LODWORD(v40) = -v36;
LABEL_71:
        v9 = ((unsigned int)((v19 - v15) >> 3) << 6) + v40;
        v42 = v9 <= v16;
      }
      if ( !v42 )
        goto LABEL_29;
LABEL_46:
      if ( v9 != -1 )
      {
        v9 -= v12;
        return v9;
      }
      goto LABEL_47;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v20 < 0 )
        {
          v19 += 8;
          if ( (unsigned __int64)v19 > v18 )
            goto LABEL_29;
          v20 = ~*(_QWORD *)v19;
        }
        v23 = !_BitScanReverse64((unsigned __int64 *)&v31, v20);
        if ( v23 )
          v32 = 64;
        else
          v32 = 63 - v31;
        v9 = (((unsigned int)((v19 - v15) >> 3) + 1) << 6) - v32;
        if ( v9 > v16 )
          goto LABEL_29;
        v33 = NumberToFind - v32;
        if ( NumberToFind == v32 )
          goto LABEL_46;
        v19 += 8;
        v20 = ~*(_QWORD *)v19;
        if ( v33 >= 0x40 )
          break;
LABEL_43:
        v23 = !_BitScanForward64((unsigned __int64 *)&v34, v20);
        if ( v23 )
          LODWORD(v34) = 64;
        if ( (unsigned int)v34 >= v33 )
          goto LABEL_46;
      }
      if ( *(_QWORD *)v19 == -1LL )
      {
        v33 -= 64;
        if ( !v33 )
          goto LABEL_46;
        v19 += 8;
        v20 = ~*(_QWORD *)v19;
        goto LABEL_43;
      }
    }
  }
  return v6 & 0xFFFFFFF8;
}
