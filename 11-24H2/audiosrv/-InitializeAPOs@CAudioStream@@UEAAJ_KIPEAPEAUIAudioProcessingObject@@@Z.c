/*
 * XREFs of ?InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180022430
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?InitializeVolumeCoefficientCount@CAudioStream@@QEAAJI@Z @ 0x180021380 (-InitializeVolumeCoefficientCount@CAudioStream@@QEAAJI@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180022D48 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@-$vec.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x180024FB0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800252E8 (--1CPerfTracker@@QEAA@XZ.c)
 *     ??$_Construct_in_place@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@std@@YAXAEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@Z @ 0x18009BBD0 (--$_Construct_in_place@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@st.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall CAudioStream::InitializeAPOs(
        CAudioStream *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  unsigned int v5; // esi
  struct AudioSrvTelemetryProvider *v7; // rax
  unsigned int v8; // r12d
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rcx
  unsigned int i; // ebx
  __int64 v18; // rsi
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // ebx
  int v24; // eax
  unsigned int v25; // ebx
  const char *v26; // r9
  __int64 result; // rax
  int v28; // eax
  unsigned int v29; // esi
  __int64 v30; // rsi
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rax
  int v34; // eax
  int v35; // eax
  __int64 v36; // rsi
  int v37; // eax
  unsigned int v38; // esi
  unsigned int v39; // [rsp+20h] [rbp-158h] BYREF
  _QWORD *v40; // [rsp+28h] [rbp-150h] BYREF
  unsigned int v41; // [rsp+30h] [rbp-148h] BYREF
  struct _RTL_CRITICAL_SECTION *v42; // [rsp+38h] [rbp-140h] BYREF
  _QWORD v43[2]; // [rsp+40h] [rbp-138h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-128h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  v5 = a3;
  v39 = a3;
  v7 = AudioSrvTelemetryProvider::Instance();
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    *((const struct _tlgProvider_t **)v7 + 1),
    "AudioStream_InitializeAPOs",
    0LL);
  if ( !*((_BYTE *)this + 41) )
    *((_DWORD *)this + 35) = 1;
  v40 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  v42 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  v8 = 0;
  try
  {
    while ( 1 )
    {
      if ( v8 >= v5 )
        goto LABEL_48;
      v43[0] = 0LL;
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, _QWORD *))a4[v8]->lpVtbl->QueryInterface)(
             a4[v8],
             &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
             v43) < 0 )
      {
        v10 = v43[0];
      }
      else
      {
        v9 = *((_QWORD *)this + 23);
        v10 = v43[0];
        *((_QWORD *)this + 23) = v43[0];
        if ( v10 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
          v10 = v43[0];
        }
        if ( v9 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          v10 = v43[0];
        }
      }
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      v43[0] = 0LL;
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, _QWORD *))a4[v8]->lpVtbl->QueryInterface)(
             a4[v8],
             &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd,
             v43) < 0 )
      {
        v12 = v43[0];
      }
      else
      {
        v11 = *((_QWORD *)this + 24);
        v12 = v43[0];
        *((_QWORD *)this + 24) = v43[0];
        if ( v12 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
          v12 = v43[0];
        }
        if ( v11 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          v12 = v43[0];
        }
      }
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      v43[0] = 0LL;
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, _QWORD *))a4[v8]->lpVtbl->QueryInterface)(
             a4[v8],
             &GUID_788f7be2_9c40_41c0_af05_4393fbf409f9,
             v43) < 0 )
      {
        v14 = v43[0];
      }
      else
      {
        v13 = *((_QWORD *)this + 26);
        v14 = v43[0];
        *((_QWORD *)this + 26) = v43[0];
        if ( v14 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
          v14 = v43[0];
        }
        if ( v13 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          v14 = v43[0];
        }
      }
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      v43[0] = 0LL;
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, _QWORD *))a4[v8]->lpVtbl->QueryInterface)(
             a4[v8],
             &GUID_2b6a07f7_ea05_428b_a730_afb23c032f5c,
             v43) >= 0 )
      {
        v18 = *((_QWORD *)this + 25);
        v19 = v43[0];
        *((_QWORD *)this + 25) = v43[0];
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        v20 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 25) + 32LL))(
                *((_QWORD *)this + 25),
                (char *)this + 100);
        if ( v20 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x253,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)(unsigned int)v20,
            v39);
        if ( (*(unsigned __int8 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 384LL))(g_PolicyManager) )
          (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 25) + 40LL))(*((_QWORD *)this + 25), 1LL);
      }
      if ( v43[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v43[0] + 16LL))(v43[0]);
      v43[0] = 0LL;
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, _QWORD *))a4[v8]->lpVtbl->QueryInterface)(
             a4[v8],
             &GUID_5849e670_4969_44de_8904_75ed892b627e,
             v43) >= 0 )
      {
        v30 = *((_QWORD *)this + 27);
        v31 = v43[0];
        *((_QWORD *)this + 27) = v43[0];
        if ( v31 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
        if ( v30 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 27) + 32LL))(
                *((_QWORD *)this + 27),
                *((unsigned int *)this + 20));
        if ( v32 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x261,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)(unsigned int)v32,
            v39);
        v41 = 0;
        v33 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 9) + 392LL))(
                *((_QWORD *)this + 9),
                &v41);
        v34 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 27) + 48LL))(
                *((_QWORD *)this + 27),
                v33,
                v41);
        if ( v34 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x265,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)(unsigned int)v34,
            v39);
        v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 27) + 40LL))(
                *((_QWORD *)this + 27),
                *((_QWORD *)this + 11));
        if ( v35 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x267,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)(unsigned int)v35,
            v39);
      }
      if ( v43[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v43[0] + 16LL))(v43[0]);
      v43[0] = 0LL;
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, _QWORD *))a4[v8]->lpVtbl->QueryInterface)(
             a4[v8],
             &GUID_8ab91395_f920_4132_873f_7a40607f7901,
             v43) >= 0 )
      {
        v36 = *((_QWORD *)this + 28);
        v15 = v43[0];
        *((_QWORD *)this + 28) = v43[0];
        if ( v15 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
          v15 = v43[0];
        }
        if ( v36 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
          v15 = v43[0];
        }
      }
      else
      {
        v15 = v43[0];
      }
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      v16 = v40;
      v40 = 0LL;
      if ( v16 )
        (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, _QWORD **))a4[v8]->lpVtbl->QueryInterface)(
             a4[v8],
             &GUID_0e0823fe_8765_49d4_9cca_c008a449bef1,
             &v40) >= 0 )
      {
        v43[0] = 0LL;
        v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 9) + 536LL))(
                *((_QWORD *)this + 9),
                v43);
        v29 = v28;
        if ( v28 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x27B,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)(unsigned int)v28);
          if ( this != (CAudioStream *)-144LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
          if ( v40 )
            (*(void (__fastcall **)(_QWORD *, _QWORD))(*v40 + 16LL))(v40, *v40);
          CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
          return v29;
        }
        v37 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v40 + 24LL))(v40, v43);
        v38 = v37;
        if ( v37 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x27C,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)(unsigned int)v37);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v42);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
          CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
          return v38;
        }
      }
      if ( *((_QWORD *)this + 23)
        && *((_QWORD *)this + 24)
        && *((_QWORD *)this + 26)
        && *((_QWORD *)this + 25)
        && *((_QWORD *)this + 27)
        && v40 )
      {
        break;
      }
      ++v8;
      v5 = v39;
    }
    v5 = v39;
LABEL_48:
    if ( this != (CAudioStream *)-144LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
    for ( i = 0; i < v5; ++i )
    {
      v43[0] = 0LL;
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, _QWORD *))a4[i]->lpVtbl->QueryInterface)(
             a4[i],
             &GUID_67309ffa_1e7c_48f2_b96f_9b25b183ba25,
             v43) >= 0 )
      {
        if ( *((_QWORD *)this + 30) == *((_QWORD *)this + 31) )
        {
          std::vector<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy> const &>(
            (char *)this + 232,
            *((_QWORD *)this + 30),
            v43);
        }
        else
        {
          std::_Construct_in_place<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>,wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> const &>(
            *((_QWORD *)this + 30),
            v43);
          *((_QWORD *)this + 30) += 8LL;
        }
      }
      if ( v43[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v43[0] + 16LL))(v43[0]);
    }
    if ( *((_BYTE *)this + 41) )
    {
LABEL_73:
      if ( v40 )
        (*(void (__fastcall **)(_QWORD *))(*v40 + 16LL))(v40);
      CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
      return 0LL;
    }
    v21 = *((_QWORD *)this + 23);
    if ( v21 )
    {
      if ( !*((_QWORD *)this + 24) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x299,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)0x80004002LL);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
        CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
        return 2147500034LL;
      }
      v39 = 0;
      v22 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 40LL))(v21, &v39);
      v23 = v22;
      if ( v22 >= 0 )
      {
        v24 = CAudioStream::InitializeVolumeCoefficientCount(this, v39);
        v25 = v24;
        if ( v24 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x29D,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)(unsigned int)v24);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
          CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
          return v25;
        }
        goto LABEL_73;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x29C,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v22);
      if ( v40 )
        (*(void (__fastcall **)(_QWORD *))(*v40 + 16LL))(v40);
      CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
      result = v23;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x298,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)0x80004002LL);
      if ( v40 )
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v40 + 16LL))(v40, *v40);
      CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
      result = 2147500034LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2A1,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                           v26);
  }
  return result;
}
