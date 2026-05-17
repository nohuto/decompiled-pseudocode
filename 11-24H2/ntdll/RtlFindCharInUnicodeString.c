/*
 * XREFs of RtlFindCharInUnicodeString @ 0x18008AC70
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18005B1C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18005D5B0 (sxsisol_SearchActCtxForDllName.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x180085B9C (RtlpQueryPseudoEnvironmentVariable.c)
 * Callees:
 *     NLS_DOWNCASE @ 0x1800E0430 (NLS_DOWNCASE.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlFindCharInUnicodeString(int a1, unsigned __int16 *a2, __int16 *a3, _WORD *a4)
{
  __int64 v4; // r12
  char v6; // r10
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // ax
  __int16 v11; // cx
  unsigned __int16 *v12; // r11
  char *v13; // r14
  __int64 v14; // r9
  unsigned __int16 v15; // bp
  int v16; // r15d
  _BOOL8 v17; // rsi
  __int16 v18; // ax
  int v19; // r10d
  __int16 v20; // r9
  __int64 v22; // r13
  __int16 v23; // di
  int v24; // r10d
  __int64 v25; // r11
  int v26; // r10d
  unsigned __int16 v27; // dx
  unsigned __int16 v28; // cx
  __int64 v29; // r13
  signed __int64 v30; // r14
  _WORD *v31; // rdi
  __int64 v32; // r11
  int v33; // r10d
  unsigned __int16 i; // dx
  unsigned __int16 j; // cx
  __int16 v36; // [rsp+22h] [rbp-96h]
  _WORD v37[32]; // [rsp+30h] [rbp-88h] BYREF

  LODWORD(v4) = 0;
  v6 = a1;
  if ( a4 )
    *a4 = 0;
  if ( (a1 & 0xFFFFFFF8) != 0 )
    return 3221225485LL;
  if ( !a4 )
    return 3221225485LL;
  if ( a2 )
  {
    v7 = *a2;
    if ( (*a2 & 1) != 0 )
      return 3221225485LL;
    v8 = a2[1];
    if ( (v8 & 1) != 0 || v7 > v8 || v8 == 0xFFFF || !*((_QWORD *)a2 + 1) && (v7 || v8) )
      return 3221225485LL;
  }
  if ( a3 )
  {
    v9 = *a3;
    if ( (*a3 & 1) != 0 )
      return 3221225485LL;
    v10 = a3[1];
    if ( (v10 & 1) != 0 || v9 > v10 || v10 == 0xFFFF || !*((_QWORD *)a3 + 1) && (v9 || v10) )
      return 3221225485LL;
  }
  v11 = *a2;
  v12 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  v14 = *a2;
  v13 = (char *)*((_QWORD *)a3 + 1);
  LOWORD(v14) = (unsigned __int16)v14 >> 1;
  v15 = (unsigned __int16)*a3 >> 1;
  v36 = *a2;
  v16 = v6 & 1;
  if ( (v6 & 1) != 0 )
    v12 = &v12[(unsigned __int16)v14 - 1];
  v17 = !(v6 & 1);
  if ( (v6 & 4) == 0 )
  {
    if ( v15 != 1 )
    {
      if ( (_WORD)v14 )
      {
        v26 = v6 & 2;
        while ( 1 )
        {
          v27 = *v12;
          v28 = 0;
          if ( v26 )
          {
            if ( v15 )
            {
              do
              {
                if ( v27 == *(_WORD *)&v13[2 * v28] )
                  break;
                ++v28;
              }
              while ( v28 < v15 );
            }
            if ( v28 == v15 )
              goto LABEL_37;
          }
          else
          {
            if ( v15 )
            {
              do
              {
                if ( v27 == *(_WORD *)&v13[2 * v28] )
                  break;
                ++v28;
              }
              while ( v28 < v15 );
            }
            if ( v28 != v15 )
              goto LABEL_37;
          }
          v12 = &v12[2 * v17 - 1];
          LOWORD(v14) = v14 - 1;
          if ( !(_WORD)v14 )
            return 3221226021LL;
        }
      }
      return 3221226021LL;
    }
    v18 = *(_WORD *)v13;
    v19 = v6 & 2;
    if ( !(_WORD)v14 )
      return 3221226021LL;
    if ( v19 )
    {
      while ( *v12 == v18 )
      {
        v12 = &v12[2 * v17 - 1];
        LOWORD(v14) = v14 - 1;
        if ( !(_WORD)v14 )
          return 3221226021LL;
      }
    }
    else
    {
      while ( *v12 != v18 )
      {
        v12 = &v12[2 * v17 - 1];
        LOWORD(v14) = v14 - 1;
        if ( !(_WORD)v14 )
          return 3221226021LL;
      }
    }
LABEL_24:
    v20 = 2 * v14 - 2;
    if ( !v16 )
      v20 = v11 - v20;
    *a4 = v20;
    return (unsigned int)v4;
  }
  if ( v15 > 0x20u )
  {
    if ( (_WORD)v14 )
    {
      v22 = qword_1801CD040;
      while ( 1 )
      {
        v23 = NLS_DOWNCASE(v22, *v12, a3, v14);
        if ( v24 )
        {
          do
          {
            if ( v23 == (unsigned __int16)NLS_DOWNCASE(
                                            v22,
                                            *(unsigned __int16 *)&v13[2 * (unsigned __int16)v4],
                                            a3,
                                            v14) )
              break;
            LOWORD(v4) = v4 + 1;
          }
          while ( (unsigned __int16)v4 < v15 );
          if ( (_WORD)v4 == v15 )
          {
LABEL_36:
            LODWORD(v4) = 0;
            goto LABEL_37;
          }
        }
        else
        {
          do
          {
            if ( v23 == (unsigned __int16)NLS_DOWNCASE(
                                            v22,
                                            *(unsigned __int16 *)&v13[2 * (unsigned __int16)v4],
                                            a3,
                                            v14) )
              break;
            LOWORD(v4) = v4 + 1;
          }
          while ( (unsigned __int16)v4 < v15 );
          if ( (_WORD)v4 != v15 )
            goto LABEL_36;
        }
        LOWORD(v4) = 0;
        v12 = (unsigned __int16 *)(v25 + 4 * v17 - 2);
        LOWORD(v14) = v14 - 1;
        if ( !(_WORD)v14 )
          return 3221226021LL;
      }
    }
    return 3221226021LL;
  }
  v29 = qword_1801CD040;
  if ( v15 )
  {
    v4 = v15;
    v30 = v13 - (char *)v37;
    v31 = v37;
    do
    {
      *v31 = NLS_DOWNCASE(v29, *(unsigned __int16 *)((char *)v31 + v30), a3, v14);
      ++v31;
      --v4;
    }
    while ( v4 );
  }
  if ( !(_WORD)v14 )
    return 3221226021LL;
  while ( 1 )
  {
    LOWORD(a3) = NLS_DOWNCASE(v29, *v12, a3, v14);
    if ( !v33 )
      break;
    for ( i = v4; i < v15; ++i )
    {
      if ( (_WORD)a3 == v37[i] )
        break;
    }
    if ( i == v15 )
      goto LABEL_37;
LABEL_68:
    v12 = (unsigned __int16 *)(v32 + 4 * v17 - 2);
    LOWORD(v14) = v14 - 1;
    if ( !(_WORD)v14 )
      return 3221226021LL;
  }
  for ( j = v4; j < v15; ++j )
  {
    if ( (_WORD)a3 == v37[j] )
      break;
  }
  if ( j == v15 )
    goto LABEL_68;
LABEL_37:
  if ( (_WORD)v14 )
  {
    v11 = v36;
    goto LABEL_24;
  }
  return 3221226021LL;
}
