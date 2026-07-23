/*
 * XREFs of ApiSetQuerySchemaInfo2 @ 0x14065E23C
 * Callers:
 *     RtlIsApiSetImplemented @ 0x140785310 (RtlIsApiSetImplemented.c)
 * Callees:
 *     ApiSetpSearchForApiSetA @ 0x14065E89C (ApiSetpSearchForApiSetA.c)
 *     ApiSetQuerySchemaInfo2_V7 @ 0x14065F40C (ApiSetQuerySchemaInfo2_V7.c)
 */

__int64 __fastcall ApiSetQuerySchemaInfo2(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rax
  unsigned int v5; // ebx
  int v9; // ebp
  __int64 v10; // rax
  int v11; // r9d
  char *v12; // r8
  char v13; // r11
  char v14; // cl
  bool v15; // cf
  char *i; // r8
  char v18; // r9
  char v19; // cl
  unsigned __int16 v20; // bp
  _BYTE *v21; // rax
  _DWORD *v22; // rax
  unsigned __int16 v23; // r9
  _BYTE *v24; // rcx
  unsigned __int8 *v25; // rcx
  int v26; // edx
  __int16 v27; // r10
  __int64 v28; // rdx
  unsigned int v29; // r11d
  unsigned int v30; // ecx
  _WORD *v31; // rdx
  unsigned __int16 *v32; // rdx
  int v33; // r10d
  int v34; // edi

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
    do
    {
      v13 = *v12;
      if ( !*v12 )
        return 3221225485LL;
      v14 = v13 + 32;
      if ( (unsigned __int8)(v13 - 65) > 0x19u )
        v14 = *v12;
      if ( v12["schemaext-" - (char *)a2] != v14 )
        return 3221225485LL;
      ++v12;
    }
    while ( --v11 > 0 );
  }
  if ( *(_BYTE *)a1 == 7 )
    return ApiSetQuerySchemaInfo2_V7(a1, a2, a3);
  v15 = *(_DWORD *)a1 < 6u;
  if ( *(_DWORD *)a1 != 6 )
    goto LABEL_17;
  if ( *(_DWORD *)(a1 + 16) <= 8u )
    goto LABEL_19;
  if ( *(_BYTE *)(a1 + 28) == 7 )
    return ApiSetQuerySchemaInfo2_V7(a1, a2, a3);
  v15 = 0;
LABEL_17:
  if ( v15 )
    return 3221225659LL;
  do
LABEL_19:
    ++v3;
  while ( *((_BYTE *)a2 + v3) );
  if ( v3 <= 0xFFFF )
  {
    for ( i = (char *)a2; ; ++i )
    {
      v18 = *i;
      if ( !*i )
        break;
      v19 = v18 + 32;
      if ( (unsigned __int8)(v18 - 65) > 0x19u )
        v19 = *i;
      if ( i["schemaext-" - (char *)a2] != v19 )
        break;
      if ( --v9 <= 0 )
      {
        *a3 = ApiSetpSearchForApiSetA(a1, a2, (unsigned __int16)v3) == 0 ? 0xF1 : 0;
        return v5;
      }
    }
    v20 = v3;
    v21 = (char *)a2 + (unsigned __int16)v3;
    if ( (unsigned __int16)v3 > 1u )
    {
      do
      {
        --v21;
        --v20;
      }
      while ( *v21 != 45 && v20 > 1u );
    }
    v22 = (_DWORD *)ApiSetpSearchForApiSetA(a1, a2, v20);
    if ( !v22 )
    {
LABEL_32:
      *a3 = 241;
      return v5;
    }
    if ( (*v22 & 4) != 0 )
    {
      *a3 = 0;
      return v5;
    }
    v23 = 0;
    if ( (unsigned __int16)v3 - v20 <= 0 )
      return (unsigned int)-1073741811;
    v24 = (char *)a2 + v20;
    if ( *v24 != 45 )
      return (unsigned int)-1073741811;
    v25 = v24 + 1;
    v26 = (unsigned __int16)v3 - v20 - 1;
    if ( (unsigned __int16)v3 - v20 == 1 )
      return (unsigned int)-1073741811;
    while ( v26 > 0 )
    {
      v27 = *v25;
      if ( (unsigned __int8)(v27 - 48) > 9u )
        return (unsigned int)-1073741811;
      ++v25;
      v23 = v27 + 10 * v23 - 48;
      --v26;
    }
    v28 = (unsigned int)v22[3];
    v29 = 0;
    v30 = (unsigned int)(v22[2] - v28) >> 1;
    if ( v30 )
    {
      v31 = (_WORD *)(a1 + (unsigned int)v22[1] + v28);
      if ( *v31 == 45 )
      {
        v32 = v31 + 1;
        v33 = v30 - 1;
        if ( v30 != 1 )
        {
          if ( (int)(v30 - 1) <= 0 )
          {
LABEL_49:
            if ( v23 <= v29 )
            {
              if ( v22[5] )
                *a3 = *(_DWORD *)((unsigned int)v22[4] + a1 + 16) == 0 ? 0xF2 : 0;
              else
                *a3 = 242;
              return v5;
            }
            goto LABEL_32;
          }
          while ( 1 )
          {
            v34 = *v32;
            if ( (unsigned __int16)(v34 - 48) > 9u )
              break;
            ++v32;
            --v33;
            v29 = v34 + 2 * (5 * v29 - 24);
            if ( v33 <= 0 )
              goto LABEL_49;
          }
        }
      }
    }
    return (unsigned int)-1073741596;
  }
  return 3221225485LL;
}
