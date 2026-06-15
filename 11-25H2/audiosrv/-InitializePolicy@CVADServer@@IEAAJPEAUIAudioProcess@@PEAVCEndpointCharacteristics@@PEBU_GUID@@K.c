/*
 * XREFs of ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x1800197F0
 * Callers:
 *     ?RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18002BE70 (-RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVE.c)
 * Callees:
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x1800132E0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180014F50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x1800191D0 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x18001A1B0 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18001A2F0 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001AAE0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001AC20 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001AF40 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18001E7A0 (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002153C (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DisconnectSessionsForTsSession@AudioSessionManagerProvider@@YAXKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180022654 (-DisconnectSessionsForTsSession@AudioSessionManagerProvider@@YAXKW4__MIDL___MIDL_itf_mmdeviceapi.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180028C90 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180029DB4 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?UseAutoConvertPCMForLoopbackStreams@CEndpointCharacteristics@@QEAA_NXZ @ 0x18006B7EC (-UseAutoConvertPCMForLoopbackStreams@CEndpointCharacteristics@@QEAA_NXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800A8AFE (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     WPP_SF_q @ 0x1800C480C (WPP_SF_q.c)
 *     ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x180100854 (-DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ.c)
 *     memmove_0 @ 0x18015E888 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVADServer::InitializePolicy(
        CVADServer *this,
        struct IAudioProcess *a2,
        struct CEndpointCharacteristics *a3,
        __m128i *a4,
        unsigned int a5,
        unsigned __int16 **a6)
{
  struct IAudioProcess *v8; // r13
  unsigned int v10; // edi
  __int64 v11; // rsi
  unsigned __int64 v12; // xmm0_8
  __int64 v13; // rax
  int v14; // r14d
  struct CAudioSessionInstanceId *v15; // rdi
  int v16; // r12d
  int v17; // ebx
  unsigned int v18; // r14d
  int v19; // r12d
  char *v20; // r13
  __int64 v21; // rsi
  struct IAudioProcess *v22; // rcx
  int v23; // eax
  int v24; // eax
  unsigned int v25; // ebx
  struct IAudioProcess *v26; // rdi
  __int64 v27; // rbx
  unsigned __int16 *v28; // rax
  __int64 v29; // rdx
  signed __int64 v30; // r8
  unsigned __int16 v31; // cx
  CEndpointStoreCache *v32; // rcx
  unsigned __int16 *v33; // rbx
  HANDLE v34; // rax
  struct IAudioProcess *v36; // rbx
  __int64 v37; // rax
  char *v38; // rdx
  const void *v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // rax
  unsigned __int64 v42; // r12
  unsigned __int64 v43; // r15
  char *v44; // rcx
  size_t v45; // r8
  CVADServer *v46; // r14
  int EndpointStore; // eax
  unsigned int v48; // esi
  struct CEndpointStore *v49; // rbx
  void (__fastcall *v50)(struct IAudioDuckingManager *, _QWORD); // rsi
  unsigned int v51; // eax
  unsigned int v52; // esi
  int v53; // eax
  int AudioSession; // eax
  unsigned int v55; // esi
  unsigned int v56; // eax
  unsigned int v57; // edx
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v58; // r8d
  unsigned __int16 *v59; // rbx
  HANDLE v60; // rax
  unsigned __int16 *v61; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  char *v65; // rdx
  const void *v66; // rdi
  __int64 v67; // rbx
  __int64 v68; // rax
  unsigned __int64 v69; // r12
  unsigned __int64 v70; // r15
  char *v71; // rcx
  size_t v72; // r8
  __int64 v73; // rax
  unsigned int v74; // [rsp+20h] [rbp-79h]
  unsigned int v75; // [rsp+20h] [rbp-79h]
  unsigned int v76; // [rsp+40h] [rbp-59h]
  int v77; // [rsp+44h] [rbp-55h]
  struct IAudioProcess *v78; // [rsp+48h] [rbp-51h] BYREF
  unsigned __int16 **v79; // [rsp+50h] [rbp-49h] BYREF
  struct CEndpointStore *v80; // [rsp+58h] [rbp-41h] BYREF
  struct CAudioSessionInstanceId *v81; // [rsp+60h] [rbp-39h]
  unsigned int v82; // [rsp+68h] [rbp-31h]
  CVADServer *v83; // [rsp+70h] [rbp-29h]
  __m128i v84; // [rsp+78h] [rbp-21h]
  const struct _GUID *v85; // [rsp+88h] [rbp-11h]
  __m128i v86; // [rsp+90h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+4Fh]

  v85 = (const struct _GUID *)a4;
  v8 = a2;
  v78 = a2;
  v83 = this;
  v79 = a6;
  if ( g_ADGProcess
    && LODWORD(g_ADGProcess[2].OwningThread) == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2) )
  {
    v10 = a5 | 0x20000000;
  }
  else
  {
    v10 = a5;
  }
  v84 = *a4;
  v86 = v84;
  v11 = v84.m128i_i64[0];
  v12 = _mm_srli_si128(v84, 8).m128i_u64[0];
  v13 = v84.m128i_i64[0] - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
  if ( v84.m128i_i64[0] == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
    v13 = v12 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
  if ( v13 )
    v10 |= (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v8 + 88LL))(v8) != 0 ? 0x40200000 : 0;
  v77 = v10 & 0x10000;
  v82 = v10 & 0x60000000;
  v14 = (v10 >> 28) & 1;
  if ( !(*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a3 + 56LL))(a3)
    && (v10 & 0x20000) != 0
    && ((*(unsigned __int8 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v8 + 504LL))(v8)
     || CEndpointCharacteristics::UseAutoConvertPCMForLoopbackStreams(a3)) )
  {
    v10 |= 0x80000000;
  }
  if ( (v10 & 0xA0000) == 0 )
    v14 |= 2u;
  v76 = v14;
  if ( !(*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a3 + 56LL))(a3) )
  {
    v14 |= 8u;
    v76 = v14;
    *((_BYTE *)this + 248) = 0;
  }
  if ( (*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a3 + 56LL))(a3) == 1 )
  {
    v14 &= ~2u;
    v76 = v14;
    if ( !*((_BYTE *)a3 + 8236) )
      *((_BYTE *)this + 248) = 0;
  }
  if ( !(*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v8 + 96LL))(v8) && (v10 & 0x2000000) != 0 )
    v76 = v14 | 0x20;
  *((_DWORD *)this + 61) = v10;
  v15 = (CVADServer *)((char *)this + 48);
  v81 = v15;
  v16 = v77 != 0;
  LODWORD(v80) = v16;
  v17 = CAudioEndpointId::Initialize(v15, *((const unsigned __int16 **)v83 + 24));
  v18 = -2147024809;
  if ( v17 < 0 )
    goto LABEL_15;
  v20 = (char *)v15 + 8;
  if ( !v77 )
  {
    *(__m128i *)((char *)v15 + 24) = v84;
    v36 = v78;
    v37 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v78 + 72LL))(v78);
    v39 = (const void *)v37;
    if ( v37 )
    {
      v40 = -1LL;
      do
        ++v40;
      while ( *(_WORD *)(v37 + 2 * v40) );
      if ( (_DWORD)v40 )
      {
        v41 = *((_QWORD *)v20 + 1);
        v42 = *(unsigned int *)(v41 - 16);
        v43 = ((__int64)v39 - v41) >> 1;
        if ( ((1 - *(_DWORD *)(v41 - 8)) | (*(_DWORD *)(v41 - 12) - (int)v40)) < 0 )
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(v20 + 8, (unsigned int)v40);
        v44 = (char *)*((_QWORD *)v20 + 1);
        v45 = 2LL * (int)v40;
        if ( v43 <= v42 )
        {
          v38 = &v44[2 * v43];
          if ( v45 )
          {
            if ( !v44 || !v38 )
            {
LABEL_52:
              *(_DWORD *)_o__errno(v44, v38, v45) = 22;
              invalid_parameter_noinfo();
              goto LABEL_86;
            }
            memmove_0(v44, v38, v45);
          }
        }
        else
        {
          if ( !v45 )
            goto LABEL_86;
          if ( !v44 )
            goto LABEL_52;
          memcpy_0(v44, v39, v45);
        }
LABEL_86:
        if ( (int)v40 < 0 )
          goto LABEL_102;
        v63 = *((_QWORD *)v20 + 1);
        if ( (int)v40 > *(_DWORD *)(v63 - 12) )
          goto LABEL_102;
        *(_DWORD *)(v63 - 16) = v40;
        *(_WORD *)(*((_QWORD *)v20 + 1) + 2LL * (int)v40) = 0;
        v16 = (int)v80;
        v36 = v78;
LABEL_89:
        v64 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v36 + 80LL))(v36);
        v66 = (const void *)v64;
        if ( !v64 )
          goto LABEL_103;
        v67 = -1LL;
        do
          ++v67;
        while ( *(_WORD *)(v64 + 2 * v67) );
        if ( !(_DWORD)v67 )
        {
LABEL_103:
          v15 = v81;
          v20 = (char *)v81 + 8;
          ATL::CSimpleStringT<unsigned short,0>::Empty((char *)v81 + 8);
LABEL_22:
          *((_DWORD *)v20 + 10) = v16;
          v17 = CAppAudioSessionId::CalculateStaticId((const GUID *)v20);
          if ( v17 >= 0 )
            goto LABEL_23;
          goto LABEL_78;
        }
        v20 = (char *)v81 + 8;
        v68 = *((_QWORD *)v81 + 1);
        v69 = *(unsigned int *)(v68 - 16);
        v70 = ((__int64)v66 - v68) >> 1;
        if ( ((1 - *(_DWORD *)(v68 - 8)) | (*(_DWORD *)(v68 - 12) - (int)v67)) < 0 )
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((char *)v81 + 8, (unsigned int)v67);
        v71 = *(char **)v20;
        v72 = 2LL * (int)v67;
        if ( v70 <= v69 )
        {
          v65 = &v71[2 * v70];
          if ( !v72 )
            goto LABEL_99;
          if ( v71 && v65 )
          {
            memmove_0(v71, v65, v72);
            goto LABEL_99;
          }
        }
        else
        {
          if ( !v72 )
          {
LABEL_99:
            if ( (int)v67 >= 0 && (int)v67 <= *(_DWORD *)(*(_QWORD *)v20 - 12LL) )
            {
              *(_DWORD *)(*(_QWORD *)v20 - 16LL) = v67;
              *(_WORD *)(*(_QWORD *)v20 + 2LL * (int)v67) = 0;
              v16 = (int)v80;
              v15 = v81;
              goto LABEL_22;
            }
LABEL_102:
            ATL::AtlThrowImpl(-2147024809);
          }
          if ( v71 )
          {
            memcpy_0(v71, v66, v72);
            goto LABEL_99;
          }
        }
        *(_DWORD *)_o__errno(v71, v65, v72) = 22;
        invalid_parameter_noinfo();
        goto LABEL_99;
      }
      v36 = v78;
    }
    ATL::CSimpleStringT<unsigned short,0>::Empty(v20 + 8);
    goto LABEL_89;
  }
  v21 = v11 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( !v21 )
    v21 = v12 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v21 )
  {
    *(__m128i *)((char *)v15 + 24) = v84;
    goto LABEL_22;
  }
  v17 = -2147024809;
LABEL_78:
  AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 0x173u, v17);
LABEL_23:
  if ( v17 < 0 )
  {
    v8 = v78;
LABEL_15:
    v19 = v77;
LABEL_16:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 0x38Fu, v17);
    goto LABEL_27;
  }
  *((_DWORD *)v15 + 16) = v16;
  v19 = v77;
  v8 = v78;
  v22 = v78;
  if ( v77 )
  {
    v23 = 0;
  }
  else
  {
    v23 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v78 + 40LL))(v78);
    v22 = v78;
  }
  *((_DWORD *)v15 + 14) = v23;
  *((_DWORD *)v15 + 15) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v8 + 48LL))(v22);
  v17 = CAudioSessionInstanceId::CalculateStaticId(v15);
  if ( v17 < 0 )
    goto LABEL_16;
LABEL_27:
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x491,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v17,
      v74);
    return (unsigned int)v17;
  }
  v78 = (struct IAudioProcess *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v24 = CAudioSessionInstanceId::ToString(v15, &v78);
  v25 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x494,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v24,
      v74);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v78);
    return v25;
  }
  v26 = v78;
  v27 = (unsigned int)(*((_DWORD *)v78 - 4) + 1);
  if ( (unsigned __int64)(2 * v27) > 0x40000 )
  {
    *v79 = 0LL;
    goto LABEL_117;
  }
  v28 = (unsigned __int16 *)operator new[](2 * v27, (const struct std::nothrow_t *)&std::nothrow);
  *v79 = v28;
  if ( !v28 )
  {
LABEL_117:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x498,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x8007000ELL,
      v74);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v78);
    return 2147942414LL;
  }
  v84.m128i_i64[0] = (__int64)&v79;
  v84.m128i_i8[8] = 1;
  if ( (unsigned __int64)(v27 - 1) > 0x7FFFFFFE )
  {
    if ( v27 )
      *v28 = 0;
  }
  else
  {
    v29 = 2147483646 - v27;
    v30 = v26 - (struct IAudioProcess *)v28;
    do
    {
      if ( !(v27 + v29) )
        break;
      v31 = *(unsigned __int16 *)((char *)v28 + v30);
      if ( !v31 )
        break;
      *v28++ = v31;
      --v27;
    }
    while ( v27 );
    v32 = (CEndpointStoreCache *)(v28 - 1);
    if ( v27 )
      v32 = (CEndpointStoreCache *)v28;
    *(_WORD *)v32 = 0;
    v18 = -2147024774;
    if ( v27 )
    {
      v80 = 0LL;
      v46 = v83;
      EndpointStore = CEndpointStoreCache::GetEndpointStore(v32, *((const unsigned __int16 **)v83 + 24), &v80);
      v48 = EndpointStore;
      if ( EndpointStore < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x49E,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)EndpointStore,
          v74);
        wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(&v80);
        v61 = *v79;
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v61);
        *v79 = 0LL;
        ATL::CStringData::Release((struct IAudioProcess *)((char *)v26 - 24));
        return v48;
      }
      else
      {
        v49 = v80;
        *((_QWORD *)v46 + 16) = *((_QWORD *)v80 + 12);
        if ( g_DuckingManager )
        {
          v50 = *(void (__fastcall **)(struct IAudioDuckingManager *, _QWORD))(*(_QWORD *)g_DuckingManager + 48LL);
          v51 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v8 + 48LL))(v8);
          v50(g_DuckingManager, v51);
        }
        if ( v19 )
        {
          v73 = *(_QWORD *)&v85->Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
          if ( *(_QWORD *)&v85->Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
            v73 = *(_QWORD *)v85->Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
          v52 = v76;
          if ( !v73 )
            v52 = v76 | 4;
        }
        else
        {
          v52 = v76;
        }
        v53 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 208LL))(g_PolicyManager);
        if ( v53 == 1 )
        {
          v56 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v8 + 48LL))(v8);
          AudioSessionManagerProvider::DisconnectSessionsForTsSession((AudioSessionManagerProvider *)v56, v57, v58);
        }
        else if ( v53 == 2 )
        {
          CPolicyConfig::DisconnectAllRenderEndpoints();
        }
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_8bc7b28d8efe3d7b840b96e094d2bf56_Traceguids, v46);
        }
        AudioSession = CAudioSessionManager::CreateAudioSession(
                         *((CAudioSessionManager **)v46 + 16),
                         v8,
                         v81,
                         v52,
                         v82,
                         *((_DWORD *)v46 + 10),
                         (struct CAudioSession **)v46 + 18);
        v55 = AudioSession;
        if ( AudioSession < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4C9,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)AudioSession,
            v75);
          wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(&v80);
          v59 = *v79;
          v60 = GetProcessHeap();
          HeapFree(v60, 0, v59);
          *v79 = 0LL;
          ATL::CStringData::Release((struct IAudioProcess *)((char *)v26 - 24));
          return v55;
        }
        else
        {
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v49);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v26 - 2, 0xFFFFFFFF) <= 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v26 - 3) + 8LL))(*((_QWORD *)v26 - 3));
          return 0LL;
        }
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49B,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)v18,
    v74);
  v33 = *v79;
  v34 = GetProcessHeap();
  HeapFree(v34, 0, v33);
  *v79 = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v26 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v26 - 3) + 8LL))(*((_QWORD *)v26 - 3));
  return v18;
}
