/*
 * XREFs of ?PostFlickFeedback@CDesktopManager@@QEAAJ_NI@Z @ 0x1800BAAF8
 * Callers:
 *     ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x1800B75B4 (-PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::PostFlickFeedback(HANDLE *this, unsigned __int8 a2, unsigned int a3)
{
  return CDesktopManager::PostEventMessage(this, 0x407u, a2, a3);
}
