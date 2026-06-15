/*
 * XREFs of ?RuntimeClassInitialize@CAudioStream@@QEAAJPEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEBUtWAVEFORMATEX@@PEBG@Z @ 0x1800C9C88
 * Callers:
 *     ??$MakeAndInitialize@VCAudioStream@@V1@AEAPEAUIAudioProcess@@_NAEAKPEAUVadServerSettings@@AEAW4SYSTEM_AUDIO_STREAM_TYPE@@AEAV?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@PEAG@Details@WRL@Microsoft@@YAJPEAPEAVCAudioStream@@AEAPEAUIAudioProcess@@$$QEA_NAEAK$$QEAPEAUVadServerSettings@@AEAW4SYSTEM_AUDIO_STREAM_TYPE@@AEAV?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@$$QEAPEAG@Z @ 0x18010520C (--$MakeAndInitialize@VCAudioStream@@V1@AEAPEAUIAudioProcess@@_NAEAKPEAUVadServerSettings@@AEAW4S.c)
 * Callees:
 *     ?InitializeVolumeCoefficientCount@CAudioStream@@QEAAJI@Z @ 0x18000A684 (-InitializeVolumeCoefficientCount@CAudioStream@@QEAAJI@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x180020B2C (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x180058474 (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x180058518 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMem.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x180059010 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1800685DC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?GenerateStreamIdentifier@@YA_JXZ @ 0x180080134 (-GenerateStreamIdentifier@@YA_JXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        const WCHAR *a8)
{
  char v9; // si
  int event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z; // edi
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // esi
  bool v19; // al
  __int64 v20; // rdi
  std::_Ref_count_base *v21; // rdx
  std::_Ref_count_base *v22; // rcx
  signed __int64 v23; // rax
  struct AudioSrvTelemetryProvider *v24; // rax
  _DWORD *v25; // rdi
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // [rsp+40h] [rbp-30h] BYREF
  int v29; // [rsp+44h] [rbp-2Ch] BYREF
  __int64 v30; // [rsp+48h] [rbp-28h] BYREF
  void **v31; // [rsp+50h] [rbp-20h] BYREF
  __int64 v32; // [rsp+58h] [rbp-18h] BYREF
  char v33; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  int v35; // [rsp+90h] [rbp+20h] BYREF

  v9 = a3;
  event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z((wil::details **)(a1 + 408), 1, a3, 0LL);
  if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
  {
    v14 = 141LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z);
    return (unsigned int)event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
  }
  event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z((wil::details **)(a1 + 400), 1, v13, 0LL);
  if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
  {
    v14 = 142LL;
    goto LABEL_3;
  }
  event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = CAudioStream::InitializeVolumeCoefficientCount((CAudioStream *)a1, *(unsigned __int16 *)(a7 + 2));
  if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
  {
    v14 = 143LL;
    goto LABEL_3;
  }
  v31 = (void **)(a1 + 432);
  v32 = 0LL;
  v33 = 1;
  event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = _AllocString<CTCoAllocPolicy>(v17, v16, a8, &v32);
  wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(&v31);
  if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
  {
    v14 = 144LL;
    goto LABEL_3;
  }
  *(_BYTE *)(a1 + 40) = v9;
  v18 = a6;
  v19 = (a4 & 4) != 0 || (unsigned int)(a6 - 2) <= 1;
  *(_BYTE *)(a1 + 42) = v19;
  *(_BYTE *)(a1 + 41) = a4 & 1;
  v20 = a5;
  *(_BYTE *)(a1 + 136) = *(_DWORD *)(a5 + 136) != 0;
  *(_DWORD *)(a1 + 424) = *(_DWORD *)(v20 + 48);
  *(_DWORD *)(a1 + 440) = *(_DWORD *)(v20 + 60);
  *(_BYTE *)(a1 + 444) = *(_DWORD *)(v20 + 68) != 0;
  *(_DWORD *)(a1 + 428) = v18;
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=((__int64 *)(a1 + 72), a2);
  *(_DWORD *)(a1 + 464) = a4;
  *(_OWORD *)(a1 + 448) = *(_OWORD *)v20;
  *(_BYTE *)(a1 + 43) = *(_DWORD *)(v20 + 56) != 0;
  *(_BYTE *)(a1 + 632) = *(_DWORD *)(v20 + 176) != 0;
  *(_BYTE *)(a1 + 592) = *(_DWORD *)(v20 + 140) != 0;
  if ( !v18 )
  {
    v21 = qword_1801D0A00;
    if ( qword_1801D0A00 )
    {
      _InterlockedIncrement((volatile signed __int32 *)qword_1801D0A00 + 2);
      v21 = qword_1801D0A00;
    }
    *(_QWORD *)(a1 + 560) = g_RenderStreamTaperTranslator;
    v22 = *(std::_Ref_count_base **)(a1 + 568);
    *(_QWORD *)(a1 + 568) = v21;
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
  }
  *(_OWORD *)(a1 + 472) = *(_OWORD *)(v20 + 72);
  *(_OWORD *)(a1 + 488) = *(_OWORD *)(v20 + 88);
  *(_OWORD *)(a1 + 504) = *(_OWORD *)(v20 + 104);
  *(_QWORD *)(a1 + 520) = *(_QWORD *)(v20 + 120);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 512) = 0;
  do
  {
    v23 = _InterlockedExchangeAdd64(&CAudioStream::s_llStreamIdentifier, 1uLL);
    *(_QWORD *)(a1 + 416) = v23 + 1;
  }
  while ( v23 == -1 );
  *(_QWORD *)(a1 + 416) = GenerateStreamIdentifier();
  v24 = AudioSrvTelemetryProvider::Instance();
  v25 = (_DWORD *)*((_QWORD *)v24 + 1);
  if ( *v25 > 4u && tlgKeywordOn(*((_QWORD *)v24 + 1), 512LL) )
  {
    v35 = *(_DWORD *)(a1 + 424);
    v30 = *(_QWORD *)(a1 + 416);
    v28 = v18;
    v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)v25,
      byte_1801A035E,
      v26,
      v27,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v30,
      (__int64)&v35);
  }
  return 0LL;
}
