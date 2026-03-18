/*
 * XREFs of ?ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z @ 0x14006EC20
 * Callers:
 *     ?ScaleOverrideTestHook@@YAXQEBGPEAK@Z @ 0x140058AAC (-ScaleOverrideTestHook@@YAXQEBGPEAK@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x14005319C (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

void __fastcall DpiInternal::ScaleOverrideTestHookCore(DpiInternal *this, unsigned __int16 *a2, unsigned int *a3)
{
  __int64 v4; // rax
  DpiInternal *v5; // r8
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  NTSTATUS v10; // eax
  __int64 v11; // rdi
  const wchar_t *v12; // r9
  NTSTATUS v13; // eax
  int v14; // eax
  __int64 v15; // rbx
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  int v19; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+78h] [rbp-88h]
  int v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  int v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  int v26; // [rsp+A0h] [rbp-60h]
  const wchar_t *v27; // [rsp+A8h] [rbp-58h]
  int *v28; // [rsp+B0h] [rbp-50h]
  int v29; // [rsp+B8h] [rbp-48h]
  int *v30; // [rsp+C0h] [rbp-40h]
  int v31; // [rsp+C8h] [rbp-38h]
  __int64 v32; // [rsp+D0h] [rbp-30h]
  int v33; // [rsp+D8h] [rbp-28h]
  __int64 v34; // [rsp+E0h] [rbp-20h]
  __int128 v35; // [rsp+E8h] [rbp-18h]
  __int128 v36; // [rsp+F8h] [rbp-8h]
  unsigned __int16 v37[16]; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int16 v38[80]; // [rsp+130h] [rbp+30h] BYREF

  *(_DWORD *)a2 = 0;
  v4 = -1LL;
  v5 = this;
  v6 = 314159269LL;
  do
    ++v4;
  while ( *((_WORD *)this + v4) );
  v7 = 2 * v4;
  if ( v7 )
  {
    v8 = v7;
    do
    {
      v9 = *(unsigned __int8 *)v5;
      v5 = (DpiInternal *)((char *)v5 + 1);
      v6 = (v9 + ((unsigned int)v6 >> 2) + 2080 * (_DWORD)v6) ^ (unsigned int)v6;
      --v8;
    }
    while ( v8 );
  }
  LODWORD(v6) = v6 & 0x7FFFFFFF;
  v10 = RtlStringCbPrintfW(v37, 0x16uLL, (size_t *)L"%d", (unsigned int)v6);
  if ( v10 < 0 )
  {
    v11 = v10;
    WdLogSingleEntry2(1LL, v10, (unsigned int)v6);
    v12 = L"RtlStringCbPrintfW failed with status: 0x%I64x, for HashKey: %d";
    WdLogGlobalForLineNumber = 595;
LABEL_8:
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, v12, v11, v6, 0LL, 0LL, 0LL);
    return;
  }
  v13 = RtlStringCbPrintfW(
          v38,
          0xA0uLL,
          (size_t *)L"%s\\%s\\%s",
          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Scaling",
          L"Monitors",
          v37);
  if ( v13 < 0 )
  {
    v11 = v13;
    WdLogSingleEntry2(1LL, v13, v6);
    v12 = L"RtlStringCbPrintfW failed with status: 0x%I64x, for full subkey for HashKey: %d";
    WdLogGlobalForLineNumber = 603;
    goto LABEL_8;
  }
  v16 = 0;
  v17 = 0;
  v20 = v38;
  v18 = 0LL;
  v27 = L"DesktopScaleFactor";
  v19 = 5;
  v28 = &v16;
  v21 = 0LL;
  v30 = &v17;
  v22 = 0;
  v23 = 0LL;
  v24 = 0;
  v25 = 0LL;
  v26 = 288;
  v29 = 0x4000000;
  v31 = 4;
  v32 = 0LL;
  v33 = 0;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v14 = RtlQueryRegistryValuesEx(0LL, L"\\Registry\\Machine\\", &v18, 0LL, 0LL);
  if ( v14 >= 0 )
  {
    if ( v16 != v17 )
      *(_DWORD *)a2 = v16;
  }
  else if ( v14 != -1073741772 )
  {
    v15 = v14;
    WdLogSingleEntry1(2LL, v14);
    WdLogGlobalForLineNumber = 631;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"RtlQueryRegistryValues for scaling overrides failed with unexpected status: 0x%I64x",
      v15,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
