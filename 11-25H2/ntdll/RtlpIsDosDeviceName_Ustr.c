/*
 * XREFs of RtlpIsDosDeviceName_Ustr @ 0x180018CB0
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180017680 (RtlGetFullPathName_Ustr.c)
 *     RtlSetCurrentDirectory_U @ 0x1800A11C0 (RtlSetCurrentDirectory_U.c)
 *     RtlIsDosDeviceName_U @ 0x1800E17B0 (RtlIsDosDeviceName_U.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1800B49D0 (RtlEqualUnicodeString.c)
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x18011A088 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 *     iswdigit @ 0x180126570 (iswdigit.c)
 */

__int64 __fastcall RtlpIsDosDeviceName_Ustr(__m128i *a1)
{
  __int16 v1; // dx
  int v2; // ebx
  __int16 *v3; // rax
  __int16 v5; // r10
  __int16 v6; // r8
  __int16 v7; // cx
  _UNICODE_STRING v8; // xmm0
  unsigned __int16 v9; // r9
  __int64 v10; // r8
  unsigned __int16 v11; // dx
  unsigned __int64 v12; // xmm0_8
  unsigned __int16 *v13; // rdi
  __int16 v14; // cx
  int v15; // r14d
  _WORD *i; // rax
  __int16 v17; // cx
  wchar_t *v18; // rax
  unsigned __int16 v19; // cx
  int v20; // r9d
  __int16 Buffer; // cx
  unsigned __int16 v22; // cx
  unsigned __int16 v23; // ax
  unsigned __int16 *j; // rsi
  unsigned __int16 *v25; // rcx
  unsigned __int16 *v26; // rdx
  unsigned __int16 *v27; // rax
  __int64 v28; // rsi
  __int16 v29; // bp
  __int16 v31; // cx
  __int16 v32; // cx
  __int16 v33; // cx
  int v34; // ecx
  unsigned __int16 *v35; // r10
  char *v36; // r11
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // r9
  _UNICODE_STRING *v39; // rdx
  int v40; // ecx
  _UNICODE_STRING String1; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1->m128i_i16[0];
  v2 = 0;
  v3 = (__int16 *)a1->m128i_i64[1];
  v5 = 0;
  if ( a1->m128i_i16[0] >= 2u )
  {
    v6 = *v3;
    if ( *v3 == 92 || v6 == 47 )
    {
      if ( (unsigned __int16)v1 >= 4u && ((v31 = v3[1], v31 == 92) || v31 == 47) )
      {
        if ( (unsigned __int16)v1 >= 6u )
        {
          v32 = v3[2];
          if ( v32 == 46 || v32 == 63 )
          {
            if ( (unsigned __int16)v1 < 8u )
            {
              if ( v1 == 6 )
                goto LABEL_9;
            }
            else
            {
              v33 = v3[3];
              if ( v33 == 92 || v33 == 47 )
                return 0LL;
            }
          }
        }
        v34 = 1;
      }
      else
      {
        v34 = 4;
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
      v34 = 3;
    }
    v40 = v34 - 1;
    if ( !v40 || v40 == 5 )
      return 0LL;
  }
LABEL_9:
  v8 = (_UNICODE_STRING)*a1;
  v9 = _mm_cvtsi128_si32(*a1);
  String1 = v8;
  v10 = v9;
  v11 = v9 >> 1;
  if ( !(v9 >> 1) )
    return 0LL;
  v12 = _mm_srli_si128((__m128i)v8, 8).m128i_u64[0];
  v13 = (unsigned __int16 *)v12;
  if ( *(_WORD *)(v12 + 2LL * v11 - 2) == 58 )
  {
    v9 -= 2;
    v5 = 1;
    if ( !--v11 )
      return 0LL;
  }
  do
  {
    v14 = *(_WORD *)(v12 + 2LL * v11 - 2);
    if ( v14 != 46 && v14 != 32 )
      break;
    v9 -= 2;
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
        v20 = 43013;
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
    v20 = 43013;
    if ( !_bittest(&v20, v19) )
      return 0LL;
    Buffer = (__int16)String1.Buffer;
    v15 = (_DWORD)v18 - LODWORD(String1.Buffer);
    String1.Buffer = v18;
    v13 = v18;
    v22 = v10 + Buffer - (_WORD)v18;
    v11 = (v22 >> 1) - v5;
    String1.Length = v22 - 2 * v5;
LABEL_25:
    v23 = (*v13 | 0x20) - 97;
    if ( v23 > 0xFu || !_bittest(&v20, v23) )
      return 0LL;
  }
  for ( j = v13; j < &v13[v11]; ++j )
  {
    if ( *j == 46 || *j == 58 )
    {
      v25 = j + 1;
      v26 = &v13[v11];
      while ( v25 < v26 )
      {
        if ( *v25 != 32 )
        {
          v2 |= 2u;
          goto LABEL_36;
        }
        ++v25;
      }
      break;
    }
  }
LABEL_36:
  if ( j > v13 )
  {
    do
    {
      v27 = j - 1;
      if ( *(j - 1) != 32 )
        break;
      --j;
    }
    while ( v27 > v13 );
  }
  v28 = j - v13;
  v29 = 2 * v28;
  String1.Length = 2 * v28;
  switch ( (unsigned __int16)v28 )
  {
    case 3u:
      if ( RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosNULDevice, 1u) )
      {
        v2 |= 4u;
      }
      else if ( !RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosPRNDevice, 1u)
             && !RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosAUXDevice, 1u)
             && !RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosCONDevice, 1u) )
      {
        return 0LL;
      }
      goto LABEL_73;
    case 4u:
      if ( !iswdigit(v13[3]) || v13[3] == 48 )
        return 0LL;
      String1.Length = v29 - 2;
      if ( RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosLPTDevice, 1u) )
        goto LABEL_73;
      v39 = (_UNICODE_STRING *)&RtlpDosCOMDevice;
      break;
    case 6u:
      v39 = (_UNICODE_STRING *)&RtlpDosCONINDevice;
      break;
    default:
      if ( (unsigned __int16)v28 != 7 || v29 != 14 )
        return 0LL;
      v35 = v13 + 7;
      v36 = (char *)((char *)L"CONOUT$" - (char *)v13);
      while ( v13 < v35 )
      {
        v37 = *v13;
        v38 = *(unsigned __int16 *)((char *)v13 + (_QWORD)v36);
        if ( (_WORD)v37 != (_WORD)v38 )
        {
          if ( (unsigned int)v37 >= 0x61 )
          {
            if ( (unsigned int)v37 > 0x7A )
            {
              if ( qword_1801CF038 && (unsigned __int16)v37 >= 0xC0u )
                LOWORD(v37) = *(_WORD *)(qword_1801CF038
                                       + 2
                                       * ((v37 & 0xF)
                                        + *(unsigned __int16 *)(qword_1801CF038
                                                              + 2LL
                                                              * (((unsigned __int8)v37 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(qword_1801CF038 + 2 * (v37 >> 8))))))
                            + v37;
            }
            else
            {
              LOWORD(v37) = v37 - 32;
            }
          }
          if ( (unsigned int)v38 >= 0x61 )
          {
            if ( (unsigned int)v38 > 0x7A )
            {
              if ( qword_1801CF038 )
              {
                if ( (unsigned __int16)v38 >= 0xC0u )
                  LOWORD(v38) = *(_WORD *)(qword_1801CF038
                                         + 2
                                         * ((v38 & 0xF)
                                          + *(unsigned __int16 *)(qword_1801CF038
                                                                + 2LL
                                                                * (((unsigned __int8)v38 >> 4)
                                                                 + (unsigned int)*(unsigned __int16 *)(qword_1801CF038 + 2 * (v38 >> 8))))))
                              + v38;
              }
            }
            else
            {
              LOWORD(v38) = v38 - 32;
            }
          }
          if ( (_WORD)v37 != (_WORD)v38 )
            return 0LL;
        }
        ++v13;
      }
      goto LABEL_73;
  }
  if ( !RtlEqualUnicodeString(&String1, v39, 1u) )
    return 0LL;
LABEL_73:
  if ( v2 && (v2 & 6) != 4 && !(unsigned __int8)RtlpAreLegacyDosDeviceNamesEnabled() )
    return 0LL;
  return (2 * (unsigned __int16)v28) | (unsigned int)(v15 << 16);
}
