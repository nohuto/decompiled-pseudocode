/*
 * XREFs of ?GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002E710
 * Callers:
 *     ?GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x18002CFEC (-GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18002DB3C (-GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800357B0 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     AudioServerGetDevicePeriod @ 0x180082430 (AudioServerGetDevicePeriod.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180031974 (-GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180040830 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180052E94 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@@Z @ 0x18005473C (-TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA-AU_GUID@@W4__MIDL___MIDL_.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800A2A38 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EffectPack::GetConnectorFormatForProcessingMode(
        CEndpointCharacteristics **this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  __int64 result; // rax
  struct tagPROPVARIANT pvar; // [rsp+30h] [rbp-50h] BYREF
  struct _GUID v14; // [rsp+50h] [rbp-30h] BYREF
  int v15; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v14 = 0LL;
  v15 = 0;
  *(struct _GUID *)&pvar.vt = *a3;
  v8 = 0;
  while ( *(_QWORD *)&xmmword_18018FED0[v8] != *(_QWORD *)&pvar.vt
       || *((_QWORD *)&xmmword_18018FED0[v8] + 1) != pvar.hVal.QuadPart )
  {
    if ( (unsigned int)++v8 >= 0xA )
      goto LABEL_16;
  }
  v14 = (struct _GUID)PKEY_AudioEngine_SignalProcessingMode_Specific_ConnectorFormat;
  v9 = 602;
  if ( a2 != eKeywordDetectorConnector )
    v9 = 2;
  v15 = v8 + v9;
  memset(&pvar, 0, sizeof(pvar));
  if ( (*(int (__fastcall **)(_QWORD, struct _GUID *, struct tagPROPVARIANT *))(**((_QWORD **)this[198] + 9) + 40LL))(
         *((_QWORD *)this[198] + 9),
         &v14,
         &pvar) < 0
    || pvar.vt != 65
    || !(unsigned int)IsValidWfxBlob(&pvar) )
  {
    PropVariantClear((PROPVARIANT *)&pvar);
LABEL_16:
    *(struct _GUID *)&pvar.vt = *a3;
    EffectPack::TranslateDeviceConnectorModeToStreamingConnectorMode(
      (EffectPack *)this,
      &v14,
      a2,
      (struct _GUID *)&pvar);
    result = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(this[198], a2, &v14, a4);
    if ( (int)result < 0 )
      return EffectPack::GetDeviceFormat((EffectPack *)this, 0, 0, a2, a4);
    return result;
  }
  v10 = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, a4);
  v11 = v10;
  if ( v10 >= 0 )
    v11 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A40,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v10);
  PropVariantClear((PROPVARIANT *)&pvar);
  return v11;
}
