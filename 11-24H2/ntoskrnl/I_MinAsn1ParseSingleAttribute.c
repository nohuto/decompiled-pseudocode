/*
 * XREFs of I_MinAsn1ParseSingleAttribute @ 0x1408274E0
 * Callers:
 *     I_MinCryptGetPlatformManifestBinaryIDAttribute @ 0x140826960 (I_MinCryptGetPlatformManifestBinaryIDAttribute.c)
 *     I_MinCryptGetSigningTime @ 0x1408269F0 (I_MinCryptGetSigningTime.c)
 *     I_MinCryptVerifyAuthenticodeTimeStamp @ 0x140826B54 (I_MinCryptVerifyAuthenticodeTimeStamp.c)
 *     I_MinCryptVerifySignerAuthenticatedAttributes @ 0x140826F00 (I_MinCryptVerifySignerAuthenticatedAttributes.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     MinAsn1ExtractContent @ 0x140828A80 (MinAsn1ExtractContent.c)
 *     MinAsn1ExtractValues @ 0x140828BE4 (MinAsn1ExtractValues.c)
 */

char __fastcall I_MinAsn1ParseSingleAttribute(__int64 a1, unsigned int *a2, __int64 a3, _OWORD *a4)
{
  __int64 v4; // rdi
  char v5; // r13
  __int64 v6; // r15
  __int64 v7; // rdx
  int v8; // r14d
  char v9; // si
  int v10; // ebx
  int Values; // eax
  const void *v12; // rcx
  const void **v13; // r12
  unsigned int v14; // eax
  __int64 v15; // r15
  int v16; // edi
  int v18; // [rsp+30h] [rbp-61h] BYREF
  const void *v19; // [rsp+38h] [rbp-59h] BYREF
  __int64 v20; // [rsp+40h] [rbp-51h]
  _OWORD *v21; // [rsp+48h] [rbp-49h]
  _BYTE v22[16]; // [rsp+50h] [rbp-41h] BYREF
  int v23; // [rsp+60h] [rbp-31h]
  char v24; // [rsp+78h] [rbp-19h] BYREF
  __int128 v25; // [rsp+90h] [rbp-1h]

  v4 = *((_QWORD *)a2 + 1);
  v5 = 0;
  v19 = 0LL;
  v6 = a1;
  v18 = 0;
  v7 = *a2;
  v21 = a4;
  v20 = a1;
  if ( !(_DWORD)v7 || (int)MinAsn1ExtractContent(v4, v7, &v18, &v19) <= 0 )
    return 0;
  v8 = v18;
  v9 = 1;
  v10 = (int)v19;
  if ( !v18 )
    goto LABEL_18;
LABEL_4:
  v18 = 4;
  Values = MinAsn1ExtractValues(v10, v8, (unsigned int)&v18, (unsigned int)&qword_14000CF90, 5, (__int64)v22);
  if ( Values > 0 )
  {
    if ( v5 )
      goto LABEL_17;
    v12 = *(const void **)(v6 + 8);
    v13 = (const void **)&v24;
    v14 = *(_DWORD *)v6;
    v15 = 0LL;
    v19 = v12;
    v18 = v14;
    while ( 1 )
    {
      if ( v14 == *((_DWORD *)v13 - 2) )
      {
        if ( !memcmp(v12, *v13, v14) )
        {
          if ( &v22[80 * v15] )
          {
            if ( v21 )
              *v21 = v25;
            v5 = 1;
          }
LABEL_16:
          v6 = v20;
LABEL_17:
          v10 += v23;
          v8 -= v23;
          if ( !v8 )
          {
LABEL_18:
            v16 = v10 - v4;
            goto LABEL_19;
          }
          goto LABEL_4;
        }
        v14 = v18;
        v12 = v19;
      }
      v15 = (unsigned int)(v15 + 1);
      v13 += 10;
      if ( (_DWORD)v15 )
        goto LABEL_16;
    }
  }
  if ( !Values )
    Values = -1;
  v16 = Values + v4 - v10;
LABEL_19:
  if ( !v5 || v16 < 0 )
    return 0;
  return v9;
}
