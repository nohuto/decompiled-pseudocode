/*
 * XREFs of ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180011B50
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x1800121D8 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x1800122A4 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180012380 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x1800143D0 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180014510 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180014D00 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180014E40 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180015160 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x18001C0C4 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180021540 (--3@YAXPEAX@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42AC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800A4DEE (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x1800BFF80 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     memmove_0 @ 0x180167F48 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v13; // rdx
  const unsigned __int16 *v14; // rcx
  int v15; // edi
  signed int v16; // r15d
  int v17; // r13d
  char *v18; // r9
  __int64 v19; // rax
  struct IAudioProcess *v20; // rcx
  __int64 v21; // rsi
  _WORD *v22; // rax
  _WORD *v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int16 v26; // ax
  _WORD *v27; // rax
  unsigned int v28; // eax
  CAudioSessionManager *v29; // r15
  struct CAudioSession *v30; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  const void *v34; // r12
  __int64 v35; // rdi
  _DWORD *v36; // r9
  unsigned __int64 v37; // r13
  unsigned __int64 v38; // r14
  __int64 v39; // rsi
  __int64 (__fastcall *v40)(CAudioSessionManager *, _QWORD, __int64, struct CAudioSession *, void **); // rdi
  unsigned int v41; // eax
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rax
  const void *v45; // r12
  __int64 v46; // rdi
  char *v47; // rdx
  __int64 v48; // rsi
  char *v49; // rdx
  unsigned __int64 v50; // r13
  unsigned __int64 v51; // r14
  struct CAudioSession *v53; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v54; // [rsp+50h] [rbp-99h] BYREF
  struct IAudioProcess *v55; // [rsp+58h] [rbp-91h]
  unsigned __int16 **v56; // [rsp+60h] [rbp-89h]
  void *v57; // [rsp+68h] [rbp-81h] BYREF
  const struct _GUID *v58; // [rsp+70h] [rbp-79h]
  CAudioSessionManager *v59; // [rsp+78h] [rbp-71h]
  void **v60; // [rsp+80h] [rbp-69h]
  char v61[8]; // [rsp+90h] [rbp-59h] BYREF
  void *v62; // [rsp+98h] [rbp-51h] BYREF
  void *v63; // [rsp+A0h] [rbp-49h] BYREF
  GUID v64; // [rsp+A8h] [rbp-41h]
  int v65; // [rsp+C0h] [rbp-29h]
  int v66; // [rsp+C8h] [rbp-21h]
  int v67; // [rsp+CCh] [rbp-1Dh]
  int v68; // [rsp+D0h] [rbp-19h]

  v58 = a3;
  v9 = a2;
  v55 = a2;
  v59 = this;
  v60 = a7;
  v11 = (void **)a8;
  v56 = a8;
  v12 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v54 = v12;
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v61);
  v53 = 0LL;
  v57 = 0LL;
  *a8 = 0LL;
  if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(
                          (char *)this + 240,
                          v13) )
    v14 = *(const unsigned __int16 **)v14;
  v15 = CAudioEndpointId::Initialize((CAudioEndpointId *)v61, v14);
  v16 = -2147024809;
  if ( v15 < 0 )
    goto LABEL_4;
  v17 = a6;
  if ( a6 )
  {
    if ( !a3 )
      goto LABEL_47;
    v32 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v32 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( !v32 )
    {
LABEL_47:
      v15 = -2147024809;
      goto LABEL_48;
    }
  }
  else if ( !a3 )
  {
    v64 = GUID_00000000_0000_0000_0000_000000000000;
    goto LABEL_51;
  }
  v64 = *a3;
  if ( !a6 )
  {
LABEL_51:
    v33 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 72LL))(v9);
    v34 = (const void *)v33;
    if ( !v33 )
      goto LABEL_70;
    v35 = -1LL;
    do
      ++v35;
    while ( *(_WORD *)(v33 + 2 * v35) );
    if ( !(_DWORD)v35 )
    {
LABEL_70:
      ATL::CSimpleStringT<unsigned short,0>::Empty(&v63);
      goto LABEL_76;
    }
    v36 = v63;
    v37 = *((unsigned int *)v63 - 4);
    v38 = (v33 - (__int64)v63) >> 1;
    if ( ((1 - *((_DWORD *)v63 - 2)) | (*((_DWORD *)v63 - 3) - (int)v35)) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v63, (unsigned int)v35);
      v36 = v63;
    }
    v39 = 2LL * (int)v35;
    if ( v38 <= v37 )
    {
      v47 = (char *)v36 + 2 * v38;
      if ( !v39 )
      {
LABEL_73:
        if ( (int)v35 < 0 || (int)v35 > *(v36 - 3) )
          goto LABEL_67;
        *(v36 - 4) = v35;
        *(_WORD *)((char *)v63 + v39) = 0;
        v9 = v55;
        v17 = a6;
LABEL_76:
        v44 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 80LL))(v9);
        v45 = (const void *)v44;
        if ( !v44 )
          goto LABEL_80;
        v46 = -1LL;
        do
          ++v46;
        while ( *(_WORD *)(v44 + 2 * v46) );
        if ( !(_DWORD)v46 )
        {
LABEL_80:
          ATL::CSimpleStringT<unsigned short,0>::Empty(&v62);
          goto LABEL_10;
        }
        v18 = (char *)v62;
        v50 = *((unsigned int *)v62 - 4);
        v51 = (v44 - (__int64)v62) >> 1;
        if ( ((1 - *((_DWORD *)v62 - 2)) | (*((_DWORD *)v62 - 3) - (int)v46)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v62, (unsigned int)v46);
          v18 = (char *)v62;
        }
        v48 = 2LL * (int)v46;
        if ( v51 <= v50 )
        {
          v49 = &v18[2 * v51];
          if ( !v48 )
            goto LABEL_7;
          if ( v18 && v49 )
          {
            memmove_0(v18, v49, 2LL * (int)v46);
            goto LABEL_6;
          }
        }
        else
        {
          if ( !v48 )
            goto LABEL_7;
          if ( v18 )
          {
            memcpy_0(v18, v45, 2LL * (int)v46);
            goto LABEL_6;
          }
        }
        *(_DWORD *)_o__errno() = 22;
        invalid_parameter_noinfo();
LABEL_6:
        v18 = (char *)v62;
LABEL_7:
        if ( (int)v46 >= 0 && (int)v46 <= *((_DWORD *)v18 - 3) )
        {
          *((_DWORD *)v18 - 4) = v46;
          *(_WORD *)((char *)v62 + v48) = 0;
          v9 = v55;
          v17 = a6;
LABEL_10:
          v11 = (void **)v56;
          goto LABEL_11;
        }
LABEL_67:
        ATL::AtlThrowImpl(-2147024809);
      }
      if ( v36 && v47 )
      {
        memmove_0(v36, v47, 2LL * (int)v35);
        goto LABEL_72;
      }
    }
    else
    {
      if ( !v39 )
        goto LABEL_73;
      if ( v36 )
      {
        memcpy_0(v36, v34, 2LL * (int)v35);
LABEL_72:
        v36 = v63;
        goto LABEL_73;
      }
    }
    *(_DWORD *)_o__errno() = 22;
    invalid_parameter_noinfo();
    goto LABEL_72;
  }
LABEL_11:
  v65 = v17;
  v15 = CAppAudioSessionId::CalculateStaticId((CAppAudioSessionId *)&v62);
  if ( v15 < 0 )
LABEL_48:
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 0x173u, v15);
  if ( v15 < 0 )
    goto LABEL_4;
  v68 = v17;
  v19 = *(_QWORD *)v9;
  v20 = v9;
  if ( v17 )
  {
    v66 = 0;
  }
  else
  {
    v66 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(v19 + 40))(v9);
    v19 = *(_QWORD *)v9;
    v20 = v9;
  }
  v67 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(v19 + 48))(v20);
  v15 = CAudioSessionInstanceId::CalculateStaticId((CAudioSessionInstanceId *)v61);
  if ( v15 < 0 )
  {
LABEL_4:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 0x38Fu, v15);
    v17 = a6;
  }
  if ( v15 < 0 )
    goto LABEL_31;
  v15 = CAudioSessionInstanceId::ToString(v61, &v54);
  v12 = v54;
  if ( v15 < 0 )
    goto LABEL_31;
  v21 = (unsigned int)(*(_DWORD *)(v54 - 16) + 1);
  if ( (unsigned __int64)(2 * v21) > 0x40000 )
  {
    *v11 = 0LL;
    goto LABEL_98;
  }
  v22 = operator new[](2 * v21, (const struct std::nothrow_t *)&std::nothrow);
  v23 = v22;
  *v11 = v22;
  if ( !v22 )
  {
LABEL_98:
    v15 = -2147024882;
    goto LABEL_31;
  }
  v24 = 2147483646LL;
  if ( (unsigned __int64)(v21 - 1) > 0x7FFFFFFE )
  {
    v15 = -2147024809;
    if ( v21 )
    {
      *v22 = 0;
      goto LABEL_41;
    }
  }
  else
  {
    v24 = 2147483646 - v21;
    v25 = v12 - (_QWORD)v22;
    do
    {
      if ( !(v24 + v21) )
        break;
      v26 = *(_WORD *)((char *)v23 + v25);
      if ( !v26 )
        break;
      *v23++ = v26;
      --v21;
    }
    while ( v21 );
    v27 = v23 - 1;
    if ( v21 )
      v27 = v23;
    *v27 = 0;
    v16 = v21 == 0 ? 0x8007007A : 0;
  }
  v15 = v16;
  if ( v16 < 0 )
  {
LABEL_41:
    operator delete(*v11);
    *v11 = 0LL;
LABEL_31:
    v30 = v53;
    goto LABEL_32;
  }
  if ( v17 )
  {
    v43 = *(_QWORD *)&v58->Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
    if ( *(_QWORD *)&v58->Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
      v43 = *(_QWORD *)v58->Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
    if ( !v43 )
      a4 |= 4u;
  }
  v28 = (*(__int64 (__fastcall **)(struct IAudioProcess *, _WORD *, __int64, _QWORD))(*(_QWORD *)v9 + 40LL))(
          v9,
          v23,
          v24,
          0LL);
  v29 = v59;
  v15 = CAudioSessionManager::CreateAudioSession(v59, v9, (struct CAudioSessionInstanceId *)v61, a4, a5, v28, &v53);
  if ( v15 < 0 )
    goto LABEL_31;
  v40 = **(__int64 (__fastcall ***)(CAudioSessionManager *, _QWORD, __int64, struct CAudioSession *, void **))v29;
  v41 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 40LL))(v9);
  v30 = v53;
  LOBYTE(v42) = 1;
  v15 = v40(v29, v41, v42, v53, &v57);
  if ( v15 >= 0 )
  {
    *v60 = v57;
    goto LABEL_34;
  }
LABEL_32:
  if ( *v11 )
  {
    operator delete(*v11);
    *v11 = 0LL;
  }
LABEL_34:
  if ( v30 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v15 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::GetCurrentSession", 0x57Du, v15);
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v61);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v12 - 24) + 8LL))(*(_QWORD *)(v12 - 24));
  return (unsigned int)v15;
}
