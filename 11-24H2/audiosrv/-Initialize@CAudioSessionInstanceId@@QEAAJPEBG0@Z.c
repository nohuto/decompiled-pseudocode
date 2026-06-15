/*
 * XREFs of ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800FD8CC
 * Callers:
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x18006B274 (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 * Callees:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18000C9B0 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x1800143D0 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180014510 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x18001A5F8 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x18001AC90 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x18001AE2C (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001B410 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x18001B530 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x18001CD40 (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x1800286C0 (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x18006ACE8 (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioSessionInstanceId::Initialize(
        CAudioSessionInstanceId *this,
        const unsigned __int16 *a2,
        char *a3)
{
  CAudioSessionInstanceId *v4; // rdi
  __int64 v5; // r8
  int v6; // ebx
  const void **v7; // rdx
  __int64 v8; // r8
  const void **v9; // rdx
  __int64 v10; // r8
  unsigned __int16 **v11; // rax
  bool v12; // si
  __int64 v13; // rdx
  int *v15; // rbx
  __int64 v16; // r8
  __int64 v17; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int16 *v19; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int16 *v20; // [rsp+38h] [rbp-40h] BYREF
  __int64 v21; // [rsp+40h] [rbp-38h] BYREF
  ATL::CAtlException *v22; // [rsp+48h] [rbp-30h] BYREF
  ATL::CAtlException *v23; // [rsp+50h] [rbp-28h] BYREF
  int v26; // [rsp+98h] [rbp+20h] BYREF

  v4 = this;
  LODWORD(v17) = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v20);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v19);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v18);
  try
  {
    v6 = 0;
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v18, a3, v5);
  }
  catch ( ATL::CAtlException *v22 )
  {
    v15 = (int *)v22;
    if ( *(_DWORD *)v22 == -1073741571 )
      _o__resetstkoflw();
    v26 = *v15;
    v6 = v26;
    if ( v26 < 0 )
      goto LABEL_16;
    v4 = this;
  }
  v26 = 0;
  v7 = (const void **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                        &v18,
                        &v17,
                        v16,
                        &v26);
  ATL::CSimpleStringT<unsigned short,0>::operator=((__int64 *)&v20, v7);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v17);
  if ( v26 == -1 )
    goto LABEL_5;
  v9 = (const void **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                        &v18,
                        &v17,
                        v8,
                        &v26);
  ATL::CSimpleStringT<unsigned short,0>::operator=((__int64 *)&v19, v9);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v17);
  if ( v26 == -1 )
    goto LABEL_5;
  v11 = (unsigned __int16 **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                               &v18,
                               &v21,
                               v10,
                               &v26);
  v12 = 1;
  LODWORD(v17) = 1;
  if ( !ATL::operator!=(v11, v13) )
    v12 = v26 != -1;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v21);
  if ( v12 )
  {
LABEL_5:
    v6 = -2147467259;
LABEL_16:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 867, v6);
    goto LABEL_17;
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString((__int64 *)&v20);
    CAudioIdentifier::UnescapeIdentifierString((__int64 *)&v19);
  }
  catch ( ATL::CAtlException *v23 )
  {
    v26 = *(_DWORD *)v23;
    v4 = this;
    v6 = v26;
  }
  if ( v6 < 0 )
    goto LABEL_16;
  v6 = CAudioEndpointId::Initialize(v4, a2);
  if ( v6 < 0 )
    goto LABEL_16;
  v6 = CAppAudioSessionId::Initialize((CAudioSessionInstanceId *)((char *)v4 + 8), v20);
  if ( v6 < 0 )
    goto LABEL_16;
  v6 = CAppInstanceId::Initialize((CAudioSessionInstanceId *)((char *)v4 + 56), (char *)v19);
  if ( v6 < 0 )
    goto LABEL_16;
  v6 = CAudioSessionInstanceId::CalculateStaticId(v4);
  if ( v6 < 0 )
    goto LABEL_16;
LABEL_17:
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v18);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v19);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v20);
  return (unsigned int)v6;
}
