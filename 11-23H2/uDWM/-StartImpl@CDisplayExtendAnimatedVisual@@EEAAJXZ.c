/*
 * XREFs of ?StartImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x1800BAC30
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ @ 0x180018CE0 (-EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009B0B8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CaptureAndScheduleExitAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800BA548 (-CaptureAndScheduleExitAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CDisplayExtendAnimatedVisual::StartImpl(CDisplayExtendAnimatedVisual *this)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 result; // rax
  const char *v5; // r9
  __int64 v6; // rax
  __int128 v7; // xmm0
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CDisplayExtendAnimatedVisual::CaptureAndScheduleExitAnimations(this);
  if ( v2 < 0 )
  {
    v3 = 55LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  *((_BYTE *)this + 434) = 1;
  v2 = CDisplayAnimatedVisual::EnsureGlobalTimeChangeNotificationRegistered(this);
  if ( v2 < 0 )
  {
    v3 = 57LL;
    goto LABEL_3;
  }
  v6 = *((_QWORD *)this + 41);
  if ( v6 == *((_QWORD *)this + 42) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3D,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
      v5);
  v7 = *(_OWORD *)(*(_QWORD *)v6 + 56LL);
  result = 0LL;
  *((_OWORD *)this + 32) = v7;
  return result;
}
