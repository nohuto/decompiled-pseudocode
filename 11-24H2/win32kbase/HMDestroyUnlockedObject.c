/*
 * XREFs of HMDestroyUnlockedObject @ 0x1401B6480
 * Callers:
 *     ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1401B0F60 (-DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     UserDeleteBaseWindowHandle @ 0x1401BE850 (UserDeleteBaseWindowHandle.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140042D50 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x140060CE0 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall HMDestroyUnlockedObject(struct _HANDLEENTRY *a1)
{
  if ( !*(_DWORD *)(W32GetUserSessionState(a1) + 19816) && !IS_USERCRIT_OWNED_EXCLUSIVE() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4072);
  HMDestroyUnlockedObjectWorker(a1);
}
