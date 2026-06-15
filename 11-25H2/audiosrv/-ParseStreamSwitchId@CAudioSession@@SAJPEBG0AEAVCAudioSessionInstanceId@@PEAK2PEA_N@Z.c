/*
 * XREFs of ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x180049468
 * Callers:
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x180048C00 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18001E7A0 (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180028670 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x18002880C (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180028C90 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180028DF0 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180029220 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x18007CB98 (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800FA64C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CAudioSession::ParseStreamSwitchId(
        const unsigned __int16 *a1,
        char *a2,
        struct CAudioSessionInstanceId *a3,
        unsigned int *a4,
        unsigned int *a5,
        bool *a6)
{
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // ebx
  char **v10; // rdx
  __int64 v11; // r8
  char **v12; // rdx
  __int64 v13; // r8
  char **v14; // rdx
  __int64 v15; // r8
  char **v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // rax
  bool v19; // di
  int *v21; // rbx
  __int64 v22; // r8
  int v23; // [rsp+20h] [rbp-58h] BYREF
  __int64 v24; // [rsp+28h] [rbp-50h] BYREF
  __int64 v25; // [rsp+30h] [rbp-48h] BYREF
  wchar_t *v26; // [rsp+38h] [rbp-40h] BYREF
  wchar_t *v27; // [rsp+40h] [rbp-38h] BYREF
  wchar_t *String; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int16 *v29; // [rsp+50h] [rbp-28h] BYREF
  __int64 v30; // [rsp+58h] [rbp-20h] BYREF
  ATL::CAtlException *v31; // [rsp+60h] [rbp-18h] BYREF
  ATL::CAtlException *v32; // [rsp+68h] [rbp-10h] BYREF

  LODWORD(v24) = 0;
  v25 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v29 = (unsigned __int16 *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  String = (wchar_t *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v27 = (wchar_t *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v7 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr);
  try
  {
    v26 = (wchar_t *)(v7 + 24);
    v9 = 0;
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v25, a2, v8);
  }
  catch ( ATL::CAtlException *v31 )
  {
    v21 = (int *)v31;
    if ( *(_DWORD *)v31 == -1073741571 )
      _o__resetstkoflw();
    v23 = *v21;
    v9 = v23;
    if ( v23 < 0 )
      goto LABEL_11;
  }
  v23 = 0;
  v10 = (char **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   &v25,
                   &v24,
                   v22,
                   &v23);
  ATL::CSimpleStringT<unsigned short,0>::operator=((__int64 *)&v29, v10);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v24);
  if ( v23 == -1 )
    goto LABEL_10;
  v12 = (char **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   &v25,
                   &v24,
                   v11,
                   &v23);
  ATL::CSimpleStringT<unsigned short,0>::operator=((__int64 *)&String, v12);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v24);
  if ( v23 == -1 )
    goto LABEL_10;
  v14 = (char **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   &v25,
                   &v24,
                   v13,
                   &v23);
  ATL::CSimpleStringT<unsigned short,0>::operator=((__int64 *)&v27, v14);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v24);
  if ( v23 == -1 )
    goto LABEL_10;
  v16 = (char **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   &v25,
                   &v24,
                   v15,
                   &v23);
  ATL::CSimpleStringT<unsigned short,0>::operator=((__int64 *)&v26, v16);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v24);
  if ( v23 == -1 )
    goto LABEL_10;
  v18 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v25,
          &v30,
          v17,
          &v23);
  v19 = 1;
  LODWORD(v24) = 1;
  if ( !(unsigned __int8)ATL::operator!=(v18) )
    v19 = v23 != -1;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v30);
  if ( v19 )
  {
LABEL_10:
    v9 = -2147467259;
  }
  else
  {
    try
    {
      CAudioIdentifier::UnescapeIdentifierString((__int64 *)&v29);
      CAudioIdentifier::UnescapeIdentifierString((__int64 *)&String);
      CAudioIdentifier::UnescapeIdentifierString((__int64 *)&v27);
      CAudioIdentifier::UnescapeIdentifierString((__int64 *)&v26);
    }
    catch ( ATL::CAtlException *v32 )
    {
      v23 = *(_DWORD *)v32;
      v9 = v23;
    }
    if ( v9 >= 0 )
    {
      v9 = CAudioSessionInstanceId::Initialize(a3, a1, v29);
      if ( v9 >= 0 )
      {
        *a4 = wcstoul(String, 0LL, 10);
        *a5 = wcstoul(v27, 0LL, 10);
        *a6 = wcstoul(v26, 0LL, 10) != 0;
        goto LABEL_12;
      }
    }
  }
LABEL_11:
  AudSrvTraceLoggingErrorHelper("CAudioSession::ParseStreamSwitchId", 552, v9);
LABEL_12:
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v27 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(String - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v29 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v25 - 24));
  return (unsigned int)v9;
}
