/*
 * XREFs of wistd::function_void___cdecl(int_const_&)_::function_void___cdecl(int_const_&)___lambda_b004c78c20a08ec453c246420d56f636__void_ @ 0x1803297D4
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::WaitForOobeToComplete$_ResumeCoro$1 @ 0x180335200 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180335200.c)
 * Callees:
 *     ??1?$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1801910F0 (--1-$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ.c)
 */

_QWORD *__fastcall wistd::function_void___cdecl_int_const____::function_void___cdecl_int_const______lambda_b004c78c20a08ec453c246420d56f636__void_(
        _QWORD *a1,
        _QWORD *a2)
{
  a1[14] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[1] = &off_18072F610;
  a1[2] = *a2;
  a1[3] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  a1[14] = a1 + 1;
  std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>::~shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>((__int64)a2);
  return a1;
}
