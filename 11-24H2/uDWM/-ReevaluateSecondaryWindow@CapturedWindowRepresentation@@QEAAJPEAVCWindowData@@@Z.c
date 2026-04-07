/*
 * XREFs of ?ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x180065540
 * Callers:
 *     ?_EvaluateWindowForWindowCaptures@CProjectionBorderManager@@AEAAJPEAVCWindowData@@@Z @ 0x1800654A8 (-_EvaluateWindowForWindowCaptures@CProjectionBorderManager@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?_EvaluateWindowForWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z @ 0x1800B37C8 (-_EvaluateWindowForWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180025084 (-RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z @ 0x1800444CC (-RemoveAt@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z.c)
 *     ?ShouldInclude@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@@Z @ 0x18006562C (-ShouldInclude@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@@Z.c)
 *     ?FindSecondaryWindow@CapturedWindowRepresentation@@IEAAHPEAVCWindowData@@@Z @ 0x180065754 (-FindSecondaryWindow@CapturedWindowRepresentation@@IEAAHPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@QEAAPEAXI@Z @ 0x1800A87B8 (--_GCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@QEAAPEAXI@Z.c)
 *     ?AddSecondaryWindow@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x1800A87E4 (-AddSecondaryWindow@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateSecondaryWindowProperties@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x1800AB1A8 (-UpdateSecondaryWindowProperties@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CapturedWindowRepresentation::ReevaluateSecondaryWindow(
        CContainerVisualProxy **this,
        struct CWindowData *a2)
{
  __int64 SecondaryWindow; // rsi
  struct CWindowData *v5; // rdx
  bool ShouldInclude; // al
  int updated; // ebx
  __int64 v9; // rdx
  __int64 *v10; // rdi
  struct CVisualProxy **v11; // rbp
  unsigned int v12; // edx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  SecondaryWindow = (unsigned int)CapturedWindowRepresentation::FindSecondaryWindow(
                                    (CapturedWindowRepresentation *)this,
                                    a2);
  ShouldInclude = CapturedWindowRepresentation::ShouldInclude((CapturedWindowRepresentation *)this, v5);
  if ( ShouldInclude == (int)SecondaryWindow >= 0 )
  {
    if ( ShouldInclude )
    {
      updated = CapturedWindowRepresentation::UpdateSecondaryWindowProperties((CapturedWindowRepresentation *)this, a2);
      if ( updated < 0 )
      {
        v9 = 85LL;
        goto LABEL_7;
      }
    }
    return 0LL;
  }
  if ( ShouldInclude )
  {
    updated = CapturedWindowRepresentation::AddSecondaryWindow((CapturedWindowRepresentation *)this, a2);
    if ( updated >= 0 )
      return 0LL;
    v9 = 72LL;
  }
  else
  {
    v10 = (__int64 *)(this + 6);
    v11 = (struct CVisualProxy **)*((_QWORD *)this[6] + SecondaryWindow);
    updated = CContainerVisualProxy::RemoveChild(this[5], v11[1]);
    if ( updated >= 0 )
    {
      DynArray<CAnimationComponent *,0>::RemoveAt(v10, SecondaryWindow);
      CProjectionBorderManager::CAPTURE_FILTERED_WINDOW::`scalar deleting destructor'(
        (CProjectionBorderManager::CAPTURE_FILTERED_WINDOW *)v11,
        v12);
      return 0LL;
    }
    v9 = 77LL;
  }
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\capturedwindowrepresentation.cpp",
    (const char *)(unsigned int)updated,
    v13);
  return (unsigned int)updated;
}
