/*
 * XREFs of ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180303610
 * Callers:
 *     <none>
 * Callees:
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x180034EB0 (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x18003693C (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 *     ?_ScheduleApplicationNotification@CImmersiveApp@@AEAAXW4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x18009C24C (-_ScheduleApplicationNotification@CImmersiveApp@@AEAAXW4IMM_APP_CHANGED@@PEAUHWND__@@@Z.c)
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x1801B57C8 (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 */

__int64 __fastcall CImmersiveApp::HandleViewAddition(
        __int64 a1,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        unsigned int a3,
        struct ITaskWindow *a4)
{
  void **v4; // rbx
  int v6; // edi
  bool v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0;
  v4 = (void **)(a1 - 112);
  v6 = CImmersiveApp::_ProcessNewView(a1 - 112, a2, 0, a3, a4, &v8);
  if ( v6 >= 0 && v8 )
  {
    CImmersiveApp::_ClearForegroundBoostHintedProcess(v4);
    if ( (*(_BYTE *)(a1 + 456) & 2) != 0 )
      CImmersiveApp::_SetApplicationForegroundPriority((__int64)v4, 0);
    CImmersiveApp::_ScheduleApplicationNotification((CImmersiveApp *)v4, 11, 0LL);
  }
  return (unsigned int)v6;
}
