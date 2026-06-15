/*
 * XREFs of ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180017A90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180018118 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x1800181E4 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x1800191D0 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x18001A1B0 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18001A2F0 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001AAE0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001AC20 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001AF40 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180029DB4 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800A8AFE (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x1800C1360 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     memmove_0 @ 0x18015E888 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManager::GetCurrentSession(
        CAudioSessionManager *this,
        struct IAudioProcess *a2,
        const struct _GUID *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        void **a7,
        unsigned __int16 **a8)
{
  struct IAudioProcess *v9; // r14
  void **v11; // r12
  __int64 v12; // rbx
  const unsigned __int16 *v13; // rcx
  int v14; // edi
  signed int v15; // r15d
  int v16; // r13d
  char *v17; // r9
  __int64 v18; // rax
  struct IAudioProcess *v19; // rcx
  __int64 v20; // rsi
  _WORD *v21; // rax
  _WORD *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int16 v25; // ax
  _WORD *v26; // rax
  unsigned int v27; // eax
  CAudioSessionManager *v28; // r15
  struct CAudioSession *v29; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  const void *v33; // r12
  __int64 v34; // rdi
  _DWORD *v35; // r9
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // r14
  __int64 v38; // rsi
  __int64 (__fastcall *v39)(CAudioSessionManager *, _QWORD, __int64, struct CAudioSession *, void **); // rdi
  unsigned int v40; // eax
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rax
  const void *v44; // r12
  __int64 v45; // rdi
  char *v46; // rdx
  __int64 v47; // rsi
  char *v48; // rdx
  unsigned __int64 v49; // r13
  unsigned __int64 v50; // r14
  struct CAudioSession *v52; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v53; // [rsp+50h] [rbp-99h] BYREF
  struct IAudioProcess *v54; // [rsp+58h] [rbp-91h]
  unsigned __int16 **v55; // [rsp+60h] [rbp-89h]
  void *v56; // [rsp+68h] [rbp-81h] BYREF
  const struct _GUID *v57; // [rsp+70h] [rbp-79h]
  CAudioSessionManager *v58; // [rsp+78h] [rbp-71h]
  void **v59; // [rsp+80h] [rbp-69h]
  char v60[8]; // [rsp+90h] [rbp-59h] BYREF
  void *v61; // [rsp+98h] [rbp-51h] BYREF
  void *v62; // [rsp+A0h] [rbp-49h] BYREF
  GUID v63; // [rsp+A8h] [rbp-41h]
  int v64; // [rsp+C0h] [rbp-29h]
  int v65; // [rsp+C8h] [rbp-21h]
  int v66; // [rsp+CCh] [rbp-1Dh]
  int v67; // [rsp+D0h] [rbp-19h]

  v57 = a3;
  v9 = a2;
  v54 = a2;
  v58 = this;
  v59 = a7;
  v11 = (void **)a8;
  v55 = a8;
  v12 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v53 = v12;
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v60);
  v52 = 0LL;
  v56 = 0LL;
  *a8 = 0LL;
  if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged((char *)this + 240) )
    v13 = *(const unsigned __int16 **)v13;
  v14 = CAudioEndpointId::Initialize((CAudioEndpointId *)v60, v13);
  v15 = -2147024809;
  if ( v14 < 0 )
    goto LABEL_4;
  v16 = a6;
  if ( a6 )
  {
    if ( !a3 )
      goto LABEL_47;
    v31 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v31 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( !v31 )
    {
LABEL_47:
      v14 = -2147024809;
      goto LABEL_48;
    }
  }
  else if ( !a3 )
  {
    v63 = GUID_00000000_0000_0000_0000_000000000000;
    goto LABEL_51;
  }
  v63 = *a3;
  if ( !a6 )
  {
LABEL_51:
    v32 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 72LL))(v9);
    v33 = (const void *)v32;
    if ( !v32 )
      goto LABEL_70;
    v34 = -1LL;
    do
      ++v34;
    while ( *(_WORD *)(v32 + 2 * v34) );
    if ( !(_DWORD)v34 )
    {
LABEL_70:
      ATL::CSimpleStringT<unsigned short,0>::Empty(&v62);
      goto LABEL_76;
    }
    v35 = v62;
    v36 = *((unsigned int *)v62 - 4);
    v37 = (v32 - (__int64)v62) >> 1;
    if ( ((1 - *((_DWORD *)v62 - 2)) | (*((_DWORD *)v62 - 3) - (int)v34)) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v62, (unsigned int)v34);
      v35 = v62;
    }
    v38 = 2LL * (int)v34;
    if ( v37 <= v36 )
    {
      v46 = (char *)v35 + 2 * v37;
      if ( !v38 )
      {
LABEL_73:
        if ( (int)v34 < 0 || (int)v34 > *(v35 - 3) )
          goto LABEL_67;
        *(v35 - 4) = v34;
        *(_WORD *)((char *)v62 + v38) = 0;
        v9 = v54;
        v16 = a6;
LABEL_76:
        v43 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 80LL))(v9);
        v44 = (const void *)v43;
        if ( !v43 )
          goto LABEL_80;
        v45 = -1LL;
        do
          ++v45;
        while ( *(_WORD *)(v43 + 2 * v45) );
        if ( !(_DWORD)v45 )
        {
LABEL_80:
          ATL::CSimpleStringT<unsigned short,0>::Empty(&v61);
          goto LABEL_10;
        }
        v17 = (char *)v61;
        v49 = *((unsigned int *)v61 - 4);
        v50 = (v43 - (__int64)v61) >> 1;
        if ( ((1 - *((_DWORD *)v61 - 2)) | (*((_DWORD *)v61 - 3) - (int)v45)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v61, (unsigned int)v45);
          v17 = (char *)v61;
        }
        v47 = 2LL * (int)v45;
        if ( v50 <= v49 )
        {
          v48 = &v17[2 * v50];
          if ( !v47 )
            goto LABEL_7;
          if ( v17 && v48 )
          {
            memmove_0(v17, v48, 2LL * (int)v45);
            goto LABEL_6;
          }
        }
        else
        {
          if ( !v47 )
            goto LABEL_7;
          if ( v17 )
          {
            memcpy_0(v17, v44, 2LL * (int)v45);
            goto LABEL_6;
          }
        }
        *(_DWORD *)_o__errno() = 22;
        invalid_parameter_noinfo();
LABEL_6:
        v17 = (char *)v61;
LABEL_7:
        if ( (int)v45 >= 0 && (int)v45 <= *((_DWORD *)v17 - 3) )
        {
          *((_DWORD *)v17 - 4) = v45;
          *(_WORD *)((char *)v61 + v47) = 0;
          v9 = v54;
          v16 = a6;
LABEL_10:
          v11 = (void **)v55;
          goto LABEL_11;
        }
LABEL_67:
        ATL::AtlThrowImpl(-2147024809);
      }
      if ( v35 && v46 )
      {
        memmove_0(v35, v46, 2LL * (int)v34);
        goto LABEL_72;
      }
    }
    else
    {
      if ( !v38 )
        goto LABEL_73;
      if ( v35 )
      {
        memcpy_0(v35, v33, 2LL * (int)v34);
LABEL_72:
        v35 = v62;
        goto LABEL_73;
      }
    }
    *(_DWORD *)_o__errno() = 22;
    invalid_parameter_noinfo();
    goto LABEL_72;
  }
LABEL_11:
  v64 = v16;
  v14 = CAppAudioSessionId::CalculateStaticId((CAppAudioSessionId *)&v61);
  if ( v14 < 0 )
LABEL_48:
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 0x173u, v14);
  if ( v14 < 0 )
    goto LABEL_4;
  v67 = v16;
  v18 = *(_QWORD *)v9;
  v19 = v9;
  if ( v16 )
  {
    v65 = 0;
  }
  else
  {
    v65 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(v18 + 40))(v9);
    v18 = *(_QWORD *)v9;
    v19 = v9;
  }
  v66 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(v18 + 48))(v19);
  v14 = CAudioSessionInstanceId::CalculateStaticId((CAudioSessionInstanceId *)v60);
  if ( v14 < 0 )
  {
LABEL_4:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 0x38Fu, v14);
    v16 = a6;
  }
  if ( v14 < 0 )
    goto LABEL_31;
  v14 = CAudioSessionInstanceId::ToString(v60, &v53);
  v12 = v53;
  if ( v14 < 0 )
    goto LABEL_31;
  v20 = (unsigned int)(*(_DWORD *)(v53 - 16) + 1);
  if ( (unsigned __int64)(2 * v20) > 0x40000 )
  {
    *v11 = 0LL;
    goto LABEL_98;
  }
  v21 = operator new[](2 * v20, (const struct std::nothrow_t *)&std::nothrow);
  v22 = v21;
  *v11 = v21;
  if ( !v21 )
  {
LABEL_98:
    v14 = -2147024882;
    goto LABEL_31;
  }
  v23 = 2147483646LL;
  if ( (unsigned __int64)(v20 - 1) > 0x7FFFFFFE )
  {
    v14 = -2147024809;
    if ( v20 )
    {
      *v21 = 0;
      goto LABEL_41;
    }
  }
  else
  {
    v23 = 2147483646 - v20;
    v24 = v12 - (_QWORD)v21;
    do
    {
      if ( !(v23 + v20) )
        break;
      v25 = *(_WORD *)((char *)v22 + v24);
      if ( !v25 )
        break;
      *v22++ = v25;
      --v20;
    }
    while ( v20 );
    v26 = v22 - 1;
    if ( v20 )
      v26 = v22;
    *v26 = 0;
    v15 = v20 == 0 ? 0x8007007A : 0;
  }
  v14 = v15;
  if ( v15 < 0 )
  {
LABEL_41:
    operator delete(*v11);
    *v11 = 0LL;
LABEL_31:
    v29 = v52;
    goto LABEL_32;
  }
  if ( v16 )
  {
    v42 = *(_QWORD *)&v57->Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
    if ( *(_QWORD *)&v57->Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
      v42 = *(_QWORD *)v57->Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
    if ( !v42 )
      a4 |= 4u;
  }
  v27 = (*(__int64 (__fastcall **)(struct IAudioProcess *, _WORD *, __int64, _QWORD))(*(_QWORD *)v9 + 40LL))(
          v9,
          v22,
          v23,
          0LL);
  v28 = v58;
  v14 = CAudioSessionManager::CreateAudioSession(v58, v9, (struct CAudioSessionInstanceId *)v60, a4, a5, v27, &v52);
  if ( v14 < 0 )
    goto LABEL_31;
  v39 = **(__int64 (__fastcall ***)(CAudioSessionManager *, _QWORD, __int64, struct CAudioSession *, void **))v28;
  v40 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 40LL))(v9);
  v29 = v52;
  LOBYTE(v41) = 1;
  v14 = v39(v28, v40, v41, v52, &v56);
  if ( v14 >= 0 )
  {
    *v59 = v56;
    goto LABEL_34;
  }
LABEL_32:
  if ( *v11 )
  {
    operator delete(*v11);
    *v11 = 0LL;
  }
LABEL_34:
  if ( v29 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v14 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::GetCurrentSession", 0x570u, v14);
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v60);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v12 - 24) + 8LL))(*(_QWORD *)(v12 - 24));
  return (unsigned int)v14;
}
