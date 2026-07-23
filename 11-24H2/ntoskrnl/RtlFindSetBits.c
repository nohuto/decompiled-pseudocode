/*
 * XREFs of RtlFindSetBits @ 0x1403E6CF0
 * Callers:
 *     SmcStorePlacementGet @ 0x14079DD40 (SmcStorePlacementGet.c)
 *     HvpFindFreeCell @ 0x140886450 (HvpFindFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x140886D60 (HvpRemoveFreeCellHint.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14094649C (EtwQueryPerformanceTraceInformation.c)
 *     MiHandleDriverNonPagedSections @ 0x140A33318 (MiHandleDriverNonPagedSections.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindSetBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r13d
  ULONG v4; // r14d
  unsigned int *Buffer; // r8
  unsigned int v8; // r9d
  __int64 v9; // rbp
  int v10; // ebx
  unsigned int v11; // r10d
  ULONG v12; // edx
  char *v13; // r15
  ULONG v14; // edi
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  char *v18; // rax
  signed __int64 v19; // r8
  unsigned __int64 v20; // rcx
  ULONG v21; // r10d
  bool v23; // zf
  __int64 v24; // rcx
  int v25; // edx
  ULONG v26; // r9d
  int v27; // edx
  char *v28; // rdi
  __int64 v29; // rcx
  ULONG v30; // r11d
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // r11
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // edx
  char v36; // r8
  char *v37; // rdx
  unsigned int v38; // r11d
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v41; // rcx
  unsigned int v42; // r8d
  __int64 v43; // rdx
  char *v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // r8
  unsigned int *v49; // [rsp+40h] [rbp+8h]
  ULONG v50; // [rsp+48h] [rbp+10h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v4 = 0;
  if ( HintIndex < BitMapHeader->SizeOfBitMap )
    v4 = HintIndex;
  Buffer = BitMapHeader->Buffer;
  v49 = Buffer;
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
      v21 = -1;
LABEL_21:
      if ( !v4 )
        return v21;
      v26 = NumberToFind + HintIndex;
      if ( NumberToFind + HintIndex > SizeOfBitMap )
        v26 = SizeOfBitMap;
      v8 = v26 - 1;
      v4 = 0;
    }
    v14 = v11 - NumberToFind + 1;
    v50 = v14;
    v15 = (unsigned __int64)&v13[8 * ((unsigned __int64)v14 >> 6)];
    v16 = (unsigned __int64)v12 >> 6;
    v17 = *(_QWORD *)&v13[8 * v16];
    v18 = &v13[8 * v16];
    v19 = ~v17 | ((1LL << (v12 & 0x3F)) - 1);
    if ( NumberToFind > 0x7F )
    {
      v32 = v15 + 8;
      if ( (v14 & 0x3F) == 0 )
        v32 = (unsigned __int64)&v13[8 * ((unsigned __int64)(v11 - NumberToFind + 1) >> 6)];
      if ( v19 )
      {
        v33 = *((_QWORD *)v18 + 1);
        v18 += 8;
        if ( v33 != -1 )
          goto LABEL_68;
        v23 = !_BitScanReverse64((unsigned __int64 *)&v34, v19);
        if ( v23 )
          v35 = 64;
        else
          v35 = 63 - v34;
      }
      else
      {
        v35 = 0;
      }
      while ( 1 )
      {
        v21 = ((unsigned int)((v18 - v13) >> 3) << 6) - v35;
        if ( v21 > v14 )
          break;
        v36 = NumberToFind - v35;
        v37 = &v18[8 * ((unsigned __int64)(NumberToFind - v35) >> 6)];
        while ( 1 )
        {
          v18 += 8;
          if ( v18 == v37 )
            break;
          if ( *(_QWORD *)v18 != -1LL )
            goto LABEL_68;
        }
        v42 = v36 & 0x3F;
        if ( !v42 )
          goto LABEL_13;
        v23 = !_BitScanForward64((unsigned __int64 *)&v43, ~*(_QWORD *)v18);
        if ( v23 )
          LODWORD(v43) = 64;
        if ( (unsigned int)v43 >= v42 )
          goto LABEL_13;
        do
        {
LABEL_68:
          v44 = v18;
          if ( (unsigned __int64)v18 > v32 )
            goto LABEL_19;
          v45 = *((_QWORD *)v18 + 1);
          v18 += 8;
        }
        while ( v45 != -1 );
        v23 = !_BitScanReverse64((unsigned __int64 *)&v46, ~*(_QWORD *)v44);
        if ( v23 )
          v35 = 64;
        else
          v35 = 63 - v46;
      }
LABEL_19:
      v21 = -1;
      goto LABEL_20;
    }
    if ( NumberToFind < 0x40 )
    {
      if ( NumberToFind > 1 )
      {
        v27 = 0;
        v28 = &v13[8 * ((unsigned __int64)v11 >> 6)];
        while ( 1 )
        {
          if ( v19 == -1 )
          {
            while ( 1 )
            {
              v18 += 8;
              if ( (unsigned __int64)v18 > v15 )
                goto LABEL_19;
              v19 = ~*(_QWORD *)v18;
              if ( *(_QWORD *)v18 )
              {
                v27 = 0;
                break;
              }
            }
          }
          v23 = !_BitScanForward64((unsigned __int64 *)&v29, v19);
          if ( v23 )
            LODWORD(v29) = 64;
          if ( v27 + (int)v29 >= NumberToFind )
            break;
          v30 = NumberToFind;
          v31 = ~v19;
          while ( 1 )
          {
            v31 &= v31 >> (v30 >> 1);
            if ( !v31 )
              break;
            v30 -= v30 >> 1;
            if ( v30 <= 1 )
            {
              _BitScanForward64(&v31, v31);
              goto LABEL_35;
            }
          }
          if ( v18 == v28 )
            goto LABEL_19;
          v23 = !_BitScanReverse64((unsigned __int64 *)&v47, v19);
          if ( v23 )
          {
            v48 = *((_QWORD *)v18 + 1);
            v18 += 8;
            v19 = ~v48;
            v27 = 64;
          }
          else
          {
            v27 = 63 - v47;
            v19 = ~*((_QWORD *)v18 + 1);
            v18 += 8;
          }
        }
        LODWORD(v31) = -v27;
LABEL_35:
        v21 = ((unsigned int)((v18 - v13) >> 3) << 6) + v31;
        if ( v21 > v50 )
          goto LABEL_19;
LABEL_13:
        if ( v21 != -1 )
        {
          v21 -= v10;
          return v21;
        }
        goto LABEL_20;
      }
      while ( v19 == -1 )
      {
        v18 += 8;
        if ( (unsigned __int64)v18 > v15 )
          goto LABEL_19;
        v19 = ~*(_QWORD *)v18;
      }
      _BitScanForward64(&v20, ~v19);
      v21 = v20 + ((unsigned int)((v18 - v13) >> 3) << 6);
      if ( v21 <= v14 )
        goto LABEL_13;
      v21 = -1;
LABEL_20:
      Buffer = v49;
      goto LABEL_21;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v19 < 0 )
        {
          v18 += 8;
          if ( (unsigned __int64)v18 > v15 )
            goto LABEL_19;
          v19 = ~*(_QWORD *)v18;
        }
        v23 = !_BitScanReverse64((unsigned __int64 *)&v24, v19);
        if ( v23 )
          v25 = 64;
        else
          v25 = 63 - v24;
        v21 = (((unsigned int)((v18 - v13) >> 3) + 1) << 6) - v25;
        if ( v21 > v14 )
          goto LABEL_19;
        v38 = NumberToFind - v25;
        if ( NumberToFind == v25 )
          goto LABEL_13;
        v39 = *((_QWORD *)v18 + 1);
        v18 += 8;
        v19 = ~v39;
        if ( v38 >= 0x40 )
          break;
LABEL_60:
        v23 = !_BitScanForward64((unsigned __int64 *)&v41, v19);
        if ( v23 )
          LODWORD(v41) = 64;
        if ( (unsigned int)v41 >= v38 )
          goto LABEL_13;
      }
      if ( !v19 )
      {
        v38 -= 64;
        if ( !v38 )
          goto LABEL_13;
        v40 = *((_QWORD *)v18 + 1);
        v18 += 8;
        v19 = ~v40;
        goto LABEL_60;
      }
    }
  }
  return v4 & 0xFFFFFFF8;
}
