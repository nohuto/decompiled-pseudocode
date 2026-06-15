/*
 * XREFs of ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x1800191D0
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180017A90 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800187A0 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x1800197F0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x180027FD8 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800182C0 (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18001A490 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001AC20 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180029DB4 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     memcpy_s @ 0x18004E950 (memcpy_s.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800A4D44 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x1800A8AFE (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z @ 0x1800C371C (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z.c)
 *     memmove_0 @ 0x18015E888 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppAudioSessionId::CalculateStaticId(const GUID *this)
{
  const void *v2; // rbx
  volatile signed __int32 *v3; // rdi
  __int64 (__fastcall ***v4)(_QWORD, _QWORD, __int64); // rax
  const wchar_t *v5; // rdi
  OLECHAR *v6; // r14
  __int64 v7; // rax
  __int64 v8; // r8
  wchar_t *v9; // rbx
  __int64 v10; // rsi
  const GUID *v11; // rcx
  const wchar_t *v12; // rbx
  const wchar_t *v13; // rdx
  __int64 v15; // r13
  unsigned __int64 v16; // rdx
  _DWORD *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // [rsp+20h] [rbp-E8h]
  int v21; // [rsp+20h] [rbp-E8h]
  wchar_t *v22; // [rsp+28h] [rbp-E0h] BYREF
  const wchar_t *v23; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-D0h]
  OLECHAR *v25; // [rsp+40h] [rbp-C8h]
  ATL::CAtlException *v26; // [rsp+48h] [rbp-C0h] BYREF
  OLECHAR sz[64]; // [rsp+50h] [rbp-B8h] BYREF

  v2 = *(const void **)&this->Data1;
  v3 = (volatile signed __int32 *)(*(_QWORD *)&this->Data1 - 24LL);
  v4 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 32LL))(*(_QWORD *)v3);
  try
  {
    if ( *((int *)v3 + 4) >= 0 && v4 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v3 )
    {
      _InterlockedIncrement(v3 + 4);
    }
    else
    {
      v17 = v3 + 2;
      v18 = (**v4)(v4, *((unsigned int *)v3 + 2), 2LL);
      v3 = (volatile signed __int32 *)v18;
      if ( !v18 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
      *(_DWORD *)(v18 + 8) = *v17;
      memcpy_s((void *const)(v18 + 24), 2LL * (*v17 + 1), v2, 2LL * (*v17 + 1));
    }
    v5 = (const wchar_t *)(v3 + 6);
    v23 = v5;
    if ( !*(_DWORD *)this[2].Data4 )
    {
      CAudioIdentifier::EscapeIdentifierString(&v23);
      v5 = v23;
    }
    StringFromGUID2(this + 1, sz, 64);
    v6 = SysAllocString(sz);
    v25 = v6;
    if ( !v6 )
      ATL::AtlThrowImpl(-2147024882);
    v7 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr);
    v9 = (wchar_t *)(v7 + 24);
    v22 = (wchar_t *)(v7 + 24);
    if ( (unsigned __int64)v6 < 0x10000 )
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
        &v22,
        (unsigned __int16)v6);
      LODWORD(v10) = 0;
LABEL_17:
      SysFreeString(v6);
      CAudioIdentifier::EscapeIdentifierString((const wchar_t **)&v22);
      v11 = this + 2;
      v12 = v22;
      if ( *(_DWORD *)this[2].Data4 )
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
          v11,
          L"#|%s",
          v22);
      else
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
          v11,
          L"%s|%s",
          v5,
          v22);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12 - 2, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v12 - 3) + 8LL))(*((_QWORD *)v12 - 3));
      v13 = v23 - 12;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v23 - 2, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v13 + 8LL))(*(_QWORD *)v13);
      return (unsigned int)v10;
    }
    v10 = -1LL;
    do
      ++v10;
    while ( v6[v10] );
    if ( !(_DWORD)v10 )
    {
      ATL::CSimpleStringT<unsigned short,0>::Empty(&v22);
      goto LABEL_17;
    }
    v20 = *(_DWORD *)(v7 + 8);
    v16 = v6 - v9;
    v24 = v16;
    v19 = (unsigned int)(1 - *(_DWORD *)(v7 + 16));
    if ( (int)(v19 | (*(_DWORD *)(v7 + 12) - v10)) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v22, (unsigned int)v10);
      v9 = v22;
      v16 = v24;
    }
    v15 = 2LL * (int)v10;
    if ( v16 > v20 )
    {
      if ( !v15 )
        goto LABEL_14;
      if ( v9 )
      {
        memcpy_0(v9, v6, 2LL * (int)v10);
        goto LABEL_14;
      }
LABEL_13:
      *(_DWORD *)_o__errno(v19, v16, v8) = 22;
      invalid_parameter_noinfo();
      goto LABEL_14;
    }
    v16 = (unsigned __int64)&v9[v16];
    if ( v15 )
    {
      if ( !v9 || !v16 )
        goto LABEL_13;
      memmove_0(v9, (const void *)v16, 2LL * (int)v10);
    }
LABEL_14:
    if ( (int)v10 < 0 || (int)v10 > *((_DWORD *)v9 - 3) )
      ATL::AtlThrowImpl(-2147024809);
    *((_DWORD *)v9 - 4) = v10;
    LODWORD(v10) = 0;
    v9[(unsigned __int64)v15 / 2] = 0;
    goto LABEL_17;
  }
  catch ( ATL::CAtlException *v26 )
  {
    v21 = *(_DWORD *)v26;
    LODWORD(v10) = *(_DWORD *)v26;
    if ( v21 < 0 )
      AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::CalculateStaticId", 0x14Bu, v21);
  }
  return (unsigned int)v10;
}
