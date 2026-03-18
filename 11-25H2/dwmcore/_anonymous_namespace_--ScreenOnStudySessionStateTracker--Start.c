/*
 * XREFs of _anonymous_namespace_::ScreenOnStudySessionStateTracker::Start @ 0x180254AB0
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1802670A4 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _anonymous_namespace_::ScreenOnStudySessionStateTracker::Stop @ 0x180269EE0 (_anonymous_namespace_--ScreenOnStudySessionStateTracker--Stop.c)
 */

__int64 __fastcall anonymous_namespace_::ScreenOnStudySessionStateTracker::Start(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = anonymous_namespace_::OnScreenOnStudySessionStateChange;
  *(_BYTE *)a1 = 1;
  result = (unsigned int)RtlSubscribeWnfStateChangeNotification(
                           a1 + 16,
                           WNF_SRUM_SCREENONSTUDY_SESSION,
                           0LL,
                           anonymous_namespace_::ScreenOnStudySessionStateTracker::WnfCallback,
                           a1,
                           0LL,
                           0,
                           0) | 0x10000000;
  if ( (int)result < 0 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, result, 0x13Au, 0LL);
    return anonymous_namespace_::ScreenOnStudySessionStateTracker::Stop(a1);
  }
  return result;
}
