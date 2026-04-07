/*
 * XREFs of ?StartImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800BE220
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ @ 0x18009B314 (-RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800BDF4C (-CaptureAndScheduleExitAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CDisplayDuplicateAnimatedVisual::StartImpl(CDisplayDuplicateAnimatedVisual *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CDisplayDuplicateAnimatedVisual::CaptureAndScheduleExitAnimation(this);
  if ( v2 < 0 )
  {
    v3 = 48LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayduplicateanimatedvisual.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = CDisplayAnimatedVisual::RegisterGlobalTimeChangeNotification(this);
  if ( v2 < 0 )
  {
    v3 = 49LL;
    goto LABEL_3;
  }
  return 0LL;
}
