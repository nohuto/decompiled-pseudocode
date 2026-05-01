/*
 * XREFs of ?Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x18001B6D0
 * Callers:
 *     ?OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18001AF9C (-OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Intern.c)
 *     ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1800A88BC (-SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z @ 0x1801B5F44 (-HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z.c)
 * Callees:
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4UwpWindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4UwpWindowReadinessWaitFlags@@AEAW42@@Z @ 0x18001B704 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4UwpWindowReadinessWaitFlags@@AEAW42@@ViewManag.c)
 */

__int64 __fastcall UwpWindowReadyState::WaitFlags::Clear(int *a1, __int64 a2, int a3)
{
  int v3; // r8d
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v3 = *a1 & ~a3;
  v5 = *a1;
  *a1 = v3;
  return ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum UwpWindowReadinessWaitFlags const &,enum UwpWindowReadinessWaitFlags &>(
           a2,
           &v5,
           a1);
}
