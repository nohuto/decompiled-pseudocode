/*
 * XREFs of ApiSetQuerySchemaInfo2_V7 @ 0x14065F40C
 * Callers:
 *     ApiSetQuerySchemaInfo2 @ 0x14065E23C (ApiSetQuerySchemaInfo2.c)
 * Callees:
 *     ApiSetpIsFeatureEnabled @ 0x140660990 (ApiSetpIsFeatureEnabled.c)
 *     ApiSetpGetContractKeyInfo @ 0x140660A78 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpGetExtensionNameKeyInfo @ 0x140660D58 (ApiSetpGetExtensionNameKeyInfo.c)
 *     ApiSetpGetSearchKeyHash @ 0x140660EA8 (ApiSetpGetSearchKeyHash.c)
 *     ApiSetpGetSemverKeyVersions @ 0x140660F98 (ApiSetpGetSemverKeyVersions.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x14066111C (ApiSetpSearchForSectionIndex_V7.c)
 */

__int64 __fastcall ApiSetQuerySchemaInfo2_V7(__int64 a1, char *a2, int *a3)
{
  bool v3; // zf
  __int64 v5; // rbx
  unsigned int v6; // esi
  unsigned __int64 v7; // r10
  int v8; // r9d
  char *v9; // r8
  char v10; // r14
  char v11; // cl
  __int16 v12; // ax
  int v13; // ecx
  unsigned __int16 v14; // ax
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // r12
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // r14
  __int64 v20; // r14
  unsigned __int16 v22; // ax
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // r15
  __int64 v26; // r14
  __int64 v27; // rcx
  __int128 v28; // [rsp+30h] [rbp-30h] BYREF
  __int128 v29; // [rsp+40h] [rbp-20h]
  __int64 v30; // [rsp+50h] [rbp-10h]
  unsigned __int8 v31; // [rsp+90h] [rbp+30h] BYREF

  v3 = *(_BYTE *)a1 == 7;
  *a3 = 240;
  v5 = a1;
  if ( !v3 || (*(_BYTE *)(a1 + 2) & 2) != 0 )
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
    v10 = *v9;
    if ( !*v9 )
      goto LABEL_19;
    v11 = v10 + 32;
    if ( (unsigned __int8)(v10 - 65) > 0x19u )
      v11 = *v9;
    if ( v9["schemaext-" - a2] != v11 )
    {
LABEL_19:
      v30 = 0LL;
      v28 = 0LL;
      v29 = 0LL;
      if ( !(unsigned __int8)ApiSetpGetContractKeyInfo(a2, (unsigned __int16)v7, 0LL, &v28) )
        return v6;
      if ( HIDWORD(v28) == 2 )
      {
        v22 = ApiSetpSearchForSectionIndex_V7(v5, v5 + 56, &v28);
        if ( v22 == 0xFFFF )
          goto LABEL_31;
        v25 = *(unsigned __int16 *)(v5 + 18);
        LOBYTE(v24) = (*(_BYTE *)(v5 + 2) & 0x10) != 0;
        LOBYTE(v23) = (*(_BYTE *)(v5 + 2) & 8) != 0;
        v26 = v5 + *(unsigned int *)(v5 + 56) + v22 * (unsigned __int64)*(unsigned __int8 *)(v5 + 64) - v25;
        if ( *(_DWORD *)v26 == (unsigned int)ApiSetpGetSearchKeyHash(
                                               (unsigned int)&v28,
                                               0,
                                               v23,
                                               v24,
                                               *(_BYTE *)(v5 + 67)) )
        {
          if ( (*(_BYTE *)(v26 + 6) & 2) != 0 )
          {
            *a3 = 243;
            return v6;
          }
          v27 = *(unsigned int *)(v5 + 44)
              + *(unsigned __int8 *)(v5 + 52) * (unsigned __int64)*(unsigned __int16 *)(v26 + 4)
              - v25;
          if ( (*(_BYTE *)(v27 + v5 + 10) & 2) != 0 )
          {
            if ( *(_BYTE *)(*(unsigned int *)(v5 + 92)
                          + *(unsigned __int8 *)(v5 + 100) * (unsigned __int64)*(unsigned __int16 *)(v27 + v5 + 4)
                          - v25
                          + v5
                          + 10) > *(_BYTE *)(v5 + 3) )
            {
              *a3 = 244;
              return v6;
            }
            if ( *(_DWORD *)(v26 + 8) && !(unsigned __int8)ApiSetpIsFeatureEnabled() )
            {
              *a3 = 245;
              return v6;
            }
LABEL_28:
            *a3 = 0;
            return v6;
          }
LABEL_37:
          *a3 = 242;
          return v6;
        }
      }
      else
      {
        if ( HIDWORD(v28) != 3 )
          return v6;
        v14 = ApiSetpSearchForSectionIndex_V7(v5, v5 + 68, &v28);
        if ( v14 == 0xFFFF )
          goto LABEL_31;
        v17 = *(unsigned __int16 *)(v5 + 18);
        LOBYTE(v16) = (*(_BYTE *)(v5 + 2) & 0x10) != 0;
        v18 = v5 + *(unsigned __int8 *)(v5 + 76) * (unsigned __int64)v14 - v17 + *(unsigned int *)(v5 + 68);
        LOBYTE(v15) = (*(_BYTE *)(v5 + 2) & 8) != 0;
        if ( *(_DWORD *)v18 == (unsigned int)ApiSetpGetSearchKeyHash(
                                               (unsigned int)&v28,
                                               0,
                                               v15,
                                               v16,
                                               *(_BYTE *)(v5 + 79)) )
        {
          v19 = *(unsigned int *)(v5 + 44)
              + *(unsigned __int8 *)(v5 + 52) * (unsigned __int64)*(unsigned __int16 *)(v18 + 4);
          v31 = 0;
          v20 = v19 - v17;
          if ( !(unsigned __int8)ApiSetpGetSemverKeyVersions(&v28, 0LL, &v31) )
            return (unsigned int)-1073741811;
          if ( v31 <= *(_BYTE *)(v18 + 9) )
          {
            if ( (*(_BYTE *)(v20 + v5 + 10) & 2) != 0 )
              goto LABEL_28;
            goto LABEL_37;
          }
LABEL_31:
          *a3 = 241;
          return v6;
        }
      }
      *a3 = 246;
      return v6;
    }
    ++v9;
    --v8;
  }
  while ( v8 > 0 );
  v30 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( !(unsigned __int8)ApiSetpGetExtensionNameKeyInfo(a2, (unsigned __int16)v7, 0LL, &v28) )
    return 3221225485LL;
  v12 = ApiSetpSearchForSectionIndex_V7(v5, v5 + 80, &v28);
  v13 = 0;
  if ( v12 == -1 )
    v13 = 241;
  *a3 = v13;
  return v6;
}
