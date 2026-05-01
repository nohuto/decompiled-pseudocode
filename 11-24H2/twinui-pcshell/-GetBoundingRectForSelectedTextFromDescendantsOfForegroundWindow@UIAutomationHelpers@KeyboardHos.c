/*
 * XREFs of ?GetBoundingRectForSelectedTextFromDescendantsOfForegroundWindow@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUtagRECT@@@Z @ 0x18048C520
 * Callers:
 *     ?GetBoundingRectForSelectedText@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x18048BD84 (-GetBoundingRectForSelectedText@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$UIAFoundBoundingRectForSelectedTextUsing@AEAY0CL@$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEAY0CL@$$CBG@Z @ 0x18048BBE8 (--$UIAFoundBoundingRectForSelectedTextUsing@AEAY0CL@$$CBG@TouchKeyboardExperienceTelemetryLogger.c)
 *     ?GetBoundingRectForSelectedTextFromDescendantsOfElement@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElement@@PEAUtagRECT@@@Z @ 0x18048C1A4 (-GetBoundingRectForSelectedTextFromDescendantsOfElement@UIAutomationHelpers@KeyboardHosting@@AEA.c)
 *     ?GetBoundingRectForSelectedTextFromDescendantsOfForegroundWindow@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x18048C4CC (-GetBoundingRectForSelectedTextFromDescendantsOfForegroundWindow@TouchKeyboardExperienceTelemetr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::UIAutomationHelpers::GetBoundingRectForSelectedTextFromDescendantsOfForegroundWindow(
        __int64 **this,
        struct tagRECT *a2)
{
  HWND ForegroundWindow; // rdx
  unsigned int v5; // ebx
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rdx
  int BoundingRectForSelectedTextFromDescendantsOfElement; // eax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUIAutomationElement *v15; // [rsp+40h] [rbp+18h] BYREF

  TouchKeyboardExperienceTelemetryLogger::GetBoundingRectForSelectedTextFromDescendantsOfForegroundWindow();
  ForegroundWindow = GetForegroundWindow();
  if ( ForegroundWindow )
  {
    v15 = 0LL;
    v6 = *this;
    v7 = **this;
    v15 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, HWND, struct IUIAutomationElement **))(v7 + 48))(
           v6,
           ForegroundWindow,
           &v15);
    v5 = v8;
    if ( v8 >= 0 )
    {
      if ( v15 )
      {
        BoundingRectForSelectedTextFromDescendantsOfElement = KeyboardHosting::UIAutomationHelpers::GetBoundingRectForSelectedTextFromDescendantsOfElement(
                                                                this,
                                                                v15,
                                                                a2);
        v5 = BoundingRectForSelectedTextFromDescendantsOfElement;
        if ( BoundingRectForSelectedTextFromDescendantsOfElement >= 0 )
        {
          TouchKeyboardExperienceTelemetryLogger::UIAFoundBoundingRectForSelectedTextUsing<unsigned short const (&)[43]>(v12);
          v5 = 0;
          goto LABEL_11;
        }
        v9 = (unsigned int)BoundingRectForSelectedTextFromDescendantsOfElement;
        v10 = 152LL;
      }
      else
      {
        v5 = -2147418113;
        v9 = 2147549183LL;
        v10 = 150LL;
      }
    }
    else
    {
      v9 = (unsigned int)v8;
      v10 = 149LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
      (const char *)v9);
LABEL_11:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v15);
    return v5;
  }
  v5 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x92,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
    (const char *)0x8000FFFFLL);
  return v5;
}
