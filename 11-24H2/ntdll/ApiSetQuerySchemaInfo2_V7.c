/*
 * XREFs of ApiSetQuerySchemaInfo2_V7 @ 0x180133864
 * Callers:
 *     ApiSetQuerySchemaInfo2 @ 0x180133370 (ApiSetQuerySchemaInfo2.c)
 * Callees:
 *     ApiSetpGetContractKeyInfo @ 0x18013423C (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpGetExtensionNameKeyInfo @ 0x180134528 (ApiSetpGetExtensionNameKeyInfo.c)
 *     ApiSetpGetSearchKeyHash @ 0x180134650 (ApiSetpGetSearchKeyHash.c)
 *     ApiSetpGetSemverKeyVersions @ 0x180134744 (ApiSetpGetSemverKeyVersions.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x18013489C (ApiSetpSearchForSectionIndex_V7.c)
 *     ApiSetpIsFeatureEnabled @ 0x180134948 (ApiSetpIsFeatureEnabled.c)
 */

__int64 __fastcall ApiSetQuerySchemaInfo2_V7(__int64 a1, const WCHAR *a2, int *a3)
{
  __int64 v4; // rbx
  unsigned int v5; // esi
  unsigned __int64 v6; // r10
  int v7; // r9d
  const WCHAR *v8; // r8
  char v9; // cl
  __int16 v10; // ax
  int v11; // ecx
  unsigned __int16 v12; // ax
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // r12
  unsigned __int64 v16; // r15
  __int64 v17; // rdx
  unsigned __int64 v18; // r14
  __int64 v19; // r14
  unsigned __int16 v21; // ax
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // r15
  __int64 v25; // r14
  __int64 v26; // rcx
  __int128 v27; // [rsp+30h] [rbp-30h] BYREF
  __int128 v28; // [rsp+40h] [rbp-20h]
  __int64 v29; // [rsp+50h] [rbp-10h]
  unsigned __int8 v30; // [rsp+90h] [rbp+30h] BYREF

  *a3 = 240;
  v4 = a1;
  if ( *(_BYTE *)a1 != 7 || (*(_BYTE *)(a1 + 2) & 2) != 0 )
  {
    if ( *(_DWORD *)a1 != 6 )
      return 3221225485LL;
    if ( *(_DWORD *)(a1 + 16) <= 8u )
      return 3221225485LL;
    v4 = a1 + 28;
    if ( *(_BYTE *)(a1 + 28) != 7 )
      return 3221225485LL;
  }
  v5 = 0;
  v6 = -1LL;
  do
    ++v6;
  while ( *((_BYTE *)a2 + v6) );
  if ( v6 > 0xFFFF )
    return 3221225485LL;
  v7 = 10;
  v8 = a2;
  do
  {
    if ( !*(_BYTE *)v8 )
      goto LABEL_19;
    v9 = *(_BYTE *)v8 + 32;
    if ( (unsigned __int8)(*(_BYTE *)v8 - 65) > 0x19u )
      v9 = *(_BYTE *)v8;
    if ( *((_BYTE *)v8 + "schemaext-" - (char *)a2) != v9 )
    {
LABEL_19:
      v29 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      if ( !(unsigned __int8)ApiSetpGetContractKeyInfo(a2, (unsigned __int16)v6, 0LL, &v27) )
        return v5;
      if ( HIDWORD(v27) == 2 )
      {
        v21 = ApiSetpSearchForSectionIndex_V7(v4, v4 + 56, &v27);
        if ( v21 == 0xFFFF )
          goto LABEL_31;
        v24 = *(unsigned __int16 *)(v4 + 18);
        LOBYTE(v23) = (*(_BYTE *)(v4 + 2) & 0x10) != 0;
        LOBYTE(v22) = (*(_BYTE *)(v4 + 2) & 8) != 0;
        v25 = v4 + *(unsigned int *)(v4 + 56) + v21 * (unsigned __int64)*(unsigned __int8 *)(v4 + 64) - v24;
        if ( *(_DWORD *)v25 == (unsigned int)ApiSetpGetSearchKeyHash(
                                               (unsigned int)&v27,
                                               0,
                                               v22,
                                               v23,
                                               *(_BYTE *)(v4 + 67)) )
        {
          if ( (*(_BYTE *)(v25 + 6) & 2) != 0 )
          {
            *a3 = 243;
            return v5;
          }
          v26 = *(unsigned int *)(v4 + 44)
              + *(unsigned __int8 *)(v4 + 52) * (unsigned __int64)*(unsigned __int16 *)(v25 + 4)
              - v24;
          if ( (*(_BYTE *)(v26 + v4 + 10) & 2) != 0 )
          {
            if ( *(_BYTE *)(*(unsigned int *)(v4 + 92)
                          + *(unsigned __int8 *)(v4 + 100) * (unsigned __int64)*(unsigned __int16 *)(v26 + v4 + 4)
                          - v24
                          + v4
                          + 10) > *(_BYTE *)(v4 + 3) )
            {
              *a3 = 244;
              return v5;
            }
            if ( *(_DWORD *)(v25 + 8) && !(unsigned __int8)ApiSetpIsFeatureEnabled() )
            {
              *a3 = 245;
              return v5;
            }
LABEL_28:
            *a3 = 0;
            return v5;
          }
LABEL_37:
          *a3 = 242;
          return v5;
        }
      }
      else
      {
        if ( HIDWORD(v27) != 3 )
          return v5;
        v12 = ApiSetpSearchForSectionIndex_V7(v4, v4 + 68, &v27);
        if ( v12 == 0xFFFF )
          goto LABEL_31;
        v15 = *(unsigned __int16 *)(v4 + 18);
        LOBYTE(v14) = (*(_BYTE *)(v4 + 2) & 0x10) != 0;
        v16 = v4 + *(unsigned __int8 *)(v4 + 76) * (unsigned __int64)v12 - v15 + *(unsigned int *)(v4 + 68);
        LOBYTE(v13) = (*(_BYTE *)(v4 + 2) & 8) != 0;
        if ( *(_DWORD *)v16 == (unsigned int)ApiSetpGetSearchKeyHash(
                                               (unsigned int)&v27,
                                               0,
                                               v13,
                                               v14,
                                               *(_BYTE *)(v4 + 79)) )
        {
          v18 = *(unsigned int *)(v4 + 44)
              + *(unsigned __int8 *)(v4 + 52) * (unsigned __int64)*(unsigned __int16 *)(v16 + 4);
          v30 = 0;
          v19 = v18 - v15;
          if ( !(unsigned __int8)ApiSetpGetSemverKeyVersions(&v27, v17, &v30) )
            return (unsigned int)-1073741811;
          if ( v30 <= *(_BYTE *)(v16 + 9) )
          {
            if ( (*(_BYTE *)(v19 + v4 + 10) & 2) != 0 )
              goto LABEL_28;
            goto LABEL_37;
          }
LABEL_31:
          *a3 = 241;
          return v5;
        }
      }
      *a3 = 246;
      return v5;
    }
    v8 = (const WCHAR *)((char *)v8 + 1);
    --v7;
  }
  while ( v7 > 0 );
  v29 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( !(unsigned __int8)ApiSetpGetExtensionNameKeyInfo(a2) )
    return 3221225485LL;
  v10 = ApiSetpSearchForSectionIndex_V7(v4, v4 + 80, &v27);
  v11 = 0;
  if ( v10 == -1 )
    v11 = 241;
  *a3 = v11;
  return v5;
}
