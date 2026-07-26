/*
 * XREFs of WPP_RECORDER_SF_DDZ @ 0x1400A21D0
 * Callers:
 *     ?ndisValidateLWMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_LWM_DRIVER_CHARACTERISTICS@@PEAE@Z @ 0x140142AA0 (-ndisValidateLWMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_LWM_DRIVER_CHARACTERISTICS@@PEA.c)
 *     ?ndisValidateFilterDriverCharacteristicsHeader@@YAHPEBU_NDIS_FILTER_DRIVER_CHARACTERISTICS@@PEAK@Z @ 0x140174D60 (-ndisValidateFilterDriverCharacteristicsHeader@@YAHPEBU_NDIS_FILTER_DRIVER_CHARACTERISTICS@@PEAK.c)
 *     ?ndisValidateProtocolDriverCharacteristicsHeader@@YAHPEBU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@PEAK@Z @ 0x140175860 (-ndisValidateProtocolDriverCharacteristicsHeader@@YAHPEBU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_DDZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        unsigned __int16 *a8)
{
  __int64 v10; // rcx
  const wchar_t *v11; // rdx
  const wchar_t *v12; // rax
  int v14; // [rsp+20h] [rbp-68h]

  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    goto LABEL_11;
  if ( !a8 )
  {
    v10 = 8LL;
    goto LABEL_7;
  }
  v10 = *a8;
  if ( !*a8 )
  {
LABEL_7:
    v11 = L"NULL";
    goto LABEL_8;
  }
  v11 = (const wchar_t *)*((_QWORD *)a8 + 1);
LABEL_8:
  v12 = a8;
  if ( !a8 )
    v12 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_fd3d11e9cca43795654742c76fc3086a_Traceguids,
    a4,
    &a6,
    4LL,
    &a7,
    4LL,
    v12,
    2LL,
    v11,
    v10,
    0LL);
LABEL_11:
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_fd3d11e9cca43795654742c76fc3086a_Traceguids, v14, &a6, 4LL, &a7);
}
