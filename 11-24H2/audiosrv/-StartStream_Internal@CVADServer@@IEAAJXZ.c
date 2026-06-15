/*
 * XREFs of ?StartStream_Internal@CVADServer@@IEAAJXZ @ 0x18010EB8C
 * Callers:
 *     ?StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180081320 (-StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z.c)
 *     ?RestoreClientStartedStreams@CVADServer@@QEAAJXZ @ 0x18010DBB0 (-RestoreClientStartedStreams@CVADServer@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AcquirePowerReference@CVADServer@@QEAAXXZ @ 0x18000F9E8 (-AcquirePowerReference@CVADServer@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18004D400 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004FBEC (-reset@-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVADServer::StartStream_Internal(CVADServer *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rdi
  int (__fastcall *v6)(__int64, __int64 *); // rbx
  struct AudioSrvTelemetryProvider *v7; // rax
  _DWORD *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  int v12; // [rsp+70h] [rbp+28h] BYREF
  __int64 v13; // [rsp+78h] [rbp+30h] BYREF
  const WCHAR *v14; // [rsp+80h] [rbp+38h] BYREF
  __int64 v15; // [rsp+88h] [rbp+40h] BYREF

  if ( *((_DWORD *)this + 42) != 1 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 18) + 224LL))(
           *((_QWORD *)this + 18),
           *((_QWORD *)this + 22));
    v3 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x685,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v2);
      return v3;
    }
    *((_DWORD *)this + 42) = 1;
    *((_BYTE *)this + 184) = 0;
    CVADServer::AcquirePowerReference((struct _RTL_CRITICAL_SECTION *)this);
    v13 = 0LL;
    v5 = *((_QWORD *)this + 22);
    v6 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v5 + 8) + 24LL);
    wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset(&v13);
    if ( v6(v5 + 8, &v13) >= 0 )
    {
      v7 = AudioSrvTelemetryProvider::Instance();
      v8 = (_DWORD *)*((_QWORD *)v7 + 1);
      if ( *v8 > 4u && tlgKeywordOn(*((_QWORD *)v7 + 1), 512LL) )
      {
        v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 40LL))(v13);
        v14 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 18) + 8LL) + 64LL))(*((_QWORD *)this + 18) + 8LL);
        v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 22) + 8LL) + 80LL))(*((_QWORD *)this + 22) + 8LL);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
          (__int64)v8,
          byte_1801ADD39,
          v9,
          v10,
          (__int64)&v15,
          &v14,
          (__int64)&v12);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 48LL))(v13);
      IsTSSessionIdRegisterVolumeTrackerForSessionSupported();
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
  }
  return 0LL;
}
