/*
 * XREFs of UninitializeInputSensorsOnSharedThread @ 0x1C01E9298
 * Callers:
 *     UserDeactivateMITInputProcessingHelper @ 0x1C01EC980 (UserDeactivateMITInputProcessingHelper.c)
 * Callees:
 *     CleanupSensorExplicitly @ 0x1C006E510 (CleanupSensorExplicitly.c)
 *     IOCPDispatcher_Destroy @ 0x1C0080A80 (IOCPDispatcher_Destroy.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0084D10 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void *__fastcall UninitializeInputSensorsOnSharedThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID DeviceObject; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  _DWORD *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9

  DeviceObject = WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
    IOCPDispatcher::Close((HANDLE *)WPP_MAIN_CB.Queue.Wcb.DeviceObject, 1);
  v5 = 3LL;
  v8 = (_DWORD *)(SGDGetUserSessionState(DeviceObject, a2, a3, a4) + 3296);
  do
  {
    if ( (unsigned int)(*v8 - 1) > 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1175);
    if ( *v8 == 2 )
      CleanupSensorExplicitly((unsigned int)v8[4], v6, v9, v10);
    v8 += 12;
    --v5;
  }
  while ( v5 );
  return IOCPDispatcher_Destroy(v7, v6);
}
