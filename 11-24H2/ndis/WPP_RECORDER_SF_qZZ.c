/*
 * XREFs of WPP_RECORDER_SF_qZZ @ 0x14005D4B0
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x140084490 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     NdisOpenAdapterEx @ 0x140182720 (NdisOpenAdapterEx.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qZZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        unsigned __int16 *a7,
        unsigned __int16 *a8)
{
  const wchar_t *v8; // rsi
  const wchar_t *v9; // rdi
  __int64 v13; // rcx
  const wchar_t *v14; // r10
  const wchar_t *v15; // r9
  __int64 v16; // rdx
  const wchar_t *v17; // r8
  const wchar_t *v18; // rax
  int v19; // [rsp+20h] [rbp-78h]

  v8 = L"NULL";
  v9 = a7;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_2;
  if ( a8 )
  {
    v13 = *a8;
    if ( *a8 )
    {
      v14 = (const wchar_t *)*((_QWORD *)a8 + 1);
      goto LABEL_15;
    }
  }
  else
  {
    v13 = 8LL;
  }
  v14 = L"NULL";
LABEL_15:
  v15 = a8;
  if ( !a8 )
    v15 = L"\b";
  if ( !a7 )
  {
    v16 = 8LL;
    goto LABEL_21;
  }
  v16 = *a7;
  if ( !*a7 )
  {
LABEL_21:
    v17 = L"NULL";
    goto LABEL_22;
  }
  v17 = (const wchar_t *)*((_QWORD *)a7 + 1);
LABEL_22:
  v18 = a7;
  if ( !a7 )
    v18 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
    a4,
    &a6,
    8LL,
    v18,
    2LL,
    v17,
    v16,
    v15,
    2LL,
    v14,
    v13,
    0LL);
LABEL_2:
  if ( v9 && *v9 )
    v8 = (const wchar_t *)*((_QWORD *)v9 + 1);
  if ( !v9 )
    v9 = L"\b";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, 4LL, 6LL, &WPP_ae366525395e343a98801eaac4c5345b_Traceguids, v19, &a6, 8LL, v9, 2LL, v8);
}
