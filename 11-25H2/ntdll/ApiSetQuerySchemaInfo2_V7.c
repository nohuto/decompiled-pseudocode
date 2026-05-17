/*
 * XREFs of ApiSetQuerySchemaInfo2_V7 @ 0x180136EE4
 * Callers:
 *     ApiSetQuerySchemaInfo2 @ 0x1801369F0 (ApiSetQuerySchemaInfo2.c)
 * Callees:
 *     RtlQueryFeatureConfiguration @ 0x18009F560 (RtlQueryFeatureConfiguration.c)
 *     ApiSetpGetContractKeyInfo @ 0x180137A68 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpGetExtensionNameKeyInfo @ 0x180137C74 (ApiSetpGetExtensionNameKeyInfo.c)
 *     ApiSetpGetSemverKeyVersions @ 0x180137D94 (ApiSetpGetSemverKeyVersions.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x180137EEC (ApiSetpSearchForSectionIndex_V7.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall ApiSetQuerySchemaInfo2_V7(__int64 a1, char *a2, int *a3)
{
  char *v4; // r12
  __int64 v5; // rbx
  unsigned int v6; // edi
  unsigned __int64 v7; // r10
  int v8; // r9d
  char *v9; // r8
  char v10; // cl
  __int16 v11; // ax
  int v12; // ecx
  unsigned __int16 v13; // ax
  __int64 v14; // rdx
  int v15; // r9d
  __int64 v16; // r13
  __int64 v17; // r15
  __int64 v18; // r10
  char v19; // cl
  unsigned __int64 v20; // r14
  __int64 v21; // r14
  unsigned __int16 v23; // ax
  int v24; // r10d
  __int64 v25; // r9
  __int64 v26; // r14
  __int64 v27; // r11
  char v28; // cl
  __int64 v29; // rcx
  __int64 v30; // rcx
  _BYTE v31[8]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v32; // [rsp+28h] [rbp-48h] BYREF
  __int128 v33; // [rsp+38h] [rbp-38h]
  __int64 v34; // [rsp+48h] [rbp-28h] BYREF
  __int64 v35; // [rsp+50h] [rbp-20h] BYREF
  int v36; // [rsp+58h] [rbp-18h]

  *a3 = 240;
  v4 = a2;
  v5 = a1;
  if ( *(_BYTE *)a1 != 7 || (*(_BYTE *)(a1 + 2) & 2) != 0 )
  {
    if ( *(_DWORD *)a1 != 6 )
      return 3221225485LL;
    if ( *(_DWORD *)(a1 + 16) <= 8u )
      return 3221225485LL;
    v5 = a1 + 28;
    if ( *(_BYTE *)(a1 + 28) != 7 )
      return 3221225485LL;
  }
  v6 = 0;
  v7 = -1LL;
  do
    ++v7;
  while ( a2[v7] );
  if ( v7 > 0xFFFF )
    return 3221225485LL;
  v8 = 10;
  v9 = a2;
  do
  {
    if ( !*v9 )
      goto LABEL_19;
    v10 = *v9 + 32;
    if ( (unsigned __int8)(*v9 - 65) > 0x19u )
      v10 = *v9;
    if ( v9["schemaext-" - a2] != v10 )
    {
LABEL_19:
      v32 = 0LL;
      v33 = 0LL;
      if ( !(unsigned __int8)ApiSetpGetContractKeyInfo(a2, (unsigned __int16)v7, 0LL, &v32) )
        return v6;
      if ( HIDWORD(v32) == 2 )
      {
        v23 = ApiSetpSearchForSectionIndex_V7(v5, v5 + 56, &v32);
        if ( v23 == 0xFFFF )
          goto LABEL_36;
        v24 = 0;
        v25 = *(unsigned __int16 *)(v5 + 18);
        v26 = v5 + *(unsigned int *)(v5 + 56) + v23 * (unsigned __int64)*(unsigned __int8 *)(v5 + 64) - v25;
        if ( WORD1(v33) )
        {
          v27 = WORD1(v33);
          do
          {
            v28 = *v4 + 32;
            if ( (unsigned __int8)(*v4 - 65) > 0x19u )
              v28 = *v4;
            ++v4;
            v24 = v28 + *(unsigned __int8 *)(v5 + 67) * v24;
            --v27;
          }
          while ( v27 );
        }
        if ( *(_DWORD *)v26 == v24 )
        {
          v29 = *(unsigned int *)(v5 + 44)
              + *(unsigned __int8 *)(v5 + 52) * (unsigned __int64)*(unsigned __int16 *)(v26 + 4)
              - v25;
          if ( (*(_BYTE *)(v29 + v5 + 10) & 2) != 0 )
          {
            if ( *(_BYTE *)(*(unsigned int *)(v5 + 92)
                          + *(unsigned __int8 *)(v5 + 100) * (unsigned __int64)*(unsigned __int16 *)(v29 + v5 + 4)
                          - v25
                          + v5
                          + 10) > *(_BYTE *)(v5 + 3) )
            {
              *a3 = 243;
              return v6;
            }
            v30 = *(unsigned int *)(v26 + 8);
            if ( (_DWORD)v30 )
            {
              v34 = 0LL;
              v35 = 0LL;
              v36 = 0;
              if ( (unsigned int)RtlQueryFeatureConfiguration(v30, 0, &v34, (__int64)&v35)
                || !v34
                || (_DWORD)v35 != *(_DWORD *)(v26 + 8)
                || (BYTE4(v35) & 0x30) != 0x20 )
              {
                *a3 = 244;
                return v6;
              }
            }
LABEL_33:
            *a3 = 0;
            return v6;
          }
LABEL_45:
          *a3 = 242;
          return v6;
        }
      }
      else
      {
        if ( HIDWORD(v32) != 3 )
          return v6;
        v13 = ApiSetpSearchForSectionIndex_V7(v5, v5 + 68, &v32);
        if ( v13 == 0xFFFF )
          goto LABEL_36;
        v15 = 0;
        v16 = *(unsigned __int16 *)(v5 + 18);
        v17 = *(unsigned int *)(v5 + 68) + v13 * (unsigned __int64)*(unsigned __int8 *)(v5 + 76) - v16;
        if ( WORD1(v33) )
        {
          v18 = WORD1(v33);
          do
          {
            v19 = *v4 + 32;
            if ( (unsigned __int8)(*v4 - 65) > 0x19u )
              v19 = *v4;
            v14 = (unsigned int)v19;
            ++v4;
            v15 = v14 + *(unsigned __int8 *)(v5 + 79) * v15;
            --v18;
          }
          while ( v18 );
        }
        if ( *(_DWORD *)(v17 + v5) == v15 )
        {
          v20 = *(unsigned int *)(v5 + 44)
              + *(unsigned __int8 *)(v5 + 52) * (unsigned __int64)*(unsigned __int16 *)(v17 + v5 + 4);
          v31[0] = 0;
          v21 = v20 - v16;
          if ( !(unsigned __int8)ApiSetpGetSemverKeyVersions(&v32, v14, v31) )
            return (unsigned int)-1073741811;
          if ( v31[0] <= *(_BYTE *)(v17 + v5 + 9) )
          {
            if ( (*(_BYTE *)(v21 + v5 + 10) & 2) != 0 )
              goto LABEL_33;
            goto LABEL_45;
          }
LABEL_36:
          *a3 = 241;
          return v6;
        }
      }
      *a3 = 245;
      return v6;
    }
    ++v9;
    --v8;
  }
  while ( v8 > 0 );
  v32 = 0LL;
  v33 = 0LL;
  if ( !(unsigned __int8)ApiSetpGetExtensionNameKeyInfo(a2, (unsigned __int16)v7, 0LL, &v32) )
    return 3221225485LL;
  v11 = ApiSetpSearchForSectionIndex_V7(v5, v5 + 80, &v32);
  v12 = 0;
  if ( v11 == -1 )
    v12 = 241;
  *a3 = v12;
  return v6;
}
