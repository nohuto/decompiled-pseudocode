/*
 * XREFs of ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1401F34CC
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x140184868 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14009499C (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A5A58 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 */

char __fastcall CInputDest::CanCallerAccessDestination(CInputDest *this)
{
  __int64 v2; // rcx
  struct tagWND *UserWindow; // rbx
  struct tagTHREADINFO *v5; // rax

  if ( !*(_DWORD *)this )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1114);
  UserWindow = CInputDest::GetUserWindow(this);
  if ( !UserWindow )
    return 1;
  v5 = PtiCurrent(v2);
  return UIPrivilegeIsolation::CheckAccessEx(
           (UIPrivilegeIsolation *)(*((_QWORD *)v5 + 58) + 872LL),
           (const struct tagUIPI_INFO *)(*(_QWORD *)(*((_QWORD *)UserWindow + 2) + 464LL) + 872LL),
           0LL);
}
