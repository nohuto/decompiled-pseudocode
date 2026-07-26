/*
 * XREFs of WPP_RECORDER_SF_DDZ @ 0x140098480
 * Callers:
 *     ?ndisValidateLWMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_LWM_DRIVER_CHARACTERISTICS@@PEAE@Z @ 0x140137A7C (-ndisValidateLWMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_LWM_DRIVER_CHARACTERISTICS@@PEA.c)
 *     ?ndisValidateFilterDriverCharacteristicsHeader@@YAHPEBU_NDIS_FILTER_DRIVER_CHARACTERISTICS@@PEAK@Z @ 0x140168620 (-ndisValidateFilterDriverCharacteristicsHeader@@YAHPEBU_NDIS_FILTER_DRIVER_CHARACTERISTICS@@PEAK.c)
 *     ?ndisValidateProtocolDriverCharacteristicsHeader@@YAHPEBU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@PEAK@Z @ 0x1401689A0 (-ndisValidateProtocolDriverCharacteristicsHeader@@YAHPEBU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
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
  const wchar_t *v8; // rbx
  __int64 v11; // rcx
  const wchar_t *v12; // rdx
  const wchar_t *v13; // rax
  bool v14; // zf
  int v16; // [rsp+20h] [rbp-68h]

  v8 = a8;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    goto LABEL_11;
  if ( !a8 )
  {
    v11 = 8LL;
    goto LABEL_7;
  }
  v11 = *a8;
  if ( !*a8 )
  {
LABEL_7:
    v12 = L"NULL";
    goto LABEL_8;
  }
  v12 = (const wchar_t *)*((_QWORD *)a8 + 1);
LABEL_8:
  v13 = a8;
  if ( !a8 )
    v13 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_fd3d11e9cca43795654742c76fc3086a_Traceguids,
    a4,
    &a6,
    4LL,
    &a7,
    4LL,
    v13,
    2LL,
    v12,
    v11,
    0LL);
LABEL_11:
  v14 = v8 == 0LL;
  if ( v8 )
    v14 = 0;
  if ( v14 )
    v8 = L"\b";
  LOWORD(v16) = a4;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_fd3d11e9cca43795654742c76fc3086a_Traceguids, v16, &a6, 4LL, &a7, 4LL, v8);
}
