/*
 * XREFs of ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18001A234
 * Callers:
 *     AudioSessionManagerGetExistingSession @ 0x18007A240 (AudioSessionManagerGetExistingSession.c)
 * Callees:
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x1800143D0 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180014510 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x18001A5F8 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x18001AC90 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x18001AE2C (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001B2B0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001B410 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x18001B530 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x18001CD40 (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x18006ACE8 (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CAudioSessionInstanceId::Initialize(CAudioSessionInstanceId *this, const unsigned __int16 *a2)
{
  CAudioSessionInstanceId *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  bool v12; // si
  int v13; // ebx
  ATL::CAtlException *v15; // rbx
  __int64 v16; // r8
  __int64 v17; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int16 *v18; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int16 *v19; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int16 *v20; // [rsp+38h] [rbp-40h] BYREF
  __int64 v21; // [rsp+40h] [rbp-38h] BYREF
  ATL::CAtlException *v22; // [rsp+48h] [rbp-30h] BYREF
  ATL::CAtlException *v23; // [rsp+50h] [rbp-28h] BYREF
  int v25; // [rsp+90h] [rbp+18h] BYREF
  __int64 v26; // [rsp+98h] [rbp+20h] BYREF

  v3 = this;
  LODWORD(v26) = 0;
  v20 = (unsigned __int16 *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v19 = (unsigned __int16 *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v18 = (unsigned __int16 *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v4 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr);
  try
  {
    v17 = v4 + 24;
    v13 = 0;
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v17, a2);
  }
  catch ( ATL::CAtlException *v22 )
  {
    v15 = v22;
    if ( *(_DWORD *)v22 == -1073741571 )
      _o__resetstkoflw();
    v25 = *(_DWORD *)v15;
    v13 = v25;
    if ( v25 < 0 )
      goto LABEL_12;
    v3 = this;
  }
  v25 = 0;
  v5 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v17,
         &v26,
         v16,
         &v25,
         v17);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v20, v5);
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 24));
  if ( v25 == -1 )
    goto LABEL_17;
  v7 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v17,
         &v26,
         v6,
         &v25,
         v17);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v19, v7);
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 24));
  if ( v25 == -1 )
    goto LABEL_17;
  v9 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v17,
         &v26,
         v8,
         &v25,
         v17);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v18, v9);
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 24));
  if ( v25 == -1 )
    goto LABEL_17;
  v11 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v17,
          &v21,
          v10,
          &v25,
          v17);
  v12 = 1;
  LODWORD(v26) = 1;
  if ( !(unsigned __int8)ATL::operator!=(v11) )
    v12 = v25 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v21 - 24));
  if ( v12 )
  {
LABEL_17:
    v13 = -2147467259;
LABEL_12:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 790, v13);
    goto LABEL_14;
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&v20);
    CAudioIdentifier::UnescapeIdentifierString(&v19);
    CAudioIdentifier::UnescapeIdentifierString(&v18);
  }
  catch ( ATL::CAtlException *v23 )
  {
    v25 = *(_DWORD *)v23;
    v3 = this;
    v13 = v25;
  }
  if ( v13 < 0 )
    goto LABEL_12;
  v13 = CAudioEndpointId::Initialize(v3, v20);
  if ( v13 < 0 )
    goto LABEL_12;
  v13 = CAppAudioSessionId::Initialize((CAudioSessionInstanceId *)((char *)v3 + 8), v19);
  if ( v13 < 0 )
    goto LABEL_12;
  v13 = CAppInstanceId::Initialize((CAudioSessionInstanceId *)((char *)v3 + 56), v18);
  if ( v13 < 0 )
    goto LABEL_12;
  v13 = CAudioSessionInstanceId::CalculateStaticId(v3);
  if ( v13 < 0 )
    goto LABEL_12;
LABEL_14:
  ATL::CStringData::Release((ATL::CStringData *)(v17 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v18 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v19 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v20 - 12));
  return (unsigned int)v13;
}
