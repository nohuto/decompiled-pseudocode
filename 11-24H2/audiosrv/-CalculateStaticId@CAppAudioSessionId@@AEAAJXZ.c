/*
 * XREFs of ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180015160
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180011B50 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180012D30 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x180013A10 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x18001A5F8 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x1800146B0 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180014E40 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800154D0 (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x18001C0C4 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     memcpy_s @ 0x180042F00 (memcpy_s.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800A1154 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x1800A4DEE (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z @ 0x1800C225C (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z.c)
 *     memmove_0 @ 0x180167F48 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppAudioSessionId::CalculateStaticId(const GUID *this)
{
  const void *v2; // rbx
  volatile signed __int32 *v3; // rdi
  __int64 (__fastcall ***v4)(_QWORD, _QWORD, __int64); // rax
  _QWORD *v5; // rdi
  OLECHAR *v6; // r14
  _DWORD *v7; // rax
  _BYTE *v8; // rbx
  __int64 v9; // rsi
  wchar_t *const *v10; // rcx
  __int64 v11; // rbx
  _QWORD *v12; // rdx
  __int64 v14; // r13
  char *v15; // rdx
  _DWORD *v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned int v19; // [rsp+20h] [rbp-E8h]
  int v20; // [rsp+20h] [rbp-E8h]
  _DWORD *v21; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD *v22; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-D0h]
  OLECHAR *v24; // [rsp+40h] [rbp-C8h]
  ATL::CAtlException *v25; // [rsp+48h] [rbp-C0h] BYREF
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
      v16 = v3 + 2;
      v17 = (**v4)(v4, *((unsigned int *)v3 + 2), 2LL);
      v3 = (volatile signed __int32 *)v17;
      if ( !v17 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
      *(_DWORD *)(v17 + 8) = *v16;
      memcpy_s((void *const)(v17 + 24), 2LL * (*v16 + 1), v2, 2LL * (*v16 + 1));
    }
    v5 = v3 + 6;
    v22 = v5;
    if ( !*(_DWORD *)this[2].Data4 )
    {
      CAudioIdentifier::EscapeIdentifierString(&v22);
      v5 = v22;
    }
    StringFromGUID2(this + 1, sz, 64);
    v6 = SysAllocString(sz);
    v24 = v6;
    if ( !v6 )
      ATL::AtlThrowImpl(-2147024882);
    v7 = (_DWORD *)((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr);
    v8 = v7 + 6;
    v21 = v7 + 6;
    if ( (unsigned __int64)v6 < 0x10000 )
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
        &v21,
        (unsigned __int16)v6);
      LODWORD(v9) = 0;
LABEL_17:
      SysFreeString(v6);
      CAudioIdentifier::EscapeIdentifierString(&v21);
      v10 = (wchar_t *const *)&this[2];
      v11 = (__int64)v21;
      if ( *(_DWORD *)this[2].Data4 )
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
          v10,
          L"#|%s",
          v21);
      else
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
          v10,
          L"%s|%s",
          v5,
          v21);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 - 24 + 16), 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v11 - 24) + 8LL))(*(_QWORD *)(v11 - 24));
      v12 = v22 - 3;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v22 - 2, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 8LL))(*v12);
      return (unsigned int)v9;
    }
    v9 = -1LL;
    do
      ++v9;
    while ( v6[v9] );
    if ( !(_DWORD)v9 )
    {
      ATL::CSimpleStringT<unsigned short,0>::Empty(&v21);
      goto LABEL_17;
    }
    v19 = v7[2];
    v18 = ((char *)v6 - v8) >> 1;
    v23 = v18;
    if ( ((1 - v7[4]) | (v7[3] - (int)v9)) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v21, v9);
      v8 = v21;
      v18 = v23;
    }
    v14 = 2LL * (int)v9;
    if ( v18 > v19 )
    {
      if ( !v14 )
        goto LABEL_14;
      if ( v8 )
      {
        memcpy_0(v8, v6, 2LL * (int)v9);
        goto LABEL_14;
      }
LABEL_13:
      *(_DWORD *)_o__errno() = 22;
      invalid_parameter_noinfo();
      goto LABEL_14;
    }
    v15 = &v8[2 * v18];
    if ( v14 )
    {
      if ( !v8 || !v15 )
        goto LABEL_13;
      memmove_0(v8, v15, 2LL * (int)v9);
    }
LABEL_14:
    if ( (int)v9 < 0 || (int)v9 > *((_DWORD *)v8 - 3) )
      ATL::AtlThrowImpl(-2147024809);
    *((_DWORD *)v8 - 4) = v9;
    LODWORD(v9) = 0;
    *(_WORD *)&v8[v14] = 0;
    goto LABEL_17;
  }
  catch ( ATL::CAtlException *v25 )
  {
    v20 = *(_DWORD *)v25;
    LODWORD(v9) = *(_DWORD *)v25;
    if ( v20 < 0 )
      AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::CalculateStaticId", 331, v20);
  }
  return (unsigned int)v9;
}
