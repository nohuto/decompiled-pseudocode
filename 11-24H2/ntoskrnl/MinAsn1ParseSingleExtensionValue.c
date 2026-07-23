/*
 * XREFs of MinAsn1ParseSingleExtensionValue @ 0x140827B30
 * Callers:
 *     I_MinCryptGetCertificateEKUs @ 0x1408255C8 (I_MinCryptGetCertificateEKUs.c)
 *     MinCryptParseRevocationList @ 0x140826290 (MinCryptParseRevocationList.c)
 *     MincryptValidateBasicConstraints @ 0x140826644 (MincryptValidateBasicConstraints.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     MinAsn1ExtractContent @ 0x140828A80 (MinAsn1ExtractContent.c)
 *     MinAsn1ExtractValues @ 0x140828BE4 (MinAsn1ExtractValues.c)
 */

__int64 __fastcall MinAsn1ParseSingleExtensionValue(__int64 a1, unsigned int *a2, char *a3, _OWORD *a4)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  char *v7; // r12
  __int64 v8; // r14
  char v9; // r13
  int v10; // edi
  int v11; // r15d
  int Values; // ecx
  const void *v13; // r9
  unsigned int v14; // ecx
  int v15; // r14d
  int v17; // [rsp+30h] [rbp-69h] BYREF
  const void *v18; // [rsp+38h] [rbp-61h] BYREF
  __int64 v19; // [rsp+40h] [rbp-59h]
  char *v20; // [rsp+48h] [rbp-51h]
  _OWORD *v21; // [rsp+50h] [rbp-49h]
  _BYTE v22[16]; // [rsp+60h] [rbp-39h] BYREF
  int v23; // [rsp+70h] [rbp-29h]
  int v24; // [rsp+80h] [rbp-19h]
  void *Buf2; // [rsp+88h] [rbp-11h]
  __int128 v26; // [rsp+A0h] [rbp+7h]

  v4 = *((_QWORD *)a2 + 1);
  v5 = 0;
  v6 = *a2;
  v7 = a3;
  v21 = a4;
  v8 = a1;
  v20 = a3;
  v9 = 0;
  v19 = a1;
  v18 = 0LL;
  v17 = 0;
  if ( (_DWORD)v6 )
  {
    if ( (int)MinAsn1ExtractContent(v4, v6, &v17, &v18) <= 0 )
    {
      v5 = -1;
      goto LABEL_23;
    }
    v10 = (int)v18;
    v11 = v17;
LABEL_5:
    if ( !v11 )
    {
      v5 = v10 - v4;
      goto LABEL_22;
    }
    v17 = 4;
    Values = MinAsn1ExtractValues(v10, v11, (unsigned int)&v17, (unsigned int)&qword_14000D2B0, 5, (__int64)v22);
    if ( Values > 0 )
    {
      if ( v9 )
        goto LABEL_17;
      v13 = *(const void **)(v8 + 8);
      v14 = *(_DWORD *)v8;
      v15 = 0;
      v18 = v13;
      v17 = v14;
      while ( 1 )
      {
        if ( v15 )
        {
          v8 = v19;
          goto LABEL_17;
        }
        if ( v14 == v24 )
        {
          if ( !memcmp(v13, Buf2, v14) )
          {
            v8 = v19;
            if ( v22 )
            {
              v9 = 1;
              *v21 = v26;
            }
LABEL_17:
            v10 += v23;
            v11 -= v23;
            goto LABEL_5;
          }
          v14 = v17;
          v13 = v18;
        }
        v15 = 1;
      }
    }
    if ( !Values )
      Values = -1;
    v5 = Values + v4 - v10;
LABEL_22:
    v7 = v20;
  }
LABEL_23:
  *v7 = v9;
  return v5;
}
