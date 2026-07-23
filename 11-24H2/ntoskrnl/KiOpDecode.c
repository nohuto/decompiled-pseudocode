/*
 * XREFs of KiOpDecode @ 0x1403F5100
 * Callers:
 *     KiPreprocessFault @ 0x1403F4D80 (KiPreprocessFault.c)
 * Callees:
 *     KiOpDecodeModRM @ 0x1403F559C (KiOpDecodeModRM.c)
 *     KiOpFetchBytes @ 0x1403F5688 (KiOpFetchBytes.c)
 *     KiOpFetchNextByte @ 0x1403F56D0 (KiOpFetchNextByte.c)
 */

__int64 __fastcall KiOpDecode(__int64 a1, __int64 a2, char a3, int a4, __int64 a5)
{
  __int64 v7; // rdi
  char v8; // bl
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 i; // rdx
  __int64 v12; // r9
  char v13; // r11
  int v14; // r10d
  int v15; // esi
  __int64 v16; // r8
  __int64 v17; // rcx
  char v18; // al
  __int64 *v19; // rsi
  __int64 *v20; // rbx
  __int64 *v21; // rbx
  unsigned __int8 v22; // cl
  int v23; // ecx
  __int64 v24; // rbx
  int v25; // eax
  int v26; // ecx
  _BYTE *v27; // r14
  char v28; // cl
  char v29; // cl
  char v30; // al
  int v31; // esi
  char *v32; // rbx
  __int64 v33; // rax
  int v34; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int8 v35; // [rsp+60h] [rbp+18h] BYREF
  char v36; // [rsp+68h] [rbp+20h] BYREF

  v7 = a5;
  v36 = 0;
  v8 = 0;
  v34 = 0;
  v35 = 0;
  LOWORD(a5) = 0;
  *(_OWORD *)v7 = 0LL;
  *(_OWORD *)(v7 + 16) = 0LL;
  *(_OWORD *)(v7 + 32) = 0LL;
  *(_OWORD *)(v7 + 48) = 0LL;
  *(_OWORD *)(v7 + 64) = 0LL;
  *(_OWORD *)(v7 + 80) = 0LL;
  *(_OWORD *)(v7 + 96) = 0LL;
  *(_DWORD *)(v7 + 60) = a4;
  v9 = *(_QWORD *)(a2 + 248);
  *(_QWORD *)v7 = v9;
  *(_QWORD *)(v7 + 16) = v9;
  *(_QWORD *)(v7 + 8) = v9 + 16;
  *(_QWORD *)(v7 + 32) = a1;
  *(_QWORD *)(v7 + 24) = a2;
  *(_BYTE *)(v7 + 81) = a3;
  *(_BYTE *)(v7 + 97) = 0;
  if ( *(_WORD *)(a2 + 56) == 35 )
    *(_BYTE *)(v7 + 58) = 1;
  do
  {
    result = KiOpFetchNextByte(v7, &v35);
    if ( (int)result < 0 )
      return result;
    v12 = 0LL;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = v35;
    if ( !*(_BYTE *)(v7 + 58) && (v35 & 0xF0) == 0x40 )
    {
      v14 = 2048;
      *(_BYTE *)(v7 + 64) = v35;
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < 0xB; i = (unsigned int)(i + 1) )
      {
        v17 = 12LL * (unsigned int)i;
        if ( *((_BYTE *)KiOpPrefixTable + v17) == v35 )
        {
          v14 = *(_DWORD *)((char *)KiOpPrefixTable + v17 + 4);
          v15 = *(_DWORD *)((char *)&KiOpPrefixTable[1] + v17);
          break;
        }
      }
    }
    if ( !v14 )
      goto LABEL_12;
    v25 = *(_DWORD *)(v7 + 48);
    if ( (v25 & v14) == 0 )
    {
      v26 = *(_DWORD *)(v7 + 52);
      if ( (v26 & v15) == 0 )
      {
        *(_DWORD *)(v7 + 48) = v14 | v25;
        *(_DWORD *)(v7 + 52) = v15 | v26;
        v13 = 1;
LABEL_12:
        v8 = v13;
        goto LABEL_13;
      }
    }
    v12 = 3221225501LL;
LABEL_13:
    if ( (int)v12 < 0 )
      return (unsigned int)v12;
  }
  while ( v8 );
  if ( (_BYTE)v16 != 15 )
    goto LABEL_16;
  *(_BYTE *)(v7 + 57) = 1;
  result = KiOpFetchNextByte(v7, &v35);
  v12 = (unsigned int)result;
  if ( (int)result >= 0 )
  {
    v16 = v35;
LABEL_16:
    *(_QWORD *)(v7 + 40) = *(_QWORD *)(v7 + 16) - 1LL;
    *(_BYTE *)(v7 + 56) = v16;
    if ( (a4 & 0x8000000) == 0 )
    {
      v18 = *(_BYTE *)(v7 + 57);
      v19 = &qword_1400027C8;
      if ( v18 )
        v19 = &qword_140002A28;
      v20 = KiOpOneByteTable;
      if ( v18 )
        v20 = KiOpTwoByteTable;
      v21 = v20 - 3;
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_22:
          v21 += 3;
          if ( v21 == v19 )
          {
LABEL_31:
            v12 = 0LL;
            goto LABEL_32;
          }
          v22 = *(_BYTE *)(v7 + 56);
          if ( v22 >= *(_BYTE *)v21 && v22 <= (unsigned __int8)(*((_BYTE *)v21 + 1) + *(_BYTE *)v21 - 1) )
          {
            v23 = *((_DWORD *)v21 + 1);
            if ( !v23 || (v23 & *(_DWORD *)(v7 + 48)) != 0 )
              break;
          }
        }
        if ( *((_BYTE *)v21 + 8) == 0xFF && *((_BYTE *)v21 + 9) == 0xFF && *((_BYTE *)v21 + 10) == 0xFF )
          goto LABEL_29;
        v27 = (_BYTE *)(v7 + 65);
        if ( !*(_BYTE *)(v7 + 80) )
        {
          result = KiOpFetchNextByte(v7, v7 + 65);
          if ( (int)result < 0 )
            return result;
          *(_BYTE *)(v7 + 80) = 1;
        }
        v28 = *((_BYTE *)v21 + 8);
        if ( v28 == -1 || v28 == ((*v27 >> 3) & 7) )
        {
          v29 = *((_BYTE *)v21 + 10);
          if ( v29 == -1 || v29 == (*v27 & 7) )
          {
            v30 = *((_BYTE *)v21 + 9);
            if ( v30 != -1 )
            {
              if ( *v27 >> 6 == 3 )
              {
                if ( v30 != 3 )
                  goto LABEL_22;
              }
              else if ( v30 == 3 )
              {
                goto LABEL_22;
              }
            }
LABEL_29:
            if ( (*((_DWORD *)v21 + 3) & 0xF4000000) == 0
              || (*((_DWORD *)v21 + 3) & 0xF4000000 & *(_DWORD *)(v7 + 60)) != 0 )
            {
              *(_QWORD *)(v7 + 88) = v21;
              goto LABEL_31;
            }
          }
        }
      }
    }
    *(_QWORD *)(v7 + 88) = 0LL;
LABEL_32:
    v24 = *(_QWORD *)(v7 + 88);
    if ( !v24 )
      return 0LL;
    if ( (*(_DWORD *)(v24 + 12) & 4) == 0
      || (result = KiOpDecodeModRM(v7, i, v16, v12), v12 = (unsigned int)result, (int)result >= 0) )
    {
      if ( (*(_DWORD *)(v24 + 12) & 1) != 0 )
      {
        v31 = 1;
        v32 = &v36;
        while ( 1 )
        {
          result = KiOpFetchNextByte(v7, v32);
          if ( (int)result < 0 )
            break;
          ++v32;
          if ( !--v31 )
          {
            LODWORD(v12) = 0;
            v33 = v36;
            goto LABEL_66;
          }
        }
      }
      else
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v7 + 88) + 12LL) & 2) == 0 )
          return (unsigned int)v12;
        if ( (*(_DWORD *)(v7 + 48) & 0x40) != 0 )
        {
          result = KiOpFetchBytes(v7, 2LL, &a5, v12);
          LODWORD(v12) = result;
          if ( (int)result >= 0 )
          {
            v33 = (__int16)a5;
LABEL_66:
            *(_QWORD *)(v7 + 72) = v33;
            return (unsigned int)v12;
          }
        }
        else
        {
          result = KiOpFetchBytes(v7, 4LL, &v34, v12);
          LODWORD(v12) = result;
          if ( (int)result >= 0 )
          {
            v33 = v34;
            goto LABEL_66;
          }
        }
      }
    }
  }
  return result;
}
