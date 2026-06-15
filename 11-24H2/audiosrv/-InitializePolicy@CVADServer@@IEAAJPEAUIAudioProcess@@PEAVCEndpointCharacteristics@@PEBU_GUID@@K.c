/*
 * XREFs of ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x180013A10
 * Callers:
 *     ?RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18000CF44 (-RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVE.c)
 * Callees:
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18000DC00 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000F870 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180012380 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x1800143D0 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180014510 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180014D00 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180014E40 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180015160 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001B2B0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x18001C0C4 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x1800286C0 (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180029ADC (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DisconnectSessionsForTsSession@AudioSessionManagerProvider@@YAXKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18002ABD4 (-DisconnectSessionsForTsSession@AudioSessionManagerProvider@@YAXKW4__MIDL___MIDL_itf_mmdeviceapi.c)
 *     ?UseAutoConvertPCMForLoopbackStreams@CEndpointCharacteristics@@QEAA_NXZ @ 0x18005DA08 (-UseAutoConvertPCMForLoopbackStreams@CEndpointCharacteristics@@QEAA_NXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42AC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800A4DEE (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 *     WPP_SF_q @ 0x1800C34E4 (WPP_SF_q.c)
 *     ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x180105DC4 (-DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ.c)
 *     memmove_0 @ 0x180167F48 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  const void *v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rax
  unsigned __int64 v41; // r12
  unsigned __int64 v42; // r15
  char *v43; // rcx
  size_t v44; // r8
  CVADServer *v45; // r14
  int EndpointStore; // eax
  unsigned int v47; // esi
  struct CEndpointStore *v48; // rbx
  void (__fastcall *v49)(struct IAudioDuckingManager *, _QWORD); // rsi
  unsigned int v50; // eax
  int v51; // esi
  int v52; // eax
  int AudioSession; // eax
  unsigned int v54; // esi
  unsigned int v55; // eax
  unsigned int v56; // edx
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v57; // r8d
  unsigned __int16 *v58; // rbx
  HANDLE v59; // rax
  unsigned __int16 *v60; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  const void *v64; // rdi
  __int64 v65; // rbx
  __int64 v66; // rax
  unsigned __int64 v67; // r12
  unsigned __int64 v68; // r15
  char *v69; // rcx
  size_t v70; // r8
  char *v71; // rdx
  char *v72; // rdx
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
    v38 = (const void *)v37;
    if ( v37 )
    {
      v39 = -1LL;
      do
        ++v39;
      while ( *(_WORD *)(v37 + 2 * v39) );
      if ( (_DWORD)v39 )
      {
        v40 = *((_QWORD *)v20 + 1);
        v41 = *(unsigned int *)(v40 - 16);
        v42 = ((__int64)v38 - v40) >> 1;
        if ( ((1 - *(_DWORD *)(v40 - 8)) | (*(_DWORD *)(v40 - 12) - (int)v39)) < 0 )
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(v20 + 8, (unsigned int)v39);
        v43 = (char *)*((_QWORD *)v20 + 1);
        v44 = 2LL * (int)v39;
        if ( v42 <= v41 )
        {
          v71 = &v43[2 * v42];
          if ( v44 )
          {
            if ( !v43 || !v71 )
            {
LABEL_52:
              *(_DWORD *)_o__errno() = 22;
              invalid_parameter_noinfo();
              goto LABEL_86;
            }
            memmove_0(v43, v71, v44);
          }
        }
        else
        {
          if ( !v44 )
            goto LABEL_86;
          if ( !v43 )
            goto LABEL_52;
          memcpy_0(v43, v38, v44);
        }
LABEL_86:
        if ( (int)v39 < 0 )
          goto LABEL_102;
        v62 = *((_QWORD *)v20 + 1);
        if ( (int)v39 > *(_DWORD *)(v62 - 12) )
          goto LABEL_102;
        *(_DWORD *)(v62 - 16) = v39;
        *(_WORD *)(*((_QWORD *)v20 + 1) + 2LL * (int)v39) = 0;
        v16 = (int)v80;
        v36 = v78;
LABEL_89:
        v63 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v36 + 80LL))(v36);
        v64 = (const void *)v63;
        if ( !v63 )
          goto LABEL_103;
        v65 = -1LL;
        do
          ++v65;
        while ( *(_WORD *)(v63 + 2 * v65) );
        if ( !(_DWORD)v65 )
        {
LABEL_103:
          v15 = v81;
          v20 = (char *)v81 + 8;
          ATL::CSimpleStringT<unsigned short,0>::Empty((char *)v81 + 8);
LABEL_22:
          *((_DWORD *)v20 + 10) = v16;
          v17 = CAppAudioSessionId::CalculateStaticId((CAppAudioSessionId *)v20);
          if ( v17 >= 0 )
            goto LABEL_23;
          goto LABEL_78;
        }
        v20 = (char *)v81 + 8;
        v66 = *((_QWORD *)v81 + 1);
        v67 = *(unsigned int *)(v66 - 16);
        v68 = ((__int64)v64 - v66) >> 1;
        if ( ((1 - *(_DWORD *)(v66 - 8)) | (*(_DWORD *)(v66 - 12) - (int)v65)) < 0 )
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((char *)v81 + 8, (unsigned int)v65);
        v69 = *(char **)v20;
        v70 = 2LL * (int)v65;
        if ( v68 <= v67 )
        {
          v72 = &v69[2 * v68];
          if ( !v70 )
            goto LABEL_99;
          if ( v69 && v72 )
          {
            memmove_0(v69, v72, v70);
            goto LABEL_99;
          }
        }
        else
        {
          if ( !v70 )
          {
LABEL_99:
            if ( (int)v65 >= 0 && (int)v65 <= *(_DWORD *)(*(_QWORD *)v20 - 12LL) )
            {
              *(_DWORD *)(*(_QWORD *)v20 - 16LL) = v65;
              *(_WORD *)(*(_QWORD *)v20 + 2LL * (int)v65) = 0;
              v16 = (int)v80;
              v15 = v81;
              goto LABEL_22;
            }
LABEL_102:
            ATL::AtlThrowImpl(-2147024809);
          }
          if ( v69 )
          {
            memcpy_0(v69, v64, v70);
            goto LABEL_99;
          }
        }
        *(_DWORD *)_o__errno() = 22;
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
      (void *)0x498,
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
      (void *)0x49B,
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
      (void *)0x49F,
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
      v45 = v83;
      EndpointStore = CEndpointStoreCache::GetEndpointStore(v32, *((const unsigned __int16 **)v83 + 24), &v80);
      v47 = EndpointStore;
      if ( EndpointStore < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4A5,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)EndpointStore,
          v74);
        wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(&v80);
        v60 = *v79;
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v60);
        *v79 = 0LL;
        ATL::CStringData::Release((struct IAudioProcess *)((char *)v26 - 24));
        return v47;
      }
      else
      {
        v48 = v80;
        *((_QWORD *)v45 + 16) = *((_QWORD *)v80 + 12);
        if ( g_DuckingManager )
        {
          v49 = *(void (__fastcall **)(struct IAudioDuckingManager *, _QWORD))(*(_QWORD *)g_DuckingManager + 48LL);
          v50 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v8 + 48LL))(v8);
          v49(g_DuckingManager, v50);
        }
        if ( v19 )
        {
          v73 = *(_QWORD *)&v85->Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
          if ( *(_QWORD *)&v85->Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
            v73 = *(_QWORD *)v85->Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
          v51 = v76;
          if ( !v73 )
            v51 = v76 | 4;
        }
        else
        {
          v51 = v76;
        }
        v52 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 208LL))(g_PolicyManager);
        if ( v52 == 1 )
        {
          v55 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v8 + 48LL))(v8);
          AudioSessionManagerProvider::DisconnectSessionsForTsSession((AudioSessionManagerProvider *)v55, v56, v57);
        }
        else if ( v52 == 2 )
        {
          CPolicyConfig::DisconnectAllRenderEndpoints();
        }
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_74ab4d28651a3ef962dcd31efa958cf9_Traceguids, v45);
        }
        AudioSession = CAudioSessionManager::CreateAudioSession(
                         *((union _RTL_RUN_ONCE **)v45 + 16),
                         v8,
                         v81,
                         v51,
                         v82,
                         *((_DWORD *)v45 + 10),
                         (struct CAudioSession **)v45 + 18);
        v54 = AudioSession;
        if ( AudioSession < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4D0,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)AudioSession,
            v75);
          wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(&v80);
          v58 = *v79;
          v59 = GetProcessHeap();
          HeapFree(v59, 0, v58);
          *v79 = 0LL;
          ATL::CStringData::Release((struct IAudioProcess *)((char *)v26 - 24));
          return v54;
        }
        else
        {
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v48);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v26 - 2, 0xFFFFFFFF) <= 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v26 - 3) + 8LL))(*((_QWORD *)v26 - 3));
          return 0LL;
        }
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4A2,
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
