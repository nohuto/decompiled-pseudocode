/*
 * XREFs of ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x14020B7F4
 * Callers:
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x140048CB0 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x140048F70 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1401F3A34 (-Broadcast@InputConfig@@SAXXZ.c)
 * Callees:
 *     IsInputProcessingActivated @ 0x140048E30 (IsInputProcessingActivated.c)
 *     isRootPartition @ 0x14004FB7C (isRootPartition.c)
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall InputExtensibilityCallout::_CanSendMessageToDestinationInternal(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  char v5; // bl
  int v6; // edx
  int v7; // edx
  int v8; // edx

  v2 = a2;
  if ( a2 >= 23 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 407);
  v4 = 5 * v2;
  if ( !*(_QWORD *)(a1 + 40 * v2 + 24) )
    return 0;
  v5 = 1;
  if ( !*(_QWORD *)(a1 + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 413);
  v6 = *(_DWORD *)(a1 + 8 * v4 + 32);
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( !v7 )
      return IsInputProcessingActivated(a1);
    v8 = v7 - 1;
    if ( !v8 )
      return isRootPartition(a1);
    if ( v8 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 434);
      return v5;
    }
    return isChildPartition(a1);
  }
  return v5;
}
