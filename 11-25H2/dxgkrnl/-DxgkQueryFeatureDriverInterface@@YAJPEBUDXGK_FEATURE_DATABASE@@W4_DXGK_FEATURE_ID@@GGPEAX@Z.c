/*
 * XREFs of ?DxgkQueryFeatureDriverInterface@@YAJPEBUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@GGPEAX@Z @ 0x140281408
 * Callers:
 *     DpiQueryFeatureDriverInterface @ 0x1402472A0 (DpiQueryFeatureDriverInterface.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     IsKnownFeature @ 0x140281F24 (IsKnownFeature.c)
 */

__int64 __fastcall DxgkQueryFeatureDriverInterface(
        __int64 a1,
        int a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        void *a5)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v10; // rcx
  const wchar_t *v11; // r9
  __int64 (__fastcall *v12)(__int64, int *); // rax
  __int64 v13; // rcx
  int v14; // [rsp+50h] [rbp-18h] BYREF
  __int16 v15; // [rsp+54h] [rbp-14h]
  unsigned __int16 v16; // [rsp+56h] [rbp-12h]
  void *v17; // [rsp+58h] [rbp-10h]

  v7 = a3;
  v8 = a2;
  memset(a5, 0, a4);
  if ( !(unsigned __int8)IsKnownFeature((unsigned int)v8) )
  {
    WdLogSingleEntry3(2LL, v8, (unsigned int)v7, a1);
    WdLogGlobalForLineNumber = 1486;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Attempting to query interface for unknown feature %u[v%u], Database=0x%.16x",
      v8,
      v7,
      a1,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v10 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)(unsigned int)v8 >> 28) + 656);
  if ( (*(_BYTE *)(v10 + 6 * (v8 & 0xFFFFFFF) + 4) & 1) != 0 )
  {
    if ( (unsigned __int16)v7 >= *(_WORD *)(v10 + 6 * (v8 & 0xFFFFFFF))
      && (unsigned __int16)v7 <= *(_WORD *)(v10 + 6 * (v8 & 0xFFFFFFF) + 2) )
    {
      v12 = *(__int64 (__fastcall **)(__int64, int *))(a1 + 832);
      v13 = *(_QWORD *)(a1 + 800);
      v14 = v8;
      v15 = v7;
      v16 = a4;
      v17 = a5;
      return v12(v13, &v14);
    }
    WdLogSingleEntry3(2LL, v8, v7, a1);
    v11 = L"Attempting to query interface for invalid version of feature %u[v%u], Database=0x%.16x";
    WdLogGlobalForLineNumber = 1506;
  }
  else
  {
    WdLogSingleEntry3(2LL, v8, v7, a1);
    v11 = L"Attempting to query interface for disabled feature %u[v%u], Database=0x%.16x";
    WdLogGlobalForLineNumber = 1496;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v11, v8, v7, a1, 0LL, 0LL);
  return 3221225473LL;
}
