/*
 * XREFs of WPP_RECORDER_SF_ZZL @ 0x140059A10
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140153580 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x14016BDD0 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_ZZL(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        unsigned __int16 *a6,
        unsigned __int16 *a7,
        ...)
{
  const wchar_t *v7; // rbp
  const wchar_t *v8; // rdi
  const wchar_t *v9; // rbx
  __int64 v12; // rsi
  bool v13; // zf
  __int64 v15; // rax
  const wchar_t *v16; // r11
  const wchar_t *v17; // r10
  __int64 v18; // rcx
  const wchar_t *v19; // r9
  const wchar_t *v20; // r8
  int v21; // [rsp+20h] [rbp-78h]
  va_list va; // [rsp+D8h] [rbp+40h] BYREF

  va_start(va, a7);
  v7 = L"NULL";
  v8 = a6;
  v9 = a7;
  v12 = 8LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_2;
  if ( a7 )
  {
    v15 = *a7;
    if ( *a7 )
    {
      v16 = (const wchar_t *)*((_QWORD *)a7 + 1);
      goto LABEL_17;
    }
  }
  else
  {
    v15 = 8LL;
  }
  v16 = L"NULL";
LABEL_17:
  v17 = a7;
  if ( !a7 )
    v17 = L"\b";
  if ( !a6 )
  {
    v18 = 8LL;
    goto LABEL_23;
  }
  v18 = *a6;
  if ( !*a6 )
  {
LABEL_23:
    v19 = L"NULL";
    goto LABEL_24;
  }
  v19 = (const wchar_t *)*((_QWORD *)a6 + 1);
LABEL_24:
  v20 = a6;
  if ( !a6 )
    v20 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_253e38cb1efe38fa547bfa360b554d29_Traceguids,
    a4,
    v20,
    2LL,
    v19,
    v18,
    v17,
    2LL,
    v16,
    v15,
    va,
    4LL,
    0LL);
LABEL_2:
  if ( !a7 )
    v9 = L"\b";
  v13 = a6 == 0LL;
  if ( a6 )
  {
    v12 = *a6;
    if ( *a6 )
      v7 = (const wchar_t *)*((_QWORD *)a6 + 1);
    v13 = a6 == 0LL;
  }
  if ( v13 )
    v8 = L"\b";
  LOWORD(v21) = a4;
  return WppAutoLogTrace(a1, 4LL, 6LL, &WPP_253e38cb1efe38fa547bfa360b554d29_Traceguids, v21, v8, 2LL, v7, v12, v9);
}
