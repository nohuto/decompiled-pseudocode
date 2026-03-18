/*
 * XREFs of _lambda_88b058a4e995c6d2e4237c7842c74194_::operator() @ 0x1401BAF48
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x140414B30 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?MonitorIsMonitorConnected@@YAJPEAXIEPEAE@Z @ 0x1403D2FF8 (-MonitorIsMonitorConnected@@YAJPEAXIEPEAE@Z.c)
 */

__int64 __fastcall lambda_88b058a4e995c6d2e4237c7842c74194_::operator()(__int64 **a1, unsigned int a2, int *a3)
{
  __int64 v3; // rsi
  int v5; // eax
  char v7; // r8
  _DWORD *v8; // rcx
  int IsMonitorConnected; // eax
  __int64 v10; // rbp
  __int64 v12; // rbx
  unsigned int v13; // esi
  unsigned int v14; // ecx
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rbx
  unsigned int v18; // ecx
  __int64 v19; // rbx
  __int64 v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+20h] [rbp-48h]
  __int64 v22; // [rsp+20h] [rbp-48h]
  __int64 v23; // [rsp+20h] [rbp-48h]
  __int64 v24; // [rsp+28h] [rbp-40h]
  unsigned __int8 v25; // [rsp+80h] [rbp+18h] BYREF

  v3 = a2;
  v25 = 0;
  v5 = *a3;
  v7 = 1;
  if ( (v5 & 1) != 0 )
  {
    ++*(_DWORD *)a1[1];
    if ( a3[4] || a3[5] )
      v7 = 0;
    *(_BYTE *)a1[2] |= v7;
    v8 = (_DWORD *)**a1;
    if ( a3[1] != v8[103] || a3[2] != v8[104] )
    {
      v17 = a2;
      v13 = -1073741811;
      WdLogSingleEntry3(2LL, a2, v8, -1073741811LL);
      v24 = **a1;
      WdLogGlobalForLineNumber = 992;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Adapter LUID from path 0x%I64x does not match the LUID from adapter 0x%I64x,returning 0x%I64x).",
        v17,
        v24,
        -1073741811LL,
        0LL,
        0LL);
      return v13;
    }
    IsMonitorConnected = MonitorIsMonitorConnected(v8, a3[3], 0, &v25);
    v10 = IsMonitorConnected;
    if ( IsMonitorConnected < 0 )
    {
      WdLogSingleEntry2(2LL, v3, IsMonitorConnected);
      WdLogGlobalForLineNumber = 1001;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to check the monitor connection on path 0x%I64x, (Status = 0x%I64x).",
        v3,
        v10,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v10;
    }
    if ( !v25 )
    {
      v12 = v3;
      v13 = -1071774920;
      WdLogSingleEntry3(2LL, (unsigned int)a3[3], v12, -1071774920LL);
      v20 = (unsigned int)a3[3];
      WdLogGlobalForLineNumber = 1009;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Target ID 0x%I64x from path 0x%I64x does not have connected monitor,returning 0x%I64x).",
        v20,
        v12,
        -1071774920LL,
        0LL,
        0LL);
      return v13;
    }
    if ( (unsigned int)(a3[8] - 1) > 3 )
    {
      v16 = v3;
      v13 = -1073741811;
      WdLogSingleEntry3(2LL, a3[8], v16, -1073741811LL);
      v22 = a3[8];
      WdLogGlobalForLineNumber = 1018;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Rotation mode (0x%I64x) from path 0x%I64x is not valid, returning 0x%I64x).",
        v22,
        v16,
        -1073741811LL,
        0LL,
        0LL);
      return v13;
    }
    v14 = a3[11];
    if ( v14 - 1 > 0x3E )
    {
      v15 = v3;
      v13 = -1073741811;
      WdLogSingleEntry3(2LL, v14, v15, -1073741811LL);
      v21 = (unsigned int)a3[11];
      WdLogGlobalForLineNumber = 1028;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"VSync frequency divider (0x%I64x) from path 0x%I64x is not valid, returning 0x%I64x).",
        v21,
        v15,
        -1073741811LL,
        0LL,
        0LL);
      return v13;
    }
  }
  if ( (*a3 & 2) != 0 )
  {
    v18 = a3[13];
    if ( v18 - 100 > 0x190 )
    {
      v19 = v3;
      v13 = -1073741811;
      WdLogSingleEntry3(2LL, v18, v19, -1073741811LL);
      v23 = (unsigned int)a3[13];
      WdLogGlobalForLineNumber = 1040;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Monitor scale factor (0x%I64x) from path 0x%I64x is not valid, returning 0x%I64x).",
        v23,
        v19,
        -1073741811LL,
        0LL,
        0LL);
      return v13;
    }
  }
  return 0LL;
}
