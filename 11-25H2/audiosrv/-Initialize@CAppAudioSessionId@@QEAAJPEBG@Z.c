/*
 * XREFs of ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x180027FD8
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x180027C0C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800FA64C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 * Callees:
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x1800191D0 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001A840 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001AC20 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18001E7A0 (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180028670 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180028780 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x18002880C (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??9ATL@@YA_NPEBDAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z @ 0x180028AC0 (--9ATL@@YA_NPEBDAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180028C90 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180028DF0 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180029DB4 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ??$AtlConvAllocMemory@G@ATL@@YAXPEAPEAGHPEAGH@Z @ 0x180029EF8 (--$AtlConvAllocMemory@G@ATL@@YAXPEAPEAGHPEAGH@Z.c)
 *     ?memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x180058AB8 (-memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x1800A8AFE (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     memmove_0 @ 0x18015E888 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
__int64 __fastcall CAppAudioSessionId::Initialize(CAppAudioSessionId *this, unsigned __int16 *a2)
{
  CAppAudioSessionId *v3; // r12
  _WORD *v4; // rdi
  unsigned __int64 v5; // rsi
  _DWORD *v6; // rax
  _WORD *v7; // rdx
  __int64 v8; // r8
  _WORD *v9; // rbx
  __int64 v10; // r15
  const WCHAR **v11; // rax
  const WCHAR *v12; // r13
  __int64 v13; // r15
  unsigned __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r12
  char *v18; // rdx
  __int64 v19; // r8
  volatile signed __int32 *v20; // rsi
  __int64 v21; // rbx
  _QWORD *v22; // rdx
  __int64 v23; // rax
  char v24; // bl
  __int64 v25; // rcx
  char v26; // di
  int v27; // edi
  _QWORD *v28; // rdx
  _QWORD *v29; // rdx
  __int64 v31; // r12
  unsigned __int64 v32; // r13
  __int64 v33; // rcx
  unsigned __int64 v34; // rbx
  const OLECHAR *v35; // rcx
  __int64 v36; // rdi
  unsigned int v37; // edi
  ATL::CAtlException *v38; // rbx
  ATL::CAtlException *v39; // rbx
  unsigned __int64 v40; // [rsp+20h] [rbp-1B8h]
  unsigned __int64 v41; // [rsp+20h] [rbp-1B8h]
  unsigned __int64 v42; // [rsp+20h] [rbp-1B8h]
  _WORD *v43; // [rsp+28h] [rbp-1B0h] BYREF
  int v44; // [rsp+30h] [rbp-1A8h]
  void *Src; // [rsp+38h] [rbp-1A0h] BYREF
  _WORD *v46; // [rsp+40h] [rbp-198h] BYREF
  unsigned __int64 v47; // [rsp+48h] [rbp-190h] BYREF
  CAppAudioSessionId *v48; // [rsp+50h] [rbp-188h] BYREF
  CAppAudioSessionId *v49; // [rsp+58h] [rbp-180h]
  unsigned __int64 v50; // [rsp+60h] [rbp-178h] BYREF
  __int64 v51; // [rsp+68h] [rbp-170h] BYREF
  LPCLSID pclsid; // [rsp+70h] [rbp-168h]
  ATL::CAtlException *v53; // [rsp+80h] [rbp-158h] BYREF
  ATL::CAtlException *v54; // [rsp+88h] [rbp-150h] BYREF
  LPCOLESTR lpsz; // [rsp+90h] [rbp-148h] BYREF
  _BYTE v56[264]; // [rsp+98h] [rbp-140h] BYREF

  Src = a2;
  v3 = this;
  v48 = this;
  v49 = this;
  v44 = 0;
  v4 = (_WORD *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v46 = v4;
  v5 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v47 = v5;
  v6 = (_DWORD *)((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr);
  v9 = v6 + 6;
  v43 = v6 + 6;
  if ( !a2 )
    goto LABEL_5;
  v10 = -1LL;
  do
    ++v10;
  while ( a2[v10] );
  if ( !(_DWORD)v10 )
  {
LABEL_5:
    ATL::CSimpleStringT<unsigned short,0>::Empty(&v43);
    v9 = v43;
    goto LABEL_10;
  }
  LODWORD(v40) = v6[2];
  v32 = a2 - v9;
  v33 = (unsigned int)(1 - v6[4]);
  if ( (int)(v33 | (v6[3] - v10)) < 0 )
  {
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v43, v10);
    v9 = v43;
  }
  v31 = 2LL * (int)v10;
  if ( v32 > (unsigned int)v40 )
  {
    if ( !v31 )
      goto LABEL_7;
    if ( v9 )
    {
      memcpy_0(v9, Src, 2LL * (int)v10);
      goto LABEL_7;
    }
LABEL_6:
    *(_DWORD *)_o__errno(v33, v7, v8) = 22;
    invalid_parameter_noinfo();
    goto LABEL_7;
  }
  v7 = &v9[v32];
  if ( v31 )
  {
    if ( !v9 || !v7 )
      goto LABEL_6;
    memmove_0(v9, v7, 2LL * (int)v10);
  }
LABEL_7:
  if ( (int)v10 < 0 || (int)v10 > *((_DWORD *)v9 - 3) )
    ATL::AtlThrowImpl(-2147024809);
  *((_DWORD *)v9 - 4) = v10;
  v9[(unsigned __int64)v31 / 2] = 0;
  v3 = v48;
LABEL_10:
  pclsid = (LPCLSID)((char *)v3 + 16);
  *((GUID *)v3 + 1) = GUID_00000000_0000_0000_0000_000000000000;
  LODWORD(Src) = 0;
  if ( *((int *)v9 - 4) < 0 )
    ATL::AtlThrowImpl(-2147024809);
  if ( *v9 == 124 )
  {
    v12 = &LocaleName;
  }
  else
  {
    v11 = (const WCHAR **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                            &v43,
                            &v51,
                            v8,
                            &Src,
                            (_DWORD)v40);
    v44 = 1;
    v12 = *v11;
    if ( !*v11 )
    {
LABEL_23:
      ATL::CSimpleStringT<unsigned short,0>::Empty(&v46);
      goto LABEL_28;
    }
  }
  v13 = -1LL;
  do
    ++v13;
  while ( v12[v13] );
  if ( !(_DWORD)v13 )
    goto LABEL_23;
  LODWORD(v40) = *((_DWORD *)v4 - 4);
  v14 = v12 - v4;
  v50 = v14;
  v15 = *((_DWORD *)v4 - 3) - v13;
  v16 = v15 | (unsigned int)(1 - *((_DWORD *)v4 - 2));
  if ( (v15 | (1 - *((_DWORD *)v4 - 2))) < 0 )
  {
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v46, v13);
    v4 = v46;
    v14 = v50;
  }
  v17 = 2LL * (int)v13;
  if ( v14 > (unsigned int)v40 )
  {
    if ( !v17 )
      goto LABEL_25;
    if ( v4 )
    {
      memcpy_0(v4, v12, 2LL * (int)v13);
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  v14 = (unsigned __int64)&v4[v14];
  if ( v17 )
  {
    if ( !v4 || !v14 )
    {
LABEL_24:
      *(_DWORD *)_o__errno(v16, v14, v8) = 22;
      invalid_parameter_noinfo();
      goto LABEL_25;
    }
    memmove_0(v4, (const void *)v14, 2LL * (int)v13);
  }
LABEL_25:
  if ( (int)v13 < 0 || (int)v13 > *((_DWORD *)v4 - 3) )
    ATL::AtlThrowImpl(-2147024809);
  *((_DWORD *)v4 - 4) = v13;
  v4[(unsigned __int64)v17 / 2] = 0;
  v3 = v48;
LABEL_28:
  if ( (v44 & 1) != 0 )
  {
    v44 &= ~1u;
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v51);
  }
  if ( (_DWORD)Src == -1 )
  {
    v27 = -2147467259;
    goto LABEL_52;
  }
  v18 = *(char **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v43,
                    &v50,
                    v8,
                    &Src,
                    v40);
  v20 = (volatile signed __int32 *)(v5 - 24);
  if ( v18 - 24 != (char *)v20 )
  {
    if ( *((int *)v20 + 4) >= 0 && *((_QWORD *)v18 - 3) == *(_QWORD *)v20 )
    {
      v21 = ATL::CSimpleStringT<unsigned short,0>::CloneData();
      if ( _InterlockedExchangeAdd(v20 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v20 + 8LL))(*(_QWORD *)v20, v20);
      v47 = v21 + 24;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v47, v18, *((unsigned int *)v18 - 4));
    }
  }
  v22 = (_QWORD *)(v50 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v50 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v22 + 8LL))(*v22);
  if ( (_DWORD)Src == -1 )
    goto LABEL_77;
  v23 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v43,
          &v48,
          v19,
          &Src,
          v41);
  v24 = v44 | 2;
  v44 |= 2u;
  if ( (unsigned __int8)ATL::operator!=(v25, v23) || (v26 = 0, (_DWORD)Src != -1) )
    v26 = 1;
  if ( (v24 & 2) != 0 )
    ATL::CStringData::Release((CAppAudioSessionId *)((char *)v48 - 24));
  if ( v26 )
  {
LABEL_77:
    v27 = -2147467259;
    goto LABEL_51;
  }
  if ( *((_DWORD *)v46 - 4) == 1 && *v46 == 35 )
  {
    *((_DWORD *)v3 + 10) = 1;
  }
  else
  {
    try
    {
      CAudioIdentifier::UnescapeIdentifierString(&v46);
    }
    catch ( ATL::CAtlException *v53 )
    {
      v38 = v53;
      if ( *(_DWORD *)v53 == -1073741571 )
        _o__resetstkoflw();
      LODWORD(v42) = *(_DWORD *)v38;
      v27 = *(_DWORD *)v38;
      if ( (v42 & 0x80000000) != 0LL )
        goto LABEL_51;
      v3 = v49;
    }
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&v47);
  }
  catch ( ATL::CAtlException *v54 )
  {
    v39 = v54;
    if ( *(_DWORD *)v54 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v42) = *(_DWORD *)v39;
    v27 = *(_DWORD *)v39;
    if ( (v42 & 0x80000000) != 0LL )
      goto LABEL_51;
    v3 = v49;
  }
  lpsz = (LPCOLESTR)v56;
  v34 = v47;
  if ( v47 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( *(_WORD *)(v47 + 2 * v36) );
    v37 = v36 + 1;
    ATL::AtlConvAllocMemory<unsigned short>(&lpsz, v37, v56);
    ATL::Checked::memcpy_s((ATL::Checked *)lpsz, (void *)(2LL * (int)v37), v34, (const void *)(2LL * (int)v37), v42);
    v35 = lpsz;
  }
  else
  {
    v35 = 0LL;
    lpsz = 0LL;
  }
  v27 = CLSIDFromString(v35, pclsid);
  if ( lpsz != (LPCOLESTR)v56 )
    free((void *)lpsz);
  if ( v27 < 0 )
  {
LABEL_51:
    v9 = v43;
LABEL_52:
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 459, v27);
    goto LABEL_54;
  }
  ATL::CSimpleStringT<unsigned short,0>::operator=(v3, &v46);
  v27 = CAppAudioSessionId::CalculateStaticId((const GUID *)v3);
  v9 = v43;
  if ( v27 < 0 )
    goto LABEL_52;
LABEL_54:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v9 - 3) + 8LL))(*((_QWORD *)v9 - 3));
  v28 = (_QWORD *)(v47 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v47 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v28 + 8LL))(*v28);
  v29 = v46 - 12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v46 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v29 + 8LL))(*v29);
  return (unsigned int)v27;
}
