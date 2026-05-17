/*
 * XREFs of RtlDnsHostNameToComputerName @ 0x1800D7360
 * Callers:
 *     <none>
 * Callees:
 *     NLS_UPCASE @ 0x180069080 (NLS_UPCASE.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x18006BC00 (UpcaseUnicodeToUTF8NHelper.c)
 *     RtlpIsUtf8Process @ 0x1800718D0 (RtlpIsUtf8Process.c)
 *     RtlOemStringToUnicodeString @ 0x1800AA940 (RtlOemStringToUnicodeString.c)
 *     RtlpDidUnicodeToOemWork @ 0x1800D7734 (RtlpDidUnicodeToOemWork.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x1800D7860 (UpcaseUnicodeToSingleByteNHelper.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
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
  int v14; // eax
  unsigned __int16 *v15; // rsi
  int v16; // r11d
  __int64 v17; // r12
  _BYTE *v18; // r10
  __int64 v19; // r14
  __int64 v20; // r13
  __int64 v21; // r15
  __int64 v22; // rax
  unsigned __int16 v23; // dx
  unsigned __int64 v24; // rax
  unsigned __int16 v25; // dx
  __int64 v26; // r9
  unsigned int v27; // r11d
  __int16 v28; // dx
  unsigned int v29; // eax
  signed __int32 v30[8]; // [rsp+0h] [rbp-69h] BYREF
  char v31; // [rsp+40h] [rbp-29h]
  int v32; // [rsp+44h] [rbp-25h] BYREF
  __m128i v33; // [rsp+48h] [rbp-21h] BYREF
  __int128 v34; // [rsp+58h] [rbp-11h] BYREF
  __int64 v35; // [rsp+68h] [rbp-1h]
  _BYTE v36[16]; // [rsp+70h] [rbp+7h] BYREF

  v3 = 0;
  v31 = a3;
  v35 = a1;
  v4 = a3;
  v32 = 0;
  v34 = 0LL;
  v5 = a1;
  v6 = 0;
  v7 = *a2;
  v8 = _mm_cvtsi128_si32(*a2);
  v33 = v7;
  while ( v6 < v8 >> 1 )
  {
    if ( *(_WORD *)(v7.m128i_i64[1] + 2LL * v6) == 46 )
    {
      v8 = 2 * v6;
      v33.m128i_i16[0] = 2 * v6;
      break;
    }
    ++v6;
  }
  if ( v8 < 2u )
    return 3221225762LL;
  v9 = v8 >> 1;
  if ( RtlpIsUtf8Process() )
  {
    result = UpcaseUnicodeToUTF8NHelper(v36, 15, &v32, v11, v9);
  }
  else
  {
    _InterlockedOr(v30, 0);
    if ( word_1801CEFDC )
    {
      v15 = (unsigned __int16 *)v33.m128i_i64[1];
      v16 = 15;
      v17 = qword_1801CEFB0;
      v18 = v36;
      v19 = qword_1801CEFB8;
      v20 = qword_1801CF020;
      if ( v9 )
      {
        v21 = qword_1801CEFC8;
        do
        {
          if ( !v16 )
            break;
          v22 = *v15;
          v15 = (unsigned __int16 *)((char *)v15 + v10);
          v23 = *(_WORD *)(v19 + 2 * v22);
          v24 = (unsigned __int64)v23 >> 8;
          if ( *(_WORD *)(v20 + 2 * v24) )
            v25 = *(_WORD *)(v21 + 2 * ((unsigned __int8)v23 + (unsigned __int64)*(unsigned __int16 *)(v20 + 2 * v24)));
          else
            v25 = *(_WORD *)(v17 + 2LL * (unsigned __int8)v23);
          v26 = NLS_UPCASE(qword_1801CF038, v25);
          v10 = 2LL;
          v28 = *(_WORD *)(v19 + 2 * v26);
          if ( HIBYTE(v28) )
          {
            v29 = v27--;
            if ( v29 < 2 )
              break;
            *v18++ = HIBYTE(v28);
          }
          *v18 = v28;
          v16 = v27 - 1;
          LOWORD(v18) = (_WORD)v18 + 1;
          --v9;
        }
        while ( v9 );
      }
      v4 = v31;
      v5 = v35;
      v13 = (_WORD)v18 - (unsigned __int16)v36;
      goto LABEL_11;
    }
    result = UpcaseUnicodeToSingleByteNHelper(
               (unsigned int)v36,
               15,
               (unsigned int)&v32,
               v33.m128i_i32[2],
               v9,
               qword_1801CEFF8,
               qword_1801CEFF0);
  }
  if ( (int)result < 0 && (_DWORD)result != -2147483643 )
    return result;
  v13 = v32;
LABEL_11:
  LOWORD(v34) = v13;
  *((_QWORD *)&v34 + 1) = v36;
  WORD1(v34) = 16;
  if ( !(unsigned __int8)RtlpDidUnicodeToOemWork(&v34, &v33) )
    return 3221225762LL;
  v14 = RtlOemStringToUnicodeString(v5, (unsigned __int16 *)&v34, v4);
  if ( v14 < 0 )
    return (unsigned int)v14;
  return v3;
}
