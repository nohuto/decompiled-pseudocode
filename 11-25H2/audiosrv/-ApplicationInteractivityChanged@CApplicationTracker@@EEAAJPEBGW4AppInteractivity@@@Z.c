/*
 * XREFs of ?ApplicationInteractivityChanged@CApplicationTracker@@EEAAJPEBGW4AppInteractivity@@@Z @ 0x1800B37A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800021D4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJAEAPEAUIAudioPolicyManager@@PEAPEAUIAudioPolicyNotificationManager@@@Z @ 0x1800A6EFC (--$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJA.c)
 *     ??1?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800B3588 (--1-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details.c)
 *     ?CoImpersonateClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@AEAV?$unique_call@P6AJXZ$1?CoRevertToSelf@@YAJXZ$0A@@1@@Z @ 0x1800B396C (-CoImpersonateClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@AEAV-$unique_call@P6AJXZ$1-CoRevertTo.c)
 *     ?GetProcessHandleForClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@KAEAV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@1@@Z @ 0x1800B3A58 (-GetProcessHandleForClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@KAEAV-$unique_any_t@V-$unique_s.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationTracker::ApplicationInteractivityChanged(__int64 a1, const WCHAR *a2, int a3)
{
  int v6; // eax
  __int64 v7; // rdx
  int v8; // ebx
  int ProcessHandleForClientOfObject_nothrow; // eax
  DWORD ProcessId; // ebx
  _DWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // [rsp+40h] [rbp-20h] BYREF
  int v18; // [rsp+44h] [rbp-1Ch] BYREF
  HANDLE Process; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h] BYREF
  const WCHAR *v21; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  char v23; // [rsp+98h] [rbp+38h] BYREF

  v23 = 0;
  v6 = wil::CoImpersonateClientOfObject_nothrow(a1, &v23);
  v8 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationtracker.cpp",
      (const char *)(unsigned int)v6);
LABEL_3:
    if ( v23 )
      CoRevertToSelf();
    return (unsigned int)v8;
  }
  Process = 0LL;
  ProcessHandleForClientOfObject_nothrow = wil::GetProcessHandleForClientOfObject_nothrow(a1, v7, &Process);
  v8 = ProcessHandleForClientOfObject_nothrow;
  if ( ProcessHandleForClientOfObject_nothrow < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationtracker.cpp",
      (const char *)(unsigned int)ProcessHandleForClientOfObject_nothrow);
LABEL_8:
    wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&Process);
    goto LABEL_3;
  }
  ProcessId = GetProcessId(Process);
  v12 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *v12 > 4u )
  {
    v17 = a3;
    v21 = a2;
    v18 = ProcessId;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      (int)v12,
      (int)&unk_18019E4D5,
      v13,
      v14,
      (__int64)&v18,
      &v21,
      (__int64)&v17);
  }
  v20 = 0LL;
  v8 = wil::com_query_to_nothrow<IAudioPolicyNotificationManager,IAudioPolicyManager * &>((__int64)v12, (__int64)&v20);
  if ( v8 < 0 )
  {
    v16 = 46LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationtracker.cpp",
      (const char *)(unsigned int)v8);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
    goto LABEL_8;
  }
  LOBYTE(v15) = a3 == 1;
  v8 = (*(__int64 (__fastcall **)(__int64, const WCHAR *, __int64))(*(_QWORD *)v20 + 104LL))(v20, a2, v15);
  if ( v8 < 0 )
  {
    v16 = 49LL;
    goto LABEL_13;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
  wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&Process);
  if ( v23 )
    CoRevertToSelf();
  return 0LL;
}
