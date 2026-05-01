/*
 * XREFs of ?_IsTabletMode@CSnapAssistControllerBase@@IEAA_NXZ @ 0x1802AFC38
 * Callers:
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1802338D0 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 *     ?_ShouldShowViewInSnapAssist@CSnapAssistControllerBase@@IEAA_NPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@@Z @ 0x1805A7CD0 (-_ShouldShowViewInSnapAssist@CSnapAssistControllerBase@@IEAA_NPEAUIImmersiveMonitor@@PEAUIApplic.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CSnapAssistControllerBase::_IsTabletMode(CSnapAssistControllerBase *this)
{
  __int64 v1; // rcx
  char v2; // bl
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 16);
  v2 = 0;
  v6 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v1 + 24LL))(v1, &v6);
  if ( v3 >= 0 )
    return v6 == 1;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x4A1,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
    (const char *)(unsigned int)v3);
  return v2;
}
