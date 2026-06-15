/*
 * XREFs of ?GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800334C0
 * Callers:
 *     ?GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x180031D9C (-GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800328EC (-GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     AudioServerGetDevicePeriod @ 0x1800380C0 (AudioServerGetDevicePeriod.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003ED58 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180036734 (-GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180043970 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x1800608A0 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@@Z @ 0x180061E80 (-TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA-AU_GUID@@W4__MIDL___MIDL_.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800A6610 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_TranslateModeForPDF2@@@details@wil@@QEAA_NXZ @ 0x180131878 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_TranslateModeForPDF2@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EffectPack::GetConnectorFormatForProcessingMode(
        EffectPack *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  int v8; // ecx
  LARGE_INTEGER hVal; // rdx
  __int64 v10; // r8
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ebx
  __int64 result; // rax
  char v15; // al
  struct _GUID v16; // xmm0
  struct tagPROPVARIANT pvar; // [rsp+30h] [rbp-50h] BYREF
  struct _GUID v18; // [rsp+50h] [rbp-30h] BYREF
  int v19; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v18 = 0LL;
  v19 = 0;
  *(struct _GUID *)&pvar.vt = *a3;
  v8 = 0;
  hVal = pvar.hVal;
  v10 = *(_QWORD *)&pvar.vt;
  while ( xmmword_180186BA0[v8] != *(_OWORD *)&pvar.vt )
  {
    if ( (unsigned int)++v8 >= 0xA )
      goto LABEL_15;
  }
  v18 = (struct _GUID)PKEY_AudioEngine_SignalProcessingMode_Specific_ConnectorFormat;
  v11 = 602;
  if ( a2 != eKeywordDetectorConnector )
    v11 = 2;
  v19 = v8 + v11;
  memset(&pvar, 0, sizeof(pvar));
  if ( (*(int (__fastcall **)(_QWORD, struct _GUID *, struct tagPROPVARIANT *))(**(_QWORD **)(*((_QWORD *)this + 198)
                                                                                            + 72LL)
                                                                              + 40LL))(
         *(_QWORD *)(*((_QWORD *)this + 198) + 72LL),
         &v18,
         &pvar) >= 0
    && pvar.vt == 65
    && (unsigned int)IsValidWfxBlob(&pvar) )
  {
    v12 = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, a4);
    v13 = v12;
    if ( v12 >= 0 )
      v13 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19E9,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v12);
    PropVariantClear((PROPVARIANT *)&pvar);
    return v13;
  }
  PropVariantClear((PROPVARIANT *)&pvar);
LABEL_15:
  v15 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_TranslateModeForPDF2>::__private_IsEnabled)(
          &`wil::Feature<__WilFeatureTraits_Feature_Servicing_TranslateModeForPDF2>::GetImpl'::`2'::impl,
          (LARGE_INTEGER)hVal.QuadPart,
          v10);
  v16 = *a3;
  if ( v15 )
  {
    *(struct _GUID *)&pvar.vt = *a3;
    EffectPack::TranslateDeviceConnectorModeToStreamingConnectorMode(this, &v18, a2, (struct _GUID *)&pvar);
    v16 = v18;
  }
  v18 = v16;
  result = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
             *((CEndpointCharacteristics **)this + 198),
             a2,
             &v18,
             a4);
  if ( (int)result < 0 )
    return EffectPack::GetDeviceFormat(this, 0, 0, a2, a4);
  return result;
}
