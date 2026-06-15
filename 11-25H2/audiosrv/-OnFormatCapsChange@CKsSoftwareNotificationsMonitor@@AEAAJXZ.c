/*
 * XREFs of ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18008BB8C
 * Callers:
 *     ?OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z @ 0x180104AE0 (-OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180001598 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18001CAB0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x18001DF28 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ??1?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001E07C (--1-$shared_any_t@V-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6A.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800271C8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180055680 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?put@?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x18005F1BC (-put@-$shared_any_t@V-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@QEAA_NXZ @ 0x1800DD974 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@QEAA_NXZ.c)
 *     ?GetDeviceId@CKsNotificationsMonitor@@QEAAJPEAPEAG@Z @ 0x1801168BC (-GetDeviceId@CKsNotificationsMonitor@@QEAAJPEAPEAG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CKsSoftwareNotificationsMonitor::OnFormatCapsChange(CKsSoftwareNotificationsMonitor *this)
{
  unsigned __int16 **v2; // rax
  signed __int32 v3; // ebx
  _DWORD *v4; // rcx
  const WCHAR **v5; // rdi
  int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // r9
  const WCHAR *v9; // rax
  struct CSerialWorkQueue *v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, _BYTE **); // rdi
  int v19; // eax
  __int64 v20; // rdx
  _BOOL8 v21; // rdx
  struct IMMDeviceEnumeratorVtbl *lpVtbl; // rax
  int v23; // eax
  __int64 v24; // rdx
  unsigned int i; // r14d
  __int64 v27; // rbx
  int (__fastcall *v28)(__int64, _QWORD, __int64 *); // rdi
  __int64 v29; // rax
  unsigned __int16 *v30; // rax
  int v31; // r8d
  int v32; // ecx
  __int64 v33; // rbx
  int (__fastcall *v34)(__int64, __int64); // rdi
  __int64 v35; // rax
  int v36; // edi
  _DWORD *v37; // rcx
  const WCHAR **v38; // rbx
  int v39; // ecx
  __int64 v40; // r8
  __int64 v41; // r9
  const WCHAR *v42; // rax
  struct CSerialWorkQueue *SerialWorkQueue; // rax
  __int64 v44; // rcx
  int v45; // eax
  int v46; // [rsp+28h] [rbp-E0h]
  _BYTE *v47; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v48; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v50; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v51; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v52; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+68h] [rbp-A0h] BYREF
  signed __int32 v54; // [rsp+70h] [rbp-98h] BYREF
  int v55; // [rsp+74h] [rbp-94h] BYREF
  int v56[4]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v57; // [rsp+88h] [rbp-80h] BYREF
  PROPVARIANT pvar[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-60h]
  const WCHAR *v60; // [rsp+B0h] [rbp-58h] BYREF
  const WCHAR *v61[3]; // [rsp+B8h] [rbp-50h] BYREF
  char v62; // [rsp+D0h] [rbp-38h]
  signed __int32 v63; // [rsp+D8h] [rbp-30h]
  __int128 v64; // [rsp+E0h] [rbp-28h] BYREF
  int v65; // [rsp+F0h] [rbp-18h]
  __int128 v66; // [rsp+F8h] [rbp-10h] BYREF
  __int64 (__fastcall **v67)(); // [rsp+108h] [rbp+0h] BYREF
  signed __int32 v68; // [rsp+110h] [rbp+8h]
  const WCHAR **v69; // [rsp+118h] [rbp+10h]
  __int64 v70; // [rsp+120h] [rbp+18h]
  __int64 (__fastcall ***v71)(); // [rsp+140h] [rbp+38h]
  __int64 (__fastcall **v72)(); // [rsp+148h] [rbp+40h] BYREF
  int v73; // [rsp+150h] [rbp+48h]
  const WCHAR **v74; // [rsp+158h] [rbp+50h]
  __int64 v75; // [rsp+160h] [rbp+58h]
  __int64 (__fastcall ***v76)(); // [rsp+180h] [rbp+78h]
  _DWORD v77[6]; // [rsp+188h] [rbp+80h] BYREF
  _DWORD v78[6]; // [rsp+1A0h] [rbp+98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56664216>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56664216>::GetImpl'::`2'::impl) )
  {
    v53 = 0LL;
    v13 = (__int64 *)*((_QWORD *)this + 11);
    v14 = *v13;
    v53 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v14 + 96))(v13, &v53);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAE,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
        (const char *)(unsigned int)v15);
LABEL_28:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v53);
      return v16;
    }
    v47 = 0LL;
    v17 = v53;
    v18 = *(__int64 (__fastcall **)(__int64, _BYTE **))(*(_QWORD *)v53 + 64LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&v47,
      0LL);
    v19 = v18(v17, &v47);
    v16 = v19;
    if ( v19 >= 0 )
    {
      LODWORD(v50) = 0;
      v19 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 11) + 32LL))(
              *((_QWORD *)this + 11),
              &v50);
      v16 = v19;
      if ( v19 >= 0 )
      {
        v49 = 0LL;
        v21 = *((_DWORD *)this + 2) != 0;
        lpVtbl = g_DeviceEnumerator->lpVtbl;
        v49 = 0LL;
        v23 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, _BOOL8, __int64, __int64 *))lpVtbl->EnumAudioEndpoints)(
                g_DeviceEnumerator,
                v21,
                4026531855LL,
                &v49);
        v16 = v23;
        if ( v23 >= 0 )
        {
          LODWORD(v48) = 0;
          v23 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v49 + 24LL))(v49, &v48);
          v16 = v23;
          if ( v23 >= 0 )
          {
            for ( i = 0; i < (unsigned int)v48; ++i )
            {
              v52 = 0LL;
              v27 = v49;
              v28 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v49 + 32LL);
              wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v52);
              if ( v28(v27, i, (__int64 *)&v52) >= 0 )
              {
                v51 = 0LL;
                v29 = *v52;
                v51 = 0LL;
                if ( (*(int (__fastcall **)(__int64 *, _QWORD, __int64 *))(v29 + 32))(v52, 0LL, &v51) >= 0 )
                {
                  v77[0] = 590439624;
                  v77[1] = 1283267372;
                  v77[2] = 1907779772;
                  v77[3] = 1730509416;
                  v77[4] = 1;
                  *(_OWORD *)pvar = 0LL;
                  v59 = 0LL;
                  v61[2] = (const WCHAR *)pvar;
                  v62 = 1;
                  if ( (*(int (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v51 + 40LL))(v51, v77, pvar) >= 0
                    && LOWORD(pvar[0]) == 31 )
                  {
                    v30 = (unsigned __int16 *)pvar[1];
                    do
                    {
                      v31 = *(unsigned __int16 *)((char *)v30 + v47 - (char *)pvar[1]);
                      v32 = *v30 - v31;
                      if ( v32 )
                        break;
                      ++v30;
                    }
                    while ( v31 );
                    if ( !v32 )
                    {
                      v78[0] = -1702713381;
                      v78[1] = 1102331579;
                      v78[2] = -1223116157;
                      v78[3] = -65530063;
                      v78[4] = 1;
                      PropVariantClear(pvar);
                      if ( (*(int (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v51 + 40LL))(
                             v51,
                             v78,
                             pvar) >= 0
                        && LOWORD(pvar[0]) == 19
                        && LODWORD(pvar[1]) == (_DWORD)v50 )
                      {
                        v57 = 0LL;
                        v33 = (__int64)v52;
                        v34 = *(int (__fastcall **)(__int64, __int64))(*v52 + 40);
                        v35 = wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::put(&v57);
                        if ( v34(v33, v35) >= 0 )
                        {
                          v36 = dword_1801D085C++;
                          v37 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
                          v38 = (const WCHAR **)v57;
                          if ( *v37 > 4u && tlgKeywordOn((__int64)v37, 32LL) )
                          {
                            if ( v38 )
                              v42 = *v38;
                            else
                              v42 = 0LL;
                            v61[0] = v42;
                            v55 = v36;
                            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                              v39,
                              (int)&unk_1801A2999,
                              v40,
                              v41,
                              (__int64)&v55,
                              v61);
                          }
                          SerialWorkQueue = GetSerialWorkQueue();
                          v65 = v36;
                          v44 = *((_QWORD *)&v57 + 1);
                          if ( *((_QWORD *)&v57 + 1) )
                          {
                            _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v57 + 1) + 8LL), 1u);
                            v44 = *((_QWORD *)&v57 + 1);
                            v38 = (const WCHAR **)v57;
                          }
                          v72 = off_180173628;
                          v73 = v36;
                          v74 = v38;
                          v75 = v44;
                          v66 = 0LL;
                          v76 = &v72;
                          v45 = CSerialWorkQueue::QueueWorkItem((__int64)SerialWorkQueue, (__int64 *)&v72);
                          if ( v45 < 0 )
                            wil::details::in1diag3::_Log_Hr(
                              retaddr,
                              (void *)0xF6,
                              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
                              (const char *)(unsigned int)v45,
                              v46);
                          wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>((__int64)&v66);
                        }
                        wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>((__int64)&v57);
                      }
                    }
                  }
                  v62 = 0;
                  PropVariantClear(pvar);
                }
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v51);
              }
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v52);
            }
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v49);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v47);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v53);
            return 0LL;
          }
          v24 = 190LL;
        }
        else
        {
          v24 = 187LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
          (const char *)(unsigned int)v23);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v49);
        goto LABEL_27;
      }
      v20 = 180LL;
    }
    else
    {
      v20 = 177LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
      (const char *)(unsigned int)v19);
LABEL_27:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v47);
    goto LABEL_28;
  }
  *(_OWORD *)v56 = 0LL;
  v2 = (unsigned __int16 **)wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::put(v56);
  if ( (int)CKsNotificationsMonitor::GetDeviceId(this, v2) >= 0 )
  {
    v3 = _InterlockedIncrement(&dword_1801D0860);
    v4 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    v5 = *(const WCHAR ***)v56;
    if ( *v4 > 4u && tlgKeywordOn((__int64)v4, 32LL) )
    {
      if ( v5 )
        v9 = *v5;
      else
        v9 = 0LL;
      v60 = v9;
      v54 = v3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v6,
        (int)&unk_1801A2999,
        v7,
        v8,
        (__int64)&v54,
        &v60);
    }
    v10 = GetSerialWorkQueue();
    v63 = v3;
    v11 = *(_QWORD *)&v56[2];
    if ( *(_QWORD *)&v56[2] )
    {
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)&v56[2] + 8LL), 1u);
      v11 = *(_QWORD *)&v56[2];
      v5 = *(const WCHAR ***)v56;
    }
    v67 = off_1801735F8;
    v68 = v3;
    v69 = v5;
    v70 = v11;
    v64 = 0LL;
    v71 = &v67;
    v12 = CSerialWorkQueue::QueueWorkItem((__int64)v10, (__int64 *)&v67);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA4,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
        (const char *)(unsigned int)v12,
        v46);
    wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>((__int64)&v64);
  }
  wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>((__int64)v56);
  return 0LL;
}
