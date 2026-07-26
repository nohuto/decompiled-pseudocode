/*
 * XREFs of WPP_RECORDER_SF_ZL @ 0x14009A720
 * Callers:
 *     ?ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x140090310 (-ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z.c)
 *     ?ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z @ 0x1400BF8B8 (-ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_ZL(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, unsigned __int16 *a6, ...)
{
  const wchar_t *v6; // rsi
  const wchar_t *v7; // rbx
  __int64 v10; // rax
  const wchar_t *v11; // rcx
  const wchar_t *v12; // r8
  int v14; // [rsp+20h] [rbp-58h]
  va_list va; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = L"NULL";
  v7 = a6;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_11;
  if ( !a6 )
  {
    v10 = 8LL;
    goto LABEL_7;
  }
  v10 = *a6;
  if ( !*a6 )
  {
LABEL_7:
    v11 = L"NULL";
    goto LABEL_8;
  }
  v11 = (const wchar_t *)*((_QWORD *)a6 + 1);
LABEL_8:
  v12 = a6;
  if ( !a6 )
    v12 = L"\b";
  ndisWppFastTraceMessage(&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids, a4, v12, 2LL, v11, v10, va, 4LL, 0LL);
LABEL_11:
  if ( a6 )
  {
    if ( *a6 )
      v6 = (const wchar_t *)*((_QWORD *)a6 + 1);
  }
  else
  {
    v7 = L"\b";
  }
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, 4LL, 5LL, &WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids, v14, v7, 2LL, v6);
}
