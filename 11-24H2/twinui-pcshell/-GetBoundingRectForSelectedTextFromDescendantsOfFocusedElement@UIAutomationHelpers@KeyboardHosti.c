/*
 * XREFs of ?GetBoundingRectForSelectedTextFromDescendantsOfFocusedElement@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUtagRECT@@@Z @ 0x18048C428
 * Callers:
 *     ?GetBoundingRectForSelectedText@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x18048BD84 (-GetBoundingRectForSelectedText@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBoundingRectForSelectedTextFromDescendantsOfFocusedElement@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1802CDE98 (-GetBoundingRectForSelectedTextFromDescendantsOfFocusedElement@TouchKeyboardExperienceTelemetryL.c)
 *     ??$UIAFoundBoundingRectForSelectedTextUsing@AEAY0CJ@$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEAY0CJ@$$CBG@Z @ 0x18048BB78 (--$UIAFoundBoundingRectForSelectedTextUsing@AEAY0CJ@$$CBG@TouchKeyboardExperienceTelemetryLogger.c)
 *     ?GetBoundingRectForSelectedTextFromDescendantsOfElement@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElement@@PEAUtagRECT@@@Z @ 0x18048C1A4 (-GetBoundingRectForSelectedTextFromDescendantsOfElement@UIAutomationHelpers@KeyboardHosting@@AEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::UIAutomationHelpers::GetBoundingRectForSelectedTextFromDescendantsOfFocusedElement(
        __int64 **this,
        struct tagRECT *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  int BoundingRectForSelectedTextFromDescendantsOfElement; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUIAutomationElement *v12; // [rsp+30h] [rbp+8h] BYREF

  TouchKeyboardExperienceTelemetryLogger::GetBoundingRectForSelectedTextFromDescendantsOfFocusedElement();
  v12 = 0LL;
  v4 = *this;
  v5 = **this;
  v12 = 0LL;
  BoundingRectForSelectedTextFromDescendantsOfElement = (*(__int64 (__fastcall **)(__int64 *, struct IUIAutomationElement **))(v5 + 64))(
                                                          v4,
                                                          &v12);
  v7 = BoundingRectForSelectedTextFromDescendantsOfElement;
  if ( BoundingRectForSelectedTextFromDescendantsOfElement >= 0 )
  {
    BoundingRectForSelectedTextFromDescendantsOfElement = KeyboardHosting::UIAutomationHelpers::GetBoundingRectForSelectedTextFromDescendantsOfElement(
                                                            this,
                                                            v12,
                                                            a2);
    v7 = BoundingRectForSelectedTextFromDescendantsOfElement;
    if ( BoundingRectForSelectedTextFromDescendantsOfElement >= 0 )
    {
      TouchKeyboardExperienceTelemetryLogger::UIAFoundBoundingRectForSelectedTextUsing<unsigned short const (&)[41]>(v9);
      v7 = 0;
      goto LABEL_7;
    }
    v8 = 135LL;
  }
  else
  {
    v8 = 134LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
    (const char *)(unsigned int)BoundingRectForSelectedTextFromDescendantsOfElement);
LABEL_7:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v12);
  return v7;
}
