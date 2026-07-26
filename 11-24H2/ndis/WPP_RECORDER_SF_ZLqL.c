/*
 * XREFs of WPP_RECORDER_SF_ZLqL @ 0x1400A7AAC
 * Callers:
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140172FB0 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_ZLqL(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned __int16 *a6, ...)
{
  const wchar_t *v6; // rdi
  const wchar_t *v7; // rbx
  __int64 v9; // rax
  const wchar_t *v10; // rcx
  const wchar_t *v11; // r8
  __int64 v12; // rax
  int v14; // [rsp+20h] [rbp-78h]
  __int64 v15; // [rsp+D0h] [rbp+38h] BYREF
  va_list va; // [rsp+D0h] [rbp+38h]
  __int64 v17; // [rsp+D8h] [rbp+40h] BYREF
  va_list va1; // [rsp+D8h] [rbp+40h]
  va_list va2; // [rsp+E0h] [rbp+48h] BYREF

  va_start(va2, a6);
  va_start(va1, a6);
  va_start(va, a6);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  v6 = L"NULL";
  v7 = a6;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_11;
  if ( !a6 )
  {
    v9 = 8LL;
    goto LABEL_7;
  }
  v9 = *a6;
  if ( !*a6 )
  {
LABEL_7:
    v10 = L"NULL";
    goto LABEL_8;
  }
  v10 = (const wchar_t *)*((_QWORD *)a6 + 1);
LABEL_8:
  v11 = a6;
  if ( !a6 )
    v11 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
    0x11u,
    v11,
    2LL,
    v10,
    v9,
    va,
    4LL,
    va1,
    8LL,
    va2,
    4LL,
    0LL);
LABEL_11:
  if ( a6 )
  {
    v12 = *a6;
    if ( *a6 )
      v6 = (const wchar_t *)*((_QWORD *)a6 + 1);
  }
  else
  {
    v12 = 8LL;
  }
  if ( !a6 )
    v7 = L"\b";
  LOWORD(v14) = 17;
  return WppAutoLogTrace(
           a1,
           4LL,
           13LL,
           &WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
           v14,
           v7,
           2LL,
           v6,
           v12,
           (__int64 *)va);
}
