/*
 * XREFs of RtlFindClearBits @ 0x140402600
 * Callers:
 *     MiReserveExistingDriverPtes @ 0x140A6AEB8 (MiReserveExistingDriverPtes.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindClearBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r13d
  ULONG v4; // r14d
  unsigned int *Buffer; // r8
  unsigned int v8; // r9d
  __int64 v9; // rbp
  int v10; // edi
  unsigned int v11; // r10d
  ULONG v12; // edx
  char *v13; // r15
  ULONG v14; // ebx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int64 *v18; // rax
  unsigned __int64 v19; // rcx
  ULONG v20; // r10d
  bool v22; // zf
  __int64 v23; // rcx
  int v24; // edx
  ULONG v25; // r9d
  int v26; // edx
  unsigned __int64 *v27; // rbx
  __int64 v28; // rcx
  ULONG v29; // r11d
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // r11
  __int64 v32; // rcx
  int v33; // edx
  char v34; // r8
  unsigned __int64 *v35; // rdx
  unsigned int v36; // r11d
  __int64 v37; // rcx
  unsigned int v38; // r8d
  __int64 v39; // rdx
  unsigned __int64 *v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rcx
  unsigned int *v43; // [rsp+40h] [rbp+8h]
  ULONG v44; // [rsp+48h] [rbp+10h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v4 = 0;
  if ( HintIndex < BitMapHeader->SizeOfBitMap )
    v4 = HintIndex;
  Buffer = BitMapHeader->Buffer;
  v43 = Buffer;
  v8 = SizeOfBitMap - 1;
  if ( NumberToFind )
  {
    v9 = (unsigned __int8)Buffer & 4;
    v10 = v9 != 0 ? 0x20 : 0;
    while ( 1 )
    {
      v11 = v10 + v8;
      v12 = v10 + v4;
      v13 = (char *)Buffer - (v9 != 0 ? 4 : 0);
      if ( v8 - v4 + 1 >= NumberToFind )
        break;
      v20 = -1;
LABEL_21:
      if ( !v4 )
        return v20;
      v25 = NumberToFind + HintIndex;
      if ( NumberToFind + HintIndex > SizeOfBitMap )
        v25 = SizeOfBitMap;
      v8 = v25 - 1;
      v4 = 0;
    }
    v14 = v11 - NumberToFind + 1;
    v44 = v14;
    v15 = (unsigned __int64)&v13[8 * ((unsigned __int64)v14 >> 6)];
    v16 = (unsigned __int64)v12 >> 6;
    v17 = *(_QWORD *)&v13[8 * v16] | ((1LL << (v12 & 0x3F)) - 1);
    v18 = (unsigned __int64 *)&v13[8 * v16];
    if ( NumberToFind > 0x7F )
    {
      v31 = v15 + 8;
      if ( (v14 & 0x3F) == 0 )
        v31 = (unsigned __int64)&v13[8 * ((unsigned __int64)(v11 - NumberToFind + 1) >> 6)];
      if ( v17 )
      {
        if ( *++v18 )
          goto LABEL_68;
        v22 = !_BitScanReverse64((unsigned __int64 *)&v32, v17);
        if ( v22 )
          v33 = 64;
        else
          v33 = 63 - v32;
      }
      else
      {
        v33 = 0;
      }
      while ( 1 )
      {
        v20 = ((unsigned int)(((char *)v18 - v13) >> 3) << 6) - v33;
        if ( v20 > v14 )
          break;
        v34 = NumberToFind - v33;
        v35 = &v18[(unsigned __int64)(NumberToFind - v33) >> 6];
        while ( ++v18 != v35 )
        {
          if ( *v18 )
            goto LABEL_68;
        }
        v38 = v34 & 0x3F;
        if ( !v38 )
          goto LABEL_13;
        v22 = !_BitScanForward64((unsigned __int64 *)&v39, *v18);
        if ( v22 )
          LODWORD(v39) = 64;
        if ( (unsigned int)v39 >= v38 )
          goto LABEL_13;
        do
        {
LABEL_68:
          v40 = v18;
          if ( (unsigned __int64)v18 > v31 )
            goto LABEL_19;
          ++v18;
        }
        while ( *v18 );
        v22 = !_BitScanReverse64((unsigned __int64 *)&v41, *v40);
        if ( v22 )
          v33 = 64;
        else
          v33 = 63 - v41;
      }
LABEL_19:
      v20 = -1;
      goto LABEL_20;
    }
    if ( NumberToFind < 0x40 )
    {
      if ( NumberToFind > 1 )
      {
        v26 = 0;
        v27 = (unsigned __int64 *)&v13[8 * ((unsigned __int64)v11 >> 6)];
        while ( 1 )
        {
          if ( v17 == -1 )
          {
            while ( 1 )
            {
              if ( (unsigned __int64)++v18 > v15 )
                goto LABEL_19;
              v17 = *v18;
              if ( *v18 != -1LL )
              {
                v26 = 0;
                break;
              }
            }
          }
          v22 = !_BitScanForward64((unsigned __int64 *)&v28, v17);
          if ( v22 )
            LODWORD(v28) = 64;
          if ( v26 + (int)v28 >= NumberToFind )
            break;
          v29 = NumberToFind;
          v30 = ~v17;
          while ( 1 )
          {
            v30 &= v30 >> (v29 >> 1);
            if ( !v30 )
              break;
            v29 -= v29 >> 1;
            if ( v29 <= 1 )
            {
              _BitScanForward64(&v30, v30);
              goto LABEL_35;
            }
          }
          if ( v18 == v27 )
            goto LABEL_19;
          v22 = !_BitScanReverse64((unsigned __int64 *)&v42, v17);
          v17 = v18[1];
          if ( v22 )
          {
            ++v18;
            v26 = 64;
          }
          else
          {
            v26 = 63 - v42;
            ++v18;
          }
        }
        LODWORD(v30) = -v26;
LABEL_35:
        v20 = ((unsigned int)(((char *)v18 - v13) >> 3) << 6) + v30;
        if ( v20 > v44 )
          goto LABEL_19;
LABEL_13:
        if ( v20 != -1 )
        {
          v20 -= v10;
          return v20;
        }
        goto LABEL_20;
      }
      while ( v17 == -1 )
      {
        if ( (unsigned __int64)++v18 > v15 )
          goto LABEL_19;
        v17 = *v18;
      }
      _BitScanForward64(&v19, ~v17);
      v20 = v19 + ((unsigned int)(((char *)v18 - v13) >> 3) << 6);
      if ( v20 <= v14 )
        goto LABEL_13;
      v20 = -1;
LABEL_20:
      Buffer = v43;
      goto LABEL_21;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v17 < 0 )
        {
          if ( (unsigned __int64)++v18 > v15 )
            goto LABEL_19;
          v17 = *v18;
        }
        v22 = !_BitScanReverse64((unsigned __int64 *)&v23, v17);
        if ( v22 )
          v24 = 64;
        else
          v24 = 63 - v23;
        v20 = (((unsigned int)(((char *)v18 - v13) >> 3) + 1) << 6) - v24;
        if ( v20 > v14 )
          goto LABEL_19;
        v36 = NumberToFind - v24;
        if ( NumberToFind == v24 )
          goto LABEL_13;
        v17 = v18[1];
        ++v18;
        if ( v36 >= 0x40 )
          break;
LABEL_60:
        v22 = !_BitScanForward64((unsigned __int64 *)&v37, v17);
        if ( v22 )
          LODWORD(v37) = 64;
        if ( (unsigned int)v37 >= v36 )
          goto LABEL_13;
      }
      if ( !v17 )
      {
        v36 -= 64;
        if ( !v36 )
          goto LABEL_13;
        v17 = v18[1];
        ++v18;
        goto LABEL_60;
      }
    }
  }
  return v4 & 0xFFFFFFF8;
}
