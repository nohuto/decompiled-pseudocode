/*
 * XREFs of UserUnsafeIsProcessDwm @ 0x1400CFCD0
 * Callers:
 *     ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1400B3008 (-CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CFC50 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?Open@CInputSink@@UEAAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1400CFC80 (-Open@CInputSink@@UEAAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z.c)
 *     UserSurfaceAccessCheck @ 0x1400D6330 (UserSurfaceAccessCheck.c)
 *     W32CalloutDispatchWorker @ 0x1400DAD6C (W32CalloutDispatchWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserUnsafeIsProcessDwm(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1 )
    return a1 == *(_QWORD *)(W32GetUserSessionState(a1) + 70808);
  return v1;
}
