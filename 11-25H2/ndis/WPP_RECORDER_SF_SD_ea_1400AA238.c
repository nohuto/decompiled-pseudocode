/*
 * XREFs of WPP_RECORDER_SF_SD @ 0x1400AA238
 * Callers:
 *     NdisQueryDiagnosticSetting @ 0x140143690 (NdisQueryDiagnosticSetting.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_SD(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, const wchar_t *a6, ...)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r9
  const wchar_t *v13; // r8
  bool v14; // zf
  int v16; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  v7 = -1LL;
  v10 = 10LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x4000000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a6 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a6[v11] );
      v12 = 2 * v11 + 2;
    }
    else
    {
      v12 = 10LL;
    }
    v13 = a6;
    if ( !a6 )
      v13 = L"NULL";
    ndisWppFastTraceMessage(&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids, a4, v13, v12, va, 4LL, 0LL);
  }
  v14 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v10 = 2 * v7 + 2;
    v14 = a6 == 0LL;
  }
  if ( v14 )
    v6 = L"NULL";
  LOWORD(v16) = a4;
  return WppAutoLogTrace(a1, 4LL, 27LL, &WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids, v16, v6, v10, va);
}
