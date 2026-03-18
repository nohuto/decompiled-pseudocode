/*
 * XREFs of ?GetAdaptiveSessionContext@@YAXPEAU_PO_ADAPTIVE_SESSION_CONTEXT@@@Z @ 0x140068ED0
 * Callers:
 *     PowerConnectionEvent @ 0x14014C44C (PowerConnectionEvent.c)
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1401AE6B0 (-UpdateAdaptiveSessionState@@YAXXZ.c)
 * Callees:
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x140068F50 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x140068FB0 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 */

void __fastcall GetAdaptiveSessionContext(struct _PO_ADAPTIVE_SESSION_CONTEXT *a1)
{
  __int64 UserSessionState; // rbx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax

  UserSessionState = W32GetUserSessionState(a1);
  v4 = W32GetUserSessionState(v3);
  *(_QWORD *)a1 = CInputGlobals::GetLastInputTime(*(CInputGlobals **)(v4 + 3064));
  v6 = W32GetUserSessionState(v5);
  *((_QWORD *)a1 + 1) = CInputGlobals::GetGlobalTickCount(*(_QWORD *)(v6 + 3064), 0LL);
  *((_QWORD *)a1 + 2) = *(_QWORD *)(UserSessionState + 2848);
  *((_DWORD *)a1 + 6) = *(_DWORD *)(UserSessionState + 2896);
}
