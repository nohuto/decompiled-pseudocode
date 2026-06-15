/*
 * XREFs of ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEBU_GUID@@5PEAPEAUISaDeviceProxy@@@Z @ 0x1800F6E00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18000DC00 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180029ADC (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ??$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z @ 0x18004F8B4 (--$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z.c)
 *     ?ReleaseSaDeviceResource@@YAJPEA_K@Z @ 0x180058130 (-ReleaseSaDeviceResource@@YAJPEA_K@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18005FF0C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByRef@$0BA@@@U1@U2@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByRef@$0BA@@@347@Z @ 0x180063A30 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapper.c)
 *     ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAKAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAPEBU_GUID@@AEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCharacteristicsDescriptor@@$$QEAPEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAKAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAPEBU_GUID@@8@Z @ 0x1800F2F04 (--$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCha.c)
 *     ?SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ @ 0x180138798 (-SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphManager::GetSaDevice(
        __int64 a1,
        CEndpointCharacteristics **a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        _QWORD *a10)
{
  struct _RTL_CRITICAL_SECTION *v12; // rbx
  CEndpointStoreCache *v13; // rcx
  BOOL v14; // edi
  int EndpointStore; // eax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  struct CEndpointStore *v18; // r13
  _QWORD *v19; // r12
  char v20; // si
  unsigned __int64 *v21; // rbx
  int v22; // edx
  __int64 v23; // rax
  int v24; // eax
  int v25; // edi
  _DWORD *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 *v30; // rax
  int v31; // eax
  int v32; // eax
  __int64 (__fastcall ***v33)(_QWORD, GUID *, __int64 *); // rax
  __int64 (__fastcall ***v35)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp-81h] BYREF
  __int64 v36; // [rsp+80h] [rbp-79h] BYREF
  struct _RTL_CRITICAL_SECTION *v37; // [rsp+88h] [rbp-71h] BYREF
  int v38; // [rsp+90h] [rbp-69h] BYREF
  int v39; // [rsp+94h] [rbp-65h] BYREF
  __int64 v40; // [rsp+98h] [rbp-61h] BYREF
  struct CEndpointStore *v41; // [rsp+A0h] [rbp-59h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-51h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-49h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-41h] BYREF
  const WCHAR *v45; // [rsp+C0h] [rbp-39h] BYREF
  __int64 (__fastcall ***v46)(_QWORD, GUID *, __int64 *); // [rsp+C8h] [rbp-31h] BYREF
  int v47[4]; // [rsp+D8h] [rbp-21h] BYREF
  struct _RTL_CRITICAL_SECTION *v48; // [rsp+E8h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+47h]
  CEndpointCharacteristics **v50; // [rsp+150h] [rbp+57h] BYREF
  __int64 *v51; // [rsp+158h] [rbp+5Fh] BYREF
  int v52; // [rsp+160h] [rbp+67h] BYREF

  v52 = a4;
  v51 = (__int64 *)a3;
  v50 = a2;
  v12 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v48 = v12;
  v14 = (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 160LL))(g_PolicyManager)
     && CEndpointCharacteristics::SharedAndExclusiveCanCoexist(*a2);
  v41 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v13, *(const unsigned __int16 **)a3, &v41);
  v16 = EndpointStore;
  if ( EndpointStore >= 0 )
  {
    v18 = v41;
    v19 = a10;
    EndpointStore = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, BOOL, _QWORD *))(**((_QWORD **)v41 + 13) + 64LL))(
                      *((_QWORD *)v41 + 13),
                      a3,
                      a5,
                      v14,
                      a10);
    v16 = EndpointStore;
    if ( EndpointStore < 0 )
    {
      if ( EndpointStore != -2005139430 )
      {
        v17 = 3329LL;
        goto LABEL_10;
      }
      v20 = 0;
      v21 = a6;
      if ( *((_BYTE *)a6 + 12) )
      {
        if ( !*a6 )
        {
          v20 = 1;
          v22 = *((_DWORD *)a6 + 2);
          v23 = *(_QWORD *)g_AudioResourceManager;
          *(_OWORD *)v47 = *(_OWORD *)((char *)a6 + 20);
          v24 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, CEndpointCharacteristics **, int *, _QWORD, int, unsigned __int64 *))(v23 + 96))(
                  g_AudioResourceManager,
                  a2,
                  v47,
                  *((unsigned int *)a6 + 4),
                  v22,
                  a6);
          v25 = v24;
          if ( v24 < 0 )
          {
            if ( v24 != -2005139370 && (unsigned int)(v24 + 2005139335) > 1 )
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xD24,
                (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                (const char *)(unsigned int)v24);
            if ( *v21 )
            {
              ReleaseSaDeviceResource(v21);
              *v21 = 0LL;
            }
LABEL_20:
            v16 = v25;
            goto LABEL_43;
          }
        }
      }
      (*(void (__fastcall **)(_QWORD, struct _RTL_CRITICAL_SECTION **))(**((_QWORD **)v18 + 13) + 80LL))(
        *((_QWORD *)v18 + 13),
        &v37);
      v35 = 0LL;
      v40 = *((_QWORD *)v18 + 13);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v35);
      v25 = Microsoft::WRL::Details::MakeAndInitialize<CSaDeviceProxy,ISaDeviceProxy,SaDeviceParams * &,EndpointCharacteristicsDescriptor * &,IDeviceGraphObjectsStore *,enum _AUDCLNT_SHAREMODE &,unsigned long &,SaDeviceResourceParams &,std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>> const &,_GUID const * &,_GUID const * &>(
              &v35,
              &v51,
              &v50,
              &v40,
              &a5,
              &v52,
              (__int64)v21,
              a7,
              &a8,
              &a9);
      v26 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      if ( *v26 > 4u && tlgKeywordOn((__int64)v26, 0x400000000000LL) )
      {
        v42 = a3 + 80;
        v38 = *(_DWORD *)(a3 + 8);
        v43 = *(_QWORD *)(a3 + 32);
        v44 = a3 + 48;
        LOWORD(v51) = *(_WORD *)(*(_QWORD *)(a3 + 16) + 2LL);
        v39 = *(_DWORD *)(*(_QWORD *)(a3 + 16) + 4LL);
        v45 = *(const WCHAR **)a3;
        LODWORD(v40) = v25;
        v46 = v35;
        *(_QWORD *)v47 = 0x2000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v27,
          byte_1801AC590,
          v28,
          v29,
          (__int64)v47,
          (__int64)&v46,
          (__int64)&v40,
          &v45,
          (__int64)&v39,
          (__int64)&v51,
          &v44,
          (__int64)&v43,
          (__int64)&v38,
          &v42);
      }
      if ( v25 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD3D,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v25);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v35);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v37);
        if ( v20 && *v21 )
        {
          ReleaseSaDeviceResource(v21);
          *v21 = 0LL;
        }
        goto LABEL_20;
      }
      v36 = 0LL;
      v51 = &v36;
      v30 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v51);
      v31 = Microsoft::WRL::AsWeak<ISaDeviceProxy>(v35, v30);
      v25 = v31;
      if ( v31 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD41,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v31);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v36);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v35);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v37);
        if ( v20 && *v21 )
        {
          ReleaseSaDeviceResource(v21);
          *v21 = 0LL;
        }
        goto LABEL_20;
      }
      v32 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)v18 + 13) + 72LL))(
              *((_QWORD *)v18 + 13),
              a3,
              &v36);
      v25 = v32;
      if ( v32 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD42,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v32);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v36);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v35);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v37);
        if ( v20 && *v21 )
        {
          ReleaseSaDeviceResource(v21);
          *v21 = 0LL;
        }
        goto LABEL_20;
      }
      v33 = v35;
      v35 = 0LL;
      *v19 = v33;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v36);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v35);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v37);
      if ( v20 && *v21 )
      {
        ReleaseSaDeviceResource(v21);
        *v21 = 0LL;
      }
    }
    v16 = 0;
    goto LABEL_43;
  }
  v17 = 3324LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)EndpointStore);
LABEL_43:
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v41);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v48);
  return v16;
}
