/*
 * XREFs of ?GetBoundingRectForSelectedText@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x18048BD84
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180256970 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z @ 0x1801D9404 (-IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z.c)
 *     ??$RetryGetBoundingRectForFocusedElementForError@AEAJ@TouchKeyboardExperienceTelemetryLogger@@SAXAEAJ@Z @ 0x18048BA28 (--$RetryGetBoundingRectForFocusedElementForError@AEAJ@TouchKeyboardExperienceTelemetryLogger@@SA.c)
 *     ?GetBoundingRectForSelectedTextFromAncestorsOfFocusedElement@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUtagRECT@@@Z @ 0x18048C100 (-GetBoundingRectForSelectedTextFromAncestorsOfFocusedElement@UIAutomationHelpers@KeyboardHosting.c)
 *     ?GetBoundingRectForSelectedTextFromDescendantsOfFocusedElement@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUtagRECT@@@Z @ 0x18048C428 (-GetBoundingRectForSelectedTextFromDescendantsOfFocusedElement@UIAutomationHelpers@KeyboardHosti.c)
 *     ?GetBoundingRectForSelectedTextFromDescendantsOfForegroundWindow@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUtagRECT@@@Z @ 0x18048C520 (-GetBoundingRectForSelectedTextFromDescendantsOfForegroundWindow@UIAutomationHelpers@KeyboardHos.c)
 *     ?GetBoundingRectFromFocusedElementForKnownControlTypes@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUtagRECT@@@Z @ 0x18048C7C4 (-GetBoundingRectFromFocusedElementForKnownControlTypes@UIAutomationHelpers@KeyboardHosting@@AEAA.c)
 */

__int64 __fastcall KeyboardHosting::UIAutomationHelpers::GetBoundingRectForSelectedText(
        KeyboardHosting::UIAutomationHelpers *this,
        struct tagRECT *a2)
{
  int BoundingRectFromFocusedElementForKnownControlTypes; // ebx
  int v5; // esi
  int v6; // eax
  unsigned int v7; // edx
  unsigned int BoundingRectForSelectedTextFromAncestorsOfFocusedElement; // [rsp+40h] [rbp+18h] BYREF

  BoundingRectFromFocusedElementForKnownControlTypes = KeyboardHosting::UIAutomationHelpers::GetBoundingRectFromFocusedElementForKnownControlTypes(
                                                         this,
                                                         a2);
  if ( BoundingRectFromFocusedElementForKnownControlTypes >= 0 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    v6 = v5++;
    if ( v6 >= 3 )
      break;
    if ( BoundingRectFromFocusedElementForKnownControlTypes >= 0 )
      return (unsigned int)BoundingRectFromFocusedElementForKnownControlTypes;
    BoundingRectForSelectedTextFromAncestorsOfFocusedElement = KeyboardHosting::UIAutomationHelpers::GetBoundingRectForSelectedTextFromAncestorsOfFocusedElement(
                                                                 this,
                                                                 a2);
    BoundingRectFromFocusedElementForKnownControlTypes = BoundingRectForSelectedTextFromAncestorsOfFocusedElement;
    v7 = BoundingRectForSelectedTextFromAncestorsOfFocusedElement;
    if ( (BoundingRectForSelectedTextFromAncestorsOfFocusedElement & 0x80000000) == 0
      && KeyboardHosting::IsRectNull(
           (KeyboardHosting *)a2,
           (const struct tagRECT *)BoundingRectForSelectedTextFromAncestorsOfFocusedElement) )
    {
      BoundingRectFromFocusedElementForKnownControlTypes = -2147023728;
      BoundingRectForSelectedTextFromAncestorsOfFocusedElement = -2147023728;
    }
    else if ( v7 != -2147467259 && v7 != -2147023728 )
    {
      return v7;
    }
    if ( (int)KeyboardHosting::UIAutomationHelpers::GetBoundingRectForSelectedTextFromDescendantsOfFocusedElement(
                this,
                a2) >= 0 )
      return 0LL;
    Sleep(0x96u);
    TouchKeyboardExperienceTelemetryLogger::RetryGetBoundingRectForFocusedElementForError<long &>((int *)&BoundingRectForSelectedTextFromAncestorsOfFocusedElement);
  }
  if ( BoundingRectFromFocusedElementForKnownControlTypes < 0 )
    return (unsigned int)KeyboardHosting::UIAutomationHelpers::GetBoundingRectForSelectedTextFromDescendantsOfForegroundWindow(
                           this,
                           a2);
  return (unsigned int)BoundingRectFromFocusedElementForKnownControlTypes;
}
