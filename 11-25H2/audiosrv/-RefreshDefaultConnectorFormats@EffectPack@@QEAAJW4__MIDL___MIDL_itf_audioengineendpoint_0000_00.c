/*
 * XREFs of ?RefreshDefaultConnectorFormats@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180061BEC
 * Callers:
 *     ?RefreshConnectorFormats@EffectPack@@QEAAJXZ @ 0x18012DCD8 (-RefreshConnectorFormats@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18000501C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTempla.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@0@@Z @ 0x1800255E0 (--$_Destroy_range@V-$allocator@V-$unique_ptr@UCConnectorFormatCharacteristics@@U-$default_delete.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180035CD0 (-GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengine.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ?TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@@Z @ 0x180061E80 (-TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA-AU_GUID@@W4__MIDL___MIDL_.c)
 *     ?RediscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180061FA8 (-RediscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audi.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@std@@@std@@YAXPEAV?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAV12@AEAV?$allocator@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@0@@Z @ 0x1800A3034 (--$_Destroy_range@V-$allocator@V-$unique_ptr@UtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-Co.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EffectPack::RefreshDefaultConnectorFormats(
        EffectPack *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  _DWORD *v3; // rcx
  int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 i; // rdi
  _QWORD *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rbx
  int v16; // eax
  int v18; // [rsp+20h] [rbp-29h]
  _BYTE v19[8]; // [rsp+40h] [rbp-9h] BYREF
  struct _GUID *v20; // [rsp+48h] [rbp-1h] BYREF
  struct _GUID v21; // [rsp+50h] [rbp+7h] BYREF
  struct _GUID v22; // [rsp+60h] [rbp+17h] BYREF
  struct _GUID v23; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  *(_QWORD *)v21.Data4 = 0LL;
  v22 = 0LL;
  v3 = (_DWORD *)*((_QWORD *)this + 265);
  if ( *v3 > 4u && tlgKeywordOn((__int64)v3, 16LL) )
  {
    v19[0] = 0;
    v23 = *(struct _GUID *)*((_QWORD *)this + 196);
    v20 = &v23;
    *(_QWORD *)&v21.Data1 = *(_QWORD *)(*((_QWORD *)this + 198) + 48LL);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>>(
      v4,
      (int)&unk_1801A4CDD,
      v5,
      v6,
      (const WCHAR **)&v21,
      (__int64 *)&v20,
      (__int64)v19);
  }
  EffectPack::GetDefaultConnectorProcessingModeConfiguration(this, 0, &v22, 0LL, 0LL);
  v7 = *((_QWORD *)this + 198);
  v23 = v22;
  EffectPack::TranslateDeviceConnectorModeToStreamingConnectorMode(this, &v22, eHostProcessConnector, &v23);
  v9 = *(_QWORD *)(v7 + 280);
  for ( i = *(_QWORD *)(v7 + 272); i != v9; i += 8LL )
  {
    v11 = *(_QWORD **)i;
    v12 = **(_QWORD **)i - *(_QWORD *)&v22.Data1;
    if ( !v12 )
      v12 = v11[1] - *(_QWORD *)v22.Data4;
    if ( !v12 )
    {
      v13 = v11[2];
      v14 = v11[3];
      if ( v13 != v14 )
      {
        std::_Destroy_range<std::allocator<std::unique_ptr<CConnectorFormatCharacteristics>>>(v13, v14);
        v11[3] = v11[2];
      }
      v15 = *(_QWORD **)i;
      v8 = *(_QWORD *)(*(_QWORD *)i + 48LL);
      if ( *(_QWORD *)(*(_QWORD *)i + 40LL) != v8 )
      {
        std::_Destroy_range<std::allocator<wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>>(v15[5]);
        v15[6] = v15[5];
      }
    }
  }
  v16 = CEndpointCharacteristics::RediscoverProcessingModeCharacteristics(
          *((CEndpointCharacteristics **)this + 198),
          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v8);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1916,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v16,
      v18);
  return 0LL;
}
