/*
 * XREFs of WPP_RECORDER_SF_ZL @ 0x14008E9B0
 * Callers:
 *     ?ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x1400744D0 (-ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z.c)
 *     ?ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z @ 0x1400B85B8 (-ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_ZL(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, unsigned __int16 *a6, ...)
{
  const wchar_t *v6; // rsi
  const wchar_t *v7; // rbx
  __int64 v10; // rdi
  __int64 v11; // rax
  const wchar_t *v12; // rcx
  const wchar_t *v13; // r8
  int v15; // [rsp+20h] [rbp-58h]
  va_list va; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = L"NULL";
  v7 = a6;
  v10 = 8LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_11;
  if ( !a6 )
  {
    v11 = 8LL;
    goto LABEL_7;
  }
  v11 = *a6;
  if ( !*a6 )
  {
LABEL_7:
    v12 = L"NULL";
    goto LABEL_8;
  }
  v12 = (const wchar_t *)*((_QWORD *)a6 + 1);
LABEL_8:
  v13 = a6;
  if ( !a6 )
    v13 = L"\b";
  ndisWppFastTraceMessage(&WPP_ae366525395e343a98801eaac4c5345b_Traceguids, a4, v13, 2LL, v12, v11, va, 4LL, 0LL);
LABEL_11:
  if ( a6 )
  {
    v10 = *a6;
    if ( *a6 )
      v6 = (const wchar_t *)*((_QWORD *)a6 + 1);
  }
  else
  {
    v7 = L"\b";
  }
  LOWORD(v15) = a4;
  return WppAutoLogTrace(a1, 4LL, 5LL, &WPP_ae366525395e343a98801eaac4c5345b_Traceguids, v15, v7, 2LL, v6, v10, va);
}
