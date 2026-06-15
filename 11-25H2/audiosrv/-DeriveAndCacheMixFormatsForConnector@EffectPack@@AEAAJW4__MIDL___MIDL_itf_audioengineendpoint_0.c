/*
 * XREFs of ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003ED58
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18003FDC4 (-SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800271EC (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800331CC (-CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpo.c)
 *     ?GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800334C0 (-GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_00.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180033F1C (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@U_GUID@@@Z @ 0x180035B48 (-IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180035CD0 (-GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengine.c)
 *     ?GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@W4SED_RESOLVEOPT@@@Z @ 0x1800361B0 (-GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MID.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1800366C0 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?CanBuildProcessingModesOnRawConnector@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@@Z @ 0x1800372A8 (-CanBuildProcessingModesOnRawConnector@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_.c)
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18003758C (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800378C0 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18003E4E0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18003E7C8 (-DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioeng.c)
 *     ?ConfirmDeviceFormat@EffectPack@@AEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x1800402BC (-ConfirmDeviceFormat@EffectPack@@AEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengine.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180040B34 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x1800497EC (-DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x18004BC10 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x1800661B8 (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     ?CacheMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@_NPEBUtWAVEFORMATEX@@@Z @ 0x18007BD28 (-CacheMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?GetConnectorProcessingModeCount@EffectPack@@QEAAIW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18007F65C (-GetConnectorProcessingModeCount@EffectPack@@QEAAIW4__MIDL___MIDL_itf_audioengineendpoint_0000_0.c)
 *     ?DeriveOverridingMixFormatInternal@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUIAudioMediaType@@@Z @ 0x1800875E0 (-DeriveOverridingMixFormatInternal@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A6DDC (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     CreateAudioMediaType @ 0x1800AAA84 (CreateAudioMediaType.c)
 *     _lambda_dacf159241f8e1fef226fb2cfac8af81_::_lambda_dacf159241f8e1fef226fb2cfac8af81_ @ 0x1800B6FEC (_lambda_dacf159241f8e1fef226fb2cfac8af81_--_lambda_dacf159241f8e1fef226fb2cfac8af81_.c)
 *     _lambda_cd6f2b70438ec48af9647ef981891005_::_lambda_cd6f2b70438ec48af9647ef981891005_ @ 0x1800C232C (_lambda_cd6f2b70438ec48af9647ef981891005_--_lambda_cd6f2b70438ec48af9647ef981891005_.c)
 *     wil::scope_exit__lambda_dacf159241f8e1fef226fb2cfac8af81___ @ 0x1800EE920 (wil--scope_exit__lambda_dacf159241f8e1fef226fb2cfac8af81___.c)
 *     _lambda_aa1414ab8e95a4429593081bb8a30d1f_::_lambda_aa1414ab8e95a4429593081bb8a30d1f_ @ 0x1800EE940 (_lambda_aa1414ab8e95a4429593081bb8a30d1f_--_lambda_aa1414ab8e95a4429593081bb8a30d1f_.c)
 *     wil::scope_exit__lambda_950500107a52a887eceb6991ca1e1e73___ @ 0x180127EFC (wil--scope_exit__lambda_950500107a52a887eceb6991ca1e1e73___.c)
 *     wil::details::lambda_call__lambda_950500107a52a887eceb6991ca1e1e73___::_lambda_call__lambda_950500107a52a887eceb6991ca1e1e73___ @ 0x180128748 (wil--details--lambda_call__lambda_950500107a52a887eceb6991ca1e1e73___--_lambda_call__lambda_9505.c)
 *     wil::details::lambda_call__lambda_dacf159241f8e1fef226fb2cfac8af81___::_lambda_call__lambda_dacf159241f8e1fef226fb2cfac8af81___ @ 0x180128768 (wil--details--lambda_call__lambda_dacf159241f8e1fef226fb2cfac8af81___--_lambda_call__lambda_dacf.c)
 *     _lambda_1b4fae7bd9b23b22ce0f3eaa6dcbf353_::operator() @ 0x180128D34 (_lambda_1b4fae7bd9b23b22ce0f3eaa6dcbf353_--operator().c)
 *     ?CacheDevicePipeFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x18012AC2C (-CacheDevicePipeFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_00.c)
 *     ?CacheStreamGroupFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x18012AD2C (-CacheStreamGroupFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=24
__int64 __fastcall EffectPack::DeriveAndCacheMixFormatsForConnector(
        EffectPack *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  __int64 v3; // rax
  void (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  int v5; // r14d
  int v6; // r10d
  unsigned int ConnectorProcessingModeCount; // r15d
  unsigned int i; // edi
  __int64 SupportedConnectorModesInternal; // rax
  GUID v10; // xmm2
  __int64 v11; // rax
  unsigned int ConnectorFormatForProcessingMode; // ebx
  HRESULT v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  CEndpointCharacteristics *v20; // rbx
  const struct tWAVEFORMATEX *v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rax
  CEndpointCharacteristics *v25; // rbx
  struct tWAVEFORMATEX *v26; // rax
  int v27; // eax
  __int64 v28; // rax
  CEndpointCharacteristics *v29; // rbx
  struct tWAVEFORMATEX *v30; // rax
  int v31; // eax
  __int64 v32; // rax
  WAVEFORMATEX *v33; // rcx
  __int64 v34; // rdx
  WAVEFORMATEX *v35; // rcx
  __int64 v36; // rdx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v37; // ebx
  __int64 *v38; // rdi
  int SupportedProcessingModes; // eax
  unsigned int v40; // edx
  int v41; // eax
  int v42; // ecx
  __int64 v43; // rax
  unsigned int v44; // edx
  int v45; // eax
  __int64 v46; // rbx
  __int64 (__fastcall *v47)(__int64, _QWORD, _QWORD, struct _GUID *, struct IAudioMediaType **, struct _GUID *, struct IAudioMediaType **, struct IAudioMediaType **); // rdi
  int v48; // eax
  CEndpointCharacteristics *v49; // rbx
  unsigned int v50; // edx
  const struct tWAVEFORMATEX *v51; // r10
  __int64 v52; // rax
  int v53; // eax
  unsigned int v54; // edx
  CEndpointCharacteristics *v55; // rdi
  struct tWAVEFORMATEX *v56; // rbx
  int v57; // eax
  __int64 v58; // rax
  unsigned int v59; // edx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v61[4]; // [rsp+50h] [rbp-B0h] BYREF
  void *Block[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct IAudioMediaType *v63; // [rsp+70h] [rbp-90h] BYREF
  signed int v64; // [rsp+78h] [rbp-88h] BYREF
  WAVEFORMATEX *pAudioFormat; // [rsp+80h] [rbp-80h] BYREF
  struct IAudioMediaType *v66; // [rsp+88h] [rbp-78h] BYREF
  IAudioMediaType *ppIAudioMediaType; // [rsp+90h] [rbp-70h] BYREF
  struct IAudioMediaType *v68; // [rsp+98h] [rbp-68h] BYREF
  struct IAudioMediaType *v69; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v70; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v71[2]; // [rsp+B0h] [rbp-50h] BYREF
  struct IAudioMediaType *v72[2]; // [rsp+C0h] [rbp-40h] BYREF
  struct _GUID v73; // [rsp+D0h] [rbp-30h] BYREF
  char v74; // [rsp+E8h] [rbp-18h]
  struct _GUID v75; // [rsp+F0h] [rbp-10h] BYREF
  char v76; // [rsp+100h] [rbp+0h]
  _BYTE v77[16]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v78[40]; // [rsp+120h] [rbp+20h] BYREF
  EffectPack *v79; // [rsp+148h] [rbp+48h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v80; // [rsp+150h] [rbp+50h]
  char v81; // [rsp+158h] [rbp+58h]
  GUID v82; // [rsp+160h] [rbp+60h] BYREF
  struct _GUID v83; // [rsp+170h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v61[0] = a2;
  v3 = *((_QWORD *)this + 198);
  v71[0] = 0LL;
  v4 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(v3 + 56);
  if ( v4 )
    (**v4)(v4, &GUID_655e6959_84d5_43a4_b383_39d8f3094d70, v71);
  lambda_cd6f2b70438ec48af9647ef981891005_::_lambda_cd6f2b70438ec48af9647ef981891005_(v77, this, v61);
  v79 = this;
  v80 = v61;
  v5 = 1;
  v81 = 1;
  v83 = 0LL;
  EffectPack::GetDefaultConnectorProcessingModeConfiguration(this, v6, 0LL, 0LL, &v83);
  ConnectorProcessingModeCount = EffectPack::GetConnectorProcessingModeCount(this, v61[0]);
  v63 = 0LL;
  for ( i = 0; i < ConnectorProcessingModeCount; ++i )
  {
    SupportedConnectorModesInternal = EffectPack::GetSupportedConnectorModesInternal(this, (unsigned int)v61[0], 0, 0);
    if ( i >= *(_DWORD *)(SupportedConnectorModesInternal + 8) )
      v10 = GUID_00000000_0000_0000_0000_000000000000;
    else
      v10 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                       SupportedConnectorModesInternal,
                       i);
    v82 = v10;
    v11 = lambda_dacf159241f8e1fef226fb2cfac8af81_::_lambda_dacf159241f8e1fef226fb2cfac8af81_(&v75, this, &v82, v61);
    wil::scope_exit__lambda_dacf159241f8e1fef226fb2cfac8af81___(&v73, v11);
    pAudioFormat = 0LL;
    *(_QWORD *)&v75.Data1 = &pAudioFormat;
    *(_QWORD *)v75.Data4 = 0LL;
    v76 = 1;
    *(GUID *)Block = v10;
    ConnectorFormatForProcessingMode = EffectPack::GetConnectorFormatForProcessingMode(
                                         this,
                                         v61[0],
                                         (struct _GUID *)Block,
                                         (struct tWAVEFORMATEX **)v75.Data4);
    if ( v76 )
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        *(void ***)&v75.Data1,
        *(void **)v75.Data4);
    if ( (ConnectorFormatForProcessingMode & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FED,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)ConnectorFormatForProcessingMode);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&pAudioFormat,
        0LL);
      wil::details::lambda_call__lambda_dacf159241f8e1fef226fb2cfac8af81___::_lambda_call__lambda_dacf159241f8e1fef226fb2cfac8af81___(&v73);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v63);
      v34 = 2LL;
      if ( v61[0] != eKeywordDetectorConnector )
        v34 = 0LL;
      goto LABEL_142;
    }
    ppIAudioMediaType = 0LL;
    v13 = CreateAudioMediaType(pAudioFormat, pAudioFormat->cbSize + 18, &ppIAudioMediaType);
    ConnectorFormatForProcessingMode = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FF0,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v13);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&pAudioFormat,
        0LL);
      wil::details::lambda_call__lambda_dacf159241f8e1fef226fb2cfac8af81___::_lambda_call__lambda_dacf159241f8e1fef226fb2cfac8af81___(&v73);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v63);
      v34 = 2LL;
      if ( v61[0] != eKeywordDetectorConnector )
        v34 = 0LL;
      goto LABEL_142;
    }
    v14 = ValidateUncompressedWaveFormatEx(pAudioFormat);
    ConnectorFormatForProcessingMode = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FF2,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v14);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&pAudioFormat,
        0LL);
      wil::details::lambda_call__lambda_dacf159241f8e1fef226fb2cfac8af81___::_lambda_call__lambda_dacf159241f8e1fef226fb2cfac8af81___(&v73);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v63);
      v34 = 2LL;
      if ( v61[0] != eKeywordDetectorConnector )
        v34 = 0LL;
      goto LABEL_142;
    }
    *(GUID *)Block = v82;
    v15 = EffectPack::ConfirmDeviceFormat(this, pAudioFormat, (struct _GUID *)Block, v61[0], 0);
    ConnectorFormatForProcessingMode = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FF8,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v15);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&pAudioFormat,
        0LL);
      wil::details::lambda_call__lambda_dacf159241f8e1fef226fb2cfac8af81___::_lambda_call__lambda_dacf159241f8e1fef226fb2cfac8af81___(&v73);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v63);
      v34 = 2LL;
      if ( v61[0] != eKeywordDetectorConnector )
        v34 = 0LL;
      goto LABEL_142;
    }
    v66 = 0LL;
    *(GUID *)Block = v82;
    v16 = EffectPack::DeriveDevicePipeFormatFromConnectorFormat(
            this,
            (struct _GUID *)Block,
            v61[0],
            ppIAudioMediaType,
            &v66);
    ConnectorFormatForProcessingMode = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FFF,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v16);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v66);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&pAudioFormat,
        0LL);
      wil::details::lambda_call__lambda_dacf159241f8e1fef226fb2cfac8af81___::_lambda_call__lambda_dacf159241f8e1fef226fb2cfac8af81___(&v73);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v63);
      v34 = 2LL;
      if ( v61[0] != eKeywordDetectorConnector )
        v34 = 0LL;
      goto LABEL_142;
    }
    v68 = 0LL;
    *(GUID *)Block = v82;
    v17 = EffectPack::DeriveMixFormatFromDevicePipeFormat(this, (struct _GUID *)Block, v61[0], v66, &v68, 0LL);
    ConnectorFormatForProcessingMode = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2006,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v17);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v68);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v66);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&pAudioFormat,
        0LL);
      wil::details::lambda_call__lambda_dacf159241f8e1fef226fb2cfac8af81___::_lambda_call__lambda_dacf159241f8e1fef226fb2cfac8af81___(&v73);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v63);
      v34 = 2LL;
      if ( v61[0] != eKeywordDetectorConnector )
        v34 = 0LL;
LABEL_142:
      CEndpointCharacteristics::ClearMixFormatCache(*((_QWORD *)this + 198), v34);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v71);
      return ConnectorFormatForProcessingMode;
    }
    v70 = 0LL;
    if ( v71[0] )
    {
      v18 = *(_QWORD *)v71[0];
      *(GUID *)Block = v82;
      *(GUID *)v72 = v82;
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct IAudioMediaType **, struct IAudioMediaType **, void **, __int64 *, struct IAudioMediaType **))(v18 + 32))(
              v71[0],
              *((_QWORD *)this + 198),
              (unsigned int)v61[0],
              v72,
              &v66,
              Block,
              &v70,
              &v68);
      ConnectorFormatForProcessingMode = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x200E,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v19);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v70);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v68);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v66);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&pAudioFormat,
          0LL);
        wil::details::lambda_call__lambda_dacf159241f8e1fef226fb2cfac8af81___::_lambda_call__lambda_dacf159241f8e1fef226fb2cfac8af81___(&v73);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v63);
        v34 = 2LL;
        if ( v61[0] != eKeywordDetectorConnector )
          v34 = 0LL;
        goto LABEL_142;
      }
    }
    v20 = (CEndpointCharacteristics *)*((_QWORD *)this + 198);
    v21 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v68->lpVtbl->GetAudioFormat)(v68);
    v22 = *(_QWORD *)&v82.Data1 - *(_QWORD *)&v83.Data1;
    if ( *(_QWORD *)&v82.Data1 == *(_QWORD *)&v83.Data1 )
      v22 = *(_QWORD *)v82.Data4 - *(_QWORD *)v83.Data4;
    *(GUID *)Block = v82;
    v23 = CEndpointCharacteristics::CacheMixFormat(v20, v61[0], (struct _GUID *)Block, v22 == 0, v21);
    ConnectorFormatForProcessingMode = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2012,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v23);
      if ( v70 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
      if ( v68 )
        ((void (__fastcall *)(struct IAudioMediaType *))v68->lpVtbl->Release)(v68);
      if ( v66 )
        ((void (__fastcall *)(struct IAudioMediaType *))v66->lpVtbl->Release)(v66);
      if ( ppIAudioMediaType )
        ((void (__fastcall *)(IAudioMediaType *))ppIAudioMediaType->lpVtbl->Release)(ppIAudioMediaType);
      v35 = pAudioFormat;
      pAudioFormat = 0LL;
      if ( v35 )
        CoTaskMemFree(v35);
      wil::details::lambda_call__lambda_dacf159241f8e1fef226fb2cfac8af81___::_lambda_call__lambda_dacf159241f8e1fef226fb2cfac8af81___(&v73);
      if ( v63 )
        ((void (__fastcall *)(struct IAudioMediaType *))v63->lpVtbl->Release)(v63);
      v36 = 2LL;
      if ( v61[0] != eKeywordDetectorConnector )
        v36 = 0LL;
      CEndpointCharacteristics::ClearMixFormatCache(*((_QWORD *)this + 198), v36);
      if ( v71[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v71[0] + 16LL))(v71[0]);
      return ConnectorFormatForProcessingMode;
    }
    *(GUID *)Block = v82;
    EffectPack::DeriveOverridingMixFormatInternal(this, v61[0], (struct _GUID *)Block, v68);
    *(GUID *)Block = v82;
    if ( EffectPack::CanProcessingModeBeParameterized(this, (struct _GUID *)Block, v61[0]) )
      goto LABEL_27;
    v24 = *(_QWORD *)&v82.Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    if ( *(_QWORD *)&v82.Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
      v24 = *(_QWORD *)v82.Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    if ( !v24 && (unsigned int)EffectPack::CanBuildProcessingModesOnRawConnector((__int64)this, (unsigned int)v61[0], 0)
      || v70 )
    {
LABEL_27:
      v25 = (CEndpointCharacteristics *)*((_QWORD *)this + 198);
      v26 = (struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v66->lpVtbl->GetAudioFormat)(v66);
      *(GUID *)Block = v82;
      v27 = CEndpointCharacteristics::CacheDevicePipeFormat(v25, v61[0], (struct _GUID *)Block, v26);
      ConnectorFormatForProcessingMode = v27;
      if ( v27 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x201E,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v27);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v70);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v68);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v66);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&pAudioFormat,
          0LL);
        wil::details::lambda_call__lambda_dacf159241f8e1fef226fb2cfac8af81___::_lambda_call__lambda_dacf159241f8e1fef226fb2cfac8af81___(&v73);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v63);
        v34 = 2LL;
        if ( v61[0] != eKeywordDetectorConnector )
          v34 = 0LL;
        goto LABEL_142;
      }
      v28 = *(_QWORD *)&v82.Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      if ( *(_QWORD *)&v82.Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
        v28 = *(_QWORD *)v82.Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
      if ( !v28 )
        wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v63, v66);
      if ( v70 )
      {
        v29 = (CEndpointCharacteristics *)*((_QWORD *)this + 198);
        v30 = (struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v70 + 40LL))(v70);
        *(GUID *)Block = v82;
        v31 = CEndpointCharacteristics::CacheStreamGroupFormat(v29, v61[0], (struct _GUID *)Block, v30);
        ConnectorFormatForProcessingMode = v31;
        if ( v31 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x202C,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v31);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v70);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v68);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v66);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&pAudioFormat,
            0LL);
          wil::details::lambda_call__lambda_dacf159241f8e1fef226fb2cfac8af81___::_lambda_call__lambda_dacf159241f8e1fef226fb2cfac8af81___(&v73);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v63);
          v34 = 2LL;
          if ( v61[0] != eKeywordDetectorConnector )
            v34 = 0LL;
          goto LABEL_142;
        }
      }
    }
    v32 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v68->lpVtbl->GetAudioFormat)(v68);
    *(GUID *)Block = v82;
    *(GUID *)v72 = v82;
    lambda_1b4fae7bd9b23b22ce0f3eaa6dcbf353_::operator()(v77, v72, Block, v32);
    v74 = 0;
    if ( v70 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
    if ( v68 )
      ((void (__fastcall *)(struct IAudioMediaType *))v68->lpVtbl->Release)(v68);
    if ( v66 )
      ((void (__fastcall *)(struct IAudioMediaType *))v66->lpVtbl->Release)(v66);
    if ( ppIAudioMediaType )
      ((void (__fastcall *)(IAudioMediaType *))ppIAudioMediaType->lpVtbl->Release)(ppIAudioMediaType);
    v33 = pAudioFormat;
    pAudioFormat = 0LL;
    if ( v33 )
      CoTaskMemFree(v33);
    wil::details::lambda_call__lambda_dacf159241f8e1fef226fb2cfac8af81___::_lambda_call__lambda_dacf159241f8e1fef226fb2cfac8af81___(&v73);
  }
  if ( (unsigned int)EffectPack::CanBuildProcessingModesOnRawConnector((__int64)this, (unsigned int)v61[0], 0) )
  {
    if ( !v63 )
    {
      ConnectorFormatForProcessingMode = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2038,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x8000FFFFLL);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v63);
      v34 = 2LL;
      if ( v61[0] != eKeywordDetectorConnector )
        v34 = 0LL;
      goto LABEL_142;
    }
    Block[0] = 0LL;
    Block[1] = 0LL;
    v37 = v61[0];
    v38 = (__int64 *)gsl::span<SystemEffectDescriptor,-1>::operator[]((char *)this + 1456, v61[0]);
    if ( !CEndpointCharacteristics::AreEnhancementsEnabled(*((CEndpointCharacteristics **)this + 198))
      && v37 != eKeywordDetectorConnector )
    {
      v5 = 0;
    }
    SupportedProcessingModes = SystemEffectDescriptor::GetSupportedProcessingModes(v38, (__int64 *)Block, v5);
    ConnectorFormatForProcessingMode = SupportedProcessingModes;
    if ( SupportedProcessingModes < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x203B,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)SupportedProcessingModes);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(Block);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v63);
      v34 = 2LL;
      if ( v61[0] != eKeywordDetectorConnector )
        v34 = 0LL;
      goto LABEL_142;
    }
    v64 = 0;
    v41 = 0;
    v42 = 0;
    while ( v41 < SLODWORD(Block[1]) )
    {
      if ( v42 < 0 || v42 >= SLODWORD(Block[1]) )
        goto LABEL_145;
      v73 = (struct _GUID)*((_OWORD *)Block[0] + v42);
      if ( !(unsigned int)EffectPack::IsConnectorModeSupported(this, (unsigned int)v61[0], 0, &v73) )
      {
        v43 = lambda_aa1414ab8e95a4429593081bb8a30d1f_::_lambda_aa1414ab8e95a4429593081bb8a30d1f_(
                (unsigned int)&v75,
                (_DWORD)this,
                (unsigned int)Block,
                (unsigned int)&v64,
                (__int64)v61);
        wil::scope_exit__lambda_950500107a52a887eceb6991ca1e1e73___(v78, v43);
        v72[0] = 0LL;
        v69 = 0LL;
        if ( v64 < 0 || v64 >= SLODWORD(Block[1]) )
        {
          ATL::_AtlRaiseException(0xC000008C, v44);
LABEL_145:
          ATL::_AtlRaiseException(0xC000008C, v40);
          break;
        }
        v73 = (struct _GUID)*((_OWORD *)Block[0] + v64);
        v45 = EffectPack::DeriveMixFormatFromDevicePipeFormat(this, &v73, v61[0], v63, &v69, v72);
        ConnectorFormatForProcessingMode = v45;
        if ( v45 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2060,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v45);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v69);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v72);
          wil::details::lambda_call__lambda_950500107a52a887eceb6991ca1e1e73___::_lambda_call__lambda_950500107a52a887eceb6991ca1e1e73___(v78);
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(Block);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v63);
          v34 = 2LL;
          if ( v61[0] != eKeywordDetectorConnector )
            v34 = 0LL;
          goto LABEL_142;
        }
        v46 = v71[0];
        if ( v71[0] )
        {
          v47 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct _GUID *, struct IAudioMediaType **, struct _GUID *, struct IAudioMediaType **, struct IAudioMediaType **))(*(_QWORD *)v71[0] + 32LL);
          v73 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                   (__int64)Block,
                                   v64);
          v75 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
          v48 = v47(v46, *((_QWORD *)this + 198), (unsigned int)v61[0], &v75, &v63, &v73, v72, &v69);
          ConnectorFormatForProcessingMode = v48;
          if ( v48 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2067,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)v48);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v69);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v72);
            wil::details::lambda_call__lambda_950500107a52a887eceb6991ca1e1e73___::_lambda_call__lambda_950500107a52a887eceb6991ca1e1e73___(v78);
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(Block);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v63);
            v34 = 2LL;
            if ( v61[0] != eKeywordDetectorConnector )
              v34 = 0LL;
            goto LABEL_142;
          }
        }
        v49 = (CEndpointCharacteristics *)*((_QWORD *)this + 198);
        v51 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v69->lpVtbl->GetAudioFormat)(v69);
        if ( v64 < 0 || v64 >= SLODWORD(Block[1]) )
        {
          ATL::_AtlRaiseException(0xC000008C, v50);
          __debugbreak();
        }
        v52 = *((_QWORD *)Block[0] + 2 * v64) - *(_QWORD *)&v83.Data1;
        if ( !v52 )
          v52 = *((_QWORD *)Block[0] + 2 * v64 + 1) - *(_QWORD *)v83.Data4;
        v75 = (struct _GUID)*((_OWORD *)Block[0] + v64);
        v53 = CEndpointCharacteristics::CacheMixFormat(v49, v61[0], &v75, v52 == 0, v51);
        ConnectorFormatForProcessingMode = v53;
        if ( v53 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x206D,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v53);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v69);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v72);
          wil::details::lambda_call__lambda_950500107a52a887eceb6991ca1e1e73___::_lambda_call__lambda_950500107a52a887eceb6991ca1e1e73___(v78);
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(Block);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v63);
          v34 = 2LL;
          if ( v61[0] != eKeywordDetectorConnector )
            v34 = 0LL;
          goto LABEL_142;
        }
        if ( v64 < 0 || v64 >= SLODWORD(Block[1]) )
        {
          ATL::_AtlRaiseException(0xC000008C, v54);
          __debugbreak();
        }
        v75 = (struct _GUID)*((_OWORD *)Block[0] + v64);
        EffectPack::DeriveOverridingMixFormatInternal(this, v61[0], &v75, v69);
        if ( v72[0] )
        {
          v55 = (CEndpointCharacteristics *)*((_QWORD *)this + 198);
          v56 = (struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v72[0]->lpVtbl->GetAudioFormat)(v72[0]);
          v75 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                   (__int64)Block,
                                   v64);
          v57 = CEndpointCharacteristics::CacheStreamGroupFormat(v55, v61[0], &v75, v56);
          ConnectorFormatForProcessingMode = v57;
          if ( v57 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2077,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)v57);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v69);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v72);
            wil::details::lambda_call__lambda_950500107a52a887eceb6991ca1e1e73___::_lambda_call__lambda_950500107a52a887eceb6991ca1e1e73___(v78);
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(Block);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v63);
            v34 = 2LL;
            if ( v61[0] != eKeywordDetectorConnector )
              v34 = 0LL;
            goto LABEL_142;
          }
        }
        v58 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v69->lpVtbl->GetAudioFormat)(v69);
        if ( v64 < 0 || v64 >= SLODWORD(Block[1]) )
        {
          ATL::_AtlRaiseException(0xC000008C, v59);
          __debugbreak();
        }
        v75 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        v73 = (struct _GUID)*((_OWORD *)Block[0] + v64);
        lambda_1b4fae7bd9b23b22ce0f3eaa6dcbf353_::operator()(v77, &v73, &v75, v58);
        v78[32] = 0;
        if ( v69 )
          ((void (__fastcall *)(struct IAudioMediaType *))v69->lpVtbl->Release)(v69);
        if ( v72[0] )
          ((void (__fastcall *)(struct IAudioMediaType *))v72[0]->lpVtbl->Release)(v72[0]);
        wil::details::lambda_call__lambda_950500107a52a887eceb6991ca1e1e73___::_lambda_call__lambda_950500107a52a887eceb6991ca1e1e73___(v78);
      }
      v41 = v64 + 1;
      v64 = v41;
      v42 = v41;
    }
    if ( Block[0] )
      free(Block[0]);
  }
  v81 = 0;
  if ( v63 )
    ((void (__fastcall *)(struct IAudioMediaType *))v63->lpVtbl->Release)(v63);
  if ( v71[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v71[0] + 16LL))(v71[0]);
  return 0LL;
}
