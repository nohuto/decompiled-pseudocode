/*
 * XREFs of ApiSetQuerySchemaInfo2 @ 0x180133370
 * Callers:
 *     RtlIsApiSetImplemented @ 0x180117910 (RtlIsApiSetImplemented.c)
 *     ApiSetQuerySchema @ 0x18015C710 (ApiSetQuerySchema.c)
 * Callees:
 *     ApiSetpSearchForApiSetA @ 0x180133744 (ApiSetpSearchForApiSetA.c)
 *     ApiSetQuerySchemaInfo2_V7 @ 0x180133864 (ApiSetQuerySchemaInfo2_V7.c)
 */

__int64 __fastcall ApiSetQuerySchemaInfo2(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rax
  unsigned int v5; // ebx
  int v9; // r11d
  __int64 v10; // rax
  int v11; // r9d
  char *v12; // r8
  char v13; // cl
  bool v14; // cf
  char *i; // r8
  char v17; // cl
  unsigned __int16 v18; // bp
  _BYTE *v19; // rax
  unsigned int *v20; // rax
  unsigned int *v21; // r8
  unsigned __int16 v22; // r9
  _BYTE *v23; // rcx
  _BYTE *v24; // rcx
  int v25; // edx
  __int16 v26; // ax
  unsigned int v27; // r11d
  unsigned int v28; // ecx
  _WORD *v29; // rdx
  _WORD *v30; // rdx
  int v31; // r10d
  int v32; // eax

  v3 = -1LL;
  *a3 = 240;
  v4 = -1LL;
  v5 = 0;
  do
    ++v4;
  while ( *((_BYTE *)a2 + v4) );
  v9 = 10;
  if ( (unsigned __int64)(v4 - 4) > 0xFFFB
    || (v10 = *a2 & 0xFFDFDFDF, v10 != *(_QWORD *)"API-") && v10 != *(_QWORD *)"EXT-" )
  {
    v11 = 10;
    v12 = (char *)a2;
    while ( *v12 )
    {
      v13 = *v12 + 32;
      if ( (unsigned __int8)(*v12 - 65) > 0x19u )
        v13 = *v12;
      if ( v12["schemaext-" - (char *)a2] != v13 )
        break;
      ++v12;
      if ( --v11 <= 0 )
        goto LABEL_12;
    }
    return 3221225485LL;
  }
LABEL_12:
  if ( *(_BYTE *)a1 == 7 )
    return ApiSetQuerySchemaInfo2_V7(a1, a2, a3);
  v14 = *(_DWORD *)a1 < 6u;
  if ( *(_DWORD *)a1 != 6 )
    goto LABEL_17;
  if ( *(_DWORD *)(a1 + 16) <= 8u )
    goto LABEL_19;
  if ( *(_BYTE *)(a1 + 28) == 7 )
    return ApiSetQuerySchemaInfo2_V7(a1, a2, a3);
  v14 = *(_DWORD *)a1 < 6u;
LABEL_17:
  if ( v14 )
    return 3221225659LL;
  do
LABEL_19:
    ++v3;
  while ( *((_BYTE *)a2 + v3) );
  if ( v3 <= 0xFFFF )
  {
    for ( i = (char *)a2; *i; ++i )
    {
      v17 = *i + 32;
      if ( (unsigned __int8)(*i - 65) > 0x19u )
        v17 = *i;
      if ( i["schemaext-" - (char *)a2] != v17 )
        break;
      if ( --v9 <= 0 )
      {
        *a3 = ApiSetpSearchForApiSetA(a1, a2, (unsigned __int16)v3) == 0 ? 0xF1 : 0;
        return v5;
      }
    }
    v18 = v3;
    v19 = (char *)a2 + (unsigned __int16)v3;
    if ( (unsigned __int16)v3 > 1u )
    {
      do
      {
        --v19;
        --v18;
      }
      while ( *v19 != 45 && v18 > 1u );
    }
    v20 = (unsigned int *)ApiSetpSearchForApiSetA(a1, a2, v18);
    v21 = v20;
    if ( !v20 )
    {
LABEL_32:
      *a3 = 241;
      return v5;
    }
    if ( (*(_BYTE *)v20 & 4) != 0 )
    {
      *a3 = 0;
      return v5;
    }
    v22 = 0;
    if ( (unsigned __int16)v3 - v18 <= 0 )
      return (unsigned int)-1073741811;
    v23 = (char *)a2 + v18;
    if ( *v23 != 45 )
      return (unsigned int)-1073741811;
    v24 = v23 + 1;
    v25 = (unsigned __int16)v3 - v18 - 1;
    if ( (unsigned __int16)v3 - v18 == 1 )
      return (unsigned int)-1073741811;
    while ( v25 > 0 )
    {
      if ( (unsigned __int8)(*v24 - 48) > 9u )
        return (unsigned int)-1073741811;
      v26 = (unsigned __int8)*v24++;
      v22 = v26 + 10 * v22 - 48;
      --v25;
    }
    v27 = 0;
    v28 = (v21[2] - v21[3]) >> 1;
    if ( v28 )
    {
      v29 = (_WORD *)(a1 + v21[1] + v21[3]);
      if ( *v29 == 45 )
      {
        v30 = v29 + 1;
        v31 = v28 - 1;
        if ( v28 != 1 )
        {
          if ( (int)(v28 - 1) <= 0 )
          {
LABEL_49:
            if ( v22 <= v27 )
            {
              if ( v21[5] )
                *a3 = *(_DWORD *)(v21[4] + a1 + 16) == 0 ? 0xF2 : 0;
              else
                *a3 = 242;
              return v5;
            }
            goto LABEL_32;
          }
          while ( (unsigned __int16)(*v30 - 48) <= 9u )
          {
            v32 = (unsigned __int16)*v30++;
            --v31;
            v27 = v32 + 2 * (5 * v27 - 24);
            if ( v31 <= 0 )
              goto LABEL_49;
          }
        }
      }
    }
    return (unsigned int)-1073741596;
  }
  return 3221225485LL;
}
