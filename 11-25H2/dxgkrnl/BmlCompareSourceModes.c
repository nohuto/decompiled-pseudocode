/*
 * XREFs of BmlCompareSourceModes @ 0x1402C7150
 * Callers:
 *     BmlGetNextBestSourceMode @ 0x1402C6C60 (BmlGetNextBestSourceMode.c)
 * Callees:
 *     BmlCompareRegionsWithPivot @ 0x1402C7500 (BmlCompareRegionsWithPivot.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1402C75BC (BmlDoesSourceModeObeyConstraint.c)
 *     BmlCompareSourceModesWithMonitors @ 0x1402C7808 (BmlCompareSourceModesWithMonitors.c)
 *     BmlCompareSourceModesWithContentRes @ 0x1402C7A9C (BmlCompareSourceModesWithContentRes.c)
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1403BF90C (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 */

__int64 __fastcall BmlCompareSourceModes(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  unsigned int v9; // ebx
  __int64 v10; // rsi
  __int64 v11; // rdi
  int v12; // edx
  unsigned int v13; // edi
  __int64 result; // rax
  int v15; // ecx
  int v16; // r12d
  int v17; // esi
  int v18; // ecx
  int v19; // ecx
  int v20; // ebp
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // r8d
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  __int64 v35; // r8
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned int v38; // eax

  v5 = a3;
  v9 = 1;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1887;
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1888;
  }
  if ( a4 == a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1890;
  }
  if ( !a4 )
    return 0xFFFFFFFFLL;
  if ( !a5 )
    return v9;
  v10 = 120 * v5;
  v11 = *(_QWORD *)(120 * v5 + a1 + 16);
  if ( !*(_BYTE *)(v11 + 129) || (*(_DWORD *)(a1 + 8) & 1) == 0 )
  {
    if ( !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, (unsigned __int16)v5, a4) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1751;
    }
    if ( !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, (unsigned __int16)v5, a5) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1752;
    }
    v12 = *(_DWORD *)(v11 + 116);
    if ( v12 )
    {
      if ( (*(_QWORD *)v11 & 0x8000000100LL) != 0 )
      {
        v24 = *(_DWORD *)(a4 + 96);
        if ( (v24 == v12) != (*(_DWORD *)(a5 + 96) == v12) )
        {
          v13 = -1;
          if ( v24 == v12 )
            return 1;
          return v13;
        }
      }
    }
    if ( (*(_DWORD *)v11 & 0x100LL) != 0 )
    {
      v13 = BmlCompareRegionsWithPivot(
              (struct _D3DKMDT_2DREGION *)(a4 + 76),
              (struct _D3DKMDT_2DREGION *)(a5 + 76),
              (struct _D3DKMDT_2DREGION *)(v11 + 96));
      if ( v13 )
        return v13;
    }
  }
  if ( !*(_BYTE *)(*(_QWORD *)(v10 + a1 + 16) + 129LL)
    || (*(_BYTE *)(v10 + a1 + 124) & 1) == 0
    || (result = BmlCompareSourceModesWithContentRes(a1, (unsigned __int16)v5, a4, a5), !(_DWORD)result) )
  {
    v15 = *(_DWORD *)(a5 + 96);
    v16 = *(_DWORD *)(v10 + a1 + 120);
    v17 = 5;
    if ( v15 )
    {
      v18 = v15 - 20;
      if ( !v18 || (v19 = v18 - 1) == 0 )
      {
        v20 = 4;
        goto LABEL_26;
      }
      v25 = v19 - 1;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( !v26 )
        {
          v20 = 3;
          goto LABEL_26;
        }
        v27 = v26 - 9;
        if ( !v27 )
        {
          v20 = 1;
          goto LABEL_26;
        }
        v31 = v27 - 3;
        if ( !v31 )
        {
          v20 = 5;
          if ( v16 != 1 )
            v20 = -1;
LABEL_26:
          v21 = *(_DWORD *)(a4 + 96);
          if ( v21 )
          {
            v22 = v21 - 20;
            if ( !v22 || (v23 = v22 - 1) == 0 )
            {
              v17 = 4;
              goto LABEL_30;
            }
            v28 = v23 - 1;
            if ( v28 )
            {
              v29 = v28 - 1;
              if ( !v29 )
              {
                v17 = 3;
                goto LABEL_30;
              }
              v30 = v29 - 9;
              if ( !v30 )
              {
                v17 = 1;
                goto LABEL_30;
              }
              v33 = v30 - 3;
              if ( !v33 )
              {
                if ( v16 != 1 )
                  v17 = -1;
                goto LABEL_30;
              }
              v34 = v33 - 6;
              if ( !v34 )
              {
                v17 = 2;
                goto LABEL_30;
              }
              if ( v34 == 72 )
              {
                if ( (unsigned int)(v16 - 2) > 1 )
                  v17 = -1;
                goto LABEL_30;
              }
            }
          }
          else
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 297;
          }
          v17 = -1;
LABEL_30:
          if ( v17 <= v20 )
          {
            if ( v17 >= v20 )
            {
              v35 = *(unsigned int *)(a4 + 76);
              v36 = v35 * *(unsigned int *)(a4 + 80);
              v37 = *(unsigned int *)(a5 + 76) * (unsigned __int64)*(unsigned int *)(a5 + 80);
              if ( v36 <= v37 )
              {
                if ( v36 >= v37 )
                  v9 = BmlCompareValues<unsigned int>((unsigned int)v35);
                else
                  v9 = -1;
              }
              if ( v9 )
              {
                v38 = BmlCompareSourceModesWithMonitors(a1, a3, v35, a4, a5);
                if ( v38 )
                  return v38;
              }
            }
            else
            {
              return (unsigned int)-1;
            }
          }
          return v9;
        }
        v32 = v31 - 6;
        if ( !v32 )
        {
          v20 = 2;
          goto LABEL_26;
        }
        if ( v32 == 72 )
        {
          v20 = 5;
          if ( (unsigned int)(v16 - 2) > 1 )
            v20 = -1;
          goto LABEL_26;
        }
      }
    }
    else
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 297;
    }
    v20 = -1;
    goto LABEL_26;
  }
  return result;
}
