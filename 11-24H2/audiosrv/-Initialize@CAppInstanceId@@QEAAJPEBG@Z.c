/*
 * XREFs of ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x18001CD40
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18001A234 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800FD8CC (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x18001AC90 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x18001AE2C (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??9ATL@@YA_NPEBDAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z @ 0x18001B0E0 (--9ATL@@YA_NPEBDAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001B2B0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x18001B530 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x1800286C0 (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAppInstanceId::Initialize(CAppInstanceId *this, char *a2)
{
  CAppInstanceId *v3; // rsi
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // r8
  const void **v7; // rdx
  __int64 v8; // r8
  const void **v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rcx
  char v13; // r14
  wchar_t *v14; // rbx
  unsigned int v16; // edi
  int *v17; // rbx
  __int64 v18; // r8
  __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  wchar_t *v20; // [rsp+28h] [rbp-40h] BYREF
  wchar_t *String; // [rsp+30h] [rbp-38h] BYREF
  wchar_t *EndPtr; // [rsp+38h] [rbp-30h] BYREF
  __int64 v23; // [rsp+40h] [rbp-28h] BYREF
  ATL::CAtlException *v24; // [rsp+48h] [rbp-20h] BYREF
  int v26; // [rsp+80h] [rbp+18h] BYREF
  __int64 v27; // [rsp+88h] [rbp+20h] BYREF

  v3 = this;
  v4 = 0;
  LODWORD(v27) = 0;
  EndPtr = 0LL;
  v19 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  String = (wchar_t *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v5 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr);
  try
  {
    v20 = (wchar_t *)(v5 + 24);
    v16 = 0;
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v19, a2, v6);
  }
  catch ( ATL::CAtlException *v24 )
  {
    v17 = (int *)v24;
    if ( *(_DWORD *)v24 == -1073741571 )
      _o__resetstkoflw();
    v26 = *v17;
    v16 = v26;
    v4 = 0;
    if ( v26 < 0 )
      goto LABEL_12;
    v3 = this;
  }
  v26 = 0;
  v7 = (const void **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                        &v19,
                        &v27,
                        v18,
                        &v26);
  ATL::CSimpleStringT<unsigned short,0>::operator=((__int64 *)&String, v7);
  ATL::CStringData::Release((ATL::CStringData *)(v27 - 24));
  if ( v26 == -1 )
    goto LABEL_15;
  v9 = (const void **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                        &v19,
                        &v27,
                        v8,
                        &v26);
  ATL::CSimpleStringT<unsigned short,0>::operator=((__int64 *)&v20, v9);
  ATL::CStringData::Release((ATL::CStringData *)(v27 - 24));
  if ( v26 == -1 )
    goto LABEL_15;
  v11 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v19,
          &v23,
          v10,
          &v26);
  LODWORD(v27) = 1;
  if ( ATL::operator!=(v12, v11) || (v13 = 0, v26 != -1) )
    v13 = 1;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v23);
  if ( v13 )
  {
LABEL_15:
    v16 = -2147467259;
LABEL_12:
    AudSrvTraceLoggingErrorHelper("CAppInstanceId::Initialize", 633, v16);
    v14 = String;
    goto LABEL_11;
  }
  if ( *((_DWORD *)v20 - 4) == 1 && *v20 == 35 )
    *((_DWORD *)v3 + 2) = 1;
  else
    v4 = wcstoul(v20, &EndPtr, 10);
  *(_DWORD *)v3 = v4;
  v14 = String;
  *((_DWORD *)v3 + 1) = wcstoul(String, &EndPtr, 10);
LABEL_11:
  ATL::CStringData::Release((ATL::CStringData *)(v20 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v14 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v19 - 24));
  return v16;
}
