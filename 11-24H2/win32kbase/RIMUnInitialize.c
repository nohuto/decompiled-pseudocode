/*
 * XREFs of RIMUnInitialize @ 0x1401D3790
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140164AC0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x140147F5C (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1401D2E38 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 */

__int64 __fastcall RIMUnInitialize(__int64 a1)
{
  __int64 v1; // rcx
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  char *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax

  if ( *(_BYTE *)(W32GetUserSessionState(a1) + 168) )
  {
    UserSessionState = W32GetUserSessionState(v1);
    dumpLeaks((struct _LIST_ENTRY *)(UserSessionState + 120), "RIMObj leaks");
    v4 = W32GetUserSessionState(v3);
    dumpRimDevLeaksAndCleanup((struct _LIST_ENTRY *)(v4 + 136), v5);
    v7 = W32GetUserSessionState(v6);
    dumpLeaks((struct _LIST_ENTRY *)(v7 + 152), "RIMInputObserver leaks");
    v9 = W32GetUserSessionState(v8);
    if ( *(_QWORD *)(v9 + 192) != v9 + 192 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 210);
    v11 = W32GetUserSessionState(v10);
    if ( *(_QWORD *)(v11 + 208) != v11 + 208 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 211);
    v13 = W32GetUserSessionState(v12);
    if ( *(_QWORD *)(v13 + 224) != v13 + 224 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 212);
  }
  return 0LL;
}
