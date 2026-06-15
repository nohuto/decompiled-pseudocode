/*
 * XREFs of ?LooksLikeWeAreHung@CAudioHealthMonitor@@UEAAXKPEBG@Z @ 0x1800B45A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180002108 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTempla.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800021D4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x18006524C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180067A5C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 *     ?CollectLiveKernelDump@CAudioHealthMonitor@@AEAAJKPEBG@Z @ 0x1800B430C (-CollectLiveKernelDump@CAudioHealthMonitor@@AEAAJKPEBG@Z.c)
 *     ?LooksLikeWeAreHung_Old@CAudioHealthMonitor@@AEAAXKPEBG@Z @ 0x1800B489C (-LooksLikeWeAreHung_Old@CAudioHealthMonitor@@AEAAXKPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioHealthMonitor::LooksLikeWeAreHung(
        CAudioHealthMonitor *this,
        unsigned int a2,
        const unsigned __int16 *a3)
{
  unsigned int v6; // eax
  unsigned int v7; // ecx
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char *v12; // rbx
  CAudioHealthMonitor *v13; // rcx
  int v14; // eax
  _DWORD *v15; // rcx
  int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ebx
  _DWORD *v20; // rcx
  int v21; // ecx
  __int64 v22; // r8
  __int64 v23; // r9
  HANDLE CurrentProcess; // rax
  void *v25; // [rsp+40h] [rbp-30h] BYREF
  __int64 v26; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v27[2]; // [rsp+50h] [rbp-20h] BYREF
  int v28[2]; // [rsp+58h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  unsigned int v31; // [rsp+A8h] [rbp+38h] BYREF

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
    v29 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
    v6 = *((_DWORD *)this + 2);
    v7 = v6 + 1;
    if ( v6 + 1 >= v6 )
    {
      *((_DWORD *)this + 2) = v7;
      if ( v7 < *((_DWORD *)this + 3) )
      {
        if ( !*((_DWORD *)this + 17) )
        {
          *((_DWORD *)this + 17) = 1;
          CoCreateGuid((GUID *)((char *)this + 72));
          RtlPublishWnfStateData(WNF_AUDC_HEALTH_PROBLEM, 0LL, (char *)this + 72, 16LL, 0LL);
        }
      }
      else if ( *((_DWORD *)this + 4) == 16 && !*((_DWORD *)this + 16) )
      {
        v8 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
        if ( *v8 > 4u && tlgKeywordOn((__int64)v8, 0x400000000001LL) )
        {
          v31 = *((_DWORD *)this + 3);
          LODWORD(v25) = *((_DWORD *)this + 2);
          LODWORD(v26) = 0;
          *(_QWORD *)v28 = a3;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v9,
            byte_1801A8F95,
            v10,
            v11,
            (const WCHAR **)v28,
            (__int64)&v26,
            (__int64)&v25,
            (__int64)&v31);
        }
        *((_DWORD *)this + 16) = 1;
        v12 = (char *)OpenEventW(0x100002u, 0, L"Local\\AudioDrvCallHang");
        v25 = v12;
        if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && !WaitForSingleObject(v12, 0) )
        {
          v14 = CAudioHealthMonitor::CollectLiveKernelDump(v13, a2, a3);
          if ( v14 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              262LL,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiohealthmonitor.cpp",
              (const char *)(unsigned int)v14);
          ResetEvent(v12);
        }
        v15 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
        if ( *v15 > 2u && tlgKeywordOn((__int64)v15, 0x400000000001LL) )
        {
          v31 = a2;
          *(_QWORD *)v28 = a3;
          v26 = (__int64)this + 72;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
            v16,
            (int)&unk_1801A8C27,
            v17,
            v18,
            &v26,
            (const WCHAR **)v28,
            (__int64)&v31);
        }
        v19 = (*(__int64 (__fastcall **)(CAudioHealthMonitor *))(*(_QWORD *)this + 16LL))(this);
        if ( v19 )
        {
          v20 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
          if ( *v20 > 4u && tlgKeywordOn((__int64)v20, 1LL) )
          {
            v31 = a2;
            *(_QWORD *)v28 = a3;
            LODWORD(v26) = v19;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              v21,
              (int)&unk_1801A8BD9,
              v22,
              v23,
              (__int64)&v26,
              (const WCHAR **)v28,
              (__int64)&v31);
          }
        }
        v27[0] = GetCurrentProcessId();
        v27[1] = v19;
        ReportCoreHang(v27, (unsigned int)(v19 != 0) + 1, a2, 1048609LL);
        Sleep(0xEA60u);
        CurrentProcess = GetCurrentProcess();
        TerminateProcess(CurrentProcess, 0);
        wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v25);
      }
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v29);
  }
  else
  {
    CAudioHealthMonitor::LooksLikeWeAreHung_Old(this, a2, a3);
  }
}
