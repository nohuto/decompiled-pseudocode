/*
 * XREFs of ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x18001CAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x1800146B0 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800154D0 (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001B2B0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180020AB0 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180021540 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18003F650 (MIDL_user_allocate.c)
 *     ?ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18009EC08 (-ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsC.c)
 *     WPP_SF_S @ 0x1800C033C (WPP_SF_S.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CAudioSession::GetStreamSwitchId(CAudioSession *this, unsigned __int16 **a2)
{
  void **v2; // rsi
  unsigned __int16 *v4; // rbx
  int v5; // edi
  unsigned int v6; // eax
  size_t v7; // rdi
  unsigned __int16 *v8; // rax
  wchar_t *v10; // [rsp+30h] [rbp-48h] BYREF
  wchar_t *v11; // [rsp+38h] [rbp-40h] BYREF
  __int64 v12; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int16 *v13; // [rsp+48h] [rbp-30h] BYREF
  ATL::CAtlException *v14; // [rsp+50h] [rbp-28h] BYREF
  wchar_t *v16; // [rsp+98h] [rbp+20h] BYREF

  v2 = (void **)a2;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      12LL,
      &WPP_ea93f1868512325b454513e390c361b8_Traceguids,
      *((_QWORD *)this + 82));
  }
  v12 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v11 = (wchar_t *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v10 = (wchar_t *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v16 = (wchar_t *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v4 = (unsigned __int16 *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v13 = v4;
  v5 = CAudioSessionInstanceId::ToStreamSwitchString((char *)this + 584, &v12);
  if ( v5 < 0 )
    goto LABEL_14;
  try
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(&v11, L"%d");
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      &v10,
      L"%d",
      *((unsigned int *)this + 58));
    v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 4) + 24LL))((char *)this + 32);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      &v16,
      L"%d",
      v6);
    CAudioIdentifier::EscapeIdentifierString(&v12);
    CAudioIdentifier::EscapeIdentifierString((__int64 *)&v11);
    CAudioIdentifier::EscapeIdentifierString((__int64 *)&v10);
    CAudioIdentifier::EscapeIdentifierString((__int64 *)&v16);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      &v13,
      L"%s|%s|%s|%s",
      v12,
      v11,
      v10,
      v16);
  }
  catch ( ATL::CAtlException *v14 )
  {
    v5 = *(_DWORD *)v14;
    if ( *(int *)v14 < 0 )
    {
      v4 = v13;
      goto LABEL_14;
    }
    v2 = (void **)a2;
  }
  v4 = v13;
  v7 = 2LL * (*((_DWORD *)v13 - 4) + 1);
  v8 = (unsigned __int16 *)MIDL_user_allocate(v7);
  *v2 = v8;
  if ( !v8 )
  {
    v5 = -2147024882;
LABEL_14:
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetStreamSwitchId", 491, v5);
    goto LABEL_15;
  }
  v5 = StringCbCopyW(v8, v7, v4);
  if ( v5 < 0 )
  {
    operator delete(*v2);
    *v2 = 0LL;
    goto LABEL_14;
  }
LABEL_15:
  ATL::CStringData::Release((ATL::CStringData *)(v4 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v16 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v10 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v11 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v12 - 24));
  return (unsigned int)v5;
}
