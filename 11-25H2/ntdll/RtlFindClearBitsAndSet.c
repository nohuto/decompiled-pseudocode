/*
 * XREFs of RtlFindClearBitsAndSet @ 0x1800CAE80
 * Callers:
 *     <none>
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

ULONG __cdecl RtlFindClearBitsAndSet(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  ULONG v3; // edi
  unsigned int SizeOfBitMap; // r13d
  PRTL_BITMAP v5; // rax
  unsigned int *Buffer; // r10
  __int64 v7; // r14
  unsigned int v8; // r9d
  __int64 v9; // rcx
  ULONG v10; // ebp
  int v11; // r12d
  unsigned int v12; // r11d
  ULONG v13; // edx
  char *v14; // rsi
  ULONG v15; // r15d
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // r10
  unsigned __int64 *v19; // r8
  int v20; // ecx
  unsigned __int64 *v21; // r11
  bool v22; // zf
  __int64 v23; // rax
  unsigned int v24; // r9d
  unsigned __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rax
  ULONG v28; // edi
  unsigned int v29; // r9d
  unsigned __int64 v30; // rax
  unsigned int v31; // edx
  __int64 v32; // rax
  __int64 v33; // rcx
  _BYTE *v34; // rsi
  __int64 v36; // rax
  int v37; // ecx
  unsigned int v38; // edx
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 *v42; // rax
  __int64 v43; // r9
  int v44; // edx
  unsigned __int64 v45; // rax
  char v46; // dl
  unsigned __int64 *v47; // r9
  __int64 v48; // rax
  __int64 v49; // [rsp+20h] [rbp-58h]
  ULONG v51; // [rsp+90h] [rbp+18h]
  unsigned int *v52; // [rsp+98h] [rbp+20h]

  v51 = HintIndex;
  v3 = 0;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v5 = BitMapHeader;
  Buffer = BitMapHeader->Buffer;
  v7 = NumberToFind;
  if ( HintIndex < BitMapHeader->SizeOfBitMap )
    v3 = HintIndex;
  v52 = BitMapHeader->Buffer;
  v8 = SizeOfBitMap - 1;
  if ( !NumberToFind )
  {
    v28 = v3 & 0xFFFFFFF8;
    goto LABEL_45;
  }
  v9 = (__int64)BitMapHeader->Buffer & 4;
  v49 = v9;
  v10 = v3;
  v11 = (unsigned int)v9 != 0LL ? 0x20 : 0;
  while ( 1 )
  {
    v12 = v11 + v8;
    v13 = v11 + v10;
    v14 = (char *)Buffer - (v9 != 0 ? 4 : 0);
    if ( v8 - v10 + 1 >= (unsigned int)v7 )
    {
      v15 = v12 - v7 + 1;
      v16 = (unsigned __int64)&v14[8 * ((unsigned __int64)v15 >> 6)];
      v17 = (unsigned __int64)v13 >> 6;
      v18 = *(_QWORD *)&v14[8 * v17] | ((1LL << (v13 & 0x3F)) - 1);
      v19 = (unsigned __int64 *)&v14[8 * v17];
      if ( (unsigned int)v7 > 0x7F )
      {
        v41 = v16 + 8;
        if ( (v15 & 0x3F) == 0 )
          v41 = (unsigned __int64)&v14[8 * ((unsigned __int64)(v12 - (unsigned int)v7 + 1) >> 6)];
        if ( !v18 )
        {
          v44 = 0;
          goto LABEL_79;
        }
        if ( !*++v19 )
        {
          v22 = !_BitScanReverse64((unsigned __int64 *)&v48, v18);
          if ( v22 )
            v44 = 64;
          else
            v44 = 63 - v48;
          goto LABEL_79;
        }
LABEL_75:
        while ( 1 )
        {
          v42 = v19;
          if ( (unsigned __int64)v19 > v41 )
            goto LABEL_26;
          if ( !*++v19 )
          {
            v22 = !_BitScanReverse64((unsigned __int64 *)&v43, *v42);
            if ( v22 )
              v44 = 64;
            else
              v44 = 63 - v43;
LABEL_79:
            v28 = ((unsigned int)(((char *)v19 - v14) >> 3) << 6) - v44;
            if ( v28 > v15 )
              goto LABEL_26;
            v45 = (unsigned int)(v7 - v44);
            v46 = v7 - v44;
            v47 = &v19[v45 >> 6];
            while ( ++v19 != v47 )
            {
              if ( *v19 )
                goto LABEL_75;
            }
            v31 = v46 & 0x3F;
            if ( !v31 )
              goto LABEL_42;
            v22 = !_BitScanForward64((unsigned __int64 *)&v32, *v19);
            if ( v22 )
              LODWORD(v32) = 64;
            if ( (unsigned int)v32 >= v31 )
              goto LABEL_42;
          }
        }
      }
      if ( (unsigned int)v7 < 0x40 )
      {
        if ( (unsigned int)v7 <= 1 )
        {
          while ( v18 == -1 )
          {
            if ( (unsigned __int64)++v19 > v16 )
              goto LABEL_26;
            v18 = *v19;
          }
          _BitScanForward64(&v30, ~v18);
          v28 = v30 + ((unsigned int)(((char *)v19 - v14) >> 3) << 6);
          if ( v28 <= v15 )
          {
LABEL_42:
            if ( v28 != -1 )
            {
              v28 -= v11;
              break;
            }
          }
          else
          {
            v28 = -1;
          }
LABEL_27:
          Buffer = v52;
          HintIndex = v51;
          goto LABEL_28;
        }
        v20 = 0;
        v21 = (unsigned __int64 *)&v14[8 * ((unsigned __int64)v12 >> 6)];
        while ( 1 )
        {
          if ( v18 == -1 )
          {
            while ( 1 )
            {
              if ( (unsigned __int64)++v19 > v16 )
                goto LABEL_26;
              v18 = *v19;
              if ( *v19 != -1LL )
              {
                v20 = 0;
                break;
              }
            }
          }
          v22 = !_BitScanForward64((unsigned __int64 *)&v23, v18);
          if ( v22 )
            LODWORD(v23) = 64;
          if ( v20 + (int)v23 >= (unsigned int)v7 )
            break;
          v24 = v7;
          v25 = ~v18;
          while ( 1 )
          {
            v25 &= v25 >> (v24 >> 1);
            if ( !v25 )
              break;
            v24 -= v24 >> 1;
            if ( v24 <= 1 )
            {
              _BitScanForward64((unsigned __int64 *)&v26, v25);
              goto LABEL_25;
            }
          }
          if ( v19 == v21 )
            goto LABEL_26;
          v22 = !_BitScanReverse64((unsigned __int64 *)&v27, v18);
          v18 = v19[1];
          if ( v22 )
          {
            ++v19;
            v20 = 64;
          }
          else
          {
            v20 = 63 - v27;
            ++v19;
          }
        }
        LODWORD(v26) = -v20;
LABEL_25:
        v28 = ((unsigned int)(((char *)v19 - v14) >> 3) << 6) + v26;
        if ( v28 <= v15 )
          goto LABEL_42;
LABEL_26:
        v28 = -1;
        goto LABEL_27;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v18 < 0 )
          {
            if ( (unsigned __int64)++v19 > v16 )
              goto LABEL_26;
            v18 = *v19;
          }
          v22 = !_BitScanReverse64((unsigned __int64 *)&v36, v18);
          if ( v22 )
            v37 = 64;
          else
            v37 = 63 - v36;
          v28 = (((unsigned int)(((char *)v19 - v14) >> 3) + 1) << 6) - v37;
          if ( v28 > v15 )
            goto LABEL_26;
          v38 = v7 - v37;
          if ( (_DWORD)v7 == v37 )
            goto LABEL_42;
          v39 = v19[1];
          ++v19;
          v18 = v39;
          if ( v38 >= 0x40 )
            break;
LABEL_62:
          v22 = !_BitScanForward64((unsigned __int64 *)&v40, v18);
          if ( v22 )
            LODWORD(v40) = 64;
          if ( (unsigned int)v40 >= v38 )
            goto LABEL_42;
        }
        if ( !v39 )
        {
          v38 -= 64;
          if ( !v38 )
            goto LABEL_42;
          v18 = v19[1];
          ++v19;
          goto LABEL_62;
        }
      }
    }
    v28 = -1;
LABEL_28:
    if ( !v10 )
      break;
    v9 = v49;
    v29 = v7 + HintIndex;
    if ( (unsigned int)v7 + HintIndex > SizeOfBitMap )
      v29 = SizeOfBitMap;
    v8 = v29 - 1;
    v10 = 0;
  }
  v5 = BitMapHeader;
LABEL_45:
  if ( v28 != -1 && (_DWORD)v7 )
  {
    v33 = v28 & 7;
    v34 = (char *)v5->Buffer + ((unsigned __int64)v28 >> 3);
    if ( (unsigned int)(v33 + v7) > 8 )
    {
      if ( (v28 & 7) != 0 )
      {
        v7 = (unsigned int)(v33 + v7 - 8);
        *v34++ |= byte_180181958[v33];
      }
      if ( (unsigned int)v7 > 8 )
      {
        memset_thunk_772440563353939046(v34, 255, (unsigned __int64)(unsigned int)v7 >> 3);
        v34 += (unsigned __int64)(unsigned int)v7 >> 3;
        v7 &= 7u;
      }
      if ( (_DWORD)v7 )
        *v34 |= byte_180194138[v7];
    }
    else
    {
      *v34 |= byte_180194138[v7] << v33;
    }
  }
  return v28;
}
