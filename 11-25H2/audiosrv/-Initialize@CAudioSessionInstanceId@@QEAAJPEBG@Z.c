/*
 * XREFs of ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x180027C0C
 * Callers:
 *     AudioSessionManagerGetExistingSession @ 0x180028F10 (AudioSessionManagerGetExistingSession.c)
 * Callees:
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x18001A1B0 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18001A2F0 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x180027FD8 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180028670 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x18002880C (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180028C90 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180028DF0 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180029220 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x1800734E0 (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x18007CB98 (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v13; // r8
  int v14; // ebx
  ATL::CAtlException *v16; // rbx
  __int64 v17; // r8
  __int64 v18; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int16 *v19; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int16 *v20; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int16 *v21; // [rsp+38h] [rbp-40h] BYREF
  __int64 v22; // [rsp+40h] [rbp-38h] BYREF
  ATL::CAtlException *v23; // [rsp+48h] [rbp-30h] BYREF
  ATL::CAtlException *v24; // [rsp+50h] [rbp-28h] BYREF
  int v26; // [rsp+90h] [rbp+18h] BYREF
  __int64 v27; // [rsp+98h] [rbp+20h] BYREF

  v3 = this;
  LODWORD(v27) = 0;
  v21 = (unsigned __int16 *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v20 = (unsigned __int16 *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v19 = (unsigned __int16 *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v4 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr);
  try
  {
    v18 = v4 + 24;
    v14 = 0;
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v18, a2);
  }
  catch ( ATL::CAtlException *v23 )
  {
    v16 = v23;
    if ( *(_DWORD *)v23 == -1073741571 )
      _o__resetstkoflw();
    v26 = *(_DWORD *)v16;
    v14 = v26;
    if ( v26 < 0 )
      goto LABEL_12;
    v3 = this;
  }
  v26 = 0;
  v5 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v18,
         &v27,
         v17,
         &v26,
         v18);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v21, v5);
  ATL::CStringData::Release((ATL::CStringData *)(v27 - 24));
  if ( v26 == -1 )
    goto LABEL_17;
  v7 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v18,
         &v27,
         v6,
         &v26,
         v18);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v20, v7);
  ATL::CStringData::Release((ATL::CStringData *)(v27 - 24));
  if ( v26 == -1 )
    goto LABEL_17;
  v9 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v18,
         &v27,
         v8,
         &v26,
         v18);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v19, v9);
  ATL::CStringData::Release((ATL::CStringData *)(v27 - 24));
  if ( v26 == -1 )
    goto LABEL_17;
  v11 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v18,
          &v22,
          v10,
          &v26,
          v18);
  v12 = 1;
  LODWORD(v27) = 1;
  if ( !(unsigned __int8)ATL::operator!=(v11) )
    v12 = v26 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v22 - 24));
  if ( v12 )
  {
LABEL_17:
    v14 = -2147467259;
LABEL_12:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 790, v14);
    goto LABEL_14;
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&v21);
    CAudioIdentifier::UnescapeIdentifierString(&v20);
    CAudioIdentifier::UnescapeIdentifierString(&v19);
  }
  catch ( ATL::CAtlException *v24 )
  {
    v26 = *(_DWORD *)v24;
    v3 = this;
    v14 = v26;
  }
  if ( v14 < 0 )
    goto LABEL_12;
  v14 = CAudioEndpointId::Initialize(v3, v21, v13);
  if ( v14 < 0 )
    goto LABEL_12;
  v14 = CAppAudioSessionId::Initialize((CAudioSessionInstanceId *)((char *)v3 + 8), v20);
  if ( v14 < 0 )
    goto LABEL_12;
  v14 = CAppInstanceId::Initialize((CAudioSessionInstanceId *)((char *)v3 + 56), v19);
  if ( v14 < 0 )
    goto LABEL_12;
  v14 = CAudioSessionInstanceId::CalculateStaticId(v3);
  if ( v14 < 0 )
    goto LABEL_12;
LABEL_14:
  ATL::CStringData::Release((ATL::CStringData *)(v18 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v19 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v20 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v21 - 12));
  return (unsigned int)v14;
}
