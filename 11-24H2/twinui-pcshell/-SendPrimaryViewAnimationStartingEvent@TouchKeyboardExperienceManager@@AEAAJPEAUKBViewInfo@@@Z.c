/*
 * XREFs of ?SendPrimaryViewAnimationStartingEvent@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x180474310
 * Callers:
 *     ?AnimationGapTimerCallbackInternal@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x1804700C0 (-AnimationGapTimerCallbackInternal@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z @ 0x1801D9404 (-IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z.c)
 *     ?NotifyPrimaryViewAnimationStarting@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@I@Z @ 0x1802B3EF0 (-NotifyPrimaryViewAnimationStarting@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@I@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::SendPrimaryViewAnimationStartingEvent(
        TouchKeyboardExperienceManager *this,
        const struct tagRECT *a2)
{
  bool IsRectNull; // al
  __int64 v3; // rdx
  const struct tagRECT *v4; // rcx
  KeyboardHosting::TabTipAdapter *v5; // r9
  __int64 v6; // r8
  unsigned int v7; // r8d
  int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  IsRectNull = KeyboardHosting::IsRectNull((KeyboardHosting *)&a2[8].right, a2);
  v7 = *(_DWORD *)(v6 + 952);
  if ( IsRectNull )
  {
    v8 = KeyboardHosting::TabTipAdapter::NotifyPrimaryViewAnimationStarting(v5, (const struct tagRECT *)(v3 + 120), v7);
    if ( v8 < 0 )
    {
      v9 = 1162LL;
      goto LABEL_4;
    }
  }
  else
  {
    v8 = KeyboardHosting::TabTipAdapter::NotifyPrimaryViewAnimationStarting(v5, v4, v7);
    if ( v8 < 0 )
    {
      v9 = 1156LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      return (unsigned int)v8;
    }
  }
  return 0LL;
}
