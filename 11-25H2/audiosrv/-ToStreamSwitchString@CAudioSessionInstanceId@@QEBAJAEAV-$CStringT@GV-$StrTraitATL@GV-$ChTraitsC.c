/*
 * XREFs of ?ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800A26A8
 * Callers:
 *     ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180077FC0 (-GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800182C0 (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18001A490 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ToString@CAppInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001C1D4 (-ToString@CAppInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180028C90 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18002A248 (-ToString@CAppAudioSessionId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioSessionInstanceId::ToStreamSwitchString(__int64 a1, wchar_t *const *a2)
{
  int v4; // ebx
  const wchar_t *v6; // [rsp+20h] [rbp-18h] BYREF
  ATL::CAtlException *v7; // [rsp+28h] [rbp-10h] BYREF
  const wchar_t *v8; // [rsp+58h] [rbp+20h] BYREF

  v6 = (const wchar_t *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v8 = (const wchar_t *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v4 = CAppAudioSessionId::ToString(a1 + 8, (__int64 *)&v6);
  if ( v4 < 0 )
    goto LABEL_5;
  v4 = CAppInstanceId::ToString((unsigned int *)(a1 + 56), (wchar_t *const *)&v8);
  if ( v4 < 0 )
    goto LABEL_5;
  try
  {
    CAudioIdentifier::EscapeIdentifierString(&v6);
    CAudioIdentifier::EscapeIdentifierString(&v8);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      a2,
      L"%s|%s",
      v6,
      v8);
  }
  catch ( ATL::CAtlException *v7 )
  {
    v4 = *(_DWORD *)v7;
    if ( *(int *)v7 < 0 )
LABEL_5:
      AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::ToStreamSwitchString", 1185, v4);
  }
  ATL::CStringData::Release((ATL::CStringData *)(v8 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v6 - 12));
  return (unsigned int)v4;
}
