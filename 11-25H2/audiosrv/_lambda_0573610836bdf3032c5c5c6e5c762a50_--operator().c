/*
 * XREFs of _lambda_0573610836bdf3032c5c5c6e5c762a50_::operator() @ 0x1800B759C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_0573610836bdf3032c5c5c6e5c762a50__void_IAudioStreamInfo___::_Do_call @ 0x1800C11B0 (std--_Func_impl_no_alloc__lambda_0573610836bdf3032c5c5c6e5c762a50__void_IAudioStreamInfo___--_Do.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180064208 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?FindAppropriateStreamGroupAndSaDeviceForStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEBGPEAUIAudioStreamInfo@@@Z @ 0x180088C30 (-FindAppropriateStreamGroupAndSaDeviceForStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacte.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_0573610836bdf3032c5c5c6e5c762a50_::operator()(_QWORD *a1, struct IAudioStreamInfo *a2)
{
  struct AudioSrvTelemetryProvider *v4; // rax
  _DWORD *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  const unsigned __int16 *v9; // rax
  int AppropriateStreamGroupAndSaDeviceForStream; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v4 = AudioSrvTelemetryProvider::Instance();
  v5 = (_DWORD *)*((_QWORD *)v4 + 1);
  if ( *v5 > 4u && tlgKeywordOn(*((_QWORD *)v4 + 1), 512LL) )
  {
    v14 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
    v15 = *a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)v5,
      byte_18019E75B,
      v6,
      v7,
      (__int64)&v15,
      (__int64)&v14);
  }
  v8 = a1[1];
  v9 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 152LL))(*a1);
  AppropriateStreamGroupAndSaDeviceForStream = CAudioResourceManager::FindAppropriateStreamGroupAndSaDeviceForStream(
                                                 (CAudioResourceManager *)(v8 + 8),
                                                 (CEndpointCharacteristics **)a1[2],
                                                 v9,
                                                 a2);
  v11 = AppropriateStreamGroupAndSaDeviceForStream;
  if ( AppropriateStreamGroupAndSaDeviceForStream >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xDDA,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)AppropriateStreamGroupAndSaDeviceForStream);
  return v11;
}
