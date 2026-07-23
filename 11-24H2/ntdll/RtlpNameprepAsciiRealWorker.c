/*
 * XREFs of RtlpNameprepAsciiRealWorker @ 0x1800B2E50
 * Callers:
 *     RtlpNameprepAsciiWorker @ 0x1800B1A80 (RtlpNameprepAsciiWorker.c)
 *     RtlIdnToAscii @ 0x1800B1ED0 (RtlIdnToAscii.c)
 *     RtlCanonicalizeDomainName @ 0x1800B2190 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     RtlpGetNormalization @ 0x1800B4004 (RtlpGetNormalization.c)
 *     RtlpValidateAsciiStd3AndLength @ 0x1800B4820 (RtlpValidateAsciiStd3AndLength.c)
 *     RtlNormalizeString @ 0x1800B49E0 (RtlNormalizeString.c)
 *     RtlpNormalizeStringWorker @ 0x1800B4A68 (RtlpNormalizeStringWorker.c)
 *     FindEmailAt @ 0x1800B4DD0 (FindEmailAt.c)
 *     punycode_encode @ 0x1800B5968 (punycode_encode.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

NTSTATUS __fastcall RtlpNameprepAsciiRealWorker(
        int a1,
        _WORD *a2,
        int a3,
        void *a4,
        LONG *a5,
        char a6,
        PWSTR DestinationString,
        char a8,
        _WORD *a9,
        char a10)
{
  LONG v11; // ebx
  _WORD *v12; // r15
  LONG *v13; // r14
  int v14; // esi
  int v15; // ebp
  int v16; // r12d
  bool v17; // di
  _WORD *v18; // rax
  __int64 v19; // rcx
  NTSTATUS result; // eax
  __int16 v21; // cx
  LONG v22; // edx
  LONG v23; // eax
  WCHAR *v24; // rcx
  LONG v25; // r12d
  bool v26; // zf
  WCHAR v27; // dx
  PWSTR v28; // rdi
  bool v29; // cc
  __int64 v30; // rax
  int EmailAt; // eax
  char v32; // [rsp+28h] [rbp-40h]
  int v33; // [rsp+30h] [rbp-38h]
  __int64 v34; // [rsp+38h] [rbp-30h] BYREF
  LONG DestinationStringLength; // [rsp+78h] [rbp+10h] BYREF

  v11 = a3;
  v12 = a2;
  if ( !a2 )
    return -1073741811;
  if ( a3 < -1 )
    return -1073741811;
  v13 = a5;
  if ( !a5 )
    return -1073741811;
  v14 = *a5;
  if ( *a5 < 0 || v14 > 0 && !a4 )
    return -1073741811;
  if ( (a1 & 0xFFFFFFF8) != 0 )
    return -1073741811;
  a8 = 0;
  v15 = a1 & 1;
  v16 = a1 & 4;
  v17 = (a1 & 2) != 0;
  a10 = v16 != 0;
  if ( a3 == -1 )
  {
    v18 = a2;
    v19 = 0x7FFFFFFFLL;
    do
    {
      if ( !*v18 )
        break;
      ++v18;
      --v19;
    }
    while ( v19 );
    if ( v19 )
    {
      v11 = 0x7FFFFFFF - v19 + 1;
      goto LABEL_14;
    }
    return -1073741811;
  }
LABEL_14:
  if ( v11 > 0 && !a2[v11 - 1] )
  {
    a8 = 1;
    --v11;
  }
  if ( (unsigned __int8)RtlpValidateAsciiStd3AndLength(a2, (unsigned int)v11, v16 != 0, v17) )
  {
    if ( v11 )
    {
      if ( !a8 )
        goto LABEL_21;
      goto LABEL_20;
    }
    return -1073740010;
  }
  v22 = 511;
  DestinationStringLength = 0;
  v23 = 0;
  v24 = DestinationString;
  if ( !v16 )
  {
    v25 = 0;
LABEL_37:
    if ( v23 >= v11 )
    {
LABEL_41:
      if ( v25 > 0 )
      {
        v27 = DestinationString[v25 - 1];
        if ( v27 == 46 )
        {
          v21 = v12[v11 - 1];
          if ( v21 != 46 && v21 != 12290 && v21 != -242 && v21 != -159 )
            goto LABEL_29;
        }
        else if ( !v27 )
        {
          goto LABEL_29;
        }
      }
      v12 = a9;
      v32 = v17;
      v28 = DestinationString;
      DestinationStringLength = 515;
      result = punycode_encode(DestinationString, a10, v32);
      v11 = DestinationStringLength;
      if ( DestinationStringLength )
      {
        if ( a6 )
        {
          if ( !a8 )
          {
LABEL_21:
            if ( a4 && v14 )
            {
              if ( v11 > v14 )
              {
LABEL_24:
                *v13 = 0;
                return -1073741789;
              }
              memmove(a4, v12, 2LL * v11);
            }
            *v13 = v11;
            return 0;
          }
          if ( DestinationStringLength < 515 )
          {
            v12[DestinationStringLength] = 0;
LABEL_20:
            ++v11;
            goto LABEL_21;
          }
          goto LABEL_29;
        }
        if ( !a8 )
        {
LABEL_58:
          if ( a4 && v14 )
          {
            if ( v25 > v14 )
              goto LABEL_24;
            memmove(a4, v28, 2LL * v25);
          }
          *v13 = v25;
          return 0;
        }
        if ( v25 <= 511 )
        {
          v30 = v25++;
          v28[v30] = 0;
          goto LABEL_58;
        }
LABEL_29:
        *v13 = 0;
        return -1073740010;
      }
      goto LABEL_54;
    }
    DestinationStringLength = v22;
    result = RtlNormalizeString(((v15 ^ 1) << 8) + 13, &v12[v23], v11 - v23, v24, &DestinationStringLength);
    v26 = result == 0;
    if ( result >= 0 )
    {
      if ( DestinationStringLength )
      {
        v25 += DestinationStringLength;
        goto LABEL_41;
      }
      v26 = result == 0;
    }
    if ( v26 || result == -1073741789 || result == -1073740009 )
      goto LABEL_69;
    v29 = DestinationStringLength <= 0;
    goto LABEL_53;
  }
  EmailAt = FindEmailAt(v12, (unsigned int)v11);
  v33 = EmailAt;
  if ( !EmailAt )
    goto LABEL_29;
  v34 = 0LL;
  v25 = 511;
  DestinationStringLength = 511;
  if ( EmailAt < -1 )
    goto LABEL_69;
  result = RtlpGetNormalization(1LL, &v34);
  if ( result >= 0 )
  {
    result = RtlpNormalizeStringWorker(
               v34,
               (_DWORD)v12,
               v33,
               (_DWORD)DestinationString,
               (__int64)&DestinationStringLength);
    if ( result < 0 )
    {
      v25 = DestinationStringLength;
    }
    else
    {
      v25 = DestinationStringLength;
      if ( DestinationStringLength )
      {
        v23 = v33;
        v22 = 511 - DestinationStringLength;
        v24 = &DestinationString[DestinationStringLength];
        goto LABEL_37;
      }
    }
    if ( !result )
      goto LABEL_69;
  }
  if ( result == -1073741789 || result == -1073740009 )
    goto LABEL_69;
  v29 = v25 <= 0;
LABEL_53:
  if ( !v29 )
LABEL_69:
    result = -1073740010;
LABEL_54:
  *v13 = 0;
  return result;
}
