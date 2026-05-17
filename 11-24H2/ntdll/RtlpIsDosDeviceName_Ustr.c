/*
 * XREFs of RtlpIsDosDeviceName_Ustr @ 0x18005D050
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x18005BA20 (RtlGetFullPathName_Ustr.c)
 *     RtlIsDosDeviceName_U @ 0x1800E46F0 (RtlIsDosDeviceName_U.c)
 *     RtlSetCurrentDirectory_U @ 0x1800FAB90 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18008BA40 (RtlEqualUnicodeString.c)
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x180116E44 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 *     iswdigit @ 0x180124A90 (iswdigit.c)
 */

__int64 __fastcall RtlpIsDosDeviceName_Ustr(__m128i *a1)
{
  __int16 v1; // dx
  int v2; // ebx
  __int16 *v3; // rax
  __int16 v5; // r10
  __int16 v6; // r8
  __int16 v7; // cx
  __m128i v8; // xmm0
  __int64 v9; // r9
  __int64 v10; // r8
  unsigned __int16 v11; // dx
  unsigned __int64 v12; // xmm0_8
  unsigned __int16 *v13; // rdi
  __int16 v14; // cx
  int v15; // r14d
  _WORD *i; // rax
  __int16 v17; // cx
  unsigned __int16 *v18; // rax
  unsigned __int16 v19; // cx
  __int16 v20; // cx
  unsigned __int16 v21; // cx
  unsigned __int16 v22; // ax
  unsigned __int16 *j; // rsi
  unsigned __int16 *v24; // rcx
  unsigned __int16 *v25; // rdx
  unsigned __int16 *v26; // rax
  __int64 v27; // rsi
  __int16 v28; // bp
  __int16 v30; // cx
  __int16 v31; // cx
  __int16 v32; // cx
  int v33; // ecx
  unsigned __int16 *v34; // r10
  char *v35; // r11
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // r9
  void *v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // ecx
  __int64 v46; // r8
  __int64 v47; // r9
  __m128i v48; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1->m128i_i16[0];
  v2 = 0;
  v3 = (__int16 *)a1->m128i_i64[1];
  v5 = 0;
  if ( a1->m128i_i16[0] >= 2u )
  {
    v6 = *v3;
    if ( *v3 == 92 || v6 == 47 )
    {
      if ( (unsigned __int16)v1 >= 4u && ((v30 = v3[1], v30 == 92) || v30 == 47) )
      {
        if ( (unsigned __int16)v1 >= 6u )
        {
          v31 = v3[2];
          if ( v31 == 46 || v31 == 63 )
          {
            if ( (unsigned __int16)v1 < 8u )
            {
              if ( v1 == 6 )
                goto LABEL_9;
            }
            else
            {
              v32 = v3[3];
              if ( v32 == 92 || v32 == 47 )
                return 0LL;
            }
          }
        }
        v33 = 1;
      }
      else
      {
        v33 = 4;
      }
    }
    else
    {
      if ( (unsigned __int16)v1 < 4u )
        goto LABEL_9;
      if ( !v6 )
        goto LABEL_9;
      if ( v3[1] != 58 )
        goto LABEL_9;
      if ( (unsigned __int16)v1 >= 6u )
      {
        v7 = v3[2];
        if ( v7 == 92 || v7 == 47 )
          goto LABEL_9;
      }
      v33 = 3;
    }
    v45 = v33 - 1;
    if ( !v45 || v45 == 5 )
      return 0LL;
  }
LABEL_9:
  v8 = *a1;
  v9 = (unsigned int)_mm_cvtsi128_si32(*a1);
  v48 = v8;
  v10 = (unsigned __int16)v9;
  v11 = (unsigned __int16)v9 >> 1;
  if ( !((unsigned __int16)v9 >> 1) )
    return 0LL;
  v12 = _mm_srli_si128(v8, 8).m128i_u64[0];
  v13 = (unsigned __int16 *)v12;
  if ( *(_WORD *)(v12 + 2LL * v11 - 2) == 58 )
  {
    v9 = (unsigned int)(unsigned __int16)v9 - 2;
    v5 = 1;
    if ( !--v11 )
      return 0LL;
  }
  do
  {
    v14 = *(_WORD *)(v12 + 2LL * v11 - 2);
    if ( v14 != 46 && v14 != 32 )
      break;
    LOWORD(v9) = v9 - 2;
    ++v5;
    --v11;
  }
  while ( v11 );
  v15 = 0;
  if ( v11 )
  {
    for ( i = (_WORD *)(v12 + 2 * (v11 - 1LL)); ; --i )
    {
      if ( (unsigned __int64)i < v12 )
      {
        v9 = 43013LL;
        goto LABEL_25;
      }
      v17 = *i;
      if ( *i == 92 || v17 == 47 || v17 == 58 && i == (_WORD *)(v12 + 2) )
        break;
    }
    v18 = i + 1;
    v2 = 1;
    if ( (unsigned __int64)v18 >= v12 + (v10 & 0xFFFFFFFFFFFFFFFEuLL) )
      return 0LL;
    v19 = (*v18 | 0x20) - 97;
    if ( v19 > 0xFu )
      return 0LL;
    v9 = 43013LL;
    if ( !_bittest((const int *)&v9, v19) )
      return 0LL;
    v20 = v48.m128i_i16[4];
    v15 = (_DWORD)v18 - v48.m128i_i32[2];
    v48.m128i_i64[1] = (__int64)v18;
    v13 = v18;
    v21 = v10 + v20 - (_WORD)v18;
    v11 = (v21 >> 1) - v5;
    v48.m128i_i16[0] = v21 - 2 * v5;
LABEL_25:
    v22 = (*v13 | 0x20) - 97;
    if ( v22 > 0xFu || !_bittest((const int *)&v9, v22) )
      return 0LL;
  }
  for ( j = v13; j < &v13[v11]; ++j )
  {
    if ( *j == 46 || *j == 58 )
    {
      v24 = j + 1;
      v25 = &v13[v11];
      while ( v24 < v25 )
      {
        if ( *v24 != 32 )
        {
          v2 |= 2u;
          goto LABEL_36;
        }
        ++v24;
      }
      break;
    }
  }
LABEL_36:
  if ( j > v13 )
  {
    do
    {
      v26 = j - 1;
      if ( *(j - 1) != 32 )
        break;
      --j;
    }
    while ( v26 > v13 );
  }
  v27 = j - v13;
  v28 = 2 * v27;
  v48.m128i_i16[0] = 2 * v27;
  switch ( (unsigned __int16)v27 )
  {
    case 3u:
      LOBYTE(v10) = 1;
      if ( (unsigned __int8)((__int64 (__fastcall *)(__m128i *, void *, __int64, __int64))RtlEqualUnicodeString)(
                              &v48,
                              &RtlpDosNULDevice,
                              v10,
                              v9) )
      {
        v2 |= 4u;
      }
      else
      {
        LOBYTE(v39) = 1;
        if ( !(unsigned __int8)((__int64 (__fastcall *)(__m128i *, void *, __int64, __int64))RtlEqualUnicodeString)(
                                 &v48,
                                 &RtlpDosPRNDevice,
                                 v39,
                                 v40) )
        {
          LOBYTE(v41) = 1;
          if ( !(unsigned __int8)((__int64 (__fastcall *)(__m128i *, void *, __int64, __int64))RtlEqualUnicodeString)(
                                   &v48,
                                   &RtlpDosAUXDevice,
                                   v41,
                                   v42) )
          {
            LOBYTE(v43) = 1;
            if ( !(unsigned __int8)((__int64 (__fastcall *)(__m128i *, void *, __int64, __int64))RtlEqualUnicodeString)(
                                     &v48,
                                     &RtlpDosCONDevice,
                                     v43,
                                     v44) )
              return 0LL;
          }
        }
      }
      goto LABEL_73;
    case 4u:
      if ( !iswdigit(v13[3]) || v13[3] == 48 )
        return 0LL;
      LOBYTE(v46) = 1;
      v48.m128i_i16[0] = v28 - 2;
      if ( (unsigned __int8)((__int64 (__fastcall *)(__m128i *, void *, __int64, __int64))RtlEqualUnicodeString)(
                              &v48,
                              &RtlpDosLPTDevice,
                              v46,
                              v47) )
        goto LABEL_73;
      v38 = &RtlpDosCOMDevice;
      break;
    case 6u:
      v38 = &RtlpDosCONINDevice;
      break;
    default:
      if ( (unsigned __int16)v27 != 7 || v28 != 14 )
        return 0LL;
      v34 = v13 + 7;
      v35 = (char *)((char *)L"CONOUT$" - (char *)v13);
      while ( v13 < v34 )
      {
        v36 = *v13;
        v37 = *(unsigned __int16 *)((char *)v13 + (_QWORD)v35);
        if ( (_WORD)v36 != (_WORD)v37 )
        {
          if ( (unsigned int)v36 >= 0x61 )
          {
            if ( (unsigned int)v36 > 0x7A )
            {
              if ( qword_1801CD038 && (unsigned __int16)v36 >= 0xC0u )
                LOWORD(v36) = *(_WORD *)(qword_1801CD038
                                       + 2
                                       * ((v36 & 0xF)
                                        + *(unsigned __int16 *)(qword_1801CD038
                                                              + 2LL
                                                              * (((unsigned __int8)v36 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(qword_1801CD038 + 2 * (v36 >> 8))))))
                            + v36;
            }
            else
            {
              LOWORD(v36) = v36 - 32;
            }
          }
          if ( (unsigned int)v37 >= 0x61 )
          {
            if ( (unsigned int)v37 > 0x7A )
            {
              if ( qword_1801CD038 )
              {
                if ( (unsigned __int16)v37 >= 0xC0u )
                  LOWORD(v37) = *(_WORD *)(qword_1801CD038
                                         + 2
                                         * ((v37 & 0xF)
                                          + *(unsigned __int16 *)(qword_1801CD038
                                                                + 2LL
                                                                * (((unsigned __int8)v37 >> 4)
                                                                 + (unsigned int)*(unsigned __int16 *)(qword_1801CD038 + 2 * (v37 >> 8))))))
                              + v37;
              }
            }
            else
            {
              LOWORD(v37) = v37 - 32;
            }
          }
          if ( (_WORD)v36 != (_WORD)v37 )
            return 0LL;
        }
        ++v13;
      }
      goto LABEL_73;
  }
  LOBYTE(v10) = 1;
  if ( !(unsigned __int8)((__int64 (__fastcall *)(__m128i *, void *, __int64, __int64))RtlEqualUnicodeString)(
                           &v48,
                           v38,
                           v10,
                           v9) )
    return 0LL;
LABEL_73:
  if ( v2 && (v2 & 6) != 4 && !(unsigned __int8)RtlpAreLegacyDosDeviceNamesEnabled() )
    return 0LL;
  return (2 * (unsigned __int16)v27) | (unsigned int)(v15 << 16);
}
