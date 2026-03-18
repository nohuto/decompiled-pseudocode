/*
 * XREFs of ?DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x140093DB0
 * Callers:
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z @ 0x14020452C (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1400948A8 (-IsIndependentInputWindow@CInputDest@@QEBA_NXZ.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14009499C (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ApiSetEditionGetCompositionInputWindowUIOwner @ 0x140094A94 (ApiSetEditionGetCompositionInputWindowUIOwner.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400952AC (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 */

bool __fastcall CInputDest::DoesBelongToForegroundThread(CInputDest *a1)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  struct tagTHREADINFO *ThreadInfo; // rax
  struct tagTHREADINFO *v6; // rdx
  struct tagWND *UserWindow; // rax
  __int64 CompositionInputWindowUIOwner; // rax
  __int64 v10; // rcx

  v2 = 0LL;
  if ( !*(_QWORD *)(W32GetUserSessionState(a1) + 18960) )
    return 0;
  if ( CInputDest::IsIndependentInputWindow(a1) )
  {
    UserWindow = CInputDest::GetUserWindow(a1);
    CompositionInputWindowUIOwner = ApiSetEditionGetCompositionInputWindowUIOwner(UserWindow);
    if ( CompositionInputWindowUIOwner )
      v2 = *(_QWORD *)(CompositionInputWindowUIOwner + 16);
    return v2 == *(_QWORD *)(W32GetUserSessionState(v10) + 18960);
  }
  else
  {
    W32GetUserSessionState(v4);
    ThreadInfo = CInputDest::GetThreadInfo(a1);
    return ThreadInfo == v6;
  }
}
