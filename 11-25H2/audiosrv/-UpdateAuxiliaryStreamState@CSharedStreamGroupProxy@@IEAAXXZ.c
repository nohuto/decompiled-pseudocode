/*
 * XREFs of ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x1800A4048
 * Callers:
 *     ?OnDisconnectedFromStream@CSharedStreamGroupProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x180063D88 (-OnDisconnectedFromStream@CSharedStreamGroupProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnConnectedToStream@CSharedStreamGroupProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x1800642F0 (-OnConnectedToStream@CSharedStreamGroupProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?StartStream@CSharedStreamGroupProxy@@UEAAJPEAUIStreamInstance@@@Z @ 0x180078370 (-StartStream@CSharedStreamGroupProxy@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?OnProcessSubmixStarted@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x180078920 (-OnProcessSubmixStarted@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 *     ?OnProcessSubmixStopped@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x18007B530 (-OnProcessSubmixStopped@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 *     ?StopStream@CSharedStreamGroupProxy@@UEAAJPEAUIStreamInstance@@@Z @ 0x18007EFA0 (-StopStream@CSharedStreamGroupProxy@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJU_GUID@@_JPEAUIBridgeStreamInstanceProxy@@PEBG@Z @ 0x1800EF8A0 (-AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJU_GUID@@_JPEAUIBridgeStreamInstanceProxy@.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18007DBCC (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PE_ea_18007DBCC.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CSharedStreamGroupProxy::UpdateAuxiliaryStreamState(CSharedStreamGroupProxy *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int8 *v7; // rdx
  _DWORD *v8; // rcx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+38h] [rbp-40h] BYREF
  __int128 v11; // [rsp+40h] [rbp-38h]
  __int128 v12; // [rsp+50h] [rbp-28h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 1752);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 1752));
  v9 = v2;
  if ( !*((_QWORD *)this + 218) )
    goto LABEL_13;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 376));
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 376);
  v11 = *(_OWORD *)((char *)this + 1720);
  v12 = v11;
  EtwEventActivityIdControl(4LL, &v12);
  if ( *((_DWORD *)this + 92) )
  {
    if ( *((_BYTE *)this + 416) )
      goto LABEL_12;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 218) + 32LL))(*((_QWORD *)this + 218));
    *((_BYTE *)this + 416) = 1;
    v3 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v3 <= 4u || !tlgKeywordOn((__int64)v3, 512LL) )
      goto LABEL_12;
    v7 = (unsigned __int8 *)&unk_1801A2169;
  }
  else
  {
    if ( !*((_BYTE *)this + 416) )
      goto LABEL_12;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 218) + 40LL))(*((_QWORD *)this + 218));
    *((_BYTE *)this + 416) = 0;
    v8 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v8 <= 4u || !tlgKeywordOn((__int64)v8, 512LL) )
      goto LABEL_12;
    v7 = (unsigned __int8 *)&unk_1801A213C;
  }
  v9 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this + 214);
  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
    v4,
    v7,
    v5,
    v6,
    (__int64)&v9);
LABEL_12:
  EtwEventActivityIdControl(4LL, &v12);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v10);
LABEL_13:
  if ( v2 )
    LeaveCriticalSection(v2);
}
