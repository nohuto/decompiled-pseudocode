/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800E7220
 * Callers:
 *     _CWindowList::MoveSize_::_1_::catch$39 @ 0x180068000 (_CWindowList--MoveSize_--_1_--catch$39.c)
 *     _CWindowList::MoveSize_::_1_::catch$41 @ 0x180068080 (_CWindowList--MoveSize_--_1_--catch$41.c)
 *     _CWindowList::ForceUpdateScene_::_1_::catch$28 @ 0x1800682D0 (_CWindowList--ForceUpdateScene_--_1_--catch$28.c)
 *     _CWindowList::ProcessAsyncDwmMessage_::_1_::catch$54 @ 0x1800683A0 (_CWindowList--ProcessAsyncDwmMessage_--_1_--catch$54.c)
 *     _CTopLevelWindow3D::StopAnimation_::_1_::catch$17 @ 0x180068400 (_CTopLevelWindow3D--StopAnimation_--_1_--catch$17.c)
 *     _CGlobalTimeTrackVisual::OnGlobalTimeUpdated_::_1_::catch$17 @ 0x180105137 (_CGlobalTimeTrackVisual--OnGlobalTimeUpdated_--_1_--catch$17.c)
 *     _CWindowList::_CWindowList_::_1_::catch$36 @ 0x180108A6E (_CWindowList--_CWindowList_--_1_--catch$36.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800E6BB4 (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<2>((int)this, (int)a2, a3);
}
