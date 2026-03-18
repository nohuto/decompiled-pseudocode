/*
 * XREFs of ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C006A210
 * Callers:
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1C0066B00 (-Broadcast@InputConfig@@SAXXZ.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C006A150 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 * Callees:
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     isRootPartition @ 0x1C004FEE8 (isRootPartition.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall InputExtensibilityCallout::_CanSendMessageToDestinationInternal(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  char v5; // bl
  int v6; // edx
  int v7; // edx
  int v8; // edx
  PKDPC BufferChainingDpc; // rdi
  SINGLE_LIST_ENTRY *p_DpcListEntry; // rbx

  v2 = a2;
  if ( a2 >= 21 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 404LL);
  v4 = 5 * v2;
  if ( !*(_QWORD *)(a1 + 40 * v2 + 32) )
    return 0;
  v5 = 1;
  if ( !*(_QWORD *)(a1 + 24) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 410LL);
  v6 = *(_DWORD *)(a1 + 8 * v4 + 40);
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
        return isRootPartition();
      if ( v8 != 1 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 431LL);
        return v5;
      }
      return isChildPartition();
    }
    else
    {
      BufferChainingDpc = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
      p_DpcListEntry = &WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->DpcListEntry;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(p_DpcListEntry, 0LL);
      LODWORD(BufferChainingDpc) = BufferChainingDpc->DeferredRoutine;
      ExReleasePushLockSharedEx(p_DpcListEntry, 0LL);
      KeLeaveCriticalRegion();
      return (_DWORD)BufferChainingDpc == 2;
    }
  }
  return v5;
}
