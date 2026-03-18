/*
 * XREFs of ?UninitializeBaseWppLog@@YAXXZ @ 0x1401AD7E0
 * Callers:
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x140100A20 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140164AC0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UninitializeBaseWppLog(__int64 a1)
{
  __int64 v1; // rcx
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx

  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 69400) )
  {
    UserSessionState = W32GetUserSessionState(v1);
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control, *(_QWORD *)(UserSessionState + 69400));
    *(_QWORD *)(W32GetUserSessionState(v3) + 69400) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v1) + 19392) )
  {
    v5 = W32GetUserSessionState(v4);
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control, *(_QWORD *)(v5 + 19392));
    *(_QWORD *)(W32GetUserSessionState(v6) + 19392) = 0LL;
  }
}
