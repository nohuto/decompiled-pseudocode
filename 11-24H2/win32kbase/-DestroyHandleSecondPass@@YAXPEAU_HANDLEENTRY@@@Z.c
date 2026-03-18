/*
 * XREFs of ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1401B0F60
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     HMDestroyUnlockedObject @ 0x1401B6480 (HMDestroyUnlockedObject.c)
 */

void __fastcall DestroyHandleSecondPass(struct _HANDLEENTRY *a1)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rdi

  UserSessionState = W32GetUserSessionState(a1);
  v3 = *(_QWORD *)(UserSessionState + 19888);
  v4 = (unsigned int)(((__int64)a1 - *(_QWORD *)(UserSessionState + 19944)) >> 5);
  v5 = 5 * v4;
  if ( *(_DWORD *)(*(_QWORD *)(v3 + 40 * v4) + 8LL) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 972);
    *(_DWORD *)(*(_QWORD *)(v3 + 8 * v5) + 8LL) = 0;
  }
  HMDestroyUnlockedObject(a1);
}
