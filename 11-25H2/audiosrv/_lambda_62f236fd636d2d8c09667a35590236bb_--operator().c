/*
 * XREFs of _lambda_62f236fd636d2d8c09667a35590236bb_::operator() @ 0x1800B77C4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_62f236fd636d2d8c09667a35590236bb__void_IAudioStreamInfo___::_Do_call @ 0x1800C11D0 (std--_Func_impl_no_alloc__lambda_62f236fd636d2d8c09667a35590236bb__void_IAudioStreamInfo___--_Do.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180064208 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?FindAppropriateStreamGroupAndSaDeviceForStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEBGPEAUIAudioStreamInfo@@@Z @ 0x180088C30 (-FindAppropriateStreamGroupAndSaDeviceForStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacte.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall lambda_62f236fd636d2d8c09667a35590236bb_::operator()(
        CEndpointCharacteristics ****a1,
        struct IAudioStreamInfo *a2)
{
  struct AudioSrvTelemetryProvider *v4; // rax
  _DWORD *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  CEndpointCharacteristics ***v8; // rbx
  const unsigned __int16 *v9; // rax
  int AppropriateStreamGroupAndSaDeviceForStream; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  CEndpointCharacteristics **v13; // [rsp+50h] [rbp+18h] BYREF

  if ( (*((unsigned __int8 (__fastcall **)(CEndpointCharacteristics **))***a1 + 59))(**a1) )
  {
    v4 = AudioSrvTelemetryProvider::Instance();
    v5 = (_DWORD *)*((_QWORD *)v4 + 1);
    if ( *v5 > 4u && tlgKeywordOn(*((_QWORD *)v4 + 1), 512LL) )
    {
      v12 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
      v13 = **a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (__int64)v5,
        byte_18019E75B,
        v6,
        v7,
        (__int64)&v13,
        (__int64)&v12);
    }
    v8 = a1[1];
    v9 = (const unsigned __int16 *)(*((__int64 (__fastcall **)(CEndpointCharacteristics **))***a1 + 19))(**a1);
    AppropriateStreamGroupAndSaDeviceForStream = CAudioResourceManager::FindAppropriateStreamGroupAndSaDeviceForStream(
                                                   (CAudioResourceManager *)(v8 + 1),
                                                   *a1[2],
                                                   v9,
                                                   a2);
    if ( AppropriateStreamGroupAndSaDeviceForStream < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        3529LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)AppropriateStreamGroupAndSaDeviceForStream);
  }
}
