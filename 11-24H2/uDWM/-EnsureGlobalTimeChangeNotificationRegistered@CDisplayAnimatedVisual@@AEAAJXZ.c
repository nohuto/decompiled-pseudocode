/*
 * XREFs of ?EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ @ 0x180088120
 * Callers:
 *     ?Start@CDisplayAnimatedVisual@@QEAAJXZ @ 0x18009A0A4 (-Start@CDisplayAnimatedVisual@@QEAAJXZ.c)
 *     ?RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ @ 0x18009B314 (-RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ.c)
 * Callees:
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180015730 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDisplayAnimatedVisual::EnsureGlobalTimeChangeNotificationRegistered(CDisplayAnimatedVisual *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 385) )
  {
    v2 = CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
    v3 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x166,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
        (const char *)(unsigned int)v2,
        v5);
      return v3;
    }
    *((_BYTE *)this + 385) = 1;
  }
  return 0LL;
}
