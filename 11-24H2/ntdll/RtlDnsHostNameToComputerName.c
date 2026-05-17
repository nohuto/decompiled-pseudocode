/*
 * XREFs of RtlDnsHostNameToComputerName @ 0x1800D3E90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsUtf8Process @ 0x180070CD0 (RtlpIsUtf8Process.c)
 *     NLS_UPCASE @ 0x1800AF6C0 (NLS_UPCASE.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x1800B2240 (UpcaseUnicodeToUTF8NHelper.c)
 *     RtlOemStringToUnicodeString @ 0x1800D40E0 (RtlOemStringToUnicodeString.c)
 *     RtlpDidUnicodeToOemWork @ 0x1800D4484 (RtlpDidUnicodeToOemWork.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x1800D45B0 (UpcaseUnicodeToSingleByteNHelper.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlDnsHostNameToComputerName(__int64 a1, __m128i *a2, char a3)
{
  unsigned int v3; // ebx
  char v4; // si
  __int64 v5; // r14
  unsigned int v6; // ecx
  __m128i v7; // xmm0
  unsigned __int16 v8; // dx
  unsigned int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  __int16 v13; // r10
  __int64 v14; // r8
  int v15; // eax
  unsigned __int16 *v16; // rsi
  int v17; // r11d
  __int64 v18; // r12
  _BYTE *v19; // r10
  __int64 v20; // r14
  __int64 v21; // r13
  __int64 v22; // r15
  __int64 v23; // rax
  unsigned __int16 v24; // dx
  unsigned __int64 v25; // rax
  unsigned __int16 v26; // dx
  __int64 v27; // r9
  unsigned int v28; // r11d
  __int16 v29; // dx
  unsigned int v30; // eax
  signed __int32 v31[8]; // [rsp+0h] [rbp-69h] BYREF
  char v32; // [rsp+40h] [rbp-29h]
  int v33; // [rsp+44h] [rbp-25h] BYREF
  __m128i v34; // [rsp+48h] [rbp-21h] BYREF
  __int128 v35; // [rsp+58h] [rbp-11h] BYREF
  __int64 v36; // [rsp+68h] [rbp-1h]
  _BYTE v37[16]; // [rsp+70h] [rbp+7h] BYREF

  v3 = 0;
  v32 = a3;
  v36 = a1;
  v4 = a3;
  v33 = 0;
  v35 = 0LL;
  v5 = a1;
  v6 = 0;
  v7 = *a2;
  v8 = _mm_cvtsi128_si32(*a2);
  v34 = v7;
  while ( v6 < v8 >> 1 )
  {
    if ( *(_WORD *)(v7.m128i_i64[1] + 2LL * v6) == 46 )
    {
      v8 = 2 * v6;
      v34.m128i_i16[0] = 2 * v6;
      break;
    }
    ++v6;
  }
  if ( v8 < 2u )
    return 3221225762LL;
  v9 = v8 >> 1;
  if ( RtlpIsUtf8Process() )
  {
    result = UpcaseUnicodeToUTF8NHelper(v37, 15, &v33, v11, v9);
  }
  else
  {
    _InterlockedOr(v31, 0);
    if ( word_1801CCFDC )
    {
      v16 = (unsigned __int16 *)v34.m128i_i64[1];
      v17 = 15;
      v18 = qword_1801CCFB0;
      v19 = v37;
      v20 = qword_1801CCFB8;
      v21 = qword_1801CD020;
      if ( v9 )
      {
        v22 = qword_1801CCFC8;
        do
        {
          if ( !v17 )
            break;
          v23 = *v16;
          v16 = (unsigned __int16 *)((char *)v16 + v10);
          v24 = *(_WORD *)(v20 + 2 * v23);
          v25 = (unsigned __int64)v24 >> 8;
          if ( *(_WORD *)(v21 + 2 * v25) )
            v26 = *(_WORD *)(v22 + 2 * ((unsigned __int8)v24 + (unsigned __int64)*(unsigned __int16 *)(v21 + 2 * v25)));
          else
            v26 = *(_WORD *)(v18 + 2LL * (unsigned __int8)v24);
          v27 = NLS_UPCASE(qword_1801CD038, v26);
          v10 = 2LL;
          v29 = *(_WORD *)(v20 + 2 * v27);
          if ( HIBYTE(v29) )
          {
            v30 = v28--;
            if ( v30 < 2 )
              break;
            *v19++ = HIBYTE(v29);
          }
          *v19 = v29;
          v17 = v28 - 1;
          LOWORD(v19) = (_WORD)v19 + 1;
          --v9;
        }
        while ( v9 );
      }
      v4 = v32;
      v5 = v36;
      v13 = (_WORD)v19 - (unsigned __int16)v37;
      goto LABEL_11;
    }
    result = UpcaseUnicodeToSingleByteNHelper(
               (unsigned int)v37,
               15,
               (unsigned int)&v33,
               v34.m128i_i32[2],
               v9,
               qword_1801CCFF8,
               qword_1801CCFF0);
  }
  if ( (int)result < 0 && (_DWORD)result != -2147483643 )
    return result;
  v13 = v33;
LABEL_11:
  LOWORD(v35) = v13;
  *((_QWORD *)&v35 + 1) = v37;
  WORD1(v35) = 16;
  if ( !(unsigned __int8)RtlpDidUnicodeToOemWork(&v35, &v34) )
    return 3221225762LL;
  LOBYTE(v14) = v4;
  v15 = RtlOemStringToUnicodeString(v5, &v35, v14);
  if ( v15 < 0 )
    return (unsigned int)v15;
  return v3;
}
