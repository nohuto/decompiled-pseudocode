/*
 * XREFs of ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180012D30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x1800122A4 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180012380 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x1800143D0 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180014510 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180015160 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42AC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x1800BFF80 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     WPP_SF_S @ 0x1800C033C (WPP_SF_S.c)
 *     WPP_SF_qS @ 0x1800C3528 (WPP_SF_qS.c)
 *     WPP_SF_qd @ 0x1800C3678 (WPP_SF_qd.c)
 *     _lambda_d9535dcdb7548fef18ac21c0bf23d41c_::operator() @ 0x1800C5FB8 (_lambda_d9535dcdb7548fef18ac21c0bf23d41c_--operator().c)
 *     _lambda_e7a2b3fb80c66b26b9fa382759a6ec05_::operator() @ 0x1800C602C (_lambda_e7a2b3fb80c66b26b9fa382759a6ec05_--operator().c)
 *     WPP_SF_dq @ 0x1800C7248 (WPP_SF_dq.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManager::GetAudioSessions(
        union _RTL_RUN_ONCE *this,
        struct IAudioProcess *a2,
        unsigned int *a3,
        void ***a4,
        unsigned __int16 ***a5)
{
  struct IAudioProcess *v7; // r14
  int v9; // r12d
  int v10; // r15d
  __int64 v11; // rdx
  const unsigned __int16 *v12; // rcx
  int v13; // ebx
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // esi
  _QWORD *v17; // rdx
  _QWORD *v18; // rdx
  _QWORD *v19; // rdx
  _QWORD *v20; // rdx
  _QWORD *v21; // rdx
  struct _RTL_CRITICAL_SECTION *v22; // r12
  unsigned __int64 v23; // rcx
  void *v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int16 **v26; // rax
  __int64 v27; // r8
  _QWORD *Ptr; // rdi
  _QWORD *v29; // rbx
  unsigned int v30; // eax
  __int64 v31; // r9
  int v32; // ecx
  volatile signed __int32 *v33; // rsi
  unsigned int v34; // r13d
  char *v35; // rax
  volatile signed __int32 *v36; // r14
  int v37; // r13d
  int v38; // eax
  unsigned int v39; // r14d
  unsigned int *v40; // r9
  void ***v41; // rdx
  _QWORD *v43; // rdx
  _QWORD *v44; // rdx
  _QWORD *v45; // rdx
  _QWORD *v46; // rdx
  _QWORD *v47; // rdx
  __int64 v48; // rbx
  void *v49; // rbx
  HANDLE ProcessHeap; // rax
  int v51; // [rsp+20h] [rbp-E0h]
  int v52; // [rsp+20h] [rbp-E0h]
  int v53; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID lpMem; // [rsp+48h] [rbp-B8h] BYREF
  struct CAudioSession *v55; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 **v56; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v58[2]; // [rsp+68h] [rbp-98h] BYREF
  char v59; // [rsp+78h] [rbp-88h]
  _QWORD v60[2]; // [rsp+80h] [rbp-80h] BYREF
  char v61; // [rsp+90h] [rbp-70h]
  __int64 v62; // [rsp+98h] [rbp-68h]
  struct IAudioProcess *v63; // [rsp+A0h] [rbp-60h]
  unsigned int *v64; // [rsp+A8h] [rbp-58h]
  void ***v65; // [rsp+B0h] [rbp-50h]
  unsigned __int16 ***v66; // [rsp+B8h] [rbp-48h]
  __int64 v67; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v68; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v69; // [rsp+D0h] [rbp-30h]
  GUID v70; // [rsp+D8h] [rbp-28h]
  __int64 v71; // [rsp+E8h] [rbp-18h]
  int v72; // [rsp+F0h] [rbp-10h]
  int v73; // [rsp+F8h] [rbp-8h]
  int v74; // [rsp+FCh] [rbp-4h]
  int v75; // [rsp+100h] [rbp+0h]
  __int64 v76; // [rsp+108h] [rbp+8h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v65 = a4;
  v64 = a3;
  v7 = a2;
  v63 = a2;
  v66 = a5;
  v9 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
  LODWORD(v57) = v9;
  v10 = 0;
  *a4 = 0LL;
  *a5 = 0LL;
  *a3 = 0;
  v55 = 0LL;
  v67 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v68 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v69 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v71 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v70 = GUID_00000000_0000_0000_0000_000000000000;
  v72 = 0;
  v74 = -1;
  v73 = 0;
  v75 = 0;
  v76 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v51 = v9;
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_a93cb6bcfd8139528881ae8cee6da3d9_Traceguids, this);
  }
  if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(&this[30], v11) )
    v12 = *(const unsigned __int16 **)v12;
  v13 = CAudioEndpointId::Initialize((CAudioEndpointId *)&v67, v12);
  if ( v13 < 0 )
    goto LABEL_5;
  v14 = *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v14 = *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v14 )
  {
    v13 = -2147024809;
    goto LABEL_76;
  }
  v70 = GUID_SystemSounds_AudioSessionId;
  v72 = 1;
  v13 = CAppAudioSessionId::CalculateStaticId((CAppAudioSessionId *)&v68);
  if ( v13 < 0 )
LABEL_76:
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 0x173u, v13);
  if ( v13 < 0
    || (v75 = 1,
        v73 = 0,
        v74 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v7 + 48LL))(v7),
        v13 = CAudioSessionInstanceId::CalculateStaticId((CAudioSessionInstanceId *)&v67),
        v13 < 0) )
  {
LABEL_5:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 0x38Fu, v13);
  }
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x387,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v13,
      v51);
    CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)&v67);
    return (unsigned int)v13;
  }
  v15 = CAudioSessionManager::CreateAudioSession(this, v7, (struct CAudioSessionInstanceId *)&v67, 14, 0, 0, &v55);
  v16 = v15;
  if ( v15 >= 0 )
  {
    v17 = (_QWORD *)(v76 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v76 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v17 + 8LL))(*v17);
    v18 = (_QWORD *)(v71 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v71 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v18 + 8LL))(*v18);
    v19 = (_QWORD *)(v69 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v69 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v19 + 8LL))(*v19);
    v20 = (_QWORD *)(v68 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v68 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v20 + 8LL))(*v20);
    v21 = (_QWORD *)(v67 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v67 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v21 + 8LL))(*v21);
    v22 = (struct _RTL_CRITICAL_SECTION *)&this[1];
    EnterCriticalSection((LPCRITICAL_SECTION)&this[1]);
    v53 = 0;
    v23 = 8 * (__int64)this[8].Ptr;
    if ( v23 > 0x40000 )
    {
      lpMem = 0LL;
    }
    else
    {
      v24 = operator new[](v23, (const struct std::nothrow_t *)&std::nothrow);
      lpMem = v24;
      if ( v24 )
      {
        memset_0(v24, 0, 8 * (__int64)this[8].Ptr);
        v60[0] = &v53;
        v60[1] = &lpMem;
        v61 = 1;
        v25 = 8 * (__int64)this[8].Ptr;
        if ( v25 > 0x40000 )
        {
          v56 = 0LL;
        }
        else
        {
          v26 = (unsigned __int16 **)operator new[](v25, (const struct std::nothrow_t *)&std::nothrow);
          v56 = v26;
          if ( v26 )
          {
            memset_0(v26, 0, 8 * (__int64)this[8].Ptr);
            v58[0] = &v53;
            v58[1] = &v56;
            v59 = 1;
            Ptr = this[7].Ptr;
            v29 = (_QWORD *)*Ptr;
            v30 = v53;
            while ( 1 )
            {
              if ( v29 == Ptr )
              {
                v40 = v64;
                *v64 = v30;
                v41 = v65;
                *v65 = (void **)lpMem;
                *v66 = v56;
                if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                  && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), v41, v27, *v40, *v41);
                }
                if ( v22 )
                  LeaveCriticalSection(v22);
                if ( v55 )
                  (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v55 + 16LL))(v55);
                return 0LL;
              }
              v31 = v29[12];
              v32 = *(_DWORD *)(v31 + 644);
              if ( (!v32 || v32 == (_DWORD)v57) && *(_DWORD *)(v31 + 336) != 2 )
                break;
LABEL_50:
              v29 = (_QWORD *)*v29;
            }
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_qS(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                31,
                (unsigned int)&WPP_a93cb6bcfd8139528881ae8cee6da3d9_Traceguids,
                v31,
                0LL);
            }
            v33 = 0LL;
            v34 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v7 + 40LL))(v7);
            v62 = v29[12];
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_a93cb6bcfd8139528881ae8cee6da3d9_Traceguids, 0LL);
            }
            v35 = (char *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
            v36 = (volatile signed __int32 *)v35;
            if ( v35 )
            {
              *((_DWORD *)v35 + 4) = 1;
              *(_QWORD *)v35 = &CServerAudioSessionControl::`vftable'{for `ISessionInternalEvents'};
              *((_QWORD *)v35 + 1) = &CServerAudioSessionControl::`vftable'{for `CUnknown'};
              *((_DWORD *)v35 + 6) = 0;
              InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v35 + 32), 0, 0);
              *((_QWORD *)v36 + 9) = 0LL;
              *((_BYTE *)v36 + 84) = 0;
              if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_S(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  10LL,
                  &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
                  0LL);
              }
            }
            else
            {
              v36 = 0LL;
            }
            if ( v36 )
            {
              v37 = (*(__int64 (__fastcall **)(volatile signed __int32 *, _QWORD, _QWORD, __int64))(*(_QWORD *)v36
                                                                                                  + 256LL))(
                      v36,
                      v34,
                      0LL,
                      v62);
              if ( v37 >= 0 )
              {
                if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                  && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_qS(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    12,
                    (unsigned int)&WPP_a93cb6bcfd8139528881ae8cee6da3d9_Traceguids,
                    (_DWORD)v36,
                    0LL);
                }
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
                _InterlockedIncrement(v36 + 6);
                v33 = v36;
                goto LABEL_45;
              }
            }
            else
            {
              v37 = -2147024882;
            }
            AudSrvTraceLoggingErrorHelper("CAudioSessionManager::CreateAudioSessionControl", 0x1AFu, v37);
LABEL_45:
            if ( v36 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
            if ( v37 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x3C6,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                (const char *)(unsigned int)v37,
                v52);
              if ( v33 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
              v59 = 0;
              lambda_e7a2b3fb80c66b26b9fa382759a6ec05_::operator()(v58);
              v61 = 0;
              lambda_d9535dcdb7548fef18ac21c0bf23d41c_::operator()(v60);
              if ( v22 )
                LeaveCriticalSection(v22);
              if ( v55 )
                (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v55 + 16LL))(v55);
              return (unsigned int)v37;
            }
            v38 = (*(__int64 (__fastcall **)(volatile signed __int32 *, unsigned __int16 **))(*(_QWORD *)v33 + 120LL))(
                    v33,
                    &v56[v53]);
            v39 = v38;
            if ( v38 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x3C7,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                (const char *)(unsigned int)v38,
                v52);
              if ( v33 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
              v59 = 0;
              lambda_e7a2b3fb80c66b26b9fa382759a6ec05_::operator()(v58);
              v61 = 0;
              lambda_d9535dcdb7548fef18ac21c0bf23d41c_::operator()(v60);
              if ( v22 )
                LeaveCriticalSection(v22);
              if ( v55 )
                (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v55 + 16LL))(v55);
              return v39;
            }
            *((_QWORD *)lpMem + v53) = v33;
            v30 = ++v53;
            v7 = v63;
            goto LABEL_50;
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3A3,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)0x8007000ELL,
          v52);
        if ( v53 > 0 )
        {
          v48 = 0LL;
          do
          {
            v57 = *(_QWORD *)((char *)lpMem + v48);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v57);
            ++v10;
            v48 += 8LL;
          }
          while ( v10 < v53 );
        }
        v49 = lpMem;
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v49);
        if ( this == (union _RTL_RUN_ONCE *)-8LL )
        {
LABEL_101:
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v55);
          return 2147942414LL;
        }
LABEL_100:
        LeaveCriticalSection((LPCRITICAL_SECTION)&this[1]);
        goto LABEL_101;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x397,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)0x8007000ELL,
      v52);
    if ( this == (union _RTL_RUN_ONCE *)-8LL )
      goto LABEL_101;
    goto LABEL_100;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x38E,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
    (const char *)(unsigned int)v15,
    v52);
  v43 = (_QWORD *)(v76 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v76 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v43 + 8LL))(*v43);
  v44 = (_QWORD *)(v71 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v71 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v44 + 8LL))(*v44);
  v45 = (_QWORD *)(v69 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v69 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v45 + 8LL))(*v45);
  v46 = (_QWORD *)(v68 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v68 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v46 + 8LL))(*v46);
  v47 = (_QWORD *)(v67 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v67 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v47 + 8LL))(*v47);
  if ( v55 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v55 + 16LL))(v55);
  return v16;
}
