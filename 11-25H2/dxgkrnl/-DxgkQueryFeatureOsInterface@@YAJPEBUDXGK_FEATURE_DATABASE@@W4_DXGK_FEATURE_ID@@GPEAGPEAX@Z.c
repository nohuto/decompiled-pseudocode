/*
 * XREFs of ?DxgkQueryFeatureOsInterface@@YAJPEBUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@GPEAGPEAX@Z @ 0x1402815B4
 * Callers:
 *     DpiQueryFeatureOsInterface @ 0x140247358 (DpiQueryFeatureOsInterface.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     IsKnownFeature @ 0x140281F24 (IsKnownFeature.c)
 */

__int64 __fastcall DxgkQueryFeatureOsInterface(__int64 a1, unsigned int a2, __int64 a3, _WORD *a4, char *a5)
{
  __int64 v5; // rbp
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 result; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rdi
  const wchar_t *v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // edx
  __int64 v23; // rbx
  int v24; // eax

  v5 = (unsigned __int16)*a4;
  *a4 = 0;
  if ( !(unsigned __int8)IsKnownFeature(a2) )
  {
    v10 = (unsigned int)v8;
    v11 = v9;
    WdLogSingleEntry3(2LL, v9, (unsigned int)v8, a1);
    WdLogGlobalForLineNumber = 1368;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Attempting to query interface for unknown feature %u[v%u], Database=0x%.16x",
      v11,
      v10,
      a1,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v13 = (unsigned __int64)(unsigned int)v9 >> 28;
  v14 = v9 & 0xFFFFFFF;
  v15 = *(_QWORD *)(a1 + 8 * v13 + 656);
  if ( (*(_BYTE *)(v15 + 6 * v14 + 4) & 1) == 0 )
  {
    v16 = v8;
    v17 = v9;
    WdLogSingleEntry3(2LL, v9, v8, a1);
    v18 = L"Attempting to query interface for disabled feature %u[v%u], Database=0x%.16x";
    WdLogGlobalForLineNumber = 1378;
LABEL_23:
    v22 = 0x40000;
    goto LABEL_24;
  }
  v19 = *(unsigned __int16 *)(v15 + 6 * v14);
  if ( (unsigned __int16)v8 < (unsigned __int16)v19 || (unsigned __int16)v8 > *(_WORD *)(v15 + 6 * v14 + 2) )
  {
    v16 = v8;
    v17 = v9;
    WdLogSingleEntry3(2LL, v9, v8, a1);
    v18 = L"Attempting to query interface for invalid version of feature %u[v%u], Database=0x%.16x";
    WdLogGlobalForLineNumber = 1388;
    goto LABEL_23;
  }
  v20 = 2 * v13;
  if ( ((unsigned int)v9 & 0xFFFFFFF) >= *((_DWORD *)&g_FeatureInterfaceTables + 2 * v20 + 2) )
    v21 = 0LL;
  else
    v21 = *((_QWORD *)&g_FeatureInterfaceTables + v20) + 16 * v14;
  if ( !*(_QWORD *)v21 )
  {
    WdLogSingleEntry3(3LL, v9, v8, a1);
    WdLogGlobalForLineNumber = 1399;
    return 0LL;
  }
  if ( v8 - v19 < (unsigned __int64)*(unsigned int *)(v21 + 8) )
  {
    v23 = *(_QWORD *)v21 + 16LL * (unsigned int)(v8 - v19);
    if ( *(_QWORD *)v23 )
    {
      if ( (unsigned int)v5 < *(_DWORD *)(v23 + 8) )
      {
        WdLogSingleEntry4(3LL, v9, v8, v5, *(unsigned int *)(v23 + 8));
        result = 3221225507LL;
        WdLogGlobalForLineNumber = 1434;
        return result;
      }
      memmove(a5, *(const void **)v23, *(unsigned int *)(v23 + 8));
      v24 = *(_DWORD *)(v23 + 8);
      if ( (_DWORD)v5 != v24 )
        memset(&a5[v24], 0, (unsigned int)(v5 - v24));
      *a4 = *(_WORD *)(v23 + 8);
    }
    else
    {
      WdLogSingleEntry3(3LL, v9, v8, a1);
      WdLogGlobalForLineNumber = 1425;
    }
    return 0LL;
  }
  v16 = v8;
  v17 = v9;
  WdLogSingleEntry3(1LL, v9, v8, a1);
  v18 = L"Dxgkrnl feature interface table mismatch! Feature=%u[v%u], Database=0x%.16x";
  WdLogGlobalForLineNumber = 1413;
  v22 = 262146;
LABEL_24:
  DxgkLogInternalTriageEvent(0LL, v22, 0xFFFFFFFFLL, v18, v17, v16, a1, 0LL, 0LL);
  return 3221225473LL;
}
