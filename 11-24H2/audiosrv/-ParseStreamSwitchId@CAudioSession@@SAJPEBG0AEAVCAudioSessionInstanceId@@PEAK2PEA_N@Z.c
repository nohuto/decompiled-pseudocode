/*
 * XREFs of ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x18006B274
 * Callers:
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x18007A4B0 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x18001AC90 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x18001AE2C (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001B2B0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001B410 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x18001B530 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x1800286C0 (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x18006ACE8 (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800FD8CC (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  const void **v10; // rdx
  __int64 v11; // r8
  const void **v12; // rdx
  __int64 v13; // r8
  const void **v14; // rdx
  __int64 v15; // r8
  const void **v16; // rdx
  __int64 v17; // r8
  unsigned __int16 **v18; // rax
  bool v19; // di
  __int64 v20; // rdx
  int *v22; // rbx
  __int64 v23; // r8
  int v24; // [rsp+20h] [rbp-58h] BYREF
  __int64 v25; // [rsp+28h] [rbp-50h] BYREF
  __int64 v26; // [rsp+30h] [rbp-48h] BYREF
  wchar_t *v27; // [rsp+38h] [rbp-40h] BYREF
  wchar_t *v28; // [rsp+40h] [rbp-38h] BYREF
  wchar_t *String; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int16 *v30; // [rsp+50h] [rbp-28h] BYREF
  __int64 v31; // [rsp+58h] [rbp-20h] BYREF
  ATL::CAtlException *v32; // [rsp+60h] [rbp-18h] BYREF
  ATL::CAtlException *v33; // [rsp+68h] [rbp-10h] BYREF

  LODWORD(v25) = 0;
  v26 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v30 = (unsigned __int16 *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  String = (wchar_t *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v28 = (wchar_t *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v7 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr);
  try
  {
    v27 = (wchar_t *)(v7 + 24);
    v9 = 0;
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v26, a2, v8);
  }
  catch ( ATL::CAtlException *v32 )
  {
    v22 = (int *)v32;
    if ( *(_DWORD *)v32 == -1073741571 )
      _o__resetstkoflw();
    v24 = *v22;
    v9 = v24;
    if ( v24 < 0 )
      goto LABEL_11;
  }
  v24 = 0;
  v10 = (const void **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                         &v26,
                         &v25,
                         v23,
                         &v24);
  ATL::CSimpleStringT<unsigned short,0>::operator=((__int64 *)&v30, v10);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v25);
  if ( v24 == -1 )
    goto LABEL_10;
  v12 = (const void **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                         &v26,
                         &v25,
                         v11,
                         &v24);
  ATL::CSimpleStringT<unsigned short,0>::operator=((__int64 *)&String, v12);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v25);
  if ( v24 == -1 )
    goto LABEL_10;
  v14 = (const void **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                         &v26,
                         &v25,
                         v13,
                         &v24);
  ATL::CSimpleStringT<unsigned short,0>::operator=((__int64 *)&v28, v14);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v25);
  if ( v24 == -1 )
    goto LABEL_10;
  v16 = (const void **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                         &v26,
                         &v25,
                         v15,
                         &v24);
  ATL::CSimpleStringT<unsigned short,0>::operator=((__int64 *)&v27, v16);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v25);
  if ( v24 == -1 )
    goto LABEL_10;
  v18 = (unsigned __int16 **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                               &v26,
                               &v31,
                               v17,
                               &v24);
  v19 = 1;
  LODWORD(v25) = 1;
  if ( !ATL::operator!=(v18, v20) )
    v19 = v24 != -1;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v31);
  if ( v19 )
  {
LABEL_10:
    v9 = -2147467259;
  }
  else
  {
    try
    {
      CAudioIdentifier::UnescapeIdentifierString((__int64 *)&v30);
      CAudioIdentifier::UnescapeIdentifierString((__int64 *)&String);
      CAudioIdentifier::UnescapeIdentifierString((__int64 *)&v28);
      CAudioIdentifier::UnescapeIdentifierString((__int64 *)&v27);
    }
    catch ( ATL::CAtlException *v33 )
    {
      v24 = *(_DWORD *)v33;
      v9 = v24;
    }
    if ( v9 >= 0 )
    {
      v9 = CAudioSessionInstanceId::Initialize(a3, a1, v30);
      if ( v9 >= 0 )
      {
        *a4 = wcstoul(String, 0LL, 10);
        *a5 = wcstoul(v28, 0LL, 10);
        *a6 = wcstoul(v27, 0LL, 10) != 0;
        goto LABEL_12;
      }
    }
  }
LABEL_11:
  AudSrvTraceLoggingErrorHelper("CAudioSession::ParseStreamSwitchId", 553, v9);
LABEL_12:
  ATL::CStringData::Release((ATL::CStringData *)(v27 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v28 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(String - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v30 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 24));
  return (unsigned int)v9;
}
