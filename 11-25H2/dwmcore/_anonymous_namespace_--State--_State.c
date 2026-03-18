/*
 * XREFs of _anonymous_namespace_::State::_State @ 0x180269E5C
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1802670A4 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport___::_unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport___ @ 0x180269D54 (std--unique_ptr__anonymous_namespace_--FramesReport_std--default_delete__anonymous_namespace_--F.c)
 *     _anonymous_namespace_::ScreenOnStudySessionStateTracker::Stop @ 0x180269EE0 (_anonymous_namespace_--ScreenOnStudySessionStateTracker--Stop.c)
 */

__int64 __fastcall anonymous_namespace_::State::_State(__int64 a1)
{
  anonymous_namespace_::ScreenOnStudySessionStateTracker::Stop(a1 + 16);
  std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport___::_unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport___((_QWORD *)(a1 + 40));
  return std::unique_ptr<CDrawListPrimitive>::~unique_ptr<CDrawListPrimitive>((__int64 (__fastcall ****)(_QWORD, __int64))a1);
}
