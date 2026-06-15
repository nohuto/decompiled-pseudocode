/*
 * XREFs of ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800187A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x1800181E4 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x1800191D0 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x18001A1B0 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18001A2F0 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001AF40 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x1800C1360 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     WPP_SF_S @ 0x1800C17A4 (WPP_SF_S.c)
 *     WPP_SF_qS @ 0x1800C4850 (WPP_SF_qS.c)
 *     WPP_SF_qD @ 0x1800C49A0 (WPP_SF_qD.c)
 *     _lambda_d9535dcdb7548fef18ac21c0bf23d41c_::operator() @ 0x1800C69F4 (_lambda_d9535dcdb7548fef18ac21c0bf23d41c_--operator().c)
 *     _lambda_e7a2b3fb80c66b26b9fa382759a6ec05_::operator() @ 0x1800C6A68 (_lambda_e7a2b3fb80c66b26b9fa382759a6ec05_--operator().c)
 *     WPP_SF_dq @ 0x1800C7C54 (WPP_SF_dq.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManager::GetAudioSessions(
        CAudioSessionManager *this,
        struct IAudioProcess *a2,
        unsigned int *a3,
        void ***a4,
        unsigned __int16 ***a5)
{
  struct IAudioProcess *v7; // r14
  int v9; // r12d
  int v10; // r15d
  const unsigned __int16 *v11; // rcx
  int v12; // ebx
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // esi
  _QWORD *v16; // rdx
  _QWORD *v17; // rdx
  _QWORD *v18; // rdx
  _QWORD *v19; // rdx
  _QWORD *v20; // rdx
  struct _RTL_CRITICAL_SECTION *v21; // r12
  unsigned __int64 v22; // rcx
  void *v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int16 **v25; // rax
  __int64 v26; // r8
  _QWORD *v27; // rdi
  _QWORD *v28; // rbx
  unsigned int v29; // eax
  __int64 v30; // r9
  int v31; // ecx
  volatile signed __int32 *v32; // rsi
  unsigned int v33; // r13d
  char *v34; // rax
  volatile signed __int32 *v35; // r14
  int v36; // r13d
  int v37; // eax
  unsigned int v38; // r14d
  unsigned int *v39; // r9
  void ***v40; // rdx
  _QWORD *v42; // rdx
  _QWORD *v43; // rdx
  _QWORD *v44; // rdx
  _QWORD *v45; // rdx
  _QWORD *v46; // rdx
  __int64 v47; // rbx
  void *v48; // rbx
  HANDLE ProcessHeap; // rax
  int v50; // [rsp+20h] [rbp-E0h]
  int v51; // [rsp+20h] [rbp-E0h]
  int v52; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID lpMem; // [rsp+48h] [rbp-B8h] BYREF
  struct CAudioSession *v54; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 **v55; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v57[2]; // [rsp+68h] [rbp-98h] BYREF
  char v58; // [rsp+78h] [rbp-88h]
  _QWORD v59[2]; // [rsp+80h] [rbp-80h] BYREF
  char v60; // [rsp+90h] [rbp-70h]
  __int64 v61; // [rsp+98h] [rbp-68h]
  struct IAudioProcess *v62; // [rsp+A0h] [rbp-60h]
  unsigned int *v63; // [rsp+A8h] [rbp-58h]
  void ***v64; // [rsp+B0h] [rbp-50h]
  unsigned __int16 ***v65; // [rsp+B8h] [rbp-48h]
  __int64 v66; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v67; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v68; // [rsp+D0h] [rbp-30h]
  GUID v69; // [rsp+D8h] [rbp-28h]
  __int64 v70; // [rsp+E8h] [rbp-18h]
  int v71; // [rsp+F0h] [rbp-10h]
  int v72; // [rsp+F8h] [rbp-8h]
  int v73; // [rsp+FCh] [rbp-4h]
  int v74; // [rsp+100h] [rbp+0h]
  __int64 v75; // [rsp+108h] [rbp+8h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v64 = a4;
  v63 = a3;
  v7 = a2;
  v62 = a2;
  v65 = a5;
  v9 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
  LODWORD(v56) = v9;
  v10 = 0;
  *a4 = 0LL;
  *a5 = 0LL;
  *a3 = 0;
  v54 = 0LL;
  v66 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v67 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v68 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v70 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v69 = GUID_00000000_0000_0000_0000_000000000000;
  v71 = 0;
  v73 = -1;
  v72 = 0;
  v74 = 0;
  v75 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_26c2f811cba6303e2e635ec6759b9dab_Traceguids, this, v9);
  }
  if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged((char *)this + 240) )
    v11 = *(const unsigned __int16 **)v11;
  v12 = CAudioEndpointId::Initialize((CAudioEndpointId *)&v66, v11);
  if ( v12 < 0 )
    goto LABEL_5;
  v13 = *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v13 = *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v13 )
  {
    v12 = -2147024809;
    goto LABEL_76;
  }
  v69 = GUID_SystemSounds_AudioSessionId;
  v71 = 1;
  v12 = CAppAudioSessionId::CalculateStaticId((CAppAudioSessionId *)&v67);
  if ( v12 < 0 )
LABEL_76:
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 0x173u, v12);
  if ( v12 < 0
    || (v74 = 1,
        v72 = 0,
        v73 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v7 + 48LL))(v7),
        v12 = CAudioSessionInstanceId::CalculateStaticId((CAudioSessionInstanceId *)&v66),
        v12 < 0) )
  {
LABEL_5:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 0x38Fu, v12);
  }
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37A,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v12,
      v50);
    CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)&v66);
    return (unsigned int)v12;
  }
  v14 = CAudioSessionManager::CreateAudioSession(this, v7, (struct CAudioSessionInstanceId *)&v66, 0xEu, 0, 0, &v54);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v16 = (_QWORD *)(v75 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v75 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 8LL))(*v16);
    v17 = (_QWORD *)(v70 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v70 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v17 + 8LL))(*v17);
    v18 = (_QWORD *)(v68 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v68 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v18 + 8LL))(*v18);
    v19 = (_QWORD *)(v67 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v67 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v19 + 8LL))(*v19);
    v20 = (_QWORD *)(v66 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v66 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v20 + 8LL))(*v20);
    v21 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
    v52 = 0;
    v22 = 8LL * *((_QWORD *)this + 8);
    if ( v22 > 0x40000 )
    {
      lpMem = 0LL;
    }
    else
    {
      v23 = operator new[](v22, (const struct std::nothrow_t *)&std::nothrow);
      lpMem = v23;
      if ( v23 )
      {
        memset_0(v23, 0, 8LL * *((_QWORD *)this + 8));
        v59[0] = &v52;
        v59[1] = &lpMem;
        v60 = 1;
        v24 = 8LL * *((_QWORD *)this + 8);
        if ( v24 > 0x40000 )
        {
          v55 = 0LL;
        }
        else
        {
          v25 = (unsigned __int16 **)operator new[](v24, (const struct std::nothrow_t *)&std::nothrow);
          v55 = v25;
          if ( v25 )
          {
            memset_0(v25, 0, 8LL * *((_QWORD *)this + 8));
            v57[0] = &v52;
            v57[1] = &v55;
            v58 = 1;
            v27 = (_QWORD *)*((_QWORD *)this + 7);
            v28 = (_QWORD *)*v27;
            v29 = v52;
            while ( 1 )
            {
              if ( v28 == v27 )
              {
                v39 = v63;
                *v63 = v29;
                v40 = v64;
                *v64 = (void **)lpMem;
                *v65 = v55;
                if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                  && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), v40, v26, *v39, *v40);
                }
                if ( v21 )
                  LeaveCriticalSection(v21);
                if ( v54 )
                  (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v54 + 16LL))(v54);
                return 0LL;
              }
              v30 = v28[12];
              v31 = *(_DWORD *)(v30 + 644);
              if ( (!v31 || v31 == (_DWORD)v56) && *(_DWORD *)(v30 + 336) != 2 )
                break;
LABEL_50:
              v28 = (_QWORD *)*v28;
            }
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_qS(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                31,
                (unsigned int)&WPP_26c2f811cba6303e2e635ec6759b9dab_Traceguids,
                v30,
                0LL);
            }
            v32 = 0LL;
            v33 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v7 + 40LL))(v7);
            v61 = v28[12];
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_26c2f811cba6303e2e635ec6759b9dab_Traceguids);
            }
            v34 = (char *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
            v35 = (volatile signed __int32 *)v34;
            if ( v34 )
            {
              *((_DWORD *)v34 + 4) = 1;
              *(_QWORD *)v34 = &CServerAudioSessionControl::`vftable'{for `ISessionInternalEvents'};
              *((_QWORD *)v34 + 1) = &CServerAudioSessionControl::`vftable'{for `CUnknown'};
              *((_DWORD *)v34 + 6) = 0;
              InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v34 + 32), 0, 0);
              *((_QWORD *)v35 + 9) = 0LL;
              *((_BYTE *)v35 + 84) = 0;
              if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids);
              }
            }
            else
            {
              v35 = 0LL;
            }
            if ( v35 )
            {
              v36 = (*(__int64 (__fastcall **)(volatile signed __int32 *, _QWORD, _QWORD, __int64))(*(_QWORD *)v35
                                                                                                  + 256LL))(
                      v35,
                      v33,
                      0LL,
                      v61);
              if ( v36 >= 0 )
              {
                if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                  && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_qS(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    12,
                    (unsigned int)&WPP_26c2f811cba6303e2e635ec6759b9dab_Traceguids,
                    (_DWORD)v35,
                    0LL);
                }
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
                _InterlockedIncrement(v35 + 6);
                v32 = v35;
                goto LABEL_45;
              }
            }
            else
            {
              v36 = -2147024882;
            }
            AudSrvTraceLoggingErrorHelper("CAudioSessionManager::CreateAudioSessionControl", 0x1A2u, v36);
LABEL_45:
            if ( v35 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
            if ( v36 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x3B9,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                (const char *)(unsigned int)v36,
                v51);
              if ( v32 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
              v58 = 0;
              lambda_e7a2b3fb80c66b26b9fa382759a6ec05_::operator()(v57);
              v60 = 0;
              lambda_d9535dcdb7548fef18ac21c0bf23d41c_::operator()(v59);
              if ( v21 )
                LeaveCriticalSection(v21);
              if ( v54 )
                (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v54 + 16LL))(v54);
              return (unsigned int)v36;
            }
            v37 = (*(__int64 (__fastcall **)(volatile signed __int32 *, unsigned __int16 **))(*(_QWORD *)v32 + 120LL))(
                    v32,
                    &v55[v52]);
            v38 = v37;
            if ( v37 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x3BA,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                (const char *)(unsigned int)v37,
                v51);
              if ( v32 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
              v58 = 0;
              lambda_e7a2b3fb80c66b26b9fa382759a6ec05_::operator()(v57);
              v60 = 0;
              lambda_d9535dcdb7548fef18ac21c0bf23d41c_::operator()(v59);
              if ( v21 )
                LeaveCriticalSection(v21);
              if ( v54 )
                (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v54 + 16LL))(v54);
              return v38;
            }
            *((_QWORD *)lpMem + v52) = v32;
            v29 = ++v52;
            v7 = v62;
            goto LABEL_50;
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x396,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)0x8007000ELL,
          v51);
        if ( v52 > 0 )
        {
          v47 = 0LL;
          do
          {
            v56 = *(_QWORD *)((char *)lpMem + v47);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v56);
            ++v10;
            v47 += 8LL;
          }
          while ( v10 < v52 );
        }
        v48 = lpMem;
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v48);
        if ( this == (CAudioSessionManager *)-8LL )
        {
LABEL_101:
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v54);
          return 2147942414LL;
        }
LABEL_100:
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
        goto LABEL_101;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38A,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)0x8007000ELL,
      v51);
    if ( this == (CAudioSessionManager *)-8LL )
      goto LABEL_101;
    goto LABEL_100;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x381,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
    (const char *)(unsigned int)v14,
    v51);
  v42 = (_QWORD *)(v75 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v75 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v42 + 8LL))(*v42);
  v43 = (_QWORD *)(v70 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v70 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v43 + 8LL))(*v43);
  v44 = (_QWORD *)(v68 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v68 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v44 + 8LL))(*v44);
  v45 = (_QWORD *)(v67 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v67 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v45 + 8LL))(*v45);
  v46 = (_QWORD *)(v66 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v66 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v46 + 8LL))(*v46);
  if ( v54 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v54 + 16LL))(v54);
  return v15;
}
